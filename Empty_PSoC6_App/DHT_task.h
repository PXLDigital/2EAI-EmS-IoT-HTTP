#ifndef DHT_TASK
#define DHT_TASK

#include "main.h"

#define timeout_duration 100

TaskHandle_t DHT_Task_handle;

float Fraction_Convert(uint8_t num);
void DHT_Start(void);
uint8 DHT_Read(float *humidity, float *temperature);
void DHT_Task(void *pvParameters);

#endif