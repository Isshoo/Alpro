#include <stdio.h>

int interpolationSearch(int arr[], int size, int x) {
    int left = 0;
    int right = size - 1;

    while (left <= right && x >= arr[left] && x <= arr[right]) {
        if (left == right) {
            if (arr[left] == x)
                return left;
            return -1;
        }

        int pos = left + ((x - arr[left]) * (right - left)) / (arr[right] - arr[left]);

        if (arr[pos] == x)
            return pos;

        if (arr[pos] < x)
            left = pos + 1;
        else
            right = pos - 1;
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
     printf("masukan angka yang akan dicari : ");
    scanf("%d", &x);

     int result = interpolationSearch(arr, size, x);

    if (result != -1) {
        printf("data ditemukan di index %d\n", result);
    } else {
        printf("data tidak ditemukan\n");
    }

    return 0;
}