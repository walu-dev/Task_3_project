#include <stdio.h>
#include "AnnualSalary.h"

void CalculateAnnualSalary(){
    double hourly_wage;
    int hours_per_week, weeks_per_year, annual_salary;

    //prompt user to enter hourly wage
    printf("Enter the hourly Wage: \n");
    scanf("%lf", &hourly_wage);

    //prompt user to enter number of weeks
    printf("Enter the number of weeks per year: \n");
    scanf("%d", &weeks_per_year);

    //prompt user to enter number of hours
    printf("Enter the working hours per week: \n");
    scanf("%d", &hours_per_week);

    annual_salary = (int)hourly_wage * hours_per_week * weeks_per_year;
    printf("The annual salary is: %d", annual_salary);
}
