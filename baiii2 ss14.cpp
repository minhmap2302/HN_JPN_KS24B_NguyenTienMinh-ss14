#include<stdio.h>
#include<string.h>
int main(){
	char m[]="NGUYEN TIEN MINH";
	int leng = strlen(m);
	
	for(int i = 0;i<leng;i++){
		printf("%c ",m[i]);
	} 
	return 0;
}

