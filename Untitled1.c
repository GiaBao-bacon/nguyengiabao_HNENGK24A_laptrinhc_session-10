#include <stdio.h>

int main() {
    int arr[] = {3, 7, 12, 5, 9, 15, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element, found = 0;
    printf("Mang: ");
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap phan tu can tim: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("Phan tu %d ton tai tai vi tri %d\n", element, i);
            found = 1;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang\n", element);
    }

    return 0;
}
