# IoT assignment

- Ambient light sensor (TFT-shield): values are printed procentually every 20s on the terminal.
- DHT11 sensor
- HTTP communication to push DHT11 data over a php file to SQL database @PXL server.
- DMA mem2mem (prov-of-concept and shown in terminal window)
- FreeRTOS: 4 different tasks + handler are used - did a bit of taskScheduling using vtasksuspend/resume, also through interrupts, critical sections en queueCode.
- LowPower: When all tasks (FreeRTOS) are suspended and/or delayed, DeppSleep is called (using lowPower.c) @ lines 200-213 in FreeRTOSConfig.h file.