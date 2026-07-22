#include <stdio.h>
double calculate_voltage(double current, double resistance);
double calculate_current(double voltage, double resistance);
double calculate_resistance(double voltage, double current);
double calculate_power(double voltage, double current);

int main(void)
{
    int choice;
    double current;
    double resistance;
    double voltage;
    double power;
    do
    {
        printf("\n=== Electronics Calculator ===\n\n");
        printf("1. Calculate voltage\n");
        printf("2. Calculate current\n");
        printf("3. Calculate resistance\n");
        printf("4. Calculate power\n");
        printf("0. Exit\n");
        printf("Please enter your choice (0-4): ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }

        switch (choice)
        {
            case 1:
                printf("Please enter the current in amperes: ");

                if (scanf("%lf", &current) != 1)
                {
                    printf("Invalid current.\n");
                    return 1;
                }

                printf("Please enter the resistance in ohms: ");

                if (scanf("%lf", &resistance) != 1)
                {
                    printf("Invalid resistance.\n");
                    return 1;
                }

                if (current < 0 || resistance < 0)
                {
                    printf("Current and resistance cannot be negative.\n");
                    return 1;
                }

                voltage = calculate_voltage(current, resistance);

                printf(
                    "The calculated voltage is: %.2f V\n",
                    voltage
                );
                break;

            case 2:
                printf("Please enter the voltage: ");

                if (scanf("%lf", &voltage) != 1)
                {
                    printf("Invalid voltage.\n");
                    return 1;
                }

                printf("Please enter the resistance in ohms: ");

                if (scanf("%lf", &resistance) != 1)
                {
                    printf("Invalid resistance.\n");
                    return 1;
                }

                if (voltage < 0 || resistance <= 0)
                {
                    printf(
                        "Voltage cannot be negative and "
                        "resistance must be greater than zero.\n"
                    );
                    return 1;
                }

                current = calculate_current(voltage, resistance);

                printf(
                    "The calculated current is: %.3f A\n",
                    current
                );
                break;

            case 3:
                printf("Please enter the voltage: ");

                if (scanf("%lf", &voltage) != 1)
                {
                    printf("Invalid voltage.\n");
                    return 1;
                }

                printf("Please enter the current in amperes: ");

                if (scanf("%lf", &current) != 1)
                {
                    printf("Invalid current.\n");
                    return 1;
                }

                if (voltage < 0 || current <= 0)
                {
                    printf(
                        "Voltage cannot be negative and "
                        "current must be greater than zero.\n"
                    );
                    return 1;
                }

                resistance =
                    calculate_resistance(voltage, current);

                printf(
                    "The calculated resistance is: %.2f ohms\n",
                    resistance
                );
                break;

            case 4:
                printf("Please enter the voltage: ");

                if (scanf("%lf", &voltage) != 1)
                {
                    printf("Invalid voltage.\n");
                    return 1;
                }

                printf("Please enter the current in amperes: ");

                if (scanf("%lf", &current) != 1)
                {
                    printf("Invalid current.\n");
                    return 1;
                }

                if (voltage < 0 || current < 0)
                {
                    printf(
                        "Voltage and current cannot be negative.\n"
                    );
                    return 1;
                }

                power = calculate_power(voltage, current);

                printf(
                    "The calculated power is: %.2f W\n",
                    power
                );
                break;

            case 0:
                printf("Exiting the program.\n");
                break;

            default:
                printf(
                    "Invalid choice. Enter a number from 0 to 4.\n"
                );
                break;
        }

    } while (choice != 0);

    return 0;
}
double calculate_voltage(double current, double resistance)
{
    return current * resistance;
}

double calculate_current(double voltage, double resistance)
{
    return voltage / resistance;
}

double calculate_power(double voltage, double current)
{
    return voltage * current;
}

double calculate_resistance(double voltage, double current)
{
    return voltage / current;
}
