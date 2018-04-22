#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	time_t biggest = 0x7FFFFFFF;
	printf("biggest=%s \n", asctime(gmtime(&biggest)));
	system("pause");
	return 0;
}
