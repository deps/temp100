#!/bin/sh

echo "Compiling cobol and mocked c sources..."

DEBUGLINE='-fdebugging-line -DDEBUG'
MYSQL=`mysql_config --cflags --libs` 
cobc $DEBUGLINE -Wall -x temp100.cbl tellmock.c sql.c $MYSQL


