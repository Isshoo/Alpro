
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

    // insertionSort
    int j, key;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

  printf("\n");
    printf("Array setelah pengurutan: ");
   for (j = 0; j < size; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}