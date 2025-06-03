#include <stdio.h>
#include "CalculateCommission.h"

void CalculatedCommission(){
    int sales_volume;
    double commission_rate;

    //prompt user to enter sales_volume
    printf("Enter sales_volume: ");
    scanf("%d", &sales_volume);

    //prompt user to enter commission_rate
    printf("Enter commission_rate: ");
    scanf("%lf", &commission_rate);

    double commission = (double)sales_volume * commission_rate;
    printf("The Commission is: %.2lf\n", commission);
}
