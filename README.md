# temp100
I wanted to learn COBOL so I wrote a program in it that fetch temperature and humidity data from my Tellstick DUO and inserts it into a database.

## Compiling
This COBOL source was tested with Open COBOL on ubuntu.

Run compile_mock.sh to compile a file with a mocked Tellstick interface, and some "random" data. 
Run compile.sh to compile and link against tellstick library. In this case, this program requires that telldus-core is installed and working: http://developer.telldus.se/

## Usage
Run the compiled binary. All known sensors will be polled and the temperature and humidity will be stored to the database.
Needed environment variables: MYSQL_USER, MYSQL_PASSWD, MYSQL_HOST, MYSQL_DATABASE and MYSQL_TABLE

## Why?
Because it amused me.
