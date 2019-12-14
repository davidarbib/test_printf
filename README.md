# printf tests  
  
Each conversion test is sliced in seven parts :
- simple
- n_options
- mixed
- MFW
- sizes
- n_conversions
- together  

"simple" part tests printf with one option  
"n_options" repeat same options multiple times  
"mixed" tests options combinaisons  
"MFW" tests minimum field width & precision  
"sizes" self-explanatory...  
"n_conversion" repeat the same conversion multiple times  
"together" tests complex printfs mixing all flags, precision & MFW, for one conversion type  

# new protocol

no more diff between outcome files
just strcmp between sprintf et ft_sprintf outcomes
### pros : now we can prompt line and file location of errors
### cons : is less shareable until people have to add some lines to transform their printf into sprintf

