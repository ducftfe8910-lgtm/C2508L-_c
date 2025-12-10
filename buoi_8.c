#include <stdio.h>

// Function prototype
//Khai bao tat ca bcac ham chuc nang cua chuong trinh o day 
int tongCongTich();
int tinhTong();
void tinhHieu();
int tinhTich();
float tinhThuong();
int tinhtuoi();

//int tongCongTich(){
//
//
//   int a, b, tong, tich;
//	printf("Nhap a: ");
//	scanf("%d", &a);
//	printf("Nhap b: ");
//	scanf("%d", &b);
//	 tong = a + b;
//	 tich = a * b;
//	return tong + tich;

//}

int namSinh;
    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);
    
    int tuoi = tinhTuoi(namSinh);
    printf("Tuoi cua ban la: %d", tuoi);



// viet ham tinh tong 2 so
int tinhTong(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	return a + b;
	
}


// viet ham tru 2 so
void tinhHieu(){
   	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	// ham co void ko dung return
	printf("Hieu la %d", a - b);
}

int tinhTich(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	return a * b;
}


int main(){
	
	// function call (loi goi ham)
//	int tong;
//	 tong = tinhTong();
//	 printf("Tong la: %d", tong);
	

//	tinhHieu();
//	
//	int tich;
//	 tich = tinhTich();
//	 printf("Nhan la: %d", tich);
	 
//	float thuong;
//	thuong = tinhThuong();
//	printf("Thuong la: %.2f", thuong);
	 
//    int  ketqua;
//    ketqua = tongCongTich();
//    printf("Tong cong tich la: %d ", ketqua);
//    
    
    
    
    
	return 0;
}

float tinhThuong(){
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	

	return (float)a / b;
}


	
	
