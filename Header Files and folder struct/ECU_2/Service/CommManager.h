/*=============== Includes ===============*/
#include "../HAL/CommHandler.h"

/*=============== Config =================*/
#define USE_CAN
/*=============== TYPEDEFS ===============*/


/* Config structure */
#ifdef USE_CAN
    typedef struct COMMConfig{
        st_CAN_Config MSG;
    }st_COMM_Config;
#endif

/*====================== Function Prototypes =====================*/
void Data_Send(st_COMM_Config *configstruct,uint8_t data);
uint8_t Data_Receive(st_COMM_Config *configstruct);
