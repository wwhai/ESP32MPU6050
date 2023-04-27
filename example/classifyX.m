function label = classifyX (X) %#codegen 
CompactMdl = loadLearnerForCoder('ClassificationTree'); 
label = predict(CompactMdl,X);
end