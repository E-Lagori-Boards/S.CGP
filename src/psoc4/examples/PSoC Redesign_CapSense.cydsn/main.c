/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdio.h"
#include "PSoC.h"

 /********************************
 ***START printf() ACCOMODATION***
 *********************************/
 int _write(int file, char *ptr, int len)
 {
     (void) file ;
     int i ;
     for (i = 0 ; i < len ; i++) {
         UART_UartPutChar(*ptr++) ;
     }
     return len ;
 }
/********************************
 ****END printf() ACCOMODATION****
 *********************************/








int main(void){
   
    CyGlobalIntEnable;
    
    struct PSC_McM_6_00 proc1;
    UART_Start();
    CTRL_Write(0);
    
    EZI2C_Start();
    
    EZI2C_EzI2CSetBuffer1(sizeof(Mux_CapSense_dsRam), 
                          sizeof(Mux_CapSense_dsRam),
                         (uint8 *)&Mux_CapSense_dsRam);
    
    Counter_micros_Start();
    Mux_CapSense_Start();
    
    uint8_t i=11;
    unsigned long prev=Counter_micros_ReadCounter();
    
    setmux(&proc1, I12);
    Mux_CapSense_ScanAllWidgets();
    
//    Mux_CapSense_SetupWidget(Mux_CapSense_BUTTON0_WDGT_ID);
//    Mux_CapSense_Scan();
    
    for(;;)
    {
        
        if(Mux_CapSense_NOT_BUSY == Mux_CapSense_IsBusy())
        {
//            if((Counter_micros_ReadCounter() - prev) > 10000)
//            {
//                setmux(&proc1, i);
//                i++;
//                i = (i>13)?11:i;
//                
//                prev = Counter_micros_ReadCounter();     
//            }
            
            Mux_CapSense_ProcessAllWidgets();   //Process 1 by 1
            
            Mux_CapSense_RunTuner();
            
            Mux_CapSense_ScanAllWidgets();    //Process 1by 1             if capsense not busy process and switch mux.

            
        }
        
        
        
        
//        setmux(&proc1, I13);
//        if(Mux_CapSense_NOT_BUSY == Mux_CapSense_IsBusy())
//        {
//            Mux_CapSense_ProcessAllWidgets();
//            
//            Mux_CapSense_RunTuner();      
//            
//            Mux_CapSense_ScanAllWidgets();
//        }
//        
//        setmux(&proc1, I14);
//        if(Mux_CapSense_NOT_BUSY == Mux_CapSense_IsBusy())
//        {
//            Mux_CapSense_ProcessAllWidgets();
//            
//            Mux_CapSense_RunTuner();      
//            
//            Mux_CapSense_ScanAllWidgets();
//        }
    }
}









//int main(void){
//   
//    CyGlobalIntEnable;
//    
//    struct PSC_McM_6_00 proc1;
//    uint32 pos;
////    unsigned long prev = 0;
//    uint8 i=0, k=0;
//    char rec_data[300];
//    
//    UART_Start();
//    CTRL_Write(0);
//    Counter_micros_Start();
//    
//    EZI2C_Start();
//    
//    EZI2C_EzI2CSetBuffer1(sizeof(Mux_CapSense_dsRam), 
//                          sizeof(Mux_CapSense_dsRam),
//                         (uint8 *)&Mux_CapSense_dsRam);
//    
//    Mux_CapSense_Start();
//    
//    setmux(&proc1, I1);
//    
//    bleON_host(&proc1);
//    ble_connect(&proc1, "7cb94c383e3e");    //MAC
//    switchTo(BLE);
//    
//    for(;;)
//    {
//        if(UART_SpiUartGetRxBufferSize()!= 0)
//        {
//            rec_data[i] = UART_UartGetChar();
//            i++;
//        }
//        if(rec_data[i-1] == '#')
//        {
//            rec_data[i] = 0;
//            while(rec_data[i] != 135) i--;
//            if(rec_data[i] == 135)
//            {
//                rec_data[0] = ' ';
//                switchTo(USB);
//                printf("%s\n\n", rec_data);
//                switchTo(BLE);
//            }
//            i=0;
//        }
//        
//        if(Mux_CapSense_NOT_BUSY == Mux_CapSense_IsBusy())
//        {
//            Mux_CapSense_ProcessAllWidgets();
//            
//            Mux_CapSense_RunTuner();      
//            
//            Mux_CapSense_ScanAllWidgets();
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_BUTTON0_WDGT_ID, Mux_CapSense_BUTTON0_SNS0_ID))
//        {
//            k=0;
//            ble_sendData(&proc1, "7\r\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_BUTTON0_WDGT_ID, Mux_CapSense_BUTTON0_SNS1_ID))
//        {
//            k=0;
//            ble_sendData(&proc1, "P\r\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_BUTTON0_WDGT_ID, Mux_CapSense_BUTTON0_SNS2_ID))
//        {
//            if(k==0)
//            {
//                k++;
//                ble_sendData(&proc1, "T\r\n");
//            }
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_COL5_ID))
//        {
//            k=0;
//            ble_sendData(&proc1, "X\r\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_COL1_ID))
//        {
//            k=0;
//            ble_sendData(&proc1, "S\r\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_ROW0_ID))
//        {
//            k=0;
//            ble_sendData(&proc1, "W\r\n");
//        }
//
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_ROW5_ID))
//        {
//            k=0;
//            ble_sendData(&proc1, "E\r\n");
//        }
//    }
//}

/* [] END OF FILE */





//int main(void){
//   
//    CyGlobalIntEnable;
//    
//    struct PSC_McM_6_00 proc1;
//    uint32 pos;
////    unsigned long prev = 0;
//    uint8 i=0, k=0;
//    char rec_data[300];
//    
//    UART_Start();
//    CTRL_Write(0);
//    Counter_micros_Start();
//    
//    EZI2C_Start();
//    
//    EZI2C_EzI2CSetBuffer1(sizeof(Mux_CapSense_dsRam), 
//                          sizeof(Mux_CapSense_dsRam),
//                         (uint8 *)&Mux_CapSense_dsRam);
//    
//    Mux_CapSense_Start();
//    
//    setmux(&proc1, I1);
//    
//    bleON_host(&proc1);
//    ble_connect(&proc1, "7cb94c38752e");    //MAC
//    switchTo(BLE);
//    
//    for(;;)
//    {
//        if(UART_SpiUartGetRxBufferSize()!= 0)
//        {
//            rec_data[i] = UART_UartGetChar();
//            i++;
//        }
//        if(rec_data[i-1] == '#')
//        {
//            rec_data[i] = 0;
//            while(rec_data[i] != 135) i--;
//            if(rec_data[i] == 135)
//            {
//                rec_data[0] = ' ';
//                switchTo(USB);
//                printf("%s\n\n", rec_data);
//                switchTo(BLE);
//            }
//            i=0;
//        }
//        
//        if(Mux_CapSense_NOT_BUSY == Mux_CapSense_IsBusy())
//        {
//            Mux_CapSense_ProcessAllWidgets();
//            
//            Mux_CapSense_RunTuner();      
//            
//            Mux_CapSense_ScanAllWidgets();
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_BUTTON0_WDGT_ID, Mux_CapSense_BUTTON0_SNS0_ID))
//        {
//            k=0;
//            ble_sendData(&proc1, "7\r\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_BUTTON0_WDGT_ID, Mux_CapSense_BUTTON0_SNS1_ID))
//        {
//            k=0;
//            ble_sendData(&proc1, "P\r\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_BUTTON0_WDGT_ID, Mux_CapSense_BUTTON0_SNS2_ID))
//        {
//            if(k==0)
//            {
//                k++;
//                ble_sendData(&proc1, "T\r\n");
//            }
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_COL1_ID))
//        {
//            k=0;
//            if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_COL5_ID))
//                ble_sendData(&proc1, "X\r\n");
//            else ble_sendData(&proc1, "S\r\n");
//        }
//        
////        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_COL1_ID))
////        {
////            k=0;
////            ble_sendData(&proc1, "S\r\n");
////        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_ROW0_ID))
//        {
//            k=0;
//            ble_sendData(&proc1, "W\r\n");
//        }
//
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_ROW5_ID))
//        {
//            k=0;
//            ble_sendData(&proc1, "E\r\n");
//        }
//    }
//}





//int main(void){
//   
//    CyGlobalIntEnable;
//    
//    struct PSC_McM_6_00 proc1;
//    uint32 pos;
////    unsigned long prev = 0;
//    uint8 i=0, k=0;
//    char rec_data[300];
//    
//    UART_Start();
//    CTRL_Write(0);
//    Counter_micros_Start();
//    
//    EZI2C_Start();
//    
//    EZI2C_EzI2CSetBuffer1(sizeof(Mux_CapSense_dsRam), 
//                          sizeof(Mux_CapSense_dsRam),
//                         (uint8 *)&Mux_CapSense_dsRam);
//    
//    Mux_CapSense_Start();
//    
//    for(;;)
//    {   
//        if(Mux_CapSense_NOT_BUSY == Mux_CapSense_IsBusy())
//        {
//            Mux_CapSense_ProcessAllWidgets();
//            
//            Mux_CapSense_RunTuner();      
//            
//            Mux_CapSense_ScanAllWidgets();
//        }
//        
////        pos = Mux_CapSense_GetXYCoordinates(Mux_CapSense_TRACKPAD_WDGT_ID);
////        printf("XY Coordinates: %lu\n", pos);
        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_BUTTON0_WDGT_ID, Mux_CapSense_BUTTON0_SNS0_ID))
//        {
//            printf("BUTTON0 SNS0\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_BUTTON0_WDGT_ID, Mux_CapSense_BUTTON0_SNS1_ID))
//        {
//            printf("BUTTON0 SNS1\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_BUTTON0_WDGT_ID, Mux_CapSense_BUTTON0_SNS2_ID))
//        {
//            printf("BUTTON0 SNS2\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_COL0_ID))
//        {
//            printf("COL0\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_COL1_ID))
//        {
//            printf("COL1\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_COL2_ID))
//        {
//            printf("COL2\n");
//        }
//
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_COL3_ID))
//        {
//            printf("COL3\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_COL4_ID))
//        {
//            printf("COL4\n");
//        }
//
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_COL5_ID))
//        {
//            printf("COL5\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_ROW0_ID))
//        {
//            printf("ROW0\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_ROW1_ID))
//        {
//            printf("ROW1\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_ROW2_ID))
//        {
//            printf("ROW2\n");
//        }
//
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_ROW3_ID))
//        {
//            printf("ROW3\n");
//        }
//        
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_ROW4_ID))
//        {
//            printf("ROW4\n");
//        }
//
//        if(Mux_CapSense_IsSensorActive(Mux_CapSense_TRACKPAD_WDGT_ID, Mux_CapSense_TRACKPAD_ROW5_ID))
//        {
//            printf("ROW5\n");
//        }
//    }
//}



