/**
	******************************************************************************
	* @file    GPIO/IOToggle/main.c 
	* @author  MCD Application Team
	* @version V3.5.0
	* @date    08-April-2011
	* @brief   Main program body.
	******************************************************************************
	* @attention
	*
	* THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
	* WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
	* TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
	* DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
	* FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
	* CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
	*
	* <h2><center>&copy; COPYRIGHT 2011 STMicroelectronics</center></h2>
	******************************************************************************
	*/ 

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "led.h"
#include "systick.h"
#include "common.h"

/** @addtogroup STM32F10x_StdPeriph_Examples
	* @{
	*/

/** @addtogroup GPIO_IOToggle
	* @{
	*/

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/


/**
	* @brief  Main program.
	* @param  None
	* @retval None
	*/
int main(void)
{
	/*!< At this stage the microcontroller clock setting is already configured, 
			 this is done through SystemInit() function which is called from startup
			 file (startup_stm32f10x_xx.s) before to branch to application main.
			 To reconfigure the default setting of SystemInit() function, refer to
			 system_stm32f10x.c file
	*/

	LED_Config();
	USART1_Config();
	SysTick_Init();

    LOG_INFO("System Started");

	while (1)
	{
		LED_Board(LED_ON);
		Delay_ms(1000);
		LED_Board(LED_OFF);
		Delay_ms(1000);

        LOG_DBG("hello");
	}
}

#ifdef  USE_FULL_ASSERT

/**
	* @brief  Reports the name of the source file and the source line number
	*         where the assert_param error has occurred.
	* @param  file: pointer to the source file name
	* @param  line: assert_param error line source number
	* @retval None
	*/
void assert_failed(uint8_t* file, uint32_t line)
{ 
	/* User can add his own implementation to report the file name and line number,
		 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */
	while (1)
	{
	}
}

#endif

/**
	* @}
	*/

/**
	* @}
	*/

/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/
