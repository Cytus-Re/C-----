#include <stdio.h>
int main(){
	void *p;
	int cnt=0;
	while(p==malloc(100*1024*1024))cnt++;
	printf("������%d00MB���ڴ�\n");
	return 0;
} 
