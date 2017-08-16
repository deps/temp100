#include<stdio.h>
#include<string.h>
#include<telldus-core.h>

void telldusInit() {
    tdInit();
}

void telldusClose() {
    tdClose();
}

int getSensorValue( const char *protocol, const char *model, int id, 
                   int dataType, char *value, int len, int *timestamp ) 
{
    return tdSensorValue(protocol,model,id,dataType,value,len,timestamp);
}

int getSensors( char * protocol, int protocolLen, 
                char * model, int modelLen,
		int * id, int * dataTypes ) 
{
    return tdSensor(protocol, protocolLen, model, modelLen, id, dataTypes );
}

