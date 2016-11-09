# temp100
I wanted to learn COBOL so I wrote a program in it that fetch temperature and humidity data from my Tellstick DUO and creates a file with it.

This file is then picked up and processed in my home made home automation solution.

## Compiling
This COBOL source was tested with Open COBOL on ubuntu.

The included bash script should do the trick. Comment lime 5 if you dont want to add debug messages.

This program requires that telldus-core is installed and working: http://developer.telldus.se/

## Usage
Run the compiled binary. A fixed width file will be produced with all found sensor data.

I have a Camel route that picks it up and inserts it into a database. YMMV.

## Why?
Because it amused me.
