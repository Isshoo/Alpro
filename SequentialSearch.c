#include<stdio.h>

int main(void){

    int size;
    int i;
    int x;
   

    printf("masukan jumlah data : ");
    scanf("%d", &size);
    printf("-------------------\n");

    int arr[size];

      printf("masukan nilai-nilai :\n");
      printf("-------------------\n");
    for(i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    printf("\n");

    printf("masukan angka yang akan dicari : ");
    scanf("%d", &x);
    
    i=0;
    while(i<size){
    
        if(arr[i]==x){
            printf("data ditemukan di index %d \n", i);
           break;
        } 
        else
            i=i+1;
      }
      
    if (i==size){
        printf("data tidak ditemukan");
    }
    
    
      
    return 0;
}

