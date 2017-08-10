#include <stdio.h>


void SQLinit() {
  printf("Init SQL\n");
}


void SQLclose() {
  printf("Closing SQL\n");
}


void insertTemperature( char *sensorId, char *temp, int humid, long timestamp ) {
  printf("Inserting row\n");
  printf(" = %.4s, %.6s, %d, %ld\n", sensorId, temp, humid, timestamp);
}


