#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


#define NUM_FORKS  4

int main() {
  int i;
  unsigned int my_pid, my_ppid, value;

  for (i=0; i<NUM_FORKS; i++) {

    value = fork();

    //COSI CREA GIUSTI FIGLI, ESEMPIO SIGNIFICATIVO PER CREARE N FIGLI
    
    /*switch (value)
    {
    case -1:
      printf("errore, ciao\n");
      exit(EXIT_FAILURE);
      
    case 0:
      printf("PID=%d, PPID=%d, i=%d, fork_value=%d\n", getpid(), getppid(), i, value);
      exit (EXIT_SUCCESS);

    default:
    printf("I'm a mother\n");
      //exit (EXIT_SUCCESS);
    }*/

    //COSI DIPENDE DA SCHEDULER

    /*my_pid = getpid();
    my_ppid = getppid();
    printf("PID=%d, PPID=%d, i=%d, fork_value=%d\n", my_pid, my_ppid, i, value);*/
  }

  exit(EXIT_SUCCESS);
}
