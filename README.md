# rAIversingEvaluation
Storage for Eval Runs 
File names and their meaning:

Binary.json : The "actual" case where the binary was stripped and then processed

Binary_no_propagation.json : The "Worst" Case where the binary was stripped but no propagation was applied  
(aka changing the order in which the functions were processed wouldnt change the outcome) 

Binary_original_stripped.json : The "Best" Case where the original (unstripped) function body was used to to predict the functions name

Binary_original.json : The Ground Truth we compare against.
