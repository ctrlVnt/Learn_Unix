#include <stdio.h>


int main(int argc, char *argv[]) {
	printf("Test compilazione condizionale\n");

	#if DEBUG
	printf("Facciamo debug!\n");
	#else
	printf("NON facciamo debug!\n");
	#endif

   	return 0;
}
//gcc 04-compcondizionale.c -o 04-compcondizionale -DDEBUG <-------- serve per creare l'eseguibile CON debug