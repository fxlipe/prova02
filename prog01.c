  #include <stdio.h>
void main(){
    int x=0;
    int a;
    for(x =0;x<=20;x++){
        if(x%2==0){
            printf("%d\n",x);
            a += x;
        }
         
    }
    printf("A soma desses números é igual a %d\n",a);

}
//0,2,4,6,8,10,12,14,16,18,20=110