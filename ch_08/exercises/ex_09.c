//
// Created by erkam on 2/27/25.
//

#include <stdio.h>

int main(void)
{
    int temperature_readings[30][24];
    long sum = 0;

    int row_size = sizeof(temperature_readings) / sizeof(temperature_readings[0]);
    int column_size = sizeof(temperature_readings[0]) / sizeof(temperature_readings[0][0]);

    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < column_size; j++)
            temperature_readings[i][j] = j;
    }

    for (int i = 0; i < row_size; i++)
    {
        for (int j = 0; j < column_size; j++)
            sum += temperature_readings[i][j];
    }

    double average_temperature = (double)sum / (row_size * column_size);
    printf("Average temperature: %.2f\n", average_temperature);
}