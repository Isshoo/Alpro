#include <stdio.h>

int binarySearch(int arr[], int kiri, int kanan, int x) {
    while (kiri <= kanan) {
        int mid = (kanan + kiri) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] < x)
            kiri = mid + 1;
        else
            kanan = mid - 1;
    }

    return -1;
}

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
    printf("\n");
    printf("masukan angka yang akan dicari : ");
    scanf("%d", &x);

    int result = binarySearch(arr, 0, size - 1, x);

    if (result != -1) {
        printf("data ditemukan di index %d\n", result);
    } else {
        printf("data tidak ditemukan\n");
    }

    return 0;
}