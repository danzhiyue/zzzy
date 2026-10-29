//202610125212
//但祉悦
#include<stdio.h>
int main(){
    float a,c,d;
    char b;
    scanf("%f %c%f",&a,&b,&c);
    if(b=='/'){
        if(c!=0){
            d=a/c;
            printf("%.2f",d);
        }else{
            printf("错误：除数不能为 0");
        }
    }else if(b=='+'){
        d=a+c;
        printf("%.2f",d);
    }else if(b=='-'){
        d=a-c;
        printf("%.2f",d);
    }else if(b=='*'){
        d=a*c;
        printf("%.2f",d);
    }else{
        printf("错误：不支持的运算符");
    }
return 0;
}