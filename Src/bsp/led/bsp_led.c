/**
  ******************************************************************************
  * �ļ�����: bsp_led.c 
  * ��    ��: ӲʯǶ��ʽ�����Ŷ�
  * ��    ��: V1.0
  * ��д����: 2015-10-04
  * ��    ��: ����HAL��İ���LED�Ƶײ�����ʵ��
  ******************************************************************************
  * ˵����
  * ����������Ӳʯstm32������YS-F1Proʹ�á�
  * 
  * �Ա���
  * ��̳��http://www.ing10bbs.com
  * ��Ȩ��ӲʯǶ��ʽ�����Ŷ����У��������á�
  ******************************************************************************
  */
/**
  * �ܶ��ѧ�߿��ܻ��ɻ�bsp_led.c��bsp_led.h�������ļ��������ģ����ǲ��ǹٷ�����
  * �ģ���ʵ���ϣ��������ļ���Ҫ�������Լ������ģ�����Ҳ�������Լ��ô���ġ�
  * ����Ѿ�����Ӧ�ò�εĴ���ST�ٷ��ǲ��ṩ�ģ���Ҫ���Ǹ����Լ��Ŀ�����Ӳ����
  * ��д���ǵĳ���������Ҫ�����Լ��½��ļ���д��
  */

/* ����ͷ�ļ� ----------------------------------------------------------------*/
#include "led/bsp_led.h"

/* ˽�����Ͷ��� --------------------------------------------------------------*/
/* ˽�к궨�� ----------------------------------------------------------------*/
/* ˽�б��� ------------------------------------------------------------------*/
/* ��չ���� ------------------------------------------------------------------*/
/* ˽�к���ԭ�� --------------------------------------------------------------*/
/* ������ --------------------------------------------------------------------*/

/**
  * ��������: ����LED��IO���ų�ʼ��.
  * �������: ��
  * �� �� ֵ: ��
  * ˵    ����ʹ�ú궨�巽������������źţ����������ֲ��ֻҪ���޸�bsp_led.h
  *           �ļ���غ궨��Ϳ��Է����޸����š�
  */
void LED_GPIO_Init(void)
{
   /* ����IOӲ����ʼ���ṹ����� */
  GPIO_InitTypeDef GPIO_InitStruct;
	
	/* ʹ��(����)LED���Ŷ�ӦIO�˿�ʱ�� */  
  LED1_RCC_CLK_ENABLE();
  LED2_RCC_CLK_ENABLE();
  LED3_RCC_CLK_ENABLE();
  LED4_RCC_CLK_ENABLE();
  LED5_RCC_CLK_ENABLE();
  LED6_RCC_CLK_ENABLE();
  LED7_RCC_CLK_ENABLE();
  LED8_RCC_CLK_ENABLE();
  
  /* ����LED1���������ѹ */
  HAL_GPIO_WritePin(LED1_GPIO, LED1_GPIO_PIN, GPIO_PIN_SET);

  /* ����LED2���������ѹ */
  HAL_GPIO_WritePin(LED2_GPIO, LED2_GPIO_PIN, GPIO_PIN_SET);
  
  /* ����LED3���������ѹ */
  HAL_GPIO_WritePin(LED3_GPIO, LED3_GPIO_PIN, GPIO_PIN_SET);
  
  /* ����LED4���������ѹ */
  HAL_GPIO_WritePin(LED4_GPIO, LED4_GPIO_PIN, GPIO_PIN_SET);
  
  /* ����LED5���������ѹ */
  HAL_GPIO_WritePin(LED5_GPIO, LED5_GPIO_PIN, GPIO_PIN_SET);
  
  /* ����LED6���������ѹ */
  HAL_GPIO_WritePin(LED6_GPIO, LED6_GPIO_PIN, GPIO_PIN_SET);
  
  /* ����LED7���������ѹ */
  HAL_GPIO_WritePin(LED7_GPIO, LED7_GPIO_PIN, GPIO_PIN_SET);
  
  /* ����LED8���������ѹ */
  HAL_GPIO_WritePin(LED8_GPIO, LED8_GPIO_PIN, GPIO_PIN_SET);
  
  /* �趨LED1��Ӧ����IO��� */
  GPIO_InitStruct.Pin = LED1_GPIO_PIN;
  /* �趨LED1��Ӧ����IOΪ���ģʽ */
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  /* �趨LED1��Ӧ����IO�����ٶ� */
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  /* ��ʼ��LED1��Ӧ����IO */
  HAL_GPIO_Init(LED1_GPIO, &GPIO_InitStruct);
  
  /* �趨LED2��Ӧ����IO��� */
  GPIO_InitStruct.Pin = LED2_GPIO_PIN;
  /* �趨LED2��Ӧ����IOΪ���ģʽ */
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  /* �趨LED2��Ӧ����IO�����ٶ� */
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  /* ��ʼ��LED2��Ӧ����IO */
  HAL_GPIO_Init(LED2_GPIO, &GPIO_InitStruct);
  
  /* �趨LED3��Ӧ����IO��� */
  GPIO_InitStruct.Pin = LED3_GPIO_PIN;
  /* �趨LED3��Ӧ����IOΪ���ģʽ */
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  /* �趨LED3��Ӧ����IO�����ٶ� */
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  /* ��ʼ��LED3��Ӧ����IO */
  HAL_GPIO_Init(LED3_GPIO, &GPIO_InitStruct);
  
  /* �趨LED4��Ӧ����IO��� */
  GPIO_InitStruct.Pin = LED4_GPIO_PIN;
  /* �趨LED4��Ӧ����IOΪ���ģʽ */
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  /* �趨LED4��Ӧ����IO�����ٶ� */
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  /* ��ʼ��LED4��Ӧ����IO */
  HAL_GPIO_Init(LED4_GPIO, &GPIO_InitStruct);
  
  /* �趨LED5��Ӧ����IO��� */
  GPIO_InitStruct.Pin = LED5_GPIO_PIN;
  /* �趨LED5��Ӧ����IOΪ���ģʽ */
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  /* �趨LED5��Ӧ����IO�����ٶ� */
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  /* ��ʼ��LED5��Ӧ����IO */
  HAL_GPIO_Init(LED5_GPIO, &GPIO_InitStruct);
  
  /* �趨LED6��Ӧ����IO��� */
  GPIO_InitStruct.Pin = LED6_GPIO_PIN;
  /* �趨LED6��Ӧ����IOΪ���ģʽ */
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  /* �趨LED6��Ӧ����IO�����ٶ� */
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  /* ��ʼ��LED6��Ӧ����IO */
  HAL_GPIO_Init(LED6_GPIO, &GPIO_InitStruct);
  
  /* �趨LED7��Ӧ����IO��� */
  GPIO_InitStruct.Pin = LED7_GPIO_PIN;
  /* �趨LED7��Ӧ����IOΪ���ģʽ */
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  /* �趨LED7��Ӧ����IO�����ٶ� */
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  /* ��ʼ��LED7��Ӧ����IO */
  HAL_GPIO_Init(LED7_GPIO, &GPIO_InitStruct);
  
  /* �趨LED8��Ӧ����IO��� */
  GPIO_InitStruct.Pin = LED8_GPIO_PIN;
  /* �趨LED8��Ӧ����IOΪ���ģʽ */
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  /* �趨LED8��Ӧ����IO�����ٶ� */
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  /* ��ʼ��LED8��Ӧ����IO */
  HAL_GPIO_Init(LED8_GPIO, &GPIO_InitStruct);
  
}

/**
  * ��������: ���ð���LED�Ƶ�״̬
  * �������: LEDx:����x������Ϊ(1,2,3,4,5,6,7,8)����ѡ���Ӧ��LED��
  * ���������state:����LED�Ƶ����״̬��
  *             ��ѡֵ��LED_OFF��LED����
  *                     LED_ON�� LED������
  *                     LED_TOGGLE����תLED
  * �� �� ֵ: ��
  * ˵    �����ú���ʹ�����Ʊ�׼�⺯���ı�̷�������������׼�⺯�����˼�롣
  */
void LEDx_StateSet(uint8_t LEDx,LEDState_TypeDef state)
{
  /* �����������Ƿ�Ϸ� */
  assert_param(IS_LED_TYPEDEF(LEDx));
  assert_param(IS_LED_STATE(state));
  
  /* �ж����õ�LED��״̬���������ΪLED���� */
  if(state==LED_OFF)
  {
    if(LEDx & LED1)            
      LED1_OFF;/* LED1�� */
    
    if(LEDx & LED2)
      LED2_OFF;/* LED2�� */
    
    if(LEDx & LED3)
      LED3_OFF;/* LED2�� */
    
    if(LEDx & LED4)
      LED4_OFF;/* LED4�� */   
    
    if(LEDx & LED5)
      LED5_OFF;/* LED5�� */  
    
    if(LEDx & LED6)
      LED6_OFF;/* LED6�� */ 
    
    if(LEDx & LED7)
      LED7_OFF;/* LED7�� */ 
    
    if(LEDx & LED8)
      LED8_OFF;/* LED8�� */         
  }
  else if(state==LED_ON) /* ����LED��Ϊ�� */
  {
    if(LEDx & LED1)
      LED1_ON;/* LED1�� */
    
    if(LEDx & LED2)
      LED2_ON;/* LED2�� */
    
    if(LEDx & LED3)
      LED3_ON;/* LED3�� */ 
    
    if(LEDx & LED4)
      LED4_ON;/* LED4�� */ 
    
    if(LEDx & LED5)
      LED5_ON;/* LED5�� */ 
    
    if(LEDx & LED6)
      LED6_ON;/* LED6�� */ 
    
    if(LEDx & LED7)
      LED7_ON;/* LED7�� */ 
    
    if(LEDx & LED8)
      LED8_ON;/* LED8�� */ 
  }
  
  else
  {
    if(LEDx & LED1)
      LED1_TOGGLE;/* �������������ת */
    
    if(LEDx & LED2)
      LED2_TOGGLE;/* �������������ת */
    
    if(LEDx & LED3)
      LED3_TOGGLE;/* �������������ת */ 
    
    if(LEDx & LED4)
      LED4_TOGGLE;/* �������������ת */ 
    
    if(LEDx & LED5)
      LED5_TOGGLE;/* �������������ת */ 
    
    if(LEDx & LED6)
      LED6_TOGGLE;/* �������������ת */
    
    if(LEDx & LED7)
      LED7_TOGGLE;/* �������������ת */  
    
    if(LEDx & LED8)
      LED3_TOGGLE;/* �������������ת */ 
  }
}

/******************* (C) COPYRIGHT 2015-2020 ӲʯǶ��ʽ�����Ŷ� *****END OF FILE****/
