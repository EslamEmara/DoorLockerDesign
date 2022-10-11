/*=============== Includes ===============*/
#include "../HAL/Buzzer.h"
#include "../HAL/Light.h"


/*=============== TYPEDEFS ===============*/

typedef enum {
    LeftLightID,
    RightLight_ID,
    BuzzerID
}ActuatorIDs_t;

/*====================== Function Prototypes =====================*/
void         Output_init    (ActuatorIDs_t ActuatorID);
void         Ouput_ON       (ActuatorIDs_t ActuatorID);
void         Ouput_OFF      (ActuatorIDs_t ActuatorID);
