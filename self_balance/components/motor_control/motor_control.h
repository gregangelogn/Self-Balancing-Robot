/******************************************************************************
 MACROS
 *****************************************************************************/
#ifndef MOTOR_TASK
#define MOTOR_TASK

/******************************************************************************
 PUBLIC FUNCTION DECLARATIONS
 *****************************************************************************/

#include <freertos/FreeRTOS.h>
#include <freertos/queue.h>

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t motor_initialize(void);
esp_err_t motor_start_task(void);

#ifdef __cplusplus
}
#endif

#endif // MOTOR_TASK
