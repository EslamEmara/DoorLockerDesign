/*=============== Includes ===============*/
#include "../MCAL/DIO.h"

/*=============== TYPEDEFS ===============*/



/* Config structure */
typedef struct doorConfig{
    st_DIO_Config DIO;
}st_DoorSensor_Config;

/*====================== Function Prototypes =====================*/
void DoorSensor_Init(st_DoorSensor_Config *configstruct);
DATA_LEVEL_t DoorSensor_read(st_DoorSensor_Config *configstruct);
