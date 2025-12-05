#include <stdio.h>

int main(){
	
	
	//cau4
//	double a, b, c, s, p;
//	printf("Nhap do dai 3 canh a, b, c: ");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	
//	// kiem tra dieu kien tam giac ton tai
//	
//	if(a + b > c || a + c > b || c + b > a){
//		p= (a + b + c) / 2;
//		s = sqrt(p * (p - a) * (p - b) * (p - c));
//		printf("Dien tich tam giac la: %.2lf", s);
//			
//	}else{
//		printf("Tam giac khong ton tai");
//	}
//	
	
	
	//cau6
	
//	int luong, thueThuNhap; thucLinh;
//	printf("Nhap luong cua ban: ");
//	scanf("%d", &luong);
//	
//	if(luong > 15){
//		thueThuNhap + luong * 0.3;
//	}else if(luong = 7){
//		thueThuNhap = luong * 0.2;
//		
//	}else{
//		thueThuNhap = luong * 0.1;
//	}
//	
// cau 8
   
   
   
   int thang, nam;
   printf("Nhap thang: ");
   scanf("%d", &thang);
   
   if(thang > 1 && thang <=12){
     switch(thang){
    
     	
     	
     	
     	
     	
	 }
  	
   	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
	   
     printf("thang nay co 31 ngay");
   
   }else if(thang == 4, thang == 6, thang == 9, thang == 11){
   	printf("Thang nay co 30 ngay");
  	
   }else{
   	if( nam % 400 ==0 || ( nam % 4 == 0 && nam % 100 != 0)){
	   	   
   		printf("Thang %d nam %d cos 29 ngay", thang, nam);
	   }else{
	   	printf("Thang %d nam %d cos 28 ngay", thang, nam);
	   }
   }
   	
}else{
	printf("Thang nay khong hop le");
}
// bai 8 chuyen sang switch


   	
        
	
	
	
}






	// cau 9
//	int tienCuoc = 25000, soPhut;
//	printf("Nhap so phut : ");
//	scanf("%d", &soPhut);
//	if(soPhut >= 0){
//	
//	if(soPhut <= 10){
//		tienCuoc = tienCuoc + (soPhut *600);
////		tienCuoc += soPhut * 600;
//	}else if(soPhut <= 60){
//		tienCuoc = tienCuoc + (10 * 600) + ((soPhut - 10) * 400);
//	}else{
//		tienCuoc = tienCuoc + (10 * 600) + (50 * 400) + ((soPhut - 60) * 200);
//	}
//	printf("Tien cuoc ban phai tra la: %d", tienCuoc);
//	
//}else{
//	printf("So phut ban nhap khong hop le");
//}

	
// viet chuong tinh nhap vao so va thu tuong ung
// VD nhap so 2 --> in thu 2

//int n;
//printf("Nhap n:");
//scanf("%d", &n);
//// neu truong hop lõn hon 3 th? nen dung switch
//// switch chi dung nhung cau lenh don gian trong case
//switch(n){
//	case 1:
//		printf("Chu Nhat");
//		break; // dung de thoat khoi switch
//	case 2:
//		printf("Thu 2");
//		break;
//	case 3:
//		printf("Thu 3");
//		break;
//	case 4:
//		printf("Thu 4");
//		break;
//	case 5:
//		printf("Thu 5");
//		break;
//	case 6:
//		printf("Thu 6");
//		break;
//	case 7:
//		printf("Thu 7");
////		break; cho nay break bo duoc do duoi nó da het
//	default: // cac truonbg hop con lai
//	printf("Chu Nhat");
//}
	
	
	
	
	
	
	
	
	return 0;
}
