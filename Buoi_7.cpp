#include <stdio.h>


int main(){
	
	
	// Cau 1
	
//	int n;
//	printf("Nhap so 1, 2, 3:");
//	scanf("%d", &n);
//	
//	if(n == 1 || n == 2 || n == 3){
//		switch(n){
//			case 1:
//				printf("*");
//				break;
//			case 2: 
//		    	printf("**");
//		    	break;
//			case 3:
//				printf("***");
//		}
//	}else{
//		printf("SO ban nhap khong phai 1, 2, 3");
//	
//	}
//	
//	// cau 2
//	int thang;
//	printf("Nhap thang:");
//	scanf("%d", &thang);
//	
//	if(thang >= 1 && thang <= 12){
//		switch(thang){
//			case 1: case 2: case 3:
//				printf("Quy 1");
//				break;
//			case 4: case 5: case 6:
//				printf("Quy 2");
//				break;
//			case 7: case 8: case 9:
//				printf("Quy 3");
//				break;
//				
//		}
//				
//	}else{
//		printf("Thang khong hop le!");
//	}
//	
	
	
	// xay dung menu 2 cap
	
//	Chuongtrinh doc truyen 'Thien Long Bat Bo'
//	
//	1. Chuong 1
//	2. Chuong 2
//	3. Chuong 3
//	4. Chuong 4
//
//
//	Moi ban nhap so chuong (1-4)
//	
//	1. Chuong 1 - Tap 1
//	2. Chuong 2 - Tap 2
//	3. Chuong 3 - Tap 3
//	
//	
//	Moi ban nhap so tap (1-3):
//		
//	Nguoi dung nhap so 1 => In ra dong chu ban "Ban da nhap tap 1"
//	
	
	
	
//	int chuong, tap;
//	printf("Chuongtrinh doc truyen 'Thien Long Bat Bo \n");
//	printf("\n");
//	printf("1. Chuong 1\n");
//	printf("2. Chuong 2 \n");
//	printf("3. Chuong 3 \n");
//	printf("4. Chuong 4");
//	printf("\n");
//	printf("Moi ban nhap so chuong (1-4) \n");
//	scanf("%d", &chuong);
//	
//	switch(chuong){
//		case 1:
//			printf("1. Chuong 1 - Tap 1 \n");
//			printf("2. Chuong 1 - Tap 2 \n");
//			printf("3. Chuong 1 - Tap 3 \n");
//			printf("Moi ban nhap so tap (1-3): \n");
//			scanf("%d", &tap);
//			printf("Ban da chon chuong %d tap %d", chuong, tap);
//			break;
//		case 2:
//			printf("1. Chuong 2 - Tap 1 \n");
//			printf("2. Chuong 2 - Tap 2 \n");
//			printf("3. Chuong 2 - Tap 3 \n");
//			printf("Moi ban nhap so tap (1-3): \n");
//			scanf("%d", &tap);
//			printf("Ban da chon chuong %d tap %d", chuong, tap);
//			break;
//		case 3:
//			printf("1. Chuong 3 - Tap 1 \n");
//			printf("2. Chuong 3 - Tap 2 \n");
//			printf("3. Chuong 3 - Tap 3 \n");
//			printf("Moi ban nhap so tap (1-3): \n");
//			scanf("%d", &tap);
//			printf("Ban da chon chuong %d tap %d", chuong, tap);
//			break;
//		case 4:
//			printf("1. Chuong 4 - Tap 1 \n");
//			printf("2. Chuong 4 - Tap 2 \n");
//			printf("3. Chuong 4 - Tap 3 \n");
//			printf("Moi ban nhap so tap (1-3): \n");
//			scanf("%d", &tap);
//			printf("Ban da chon chuong %d tap %d", chuong, tap);
//			break;
//		
//	}
//	
//	
	// vong lap for
	// in ra man hinh ca so tu 1 den 10
	//i : index
	
//	int i;
//	for(i= 1; i <=10; i++){
////			continue;
//		printf("%d \n", i);
//	
//	}
//	
//	// co cach nao khac de thoat khoi vong lap for khong?
//	// dung break
	
	//BT 1 IN ra man hinh ca so chan tu 1 den 10
//	 

// c1
//	int i;
//   	for(i= 1; i <=10; i++){
//    		if(i % 2 == 0){
//			
//		printf("%d \n", i);
//		}
//	}
//	c2
//	int i;
//   	for(i= 2; i <=10; i= i + 2){
//    	
//		printf("%d \n", i);
//}
	    
// BT2 tinh tong tu 1 den n voi n nhap tu ban phim

//int i, n, tong = 0;
//printf("Nhap n: ");
//scanf("%d", &n);
//
//for(i = 1; i <= n; i++){
//	tong = tong + i;
//
//}
//  	printf("Tong la: %d\n", tong);
// BT3 Tinh tong cac so le tu 1 den n

//int n, tong = 0, i;
//printf("Nhap n: ");
//scanf("%d", &n);
//
//for(i = 1; i <= n; i = i + 2){
//	tong += i;
//	
//}
// printf("Tong la: %d", tong);

// cac so chan
//
//int n, tong = 0, i;
//printf("Nhap n: ");
//scanf("%d", &n);
//
//for(i = 0; i <= n; i = i + 1){
//	tong += i;
//	
//}
// printf("Tong la: %d", tong);


// vong lap while
//while(condition){
	// code block
//}


//int n = 1;
//while(n <= 10){
//	printf("%d \n", n);
//	n++;
//}

// vong lap do while
//do{  
//// block code
//}while(condition)

//int n = 1;
//do{
//	printf("hello \n");
//	n++;
//}while(n <= 10);
	
	
//	for(; ;){
//		printf("Helo");
//	}
	// khuyert 1 tron 3 bt vong lap chay quai
//	    int i;
//		for(i = 0; ;){
//		printf("Helo");
//	}
 // su dung vong lap do while de in ra cac so nhung khong in ra so 2
 
 
int n = 1;
do{
	if( n !=2){
	printf("%d", n);
	}

	n++;
}while(n <=10);
	
	
	
	return 0;
}
