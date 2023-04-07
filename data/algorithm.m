clc
clear
%%--------------------------------------------------------------------------------------------------
% 这个实际上是个IKUN识别器！路边抓小黑子过来让他唱、跳、Rap、篮球；
% 然后丢进这个模型来识别，识别不出来就是假的
%%--------------------------------------------------------------------------------------------------
%% 先取出提前采集到的的样本数据, 4个动作各自采集了100组, 意味着有400条样本, 必须有400个Tag
x = csvread("ikun.csv"); % 加载CSV数据
t = csvread("tag.csv"); % 建立Tag
X = x.';
T = t.';
%%--------------------------------------------------------------------------------------------------
trainFcn = 'trainlm'; % 使用 Levenberg-Marquardt 算法训练网络
hiddenLayerSize = 10; % 隐藏层节点数
net = fitnet(hiddenLayerSize, trainFcn); % 创建网络模型
% 设定训练数据、验证数据和测试数据的比例
net.trainParam.epochs = 20000; % 训练的最大次数
net.trainParam.goal = 1e-5; % 全局最小误差
net.divideParam.trainRatio = 70/100;
net.divideParam.valRatio = 15/100;
net.divideParam.testRatio = 15/100;
%%--------------------------------------------------------------------------------------------------

% 训练网络 x t 需要矩阵转置
[net, tr] = train(net, X, T);

% 测试网络
y = net(X);
e = gsubtract(T, y.'); % 计算预测误差
perform(net, T, y.'); % 计算网络性能指标
%%
sing = [-0.81, 0.97, 9.96, -0.02, 0.16, -0.05];
song = [-1.21, -5.46, 7.91, -0.96, 1.59, -0.24];
rap = [0.42, 1.46, 13.1, 0.78, -3.24, 6.16];
basketball = [-25.4, -12.81, -11.7, 0.73, 3.41, -1.12];
%%
O1 = sim(net, sing.');
O2 = sim(net, song.');
O3 = sim(net, rap.');
O4 = sim(net, basketball.');

if fix(O1) == 1
    disp('唱')
end

if fix(O2) == 2
    disp('跳')
end

if fix(O3) == 3
    disp('RAP')
end

if fix(O4) == 4
    disp('篮球')
end

% classes1 = vec2ind(O1);
% classes2 = vec2ind(O2);
% classes3 = vec2ind(O3);
% classes4 = vec2ind(O4);

% disp(classes1);
% disp(classes2);
% disp(classes3);
% disp(classes4);
