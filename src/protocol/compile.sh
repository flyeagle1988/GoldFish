#!/bin/bash

rm *.pb.* 2> /dev/null
filename=`ls`
for i in $filename
do
if [ "${i##*.}" = "proto" ];then
    protoc -I . --cpp_out=. ./$i
fi
done
