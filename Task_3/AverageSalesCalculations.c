#include <stdio.h>
#include "AverageSalesCalculations.h"


void CalculateAverageSales(){
    int total_sales, days;

    //prompt user to enter total_sales
    printf("Enter total_sales: \n");
    scanf("%d", &total_sales);

    //prompt user to enter number of days
    printf("Enter days: ");
    scanf("%d", &days);

    double average_sales = (double)(total_sales /days);
    printf("The Average sales is: %.2lf\n", average_sales);

}
