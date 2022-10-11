/*=============== Includes ===============*/
#include "../Common/TypeDefs.h"

/*=============== TYPEDEFS ===============*/

/*messages IDs*/
typedef enum{
    ADC_CH0,
    ADC_CH1
}ADC_CH_t;

typedef enum{
    ADC_PRE8,
    ADC_PRE16
}ADC_Prescalars_t;

typedef enum{
    ADC_OneShot,
    ADC_FreeRunning
}ADC_Mode_t;


/* Config structure */
typedef struct adcConfig{
    ADC_CH_t channel;
    ADC_Prescalars_t prescalar;
    ADC_Mode_t mode;
}st_ADC_Config;

/*====================== Function Prototypes =====================*/
void ADC_Init(st_ADC_Config *configstruct);
uint16_t ADC_readChannel(st_ADC_Config *configstruct);
