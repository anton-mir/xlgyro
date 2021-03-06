/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdbool.h>
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/**
 * @brief Stores current primask register and disables interrupts
 * @def ENTER_CRITICAL_SECTION()
 * @note Macroses ENTER_CRITICAL_SECTION() and EXIT_CRITICAL_SECTION()
 *       should be in one scope e.g. in one code block and could not be nested.
 *       Otherwice it will cause compilation error
 */
#define ENTER_CRITICAL_SECTION()        { \
                                            uint32_t prim = __get_PRIMASK(); \
                                            __disable_irq(); \

/**
 * @brief Enables interrupts if they were enabled before
 * @def EXIT_CRITICAL_SECTION()
 * @note Macroses ENTER_CRITICAL_SECTION() and EXIT_CRITICAL_SECTION()
 *       should be in one scope e.g. in one code block and could not be nested.
 *       Otherwice it will cause compilation error
 */
#define EXIT_CRITICAL_SECTION()             if (!prim) \
                                            { \
                                                __enable_irq(); \
                                            } \
                                        } \

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
