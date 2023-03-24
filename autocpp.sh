#!/usr/bin/sh

TEMPLATE_URL=/home/josephy/Contest-Archive/CPTEMPLATES/cpUSACO.cpp
current=`pwd`
file=$1
echo "creating $file.cpp"
file=$file.cpp
echo "copping from $TEMPLATE_URL to $current"
cp $TEMPLATE_URL $file
echo "openning $file"
micro $file

