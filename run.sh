#!/bin/sh
path=`realpath $0`
dir=`dirname $path`
# $dir now refers to the directory in which this script actually lives
./run $1 $2