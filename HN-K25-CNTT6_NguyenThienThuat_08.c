#include <stdio.h>
#include <stdlib.h>
int main (){
	int arr[100];
	int n=0,i,j;
	int choice;
	int sorted = 0;
	int number1;
	while(number1){
		printf("\n========================MENU========================\n");
		printf("1.nhap so luong phan tu va gia tri phan tu trong mang\n");
		printf("2.in cac gia tri trong mang\n");
		printf("3.tinh tong cua tat ca so nguyen to trong mang\n");
		printf("4.in ra cac phan tu co index la so le trong mang\n");
		printf("5.them moi mot phan tu vao cuoi mang\n");
		printf("6.xoa phan tu tai mot vi tri cu the\n");
		printf("7.sap xep mang theo thu tu giam dan\n");
		printf("8.kiem tra su ton tai cua phan tu trong mang\n");
		printf("9.in ra cac phan tu xuat hien dung 1 lan trong mang\n");
		printf("10.cap nhap tat ca so am trong mang thanh gia tri 0\n");
		printf("11.thoat\n");
		printf("\n===================================================\n");
		printf("nhap lua chon cua ban: \n");
		scanf("%d",&choice);
		switch(choice){
		  case 1:{
			printf("nhap so luong phan tu: ");
			scanf("%d",&n);
			if(n<=0||n>100){
				printf("so luong phan tu khong hop le!");
				n=0;
				break;
			}
			for(i=0;i<n;i++){
				printf("arr[%d]= ",i);
				scanf("%d",&arr[i]);
			}
			sorted=0;
			break;
		   }
		   case 2:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!\n");
		   		break;
		   	}
		   	printf("cac gia tri co trong mang hien tai la \n");
		    for (i=0;i<n;i++){
		    	printf("%d ",arr[i]);
			}
			printf("\n");
			break;
		   }
		   case 3:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!\n");
		   		break;
		   	}
		   	int sum=0;
                for(i=0;i<n;i++){
                    if(laSoNguyenTo(arr[i])) sum += arr[i];
                }
                printf("Tong cac so nguyen to trong mang la: %d\n", sum);
                break;
		   }
		   case 4:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!\n");
		   		break;
		   	}
		   	printf("Cac phan tu co chi so le: ");
                for (i = 1; i < n; i += 2) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
		   case 5:{
		   	if(n>=100){
		   		printf("mang da day!\n");
		   		break;
		   	}
		   	int value;
		   	printf("gia tri can them: ");
		   	scanf("%d",&value);
		   	arr[n]=value;
		   	n++;
		   	printf("da them phan tu %d vao cuoi mang\n",value);
			break;
		   }
		   case 6:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!\n");
		   		break;
		   	}
		   	int sell;
				printf("nhap vi tri can xoa: ");
				scanf("%d",&sell);
				if(sell<0||sell>=n){
					printf("vi tri khong hop le!");
					break;
				}
				for(i=sell;i<n-1;i++){
					arr[i]=arr[i+1];
				}
				n--;
				printf("da xoa phan tu tai vi tri %d\n",sell);
				break;
		   }
		   case 7:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!\n");
		   		break;
		   	}
		   	for (i = 0; i < n - 1; i++) {
                    for (j = i + 1; j < n; j++) {
                        if (arr[i] < arr[j]) {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep giam dan: ");
                for (i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
		   }
		   case 8:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!\n");
		   		break;
		   	}
			break;
		   }
		   case 9:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!\n");
		   		break;
		   	}
		   	n--;
			break;
		   }
		   case 10:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!\n");
		   		break;
		   	}
		   	for (i = 0; i < n; i++) {
                    if (arr[i] < 0) arr[i] = 0;
                }
                printf("Da cap nhat tat ca so am thanh 0!\n");
                break;
		   }
		   case 11:{
		   	printf("cam on \n");
			return 0;
		   }
		   default:{
		   	printf("lua chon khong hop le!!!");
		   	break;
		   }
		}
	}
}
