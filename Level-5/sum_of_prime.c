#include<stdio.h>
int check(int x){

    for(int i=2;i<x/2;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a;
    scanf("%d",&a);
    int l=2;
    int h=a;
    int flag=0;
    for(int i=2;i<h-1;i++){
        
        for(int j=i+1;j<h;j++){
            if(i+j==a){
            if(check(i) && check(j)){
                flag=1;
                break;
            }
        }
        }
    }
    if(flag){
        printf("True");
    }
    else{
        printf("False");
    }
}