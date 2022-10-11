/*=============== Includes ===============*/
#include "../MCAL/DIO.h"

/*=============== TYPEDEFS ===============*/

typedef enum{
    CLOSED,
    OPENED
}LevelState_t;

/* Config structure */
typedef struct switchConfig{
    st_DIO_Config DIO;
}st_Switch_Config;

/*====================== Function Prototypes =====================*/
void Switch_Init(st_Switch_Config *configstruct);
LevelState_t Switch_read(st_Switch_Config *configstruct);
