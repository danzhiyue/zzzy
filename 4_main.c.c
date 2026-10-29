//202610125212
//但祉悦
#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if(a>100 || a<0){
        printf("输入无效");
    }else if(a<=100 && a>=90){
        printf("A");
    }else if(a<=89.99 && a>=80){
        printf("B");
    }else if(a<=79.99 && a>=70){
        printf("C");
    }else if(a<=69.99 && a>=60){
        printf("D");
    }else{
        printf("E");
    }
    return 0;
}