# rAIversingEvaluation
Storage for Eval Runs  
File names and their meaning:

Binary.json : The "actual" case where the binary was stripped and then processed

Binary_no_propagation.json : The "Worst" Case where the binary was stripped but no propagation was applied  
(aka changing the order in which the functions were processed wouldnt change the outcome) 

Binary_original_stripped.json : The "Best" Case where the original (unstripped) function body was used to to predict the functions name

Binary_original.json : The Ground Truth we compare against.


Eval Groups:

Binutils :  binutils-x86-64-linux-gnu-dbg_2.40-2_amd64.deb merged with binutils-x86-64-linux-gnu_2.40-2_amd64.deb
P2IM :  https://github.com/RiS3-Lab/p2im-real_firmware/tree/master/binary