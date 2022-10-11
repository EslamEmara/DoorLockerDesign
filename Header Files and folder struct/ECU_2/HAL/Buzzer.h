/*=============== Includes ===============*/
#include "../MCAL/DIO.h"

/*=============== TYPEDEFS ===============*/



/* Config structure */
typedef struct buzzerConfig{
    st_DIO_Config DIO;
}st_Buzzer_Config;

/*====================== Function Prototypes =====================*/
void Buzzer_Init(st_Buzzer_Config *configstruct);
void Buzzer_ON(st_Buzzer_Config *configstruct);
void Buzzer_OFF(st_Buzzer_Config *configstruct);
void Buzzer_write(st_Buzzer_Config *configstruct, DATA_LEVEL_t output);
