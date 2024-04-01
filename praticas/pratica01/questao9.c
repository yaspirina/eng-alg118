#include <stdio.h>

int main() {
    int years, months, days;


  printf("Enter your age in years: ");
  scanf("%d", &years);

  printf("Enter your age in months: ");
  scanf("%d", &months);

  printf("Enter your age in days: ");
  scanf("%d", &days);

  
   // Convert years to days
    days += years * 365;
  
    // Convert months to days
    days += months * 30;

    // Print the total number of days
    printf("Your age in days is: %d\n", days);

    return 0;
}