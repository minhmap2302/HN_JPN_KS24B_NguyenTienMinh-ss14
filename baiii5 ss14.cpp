#include<stdio.h>
#include<string.h>
int main(){
	char m[]="NGUYEN TIEN MINH MAP DIT";
	int leng = strlen(m);
	int num = 1;
	for (int i = 0;i< leng;i++){
		if (m[i]==' '){
			num++;
		}
	}
	printf("chuoi co %d tu",num);
	return 0;
}
