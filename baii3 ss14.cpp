#include<stdio.h>
#include<string.h>
int main(){
	char m[]="Nguyen Tien Minh";
	int length = strlen(m);
	for(int i = 0;i < length/2;i++){
		char temp = m[i];
		m[i] = m[length-1-i];
		m[length-1-i]=temp;
	}
	 printf("Chuoi dao nguoc la: %s\n", m);

    return 0;
}
