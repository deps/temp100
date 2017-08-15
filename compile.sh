#!/bin/sh

echo "Compiling cobol sources..."

#DEBUGLINE=-fdebugging-line
MYSQL=`mysql_config --cflags --libs` 
cobc $DEBUGLINE -Wall -x temp100.cbl telldus.c sql.c $MYSQL -ltelldus-core

