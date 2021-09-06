#include <omp.h>
#include <stdio.h>

int main() {
	//omp_set_num_threads(10);
	
	#pragma omp parallel
	{
		printf("Hello World.. from thread 2019BTECS00202=%d\n",omp_get_thread_num());
	}
	
	return 0;
}
