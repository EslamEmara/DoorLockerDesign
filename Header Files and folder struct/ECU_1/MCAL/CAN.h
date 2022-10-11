/*=============== Includes ===============*/
#include "../Common/TypeDefs.h"

/*=============== TYPEDEFS ===============*/

/*messages IDs*/
typedef enum{
    DoorSensorMsg,
    LightSwitchMsg,
    SpeedSensorMsg
}MSG_t;
typedef enum{
    CAN_125KBPS,
    CAN_500KBPS,
}SPEED_t;


/* Config structure */
typedef struct dioConfig{
    MSG_t messageID;
    uint8_t dataBytes:4;
    SPEED_t speed;

}st_CAN_Config;

/*====================== Function Prototypes =====================*/

void CAN_Init(st_CAN_Config *configstruct);
void CAN_write(st_CAN_Config *configstruct, uint8_t[] data);
uint8_t* CAN_read(st_CAN_Config *configstruct);
