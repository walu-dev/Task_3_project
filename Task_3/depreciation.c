#include <stdio.h>
#include "depreciation.h"

void CalculateDepreciation(){
    int usefu_life;
    double residual_value, asset_cost;

    //prompt user to enter asset cost
    printf("Enter asset_cost: ");
    scanf("%lf", &asset_cost);

    //prompt user to enter residual_value
    printf("Enter residual_value: ");
    scanf("%lf", &residual_value);

    //prompt user to enter usefu_life
    printf("Enter usefu_life: ");
    scanf("%d", &usefu_life);

    double depreciation = (asset_cost - residual_value)/ (double)usefu_life;
    printf("The depreciation is: %.2lf\n", depreciation);

}

