#!/bin/bash
clear
set -e
source filedata.txt
export env_filename=$filename
g++ -std=c++14 $filename.cpp -o $filename.out
./$filename.out < C-small-1-attempt0.in > small_output1.txt
#./$filename.out < C-small-2-attempt0.in > small_output2.txt


#
# Author:      Eduardo Cáceres de la Calle
#
#
