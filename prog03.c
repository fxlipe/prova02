#include <stdio.h>
void (int *a,*x){
    int q;
    q = *x;
    *x = *a;
    *a = q;
    
}
int main(){
    int x=10; 
    printf("x=%d",x);
    int a=15;
    printf("%d",x);
}