#include <stdio.h>
#define READINGS_COUNT 5
#define MIN_SAFE_TEMP 18.0
#define MAX_SAFE_TEMP 30.0
double calculate_average( const double readings[], int size);
double find_minimum (const double readings[], int size);
double find_maximum (const double readings[], int size);
int count_abnormal_readings(const double readings[], int size, double minimum_limit, double maximum_limit );
int main(void)
{
    double readings[READINGS_COUNT];
    double average, min, max;
    int i, count;
    for (i = 0; i < READINGS_COUNT; i++)
    {
        printf("Enter reading %d: ", i + 1);
        if (scanf("%lf", &readings[i]) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            return 1;
        }
    }
    printf("\nStored readings:\n");
    for ( i = 0; i <READINGS_COUNT; i++)
    {
        printf("The readings are: %.2f\n", readings[i]);
    }
    average = calculate_average(readings, READINGS_COUNT);
    printf("The average of the readings is: %.2f\n", average);
    min = find_minimum(readings, READINGS_COUNT);
    printf("The minimum of the readings is: %.2f\n", min);
    max = find_maximum(readings, READINGS_COUNT);
    printf("The maximum of the readings is: %.2f\n", max);
    count = count_abnormal_readings(readings, READINGS_COUNT, MIN_SAFE_TEMP, MAX_SAFE_TEMP);
    printf("Abnormal readings : %d\n", count);
    if (count == 0)
    {
        printf("System status : NORMAL\n");
    }
    else
    {
        printf("System status : WARNING\n");
    }
    return 0;
}
double calculate_average(const double readings[], int size)
{
    double average;
    int i;
    double sum = 0.0;
    for (i = 1; i < size; i++)
    {
        sum = sum + readings[i];
    }
    average = sum  / size;
    return average;  
}
double find_minimum(const double readings [], int size)
{
    int i;
    double min = readings[0];
    for (i = 1; i < size; i++)
    {
        if (readings[i] < min)
        {
            min = readings[i];
        }
        
    }
return min;   
}
double find_maximum(const double readings [], int size)
{
    int i;
    double max = readings[0];
    for (i = 1; i < size; i++)
    {
        if (readings[i] > max)
        {
            max = readings[i];
        }
        
    }
return max;   
}
int count_abnormal_readings(const double readings[], int size, double minimum_limit, double maximum_limit )
{
    int i, count = 0;
    for (i = 0; i < size; i++)
    {
        if (readings[i] > maximum_limit || readings[i] < minimum_limit)
        {
            count = count + 1;
        }
        
    }
    return count;
}