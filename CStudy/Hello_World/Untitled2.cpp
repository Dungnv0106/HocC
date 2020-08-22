#include<stdio.h>
using namespace std;

void hoanDoi(int a, int b) {
  	
  	printf("\n==================Dang goi ham hoanDoi=============\n");
  	
  	printf("Hay nhap so a =", a);
  	scanf("%d", &a);
  	printf("Hay nhap so b =", b);
  	scanf("%d", &b);
  	int c ;
  	c = a;
  	a = b;
  	b = c;
  	printf("Ket qua sau khi hoan vi: a = %d, b = %d \n", a, b);
  	printf("Da goi xuong day");
  }
  
  void soSanh(int a, int b) {
  	
  }
  
  int main() {
  	int c; int d;
  	printf("Dang goi ham main");
  	hoanDoi(c,d);
  }
