/*=============== Includes ===============*/
#include "../MCAL/ADC.h"

/*=============== TYPEDEFS ===============*/



/* Config structure */
typedef struct speedConfig{
    st_ADC_Config ADC;
}st_Speed_Config;

/*====================== Function Prototypes =====================*/
void SpeedSensor_Init(st_Speed_Config *configstruct);
uint16_t SpeedSensor_Read(st_Speed_Config *configstruct);
