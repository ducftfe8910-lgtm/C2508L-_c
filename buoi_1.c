// khai baoi thu vien (preprocessor tien xu ly)
// studio.h = standard inout output ( thu vien nhap xuat chuan)
// #include "studio.h"
#include<Stdio.h>

// return_value_type_ functiom_name() {}
int main(){
	
	//code 0 trong day
	// Ham main laf ham dac biet trong C, Chuowng trinh se tu goi ham main khi run
	
	// Ham printf laf ham duowc viet san trong thu vien studio.h "Hello World" la doi so (argument) cua ham
//	printf("Hello Word \n\n");
//	printf("\t hello World");
//	
	// Yeu cau nhap hai so a, b. Sau do in ra mam hinh tong 2 so
	int a, b;  // int: integer la kieu so nguyen
	printf("Nhap vao so a:");
	scanf("%d", &a);  // d la digit
	
	printf("Nhap vao so b:");
	scanf("%d", &b);
	
	printf("Tong cua a va b la: %d", a + b);
	return 0;
}
