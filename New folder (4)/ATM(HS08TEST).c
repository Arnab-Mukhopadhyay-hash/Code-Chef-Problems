// accepted

#include<stdio.h>
int main(){
	int x;
	float y, bal;
	scanf("%d %f", &x, &y);
	if(0<=x && x<=2000 && 0<=y && y <= 2000){
		if(x%5 == 0 && x <= y-0.50){
			bal = y-x-0.50;
			printf("%.2f", bal);
		}
		else{
			printf("%.2f", y);
		}
	}
	return 0;
}
