
#include <stdio.h>

int main() {
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

    printf("Array sebelum pengurutan: ");
   for (i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    }

    // bubblesort
     int j, temp;
    int swapped;

    for (i = 0; i < size-1; i++) {
        swapped = 0;

        for (j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar arr[j] dengan arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                swapped = 1;
            }
        }

        // Jika tidak ada pertukaran pada iterasi ini, maka array sudah terurut
        if (swapped == 0)
            break;
    }

  printf("\n");
    printf("Array setelah pengurutan: ");
   for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}