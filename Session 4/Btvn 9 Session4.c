#include <stdio.h>

int validDate(int day, int month, int year) {
    if (month < 1 || month > 12) return 0;  

    int maxDay;

    if (month == 2) {
        // Kiem tra thang hai
        maxDay = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
    } else {
        // Cac thang con lai
        int daysInMonth[] = {31, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 30};
        maxDay = daysInMonth[month - 1];
    }

    return day >= 1 && day <= maxDay;  // Kiem tra ngay hop le
}

int main() {
    
    // Nhap ngay, thang, nam
    int day;
    printf("Nhap ngay: ");
    scanf("%d", &day);
    
    int month;
    printf("Nhap thang: ");
    scanf("%d", &month);
    
    int year;
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (validDate(day, month, year)){ 
        printf("Ngay %d/%d/%d hop le.\n", day, month, year);
        
    }else{
    	printf("Ngay %d/%d/%d khong hop le.\n", day, month, year);

	} 
        
    return 0;
}

