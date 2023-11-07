#include<stdio.h>
#include<conio.h>
int main(){
	float side_square,length_rectangle,width_rectangle,radius;
	const float PI=3.14;
	scanf("%f %f %f %f",&side_square,&length_rectangle,&width_rectangle,&radius);
	printf("Chu vi cua hinh vuong la: %f",side_square*4);
	printf("\nDien tich hinh vuong la: %f",side_square*side_square);
	printf("\nChu vi hinh chu nhat la: %f",(length_rectangle+width_rectangle)*2);
	printf("\nDien tich hinh chu nhat la: %f",length_rectangle*width_rectangle);
	printf("\nChu vi hinh tron la: %.2f",2*PI*radius);
	printf("\ndien tich hinh tron la: %.2f",PI*radius*radius);
	return 0;
	
}
