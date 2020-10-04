/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f0xx_hal.h"
#include "stm32f0xx_ll_adc.h"
#include "stm32f0xx_ll_crs.h"
#include "stm32f0xx_ll_rcc.h"
#include "stm32f0xx_ll_bus.h"
#include "stm32f0xx_ll_system.h"
#include "stm32f0xx_ll_exti.h"
#include "stm32f0xx_ll_cortex.h"
#include "stm32f0xx_ll_utils.h"
#include "stm32f0xx_ll_pwr.h"
#include "stm32f0xx_ll_dma.h"
#include "stm32f0xx_ll_spi.h"
#include "stm32f0xx_ll_tim.h"
#include "stm32f0xx_ll_gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define START_Pin LL_GPIO_PIN_0
#define START_GPIO_Port GPIOA
#define START_EXTI_IRQn EXTI0_1_IRQn
#define END_Pin LL_GPIO_PIN_1
#define END_GPIO_Port GPIOA
#define END_EXTI_IRQn EXTI0_1_IRQn
#define DRV_EN_Pin LL_GPIO_PIN_2
#define DRV_EN_GPIO_Port GPIOA
#define DIR_Pin LL_GPIO_PIN_3
#define DIR_GPIO_Port GPIOA
#define STEP_Pin LL_GPIO_PIN_4
#define STEP_GPIO_Port GPIOA
#define SPI1_CSN_Pin LL_GPIO_PIN_1
#define SPI1_CSN_GPIO_Port GPIOB
#define HX711_DOUT_Pin LL_GPIO_PIN_13
#define HX711_DOUT_GPIO_Port GPIOA
#define HX711_CLK_Pin LL_GPIO_PIN_14
#define HX711_CLK_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

extern __IO uint16_t MCUtemp;
extern uint8_t startTrigger;
extern uint8_t endTrigger;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
