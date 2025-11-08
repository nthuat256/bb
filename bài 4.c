#include <stdio.h>
int main(){
	int age;
	printf("nhap so tuoi: ");
	scanf("%d",&age);
	if(age<=12&&age>0){
		printf("tre em ");
	}else if(age>12&&age<=17){
		printf("thanh thieu nien ");
	}else if(age>17&&age<60){
		printf("nguoi lon ");
	}else if(age>=60&&age<=132){
		printf("nguoi cao tuoi ");
	}else {
		printf("so tuoi khong hop le!!");
	}
	return 0;
}
