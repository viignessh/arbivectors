#!/bin/sh
path=`realpath $0`
dir=`dirname $path`
# $dir now refers to the directory in which this script actually lives
gcc $dir/prj2-sol.c -o run