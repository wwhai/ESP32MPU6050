function label = ActionRecognize(X) %#codegen
Model= loadLearnerForCoder('EnsembleModel.mat');
label = predict(Model,X);
end
