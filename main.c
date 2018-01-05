#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

//Quick and dirty
void fib(int steps){
	mpz_t a, b, aux;
	int i;

	mpz_init(a);
	mpz_init(b);
	mpz_init(aux);

	mpz_set_si(a, 1);
	mpz_set_si(b, 1);

	for(i=0;i<steps;i++){
		//This can print things in any base, 2, 10, 16, 19
		mpz_out_str(stdout, 10, a);
		printf("\n");

		mpz_add(aux, a, b);
		mpz_set(a, b);
		mpz_set(b, aux);
	}

	mpz_clear(a);
	mpz_clear(b);
	mpz_clear(aux);
}

int main(){
	fib(99);
	return 0;
}
