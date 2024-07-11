#include<stdio.h>
int main(){
    int a=0,b=1,c=0;
    int x;
    scanf("%d",&x);
    if(x>2){
    for(int i=2;i<x+1;i++){
        c=a+b;
        a=b;
        b=c;
    }
    }
    printf("%d",c);
}