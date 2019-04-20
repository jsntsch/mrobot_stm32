#ifndef __MPUIIC_H
#define __MPUIIC_H
#include "common.h"
#include "sys.h"

// IIC
#define			I2C_PORT				GPIOA
#define 		I2C1_SCL				GPIO_Pin_0
#define 		I2C1_SDA				GPIO_Pin_1
#define 		I2C2_SCL				GPIO_Pin_2
#define 		I2C2_SDA				GPIO_Pin_3

//IO��������
#define MPU_SDA_IN()  {GPIOB->CRL&=0X0FFFFFFF;GPIOB->CRL|=(u32)8<<28;} 
#define MPU_SDA_OUT() {GPIOB->CRL&=0X0FFFFFFF;GPIOB->CRL|=(u32)3<<28;}

//IO��������	 
#define MPU_IIC_SCL    PBout(0) 		//SCL
#define MPU_IIC_SDA    PBout(1) 		//SDA	 
#define MPU_READ_SDA   PBin(1) 		//����SDA 

//IIC���в�������
void MPU_IIC_Delay(void);				//MPU IIC��ʱ����
void MPU_IIC_Init(void);                //��ʼ��IIC��IO��				 
void MPU_IIC_Start(void);				//����IIC��ʼ�ź�
void MPU_IIC_Stop(void);	  			//����IICֹͣ�ź�
void MPU_IIC_Send_Byte(_u8 txd);			//IIC����һ���ֽ�
_u8 MPU_IIC_Read_Byte(unsigned char ack);//IIC��ȡһ���ֽ�
_u8 MPU_IIC_Wait_Ack(void); 				//IIC�ȴ�ACK�ź�
void MPU_IIC_Ack(void);					//IIC����ACK�ź�
void MPU_IIC_NAck(void);				//IIC������ACK�ź�

void IMPU_IC_Write_One_Byte(u8 daddr,u8 addr,u8 data);
_u8 MPU_IIC_Read_One_Byte(u8 daddr,u8 addr);	  
#endif
















