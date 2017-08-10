#!/bin/sh

echo "Compiling cobol and mocked c sources..."

DEBUGLINE=-fdebugging-line
cobc $DEBUGLINE -Wall -x temp100.cbl tellmock.c sql.c

