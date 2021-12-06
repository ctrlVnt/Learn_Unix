#include <stdio.h>

#define DEBUG_CODE(v) printf("Linea %i - file \"%s\". Il valore di \"%s\" è %i\n", \
           __LINE__, \
           __FILE__,\
           #v, v)



int main() {
  char *time, *date, *file;
  int line,stdc;

  int a=90;
  int index=1;
  int f=0;

  time = __TIME__;
  date = __DATE__;
  file = __FILE__;
  line = __LINE__;
  stdc = __STDC__;

  printf("__TIME__: %s\n", time);
  printf("__DATE__ = %s\n", date);
  printf("__FILE__ = %s\n", file);
  printf("__LINE__ = %d\n", line);
  printf("__STDC__ = %d\n", stdc);

  for (;f<10;f++) {
    printf("Iterazione...\n");
    a=a+1;
    #ifdef DEBUG
    DEBUG_CODE(f);
    #endif
  }

  #ifdef DEBUG
  DEBUG_CODE(a);
  #endif

}
