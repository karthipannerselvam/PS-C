#include<stdio.h>
#include <math.h>
int checkprime(int a){
    for(int i=2;i<sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;

}
int main(){
    int a;
    scanf("%d",&a);
    int x=0;
    if(a==1 || a==0){
        x=0;
    }
    else{
    x=checkprime(a);
    }
    if(x){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}