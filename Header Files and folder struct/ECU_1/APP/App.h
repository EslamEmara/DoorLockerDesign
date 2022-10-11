/*=============== Includes ===============*/
#include "../Service/CommManager.h"
#include "../Service/SensorManager.h"
#include "../Service/OutputManager.h"


/*====================== Function Prototypes =====================*/


/* 3 Periodic functions pushing data into queue*/
LevelState_t GetDoorState(SensorIDs_t sensorID);                /*Called every 10ms by operating system*/
LevelState_t GetSwitchState(SensorIDs_t sensorID);              /*Called every 20ms by operating system*/
uint16_t     GetSpeed(SensorIDs_t sensorID);                    /*Called every 5ms by operating system*/


/*Event triggered function sends whenever queue is available*/
void SendDataToActuators(uint8_t data);                         /*Sending data via CAN bus*/
