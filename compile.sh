#!/bin/sh

echo "Compiling cobol sources..."

DEBUGLINE=-fdebugging-line
cobc $DEBUGLINE -Wall -x temp100.cbl telldus.c -ltelldus-core

