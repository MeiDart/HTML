#include<stdio.h>

void nhap(float x[], int n){
    for(int i=0;i<n;i++){
        printf("x[%d]",i+1);
        scanf("%f",&x[i]);}
}

void hienthi(float x[], int n){
    for(int i=0;i<n;i++){
        printf("%2.f",x[i]);
    };
}

int main(){
    int i,m;
    float y[50];
    do{
        printf("Nhap so phan tu trong day:");
        scanf("%d",&m);
}while (m>50||m<1);
    nhap(y,m);
    hienthi(y,m);

    return 0;
}