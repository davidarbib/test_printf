# printf tests  
  
Each conversion test is sliced in seven parts :
- simple
- n_options
- mixed
- LMC
- sizes
- n_conversions
- invalid

"simple" part tests printf with one option  
"n_options" repeat same options multiple times  
"mixed" tests options combinaisons  
"LMC" tests LMC & precision  
"sizes" self-explanatory...  
"n_conversion" repeat the same conversion multiple times  
"invalid" tests behavior of invalid printf (inexistant flags, incorrect number of
arguments, type mismatch)  

