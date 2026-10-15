
#include <stdio.h>

#define TEMP_WARNING 70.0f
#define TEMP_CRITICAL 80.0f

#define VIB_WARNING 50.0f
#define VIB_CRITICAL 70.0f

#define CURRENT_WARNING 4.0f
#define CURRENT_CRITICAL 5.0f

int read_sensor_data(float *temperature,
                     float *vibration,
                     float *current)
{
    printf("Enter temperature (C): ");
    if (scanf("%f", temperature) != 1)
        return 0;

    printf("Enter vibration value: ");
    if (scanf("%f", vibration) != 1)
        return 0;

    printf("Enter current (A): ");
    if (scanf("%f", current) != 1)
        return 0;

    return 1;
}

void monitor_motor(float temperature,
                   float vibration,
                   float current)
{
    printf("\n--- Motor Readings ---\n");
    printf("Temperature : %.1f C\n", temperature);
    printf("Vibration   : %.1f\n", vibration);
    printf("Current     : %.1f A\n", current);

    if (temperature < 0 || vibration < 0 || current < 0)
    {
        printf("Status      : INVALID SENSOR INPUT\n");
    }
    else if (temperature >= TEMP_CRITICAL ||
             vibration >= VIB_CRITICAL ||
             current >= CURRENT_CRITICAL)
    {
        printf("Status      : CRITICAL\n");
        printf("Action      : Stop and inspect the motor.\n");
    }
    else if (temperature >= TEMP_WARNING ||
             vibration >= VIB_WARNING ||
             current >= CURRENT_WARNING)
    {
        printf("Status      : WARNING\n");
        printf("Action      : Inspect the motor soon.\n");
    }
    else
    {
        printf("Status      : NORMAL\n");
        printf("Action      : Continue monitoring.\n");
    }
}

int main(void)
{
    float temperature;
    float vibration;
    float current;

    printf("================================\n");
    printf("  MOTOR HEALTH MONITORING SYSTEM\n");
    printf("================================\n\n");

    if (!read_sensor_data(&temperature, &vibration, &current))
    {
        printf("Error: Please enter valid numeric values.\n");
        return 1;
    }

    monitor_motor(temperature, vibration, current);

    return 0;
}


