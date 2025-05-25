#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 25, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element;
    int *positions = (int *)malloc(n * sizeof(int));
    int count = 0;

    printf("Mang ban dau: ");
    int i; 
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap phan tu can tim: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            positions[count] = i;
            count++;
        }
    }

    if (count > 0) {
        printf("Phan tu %d ton tai tai vi tri: ", element);
        for (i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang\n", element);
    }

    free(positions);
    return 0;
}
