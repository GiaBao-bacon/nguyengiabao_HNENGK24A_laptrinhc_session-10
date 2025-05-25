#include <stdio.h>

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element;

    printf("Mang ban dau: ");
    int i; 
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("Mang sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap phan tu can tim: ");
    scanf("%d", &element);

    int result = binarySearch(arr, 0, n - 1, element);
    if (result == -1)
        printf("Phan tu %d khong ton tai trong mang\n", element);
    else
        printf("Phan tu %d ton tai tai vi tri %d\n", element, result);

    return 0;
}
