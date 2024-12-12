#include<stdio.h>
#include<string.h>
int main(){
	char minh[100];
	printf("moi ban nhap vao mot chuoi bat ki:  ");
	fgets(minh,100,stdin);
	printf("chuoi ban vua nhap la: %s ",minh);
	printf("mang co %d ky tu \n",strlen(minh));
	return 0;
}

