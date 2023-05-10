#include <stdio.h>

	int binarySearch(int arr[], int low, int high, int h) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == h)
            return mid;

        if (arr[mid] > h)
            return binarySearch(arr, low, mid - 1, h);

        return binarySearch(arr, mid + 1, high, h);
    }

    return -1;
}

	int main() {
    int dizi[]={4,8,3,84,47,76,9,24,68};
    int m = sizeof(dizi) / sizeof(dizi[0]);  //sizeof, belirtilen veri türünün byte olarak ölçülmesini saðlar
    int h = 76;
    int sonuc = binarySearch(dizi, 0, m - 1, h);
    if (sonuc == -1) {
        printf("Eleman dizide bulunamadi.");
    } else {
        printf("Eleman dizinin %d. indeksinde bulundu.", sonuc);
    }
    return 0;
}
