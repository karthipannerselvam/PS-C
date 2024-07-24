#include <stdio.h>
#include <math.h>
int prime(int a){
    if(a<=1){
        return 0;
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int rev(int a,int b){
    int n1=(a==0)?1:((int)log10)+1;
    int n2=(b==0)?1:((int)log10)+1;
    int arr1[10],arr2[10];
    for(int i=0;i<10;i++){
        arr1[i]=0;
        arr2[i]=0;
    }
    for(int i=0;i<n1;i++){
        int t=a%10;
        a/=10;
        arr1[t]++;
    }
    for(int i=0;i<n2;i++){
        int t=b%10;
        b/=10;
        arr2[t]++;
    }
    for(int i=0;i<10;i++){
        if(arr1[i]!=arr2[i]){
            return 0;
        }
    }
    return 1;
}
void main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<b;i++){
        for(int j=i+1;j<b;j++){
            if(prime(i) && prime(j) && rev(i,j)){
                printf("(%d,%d)\n",i,j);
            }
        }
    }
}

