//202610125212
//但祉悦
#include<stdio.h>
int main(void){
    float a;
    scanf("%f",&a);
    if(a<=100&&a>=90){
        printf("A");
    }else if(a<=89.99&&a>=80){
        printf("B");
    }else if(a<=79.99&&a>=70){
        printf("C");
    }else if(a<=69.99&&a>=60){
        printf("D");
    }else if(a<=59.99&&a>=0){
        printf("E");
    }else{
        printf("输入无效");
    }
    return 0;
}
