#include <stdio.h>
#include <string.h>
int main(){
	
	// string(chuoi) mang cac ky tu
	
//	char str[1000];
//	char str[1000] = "Vo Thanh Duy";
//	printf("%s", str);
	
//	char name[1000];
//	printf("Nhap ho va ten: ");
//	scanf("%s", name);
//	fgets(name, sizeof(name), stdin);
//	printf("ho va ten la: %s", name);
	
	char str[1000] = "Hello World";
//	printf("%d", sizeof(str));
    
//    printf("Ky tu dau tien la: %c\n", str[0]);
//	
//	printf("Ky tu cuoi cung la: %c", str[4]);
	//Lu y trong C, vi tri cuoi cung la "\0" danh du su ket thuc cu chuoi
	
//	int i, count = 0;
//	for(i = 0; i < 5; i++){
//		printf("%c \n", str[i]);
//	}
	
//	while(str[i] != '\0'){
//		
//		i++;
////		count++;
//	}
//	
//	printf("So luong ky tu la: %d", i); // kq la 11
//	printf("So luong ky tu la: %d", strlen(str));
	
	
	int i, count = 0;
	for(i = 0; i < strlen(str); i++){
//		int phanTuCuoi == strlen(str) - 1; // khai bao bien tuong minh hon trong ngoat if
		if(str[strlen(str) - 1] == 'o'){   //strlen(str) - 1 la phan tu cuoi cung cua mang
//			printf("Co xuat hien ky tu o tai vi tri %d \n", i);
//			break; // in ra 1 tim duy nhat
    
        count++;
		}
	}
	printf("Co %d ky tu o duoc tim thay", count);
	
	
	
	
	
	return 0;
}
