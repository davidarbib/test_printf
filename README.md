# printf tests  
  
Each conversion test is sliced in eight parts :
- simple
- n_options
- mixed
- MFW
- sizes
- n_conversions
- invalid
- together  

"simple" part tests printf with one option  
"n_options" repeat same options multiple times  
"mixed" tests options combinaisons  
"MFW" tests minimum field width & precision  
"sizes" self-explanatory...  
"n_conversion" repeat the same conversion multiple times  
"invalid" tests behavior of invalid printf (inexistant flags, incorrect number of
arguments, type mismatch)  
"together" tests complex printfs mixing all flags, precision & MFW, for one conversion type  


