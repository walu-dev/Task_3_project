#include <stdio.h>
#include "TotalRevenue.h"

void CalculateTotalRevenue(){
    int customer1, customer2, customer3;
    double total_revenue;

     //prompt user to enter revenue of customer1
    printf("Enter the revenue of customer1: \n");
    scanf("%d", &customer1);

    //prompt user to enter revenue of customer2
    printf("Enter the revenue of customer2: \n");
    scanf("%d", &customer2);

    //prompt user to enter revenue of customer3
    printf("Enter the revenue of customer3: \n");
    scanf("%d", &customer3);

    total_revenue = (double)(customer1 + customer2 + customer3);
    printf("The total revenue is: %lf", total_revenue);
}

