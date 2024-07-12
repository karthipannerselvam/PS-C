#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int main(){
    char s;
    int a,b;
    scanf("%c",&s);
    scanf("%d",&a);
    scanf("%d",&b);
    if(s=='+'){
        printf("%d",add(a,b));
    }
    if(s=='-'){
        printf("%d",sub(a,b));
    }
    if(s=='/'){
        printf("%d",div(a,b));
    }
    if(s=='*'){
        printf("%d",mul(a,b));
    }
}