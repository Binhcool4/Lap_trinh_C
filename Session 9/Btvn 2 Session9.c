#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int i;

    // In mang ban dau
    printf("Mang ban dau:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int index, newValue;

    printf("Nhap vi tri can sua: ");
    scanf("%d", &index);

    // Kiem tra vi tri  co hop ly ko
    if (index < 0 || index >= n) {
        printf("Vi tri không hop ly! Vui lòng nhap lai.\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    // Ghi de gia tri cu bang gia tri moi
    array[index] = newValue;

    printf("Mang sau khi sua:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

