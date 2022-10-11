/*=============== Includes ===============*/
#include "../Common/TypeDefs.h"
/*=============== TYPEDEFS ===============*/
/*Ports*/
typedef enum{
    PORTA,
    PORTB
}PORT_t;
/*Pins*/
typedef enum{
    PIN0,
    PIN1
}PIN_t;
/*Pin Modes*/
typedef enum{
    INPUT,
    OUTPUT
}MODE_t;
/*output levels*/
typedef enum{
    LOW,
    HIGH
}DATA_LEVEL_t;

/* Config structure */
typedef struct dioConfig{
    PORT_t port;
    PIN_t pin;
    MODE_t mode;
}st_DIO_Config;

/*====================== Function Prototypes =====================*/

void DIO_Init(st_DIO_Config *configstruct);
void DIO_write(st_DIO_Config *configstruct, DATA_LEVEL_t output);
uint8_t DIO_read(st_DIO_Config *configstruct);