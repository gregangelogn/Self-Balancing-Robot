/******************************************************************************
 MACROS
 *****************************************************************************/
#ifndef IMU_TASK
#define IMU_TASK

/******************************************************************************
 PUBLIC FUNCTION DECLARATIONS
 *****************************************************************************/

#include <freertos/FreeRTOS.h>
#include <freertos/queue.h>

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t imu_initialize(void);
esp_err_t imu_start_task(void);

#ifdef __cplusplus
}
#endif

#endif // IMU_TASK
