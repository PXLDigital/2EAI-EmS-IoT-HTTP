#ifndef MAIN_H
#define MAIN_H

#include "cy_pdl.h"
#include "cyhal.h"
#include "cybsp.h"
#include "wifi_config.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "cy_retarget_io.h"
#include "cy_wcm.h"
#include "cy_secure_sockets.h"
#include "cy_http_client_api.h"
#include <math.h>
#include <stdio.h>
#include <string.h>

#define DATA_PIN P13_0

/* Error Codes */
#define SUCCESS 0x00
#define DHT_CONNECTION_ERROR 0x01
#define DHT_INCORRECT_VALUE 0x02

cyhal_adc_t adc_obj;
cyhal_adc_channel_t adc_chan_obj;

struct readings
{
    float humidity;
    float temperature;
    uint8 result_code;
};

#endif