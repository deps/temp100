#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sensorCounter;

void telldusInit() {
	sensorCounter=4;
}

void telldusClose() {
}

int deviceOn( int id ) {
    printf("Mock is turning on id %d\n", id);
    return 0;
}

int deviceOff( int id ) {
    printf("Mock is turnong off id %d\n", id);
    return 0;
}

int getRandom(int low, int high) {
  return rand() % (high + 1 - low) + low;
}

int getSensorValue( const char *protocol, const char *model, int id, 
                   int dataType, char *value, int len, int *timestamp ) 
{

	if( dataType == 1 )
		sprintf(value,"%.1f", getRandom(100,300)/10.0);
	else
		sprintf(value,"%d", getRandom(10,99));

	*timestamp = 1234567890;


	return 0; 
}

int getSensors( char * protocol, int protocolLen, 
                char * model, int modelLen,
		int * id, int * dataTypes ) 
{
        strcpy(protocol, "mandolin");
	strcpy(model, "foo");
	*id = sensorCounter;
	*dataTypes = 1;

	return (sensorCounter--) > 0 ? 0 : 1;
}

