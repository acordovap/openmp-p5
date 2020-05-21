#include <stdio.h>
#define NT 1

int main() {

    omp_set_num_threads(NT);
    #pragma omp parallel
    {
		int i;
		printf("Hello World\n");
		for(i=0;i<6;i++){
			printf("Iter:%d\n",i);
        }
    }
		printf("GoodBye World\n");
}
