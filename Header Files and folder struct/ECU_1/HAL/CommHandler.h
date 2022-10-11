/*=============== Includes ===============*/
#include "../MCAL/CAN.h"

/*=============== Config =================*/
#define CAN
/*=============== TYPEDEFS ===============*/


/* Config structure */
#ifdef CAN

    /*====================== Function Prototypes =====================*/
    void Data_SendViaCAN(st_CAN_Config *configstruct);
    uint8_t* Data_ReceiveViaCAN(st_CAN_Config *configstruct);

#endif

