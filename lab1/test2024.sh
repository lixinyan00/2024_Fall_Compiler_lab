#! /bin/bash
for file in ./Tests_2024/inputs/{A-,B-,D-}*.cmm; do 
    echo "$file"
    ./parser "$file"; 
    
done