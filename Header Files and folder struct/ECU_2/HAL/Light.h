/*=============== Includes ===============*/
#include "../MCAL/DIO.h"

/*=============== TYPEDEFS ===============*/


/* Config structure */
typedef struct lightConfig{
    st_DIO_Config DIO;
}st_Light_Config;

/*====================== Function Prototypes =====================*/
void Light_Init(st_Light_Config *configstruct);
void Light_ON(st_Light_Config *configstruct);
void Light_OFF(st_Light_Config *configstruct);
void Light_write(st_Light_Config *configstruct,DATA_LEVEL_t out);
