#include<stdio.h>
int main(){
    int t, num, sum;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        sum = 0;
        scanf("%d", &num);
        while(num > 0){
            int dig = num % 10;
            num = num / 10;
            sum += dig;
        }
        printf("%d\n", sum);
    }
    return 0;
}