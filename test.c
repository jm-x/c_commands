#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 2048

int main()
{
	char* hoge[]={"hh","jjrg","gkk"};
	for(int i=0;i<3;i++){
		printf("%s,strlen():%lu\n",hoge[i],strlen(hoge[i]));
	}
	int a[BUFFER_SIZE];
	printf("%d\n",sizeof a/sizeof(int));
}	
