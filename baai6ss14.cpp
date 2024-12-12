#include<stdio.h>
#include<string.h>
int main(){
	char m[]="NGUYEN TIEN MINH MAP DIT";
	int leng = strlen(m);
	int num = 0;
	for (int i = 0;i< leng;i++){
		if (m[i]==' '){
			
		}else{
			num++;
		}
	}
	printf("chuoi co %d ki tu",num);
	return 0;
}
