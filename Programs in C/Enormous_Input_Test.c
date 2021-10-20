#include<stdio.h>
int main(){
    int n, k, t, num = 0;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        if(t%k == 0){
            num++;
        }
    }
    printf("%d", num);
    return 0;
}
