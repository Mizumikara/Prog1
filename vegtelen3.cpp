#include <stdio.h>
#include <omp.h>

int main()
{
#pragma omp parallel //minden cpu 100%
	while(1)
	{
	}
	return 0;
}
