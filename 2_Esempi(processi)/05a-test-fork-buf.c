#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>  /* per strerror */
#include <errno.h>   /* per errno */
#include <unistd.h>



/*
 * Prova a eseguire con
 * 
 * ./a.out
 * 
 * e con
 *
 * ./a.out | more
 *
 * Poi prova scrivere #if 0 e/o a scommentare setvbuf
 */

int main(int argc, char * argv[]){

	/* Set no buffering for stdout */
	setvbuf(stdout, NULL, _IONBF, 0);//questa istruzione azzera il buffer e il figlio generato in fondo ne eredita le proprietà
#if 0
	fprintf(stdout, "Prima\n");
#else
	fprintf(stdout, "Prima\n");
	sleep(3);
#endif
	dprintf(1, "Dopo\n");
	fork();
}
