#include "main.h"
#include "dht22.h"
#include "mq135.h"
#include <stdio.h>

extern UART_HandleTypeDef huart1;

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    MX_USART1_UART_Init();
    MX_ADC1_Init();

    char msg[100];
    float temperature, humidity, gas;

    while (1)
    {
        if (DHT22_Read(&temperature, &humidity) == 0)
        {
            gas = MQ135_Read();

            snprintf(msg, sizeof(msg), "Nhiet do: %.2f*C, Do am: %.2f%%, Gas: %.2fppm\r\n", temperature, humidity, gas);
            HAL_UART_Transmit(&huart1, (uint8_t*)msg, strlen(msg), HAL_MAX_DELAY);
        }
        HAL_Delay(2000);
    }
}
