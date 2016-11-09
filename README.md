# temp100
I wanted to learn COBOL so I wrote a program in it that fetch temperature and humidity data from my Tellstick DUO and creates a file with it.

This file is then picked up and processed in my home made home automation solution.

## Compiling
The included bash script should do the trick. Uncomment the commented line if you want to add debug messages.

This program requires that telldus-core is installed and working: http://developer.telldus.se/

## Usage
Run the compiled binary. A file will be produced with all found sensor data.

## Why?
Because it amused me.
