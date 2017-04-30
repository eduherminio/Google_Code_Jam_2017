#!/bin/bash
clear
set -e
source filedata.txt
export env_filename=$filename
g++ -std=c++14 $filename.cpp -o $filename.out

#./$filename.out < B-small-attempt0.in > small_output.txt
./$filename.out < B-large.in > large_output.txt


#
# Author:      Eduardo Cáceres de la Calle
#
#
