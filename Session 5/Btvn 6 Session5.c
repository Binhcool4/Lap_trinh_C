#include <stdio.h>

int main() {
    float num1;
    float num2;
    int choice;

    do{
        printf("Nhap so thu nhat : ");
        scanf("%f", &num1);
        printf("Nhap so thu hai : ");
        scanf("%f", &num2);
        
        // May tinh
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban : ");
        scanf("%d", &choice);

        
        switch (choice) {
            case 1:
                printf("Tong cua %.2f vŕ %.2f lŕ: %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %.2f vŕ %.2f lŕ: %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tich cua %.2f vŕ %.2f lŕ: %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                printf("Thuong cua %.2f vŕ %.2f lŕ: %.2f\n", num1, num2, num1 / num2);
                break;
            case 5:
                printf("Thoat chuong trinh.\n");
                break;
                
            default:
                printf("Lua chon khong hop ly. Vui long chon lai.\n");
        }

        //Dung nay de nhin de hon
        printf("\n");
    }while (choice != 5);

    return 0;
}

