#include <stdio.h>
#include <ctype.h>
#include<stdbool.h>

main() {	
		int a, b, x;		
		while(true){			
			printf("\nNhap yeu cau cua ban cho\nMenu:\n1:Phep +\n2:Phep -\n3:Phep *\n4:Phep /\n5:Thoat.\n ");
			scanf("%i",&x);
			switch(x){
				case 1:
					printf("Nhap so a= \n");
					scanf("%i",&a);
					printf("Nhap so b= \n");
					scanf("%i",&b);
					printf("%i + %i = %i",a,b,a+b);
					break;
				case 2:
					printf("Nhap so a= \n");
					scanf("%i",&a);
					printf("Nhap so b= \n");
					scanf("%i",&b);
					printf("%i - %i = %i",a,b,a-b);
					break;	
				case 3:
					printf("Nhap so a= \n");
					scanf("%i",&a);
					printf("Nhap so b= \n");
					scanf("%i",&b);
					printf("%i * %i = %i",a,b,a*b);
					break;
				case 4:
					printf("Nhap so a= \n");
					scanf("%i",&a);
					printf("Nhap so b= \n");
					scanf("%i",&b);
					if(b==0){
						printf("Khong the tinh toan voi b=0. Vui long nhap lai yeu cau.");
					}
					else{
						float c=a;
						printf("%i / %i = %0.2f",a,b,c/b);
					}
					break;
				case 5:
					printf("Tam biet.");
					break;	
				default:printf("Yeu cau sai. Vui long nhap lai.");		
			}
			if(x==5){			
				break;	
			}					
		}
}
