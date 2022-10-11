/*=============== Includes ===============*/
#include "../HAL/DoorSensor.h"
#include "../HAL/Switch.h"
#include "../HAL/SpeedSensor.h"


/*=============== TYPEDEFS ===============*/

typedef enum {
    DoorSensorID,
    Switch_ID,
    SpeedSensorID
}SensorIDs_t;

/*====================== Function Prototypes =====================*/
void            Sensor_init         (SensorIDs_t sensorID);
uint8_t         Sensor_readByte     (SensorIDs_t sensorID);
LevelState_t    Sensor_readLevel    (SensorIDs_t sensorID);
uint16_t        Sensor_read2Bytes   (SensorIDs_t sensorID);