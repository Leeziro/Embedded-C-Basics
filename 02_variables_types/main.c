

#include <stdio.h>

int main(void)
{
    int count = 5;
    float temp = 23.75f;
    char status = 'A';
    unsigned int voltage_mv = 3300;

    printf("count: %d\n", count);
    printf("Temperature: %.2f C\n", temp);
    printf("Status: %c\n", status);
    printf("Voltage: %u mV\n", voltage_mv);

    return 0;
}