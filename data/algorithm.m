clc
clear
%%--------------------------------------------------------------------------------------------------
% 这个实际上是个IKUN识别器！路边抓小黑子过来让他唱、跳、Rap、篮球；
% 然后丢进这个模型来识别，识别不出来就是假的
%%--------------------------------------------------------------------------------------------------
%% 先取出提前采集到的的样本数据, 4个动作各自采集了100组, 意味着有400条样本, 必须有400个Tag
x = csvread("ikun.csv"); % 加载CSV数据
t = csvread("tag.csv"); % 建立Tag
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
[net, tr] = train(net, x.', t.');

% 测试网络
y = net(x.');
e = gsubtract(t.', y.'); % 计算预测误差
perform(net, t.', y.'); % 计算网络性能指标

% 查看网络结构
% view(net)
% 绘图
% 如果需要，取消下面代码行的注释以启用不同的绘图
% figure, plotperform(tr) % 绘制性能图
% figure, plottrainstate(tr) % 绘制训练状态图
% figure, ploterrhist(e) % 绘制误差直方图
% figure, plotregression(t.', y.') % 绘制回归图
% figure, plotfit(net, x.', t.') % 绘制拟合图
