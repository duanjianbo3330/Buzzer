#ifndef __BSP_LED_H__
#define __BSP_LED_H__

/* ����ͷ�ļ� ----------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* ���Ͷ��� ------------------------------------------------------------------*/
typedef enum
{
  LED_OFF = 0,
  LED_ON  = 1,
  LED_TOGGLE = 2,
}LEDState_TypeDef;
#define IS_LED_STATE(STATE)           (((STATE) == LED_OFF) || ((STATE) == LED_ON) || ((STATE) == LED_TOGGLE))

/* �궨�� --------------------------------------------------------------------*/
#define LED1                          (uint8_t)0x01
#define LED2                          (uint8_t)0x02
#define LED3                          (uint8_t)0x04
#define LED4                          (uint8_t)0x08
#define LED5                          (uint8_t)0x10
#define LED6                          (uint8_t)0x20
#define LED7                          (uint8_t)0x40
#define LED8                          (uint8_t)0x80

#define IS_LED_TYPEDEF(LED)           (((LED) == LED1) || ((LED) == LED2) || ((LED) == LED3) || ((LED) == LED4) || ((LED) == LED5) || ((LED) == LED6) || ((LED) == LED7) || ((LED) == LED8))

/*
 * ���º궨�����ݸ�������Ӳ��ϢϢ��أ���Ҫ�鿴�������·ԭ��ͼ������ȷ��д��
 * ���磬��ԭ��ͼ����LED1�ƽ���stm32f103оƬ��PB0�����ϣ������й�LED1�ĺ궨��
 * ������GPIOB��GPIO_Pin_0��صģ�����ר�Ű���Щ�뿪����Ӳ����ص����ݶ���Ϊ�꣬
 * ������޸Ļ�����ֲ����ǳ����㡣
 */
#define LED1_RCC_CLK_ENABLE()         __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED1_GPIO_PIN                 GPIO_PIN_0
#define LED1_GPIO                     GPIOC

#define LED2_RCC_CLK_ENABLE()         __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED2_GPIO_PIN                 GPIO_PIN_1
#define LED2_GPIO                     GPIOC

#define LED3_RCC_CLK_ENABLE()         __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED3_GPIO_PIN                 GPIO_PIN_2
#define LED3_GPIO                     GPIOC

#define LED4_RCC_CLK_ENABLE()         __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED4_GPIO_PIN                 GPIO_PIN_3
#define LED4_GPIO                     GPIOC

#define LED5_RCC_CLK_ENABLE()         __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED5_GPIO_PIN                 GPIO_PIN_4
#define LED5_GPIO                     GPIOC

#define LED6_RCC_CLK_ENABLE()         __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED6_GPIO_PIN                 GPIO_PIN_5
#define LED6_GPIO                     GPIOC

#define LED7_RCC_CLK_ENABLE()         __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED7_GPIO_PIN                 GPIO_PIN_6
#define LED7_GPIO                     GPIOC

#define LED8_RCC_CLK_ENABLE()         __HAL_RCC_GPIOC_CLK_ENABLE()
#define LED8_GPIO_PIN                 GPIO_PIN_7
#define LED8_GPIO                     GPIOC


#define LED1_ON                       HAL_GPIO_WritePin(LED1_GPIO,LED1_GPIO_PIN,GPIO_PIN_RESET)         // ����͵�ƽ
#define LED1_OFF                      HAL_GPIO_WritePin(LED1_GPIO,LED1_GPIO_PIN,GPIO_PIN_SET)           // ����ߵ�ƽ
#define LED1_TOGGLE                   HAL_GPIO_TogglePin(LED1_GPIO,LED1_GPIO_PIN)                       // �����ת

#define LED2_ON                       HAL_GPIO_WritePin(LED2_GPIO,LED2_GPIO_PIN,GPIO_PIN_RESET)         // ����͵�ƽ
#define LED2_OFF                      HAL_GPIO_WritePin(LED2_GPIO,LED2_GPIO_PIN,GPIO_PIN_SET)           // ����ߵ�ƽ
#define LED2_TOGGLE                   HAL_GPIO_TogglePin(LED2_GPIO,LED2_GPIO_PIN)                       // �����ת

#define LED3_ON                       HAL_GPIO_WritePin(LED3_GPIO,LED3_GPIO_PIN,GPIO_PIN_RESET)         // ����͵�ƽ
#define LED3_OFF                      HAL_GPIO_WritePin(LED3_GPIO,LED3_GPIO_PIN,GPIO_PIN_SET)           // ����ߵ�ƽ
#define LED3_TOGGLE                   HAL_GPIO_TogglePin(LED3_GPIO,LED3_GPIO_PIN)                       // �����ת

#define LED4_ON                       HAL_GPIO_WritePin(LED4_GPIO,LED4_GPIO_PIN,GPIO_PIN_RESET)         // ����͵�ƽ
#define LED4_OFF                      HAL_GPIO_WritePin(LED4_GPIO,LED4_GPIO_PIN,GPIO_PIN_SET)           // ����ߵ�ƽ
#define LED4_TOGGLE                   HAL_GPIO_TogglePin(LED4_GPIO,LED4_GPIO_PIN)                       // �����ת

#define LED5_ON                       HAL_GPIO_WritePin(LED5_GPIO,LED5_GPIO_PIN,GPIO_PIN_RESET)         // ����͵�ƽ
#define LED5_OFF                      HAL_GPIO_WritePin(LED5_GPIO,LED5_GPIO_PIN,GPIO_PIN_SET)           // ����ߵ�ƽ
#define LED5_TOGGLE                   HAL_GPIO_TogglePin(LED5_GPIO,LED5_GPIO_PIN)                       // �����ת

#define LED6_ON                       HAL_GPIO_WritePin(LED6_GPIO,LED6_GPIO_PIN,GPIO_PIN_RESET)         // ����͵�ƽ
#define LED6_OFF                      HAL_GPIO_WritePin(LED6_GPIO,LED6_GPIO_PIN,GPIO_PIN_SET)           // ����ߵ�ƽ
#define LED6_TOGGLE                   HAL_GPIO_TogglePin(LED6_GPIO,LED6_GPIO_PIN)                       // �����ת

#define LED7_ON                       HAL_GPIO_WritePin(LED7_GPIO,LED7_GPIO_PIN,GPIO_PIN_RESET)         // ����͵�ƽ
#define LED7_OFF                      HAL_GPIO_WritePin(LED7_GPIO,LED7_GPIO_PIN,GPIO_PIN_SET)           // ����ߵ�ƽ
#define LED7_TOGGLE                   HAL_GPIO_TogglePin(LED7_GPIO,LED7_GPIO_PIN)                       // �����ת

#define LED8_ON                       HAL_GPIO_WritePin(LED8_GPIO,LED8_GPIO_PIN,GPIO_PIN_RESET)         // ����͵�ƽ
#define LED8_OFF                      HAL_GPIO_WritePin(LED8_GPIO,LED8_GPIO_PIN,GPIO_PIN_SET)           // ����ߵ�ƽ
#define LED8_TOGGLE                   HAL_GPIO_TogglePin(LED8_GPIO,LED8_GPIO_PIN)                       // �����ת




/* ��չ���� ------------------------------------------------------------------*/
/* �������� ------------------------------------------------------------------*/
void LED_GPIO_Init(void);
void LEDx_StateSet(uint8_t LEDx,LEDState_TypeDef state);

#endif  // __BSP_LED_H__

/******************* (C) COPYRIGHT 2015-2020 ӲʯǶ��ʽ�����Ŷ� *****END OF FILE****/
