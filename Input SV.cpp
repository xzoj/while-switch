#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

// Ham nhap du lieu.
 int addstudent(){
	char name[100];
	char date[100];
	int tele;
	printf("Nhap ten sinh vien: \n");
	scanf("%s",&name);
	//dieu kien do dai ky tu
	if (strlen(name)<3){
		printf("Ten qua ngan, vui long nhap lai");
	}else if (strlen(name)>15){
		printf("Ten qua dai, vui long nhap lai.");
	}
	printf("Nhap ngay sinh cua sinh vien: \n");
	scanf("%s", &date);
	printf("Nhap so dien thoai cua sinh vien: \n");
	scanf("%i", &tele);
	return 0;
	}
	
int main(){
	while(true){
		int x;
		printf("Menu:\n1:Them moi sinh vien.\n2:Hien thi danh sach sinh vien.\n3:Sua sinh vien.\n4:Xoa sinh vien.\n5:Thoat\n=====================\n");
		scanf("%i",&x);
		switch(x){
			case 1:
				addstudent();
				break;
			default:
				printf("Sai yeu cau vui long nhap lai.\n");
		}		
		if (x==5)
			return 0;
	}
	return 1;
}

