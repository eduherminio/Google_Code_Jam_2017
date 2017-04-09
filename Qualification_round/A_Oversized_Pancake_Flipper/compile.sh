#!/bin/bash
clear
set -e
source filedata.txt
export env_filename=$filename
g++ -std=c++14 $filename.cpp -o $filename.out

./$filename.out < A-small-attempt0.in > small_output.txt
#./$filename.out < A-large.in > large_output.txt 
