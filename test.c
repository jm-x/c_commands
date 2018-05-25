#include <stdio.h>
#include <string.h>
int main()
{
	char* hoge[]={"hh","jjrg","gkk"};
	for(int i=0;i<3;i++){
		printf("%s,strlen():%lu\n",hoge[i],strlen(hoge[i]));
	}
}	
