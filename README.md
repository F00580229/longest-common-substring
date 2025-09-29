# Longest Common Substring (LCS)

This project implements the Longest Common Substring (LCS) problem in C++ and visualizes the dynamic programming (DP) table used to solve it.

## Features
- Accepts two input strings from the user
- Computes the longest common substring using dynamic programming
- Prints the DP table for visualization
- Displays the longest common substring found

## How to Build

1. Make sure you have a C++ compiler (like g++) installed.
2. Compile the code:
   ```bash
   g++ -o longest_common_substring longest_common_substring.cpp
   ```

## How to Run

1. Run the executable:
   ```bash
   ./longest_common_substring
   ```
2. Enter the two strings when prompted.

## Example
```
Enter first string: abcdef
Enter second string: zbcdf
Dynamic Programming Table:
0 0 0 0 0 0 0 
0 0 1 0 0 0 0 
0 0 0 2 0 0 0 
0 0 0 0 3 0 0 
0 0 0 0 0 0 0 
0 0 0 0 0 1 0 
0 0 0 0 0 0 2 

Longest Common Substring: bcd
```
