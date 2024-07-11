#include<stdio.h>
int main(){
    int arr[100][100];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d",arr[i][j]);
    //     }
    // }
    int res[100][100];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            res[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",res[i][j]);
        }
    }
}