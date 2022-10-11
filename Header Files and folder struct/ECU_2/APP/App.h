/*=============== Includes ===============*/
#include "../Service/CommManager.h"
#include "../Service/OutputManager.h"


/*=============== TypeDefs ================*/
typedef enum{
    STATE_A,
    STATE_B,
    STATE_C
}STATES_t;

/*====================== Function Prototypes =====================*/


/*each API of these are called in OS Task*/

/*Pushes incoming data to queue*/
uint8_t* GetDataviaCAN(st_COMM_Config *configstruct);

/*Processes incoming data to select the state*/
STATES_t UpdateStateMachine();

/*Execute current state*/
void ExecuteState(STATES_t currentState);

