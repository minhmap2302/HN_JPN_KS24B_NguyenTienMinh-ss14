#include<stdio.h>
#include<string.h>
int main (){
	char m[]="NGUYEN TIEN MINH\n";
	int leng = strlen(m);
	char c;
	char num = 0 ;
	printf("gia tri da gan la %s",m);
	printf("moi ban nhap gia tri ban muon dem la : ");
	scanf("%c",&c);
	for (int i = 0;i < leng;i++){
		if (m[i]==c){	
			num++;
		}
	}
	printf("so lan phan tu xuat hien la : %d",num);
	return 0;
}
