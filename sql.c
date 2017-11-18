#include <stdio.h>
#include <mysql/my_global.h>
#include <mysql/mysql.h>


MYSQL *con;

void SQLinit() {

#ifdef DEBUG
  printf("INITIATING SQL CLIENT VERSION: %s\n", mysql_get_client_info());
#endif

  con = mysql_init(NULL);

  if (con == NULL)
  {
      fprintf(stderr, "%s\n", mysql_error(con));
      exit(1);
  }

  const char* mysql_user     = getenv("MYSQL_USER");
  const char* mysql_passwd   = getenv("MYSQL_PASSWD");
  const char* mysql_host     = getenv("MYSQL_HOST"); 
  const char* mysql_database = getenv("MYSQL_DATABASE");
  
  if (mysql_real_connect(con, mysql_host, mysql_user, mysql_passwd, mysql_database, 0, NULL, 0) == NULL)
  {
      fprintf(stderr, "%s\n", mysql_error(con));
      mysql_close(con);
      exit(1);
  }

}


void SQLclose() {
#ifdef DEBUG
  printf("CLOSING DATABASE CONNECTION\n");
#endif
  mysql_close(con);
}


void insertTemperature( char *sensorId, char *temp, int humid, long timestamp ) {
  char sql[256];
  const char* table_name = getenv("MYSQL_TABLE");
  sprintf(sql, "INSERT INTO %s (sensorId, temperature, humidity, timestamp) VALUES ('%.4s', %.6s, %d, %ld) ON DUPLICATE KEY UPDATE temperature=%.6s, humidity=%d;", table_name, sensorId, temp, humid, timestamp, temp, humid);
  if (mysql_query(con, sql)) {
    fprintf(stderr, "%s\n", mysql_error(con));
    mysql_close(con);
    exit(1);
  }
}


