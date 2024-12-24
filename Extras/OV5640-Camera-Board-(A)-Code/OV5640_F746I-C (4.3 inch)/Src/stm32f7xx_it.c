/**
  ******************************************************************************
  * @file    stm32f7xx_it.c
  * @brief   Interrupt Service Routines.
  ******************************************************************************
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"
#include "stm32f7xx.h"
#include "stm32f7xx_it.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/
extern DMA_HandleTypeDef hdma_dcmi;
extern DCMI_HandleTypeDef hdcmi;

/******************************************************************************/
/*            Cortex-M7 Processor Interruption and Exception Handlers         */ 
/******************************************************************************/

/**
* @brief This function handles System tick timer.
*/
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */

  /* USER CODE END SysTick_IRQn 0 */
  HAL_IncTick();
  HAL_SYSTICK_IRQHandler();
  /* USER CODE BEGIN SysTick_IRQn 1 */

  /* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32F7xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f7xx.s).                    */
/******************************************************************************/

/**
* @brief This function handles DMA2 stream1 global interrupt.
*/
void DMA2_Stream1_IRQHandler(void)
{
  /* USER CODE BEGIN DMA2_Stream1_IRQn 0 */


//  /* Transfer Error Interrupt management ***************************************/

//    if(__HAL_DMA_GET_IT_SOURCE(&hdma_dcmi, DMA_IT_TE) != RESET)
//    {
//                printf("DMA_IT_TE \r\n");  ///////////////////////////////////////////////////////////////////////
//    }
//  
//  /* FIFO Error Interrupt management ******************************************/

//    if(__HAL_DMA_GET_IT_SOURCE(&hdma_dcmi, DMA_IT_FE) != RESET)
//    {
//                printf("DMA_IT_FE \r\n");  ///////////////////////////////////////////////////////////////////////
//    }
//  
//  /* Direct Mode Error Interrupt management ***********************************/

//    if(__HAL_DMA_GET_IT_SOURCE(&hdma_dcmi, DMA_IT_DME) != RESET)
//    {
//                printf("DMA_IT_DME \r\n");  ///////////////////////////////////////////////////////////////////////
//    }
//  
//  /* Half Transfer Complete Interrupt management ******************************/

//    if(__HAL_DMA_GET_IT_SOURCE(&hdma_dcmi, DMA_IT_HT) != RESET)
//    {
//                printf("DMA_IT_HT \r\n");  ///////////////////////////////////////////////////////////////////////
//    }
//  
//  /* Transfer Complete Interrupt management ***********************************/

//    if(__HAL_DMA_GET_IT_SOURCE(&hdma_dcmi, DMA_IT_TC) != RESET)
//    {
//                printf("DMA_IT_TC \r\n");  ///////////////////////////////////////////////////////////////////////
//    }
 
        
  /* USER CODE END DMA2_Stream1_IRQn 0 */
  HAL_DMA_IRQHandler(&hdma_dcmi);
  /* USER CODE BEGIN DMA2_Stream1_IRQn 1 */

  /* USER CODE END DMA2_Stream1_IRQn 1 */
}

/**
* @brief This function handles DCMI global interrupt.
*/
void DCMI_IRQHandler(void)
{
  /* USER CODE BEGIN DCMI_IRQn 0 */

//  uint32_t isr_value = hdcmi.Instance->MISR;

//  /* Synchronization error interrupt management *******************************/
//  if((isr_value & DCMI_FLAG_ERRRI) == DCMI_FLAG_ERRRI)
//  {
//        printf("DCMI_FLAG_ERRRI \r\n");  ///////////////////////////////////////////////////////////////////////
//  }
//  /* Overflow interrupt management ********************************************/
//  if((isr_value & DCMI_FLAG_OVRRI) == DCMI_FLAG_OVRRI)
//  {
//        printf("DCMI_FLAG_OVRRI \r\n");  ///////////////////////////////////////////////////////////////////////
//  }
//  /* Line Interrupt management ************************************************/
//  if((isr_value & DCMI_FLAG_LINERI) == DCMI_FLAG_LINERI)
//  {
//        printf("DCMI_FLAG_LINERI \r\n");  ///////////////////////////////////////////////////////////////////////
//  }
//  /* VSYNC interrupt management ***********************************************/
//  if((isr_value & DCMI_FLAG_VSYNCRI) == DCMI_FLAG_VSYNCRI)
//  {
//        printf("DCMI_FLAG_VSYNCRI \r\n");  ///////////////////////////////////////////////////////////////////////
//  }
//  /* FRAME interrupt management ***********************************************/
//  if((isr_value & DCMI_FLAG_FRAMERI) == DCMI_FLAG_FRAMERI)
//  {
//        printf("DCMI_FLAG_FRAMERI \r\n");  ///////////////////////////////////////////////////////////////////////
//  }
        
  /* USER CODE END DCMI_IRQn 0 */
  HAL_DCMI_IRQHandler(&hdcmi);
  /* USER CODE BEGIN DCMI_IRQn 1 */

  /* USER CODE END DCMI_IRQn 1 */
}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
