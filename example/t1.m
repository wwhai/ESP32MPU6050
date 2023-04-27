%qiangjun luofei 2023
% u1 ,u2, u3 阀门开度
% y1 密度
%最新更新
clear all; close all;
L= 2010;%历史数据个数大于仿真步数，2010>2000
%n = 20;%y(21)和y(20)、y(19)...y(1)以及u(15),u(14)...u(1)相关
d =6 ;  %21-6=15
u1 = (4 + 2 * rand(L,1))/10; % 随机生成 2010 组历史开度数据 取值 0.5 ~0.7
u2 = (6 + 2 * rand(L,1))/10; % 随机生成 2010 组历史开度数据
u3 = (8 + 2 * rand(L,1))/10; % 随机生成 2010 组历史开度数据
u = [u1 u2 u3];  % 3 列 2010 行的输入矩阵
y1 = (12 + 2 * rand(L,1))/10; % 随机生成 2010 组历史开度数据
x = reshape(u',[],1);  % 矩阵 按行平铺成列向量6030x1（u11 u12 u13 u21 u22 u23......）
PHI = zeros(0,70) ;
for i = 20:20+64
    PHIi = -y1(i-19:i);
    PHIi1= flipud(PHIi)';  % 倒序 并 转置
    Ui = flipud(x( i-19: (i-19)+15*3-1))'; % 倒序 并 转置
    PHIi2 = [PHIi1 Ui];%拼接
    PHI= [ PHI; PHIi2];%叠加
end
Y = y1(1:65);
theta_t = inv(PHI'*PHI)*PHI'*Y;%65X1
a = theta_t(1:20);
b = theta_t(21:65);
c = 1;
f=[1];
A=[f;a];
B=b;
na=length(A)-1;nb=length(B)/3-1;  %na=20,nb=14,为输出输入系数矩阵 A,B 的阶数
L=2000;%仿真长度
uk=zeros((d+nb)*3,1); %输入初始化
yk=zeros(na,1);  %输出初始化
yk_m=zeros(na,1); %模型输出初始化
xi=sqrt(0.1)*randn(L,1);  %干扰信号，采用方差为0.1的白噪声序列		
theta_e0=zeros(na+3*(nb+1),1);  %参数初值
P=10^6*eye(na+3*(nb+1));  %修正系数初值
lambda=0.996;  %遗忘因子范围[0.9 1],遗忘因子=1时，即为标准递推最小二乘
for k=1:L
    theta(:,k)=[a;b];  %系统参数真值，每列矩阵参数值相同	
    phi=[-yk;uk(3*d-2:(d+nb)*3)];  %输出输入矩阵拼接 
    phi_e=[-yk_m;uk(3*d-2:(d+nb)*3)]; %模型输出输入矩阵拼接
    y(k)=phi'*theta(:,k)+xi(k);  %系统实际输出
    y_m(k)=phi_e'*theta_e0; %模型输出
    %递推公式
    K=P*phi/(lambda+phi'*P*phi);
    theta_e(:,k)=theta_e0+K*(y(k)-phi'*theta_e0);
    P=(eye(na+3*(nb+1))-K*phi')*P/lambda;
    % 带遗忘因子的递推最小二乘辨识完
    %更新数据
    theta_e0=theta_e(:,k);
    for j=na:-1:2
        yk(j)=yk(j-1);
        yk_m(j)=yk_m(j-1);
    end
    yk(1)=y(k);
    yk_m(1)=y_m(k);
    for j=3*(nb+d):-1:2
        uk(j)=uk(j-1);
    end
    uk(1)=u(k);
end

figure
s=[1:L];
plot(s,theta_e,s,theta,'k:');
legend('a1','a2','a3','b1','b2');
axis([0 L -5 5]);
figure
plot(s,y,s,y_m,'r');
legend('实际输出','模型输出');
axis([0 L -100 100]);
grid on;