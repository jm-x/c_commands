#include <stdio.h>
#include <stdlib.h>

int main(int a,char *aa[])
{
	int i;
	printf("argc=%d\n",a);
	for(i=0;i<a;i++){
		printf("argv[%d]=%s\n",i,aa[i]);
	}
	exit(0);
}
