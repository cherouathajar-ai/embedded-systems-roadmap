#include <stdio.h>

int main(void)
{
    int adc_value, adc_max=4095, adc_min=0;
    float percentage, voltage, vref=3.3; 
    printf("Enter ADC value (0-4095): ");
    scanf("%d", &adc_value);
    if (adc_value<adc_min || adc_value>adc_max)
    {
     printf("Invalid ADC value. Please enter a value between 0 and 4095.\n");
    }
    else
    {
        voltage = ((float)adc_value / adc_max )* vref;
        percentage = ((float)adc_value / adc_max) * 100;
        printf("Raw ADC value: %d\n", adc_value);
        printf("Voltage: %.2f V\n", voltage);
        printf("Percentage: %.2f%%\n", percentage);
    }   
    return 0;
}