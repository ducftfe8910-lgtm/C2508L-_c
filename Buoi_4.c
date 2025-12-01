#include <stdio.h>
#include <stdbool.h>

int main (){
	
	
//	int x = 6;
//	printf("%d \n", x < 5 && x < 10);
//	printf("%d \n", x < 5 || x < 10);
//	printf("%d \n", ! (x <5 || x <10));
	
	
	
//	bool isHandsome = false;
//	
//	printf("%d", isHandsome);




//int x = 15;
// if(x > 10){
// 	
// 	// khoi code nay duoc thuc hien neu dk tren la true
// 	
// 	printf("x > 10");
// }else printf("x < 10");

 
//    int x;
//    printf("Nhap 1 so nguyen bat ky: ");
//    scanf("%d", &x);
//    
//    if(x > 0){
//    	
//      if(x % 2 == 0){
//       printf("x là so chan");
//	}else{
//	  printf("x la so le");
//	}
//}else{
//	printf("Gia tri khong hop le!");
//}

//
//    float a, b, x;
//    
//    printf("Nhap so a: ");
//    scanf("%f", &a );
//    
//    printf("Nhap so b: ");
//    scanf("%f", &b);
//    
//    
//    if(a == 0){
//       if(b != 0){
//       	printf("Phuong trinh vo nghiem");
//	   }else{
//	   	// truong hop b = 0
//	   	printf("Phuong trinh vo so nghiem");
//	   }
//    	
//	}else{
		// truong hop a khac 0
//		x = -b / a;
//   	printf("Nghiem cua x la: %.2f", x);
//	}
    
//   if(a == 0 && b !=0){
//   	
//   	printf("Phuong trinh vo nghiem");
//   }else if(a == 0 && b ==0){
//
//   	printf("Phuong trinh vo so nghiem");
//   }else{
// 	x = -b / a;
//   	printf("Nghiem cua x la: %.2f", x);
//   }

     int a, b, max;
     printf("Nhap so a: ");
     scanf("%d", &a);
     
     printf("Nhap so b: ");
     scanf("%d", &b);
     
      if(b > a){
	 	max = b;
	 }
	  // cu phap shorthand cua  if chi viet duoc khi cu phap 1 lenh
	max = (b > a) ? b : a;
	 
	 	printf("So lon nhat la: %d", max);
	
     
     
     



	 

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    







 
	
	return 0;
	
	
}
