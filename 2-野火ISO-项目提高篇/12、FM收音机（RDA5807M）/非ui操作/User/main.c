/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2013-xx-xx
  * @brief   fm收音机测试(RDA5807M)
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火 iSO STM32 开发板 
  * 论坛    :http://www.chuxue123.com
  * 淘宝    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */
  
#include "stm32f10x.h"
#include "bsp_rda5807m.h"


/**
  * @brief  主函数
  * @param  无  
  * @retval 无
  */
int main(void)
{
	RDA5807_FM_Test();
}

/*********************************************END OF FILE**********************/
