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
#include "stdlib.h"
#include "stdio.h"

#ifndef PSOC_H
#define PSOC_H

#define TIMEOUT 1000
#define ADC_MODE 0
#define DAC_MODE 1

#define BLE 1
#define USB 0
    
#define LOW   0
#define HIGH  1

#define ON  0
#define OFF 1

#define C1   11
#define C2   12
#define C3   13
#define C4   14
#define C5   15
#define C6   16
#define C7   17
#define C8   18
#define C9   19
#define C10 110
#define C11 111
#define C12 112
#define C13 113
#define C14 114
#define C15 115
#define C16 116

#define C_A  11
#define C_B  12
#define C_C  13
#define C_D  14
#define C_E  15
#define C_F  16
#define C_G  17
#define C_H  18
#define C_I  19
#define C_J 110
#define C_K 111
#define C_L 112
#define C_M 113
#define C_N 114
#define C_O 115
#define C_P 116

# define O1  0
# define O2  1
# define O3  2
# define O4  3
# define O5  4
# define O6  5
# define O7  6
# define O8  7
# define O9  8
# define O10 9
# define O11 10
# define O12 11
# define O13 12
# define O14 13
# define O15 14
# define O16 15

# define I1  0
# define I2  1
# define I3  2
# define I4  3
# define I5  4
# define I6  5
# define I7  6
# define I8  7
# define I9  8
# define I10 9
# define I11 10
# define I12 11
# define I13 12
# define I14 13
# define I15 14
# define I16 15

#define MISO 59
#define MOSI 58
#define SCLK 60

#define SCL 12
#define SDA 13

#define AMOSI 38
#define AMISO 37

#define ANALOG_IO 8
#define R_LED 64
#define G_LED 15
#define B_LED 6
    

    
struct PSC_McM_6_00{
    uint8 A_Dstate;
    uint32 A_D_period;
    struct boardconf{
        uint8 reserved;
        uint8 brdtype;
        uint8 brdno;
    }b;
    uint8_t con_, sync_;
    struct {
        uint8 timer;// = 6;
        uint freq;// = 5000;
        uint res;//  = 12;
    }dac;
    struct {
        uint32_t device_id;
    }flash;
    struct{
        char ssid[100];
        char password[100];
        char mac[20];
    }bleWiFi;
};

void setmux(struct PSC_McM_6_00 *p, int a){
    switch(a){
        case  I1:    S3_Write(0);   S2_Write(0);    S1_Write(0);    S0_Write(0);     break;
        case  I2:    S3_Write(0);   S2_Write(0);    S1_Write(0);    S0_Write(1);     break;
        case  I3:    S3_Write(0);   S2_Write(0);    S1_Write(1);    S0_Write(0);     break;
        case  I4:    S3_Write(0);   S2_Write(0);    S1_Write(1);    S0_Write(1);     break;
        case  I5:    S3_Write(0);   S2_Write(1);    S1_Write(0);    S0_Write(0);     break;
        case  I6:    S3_Write(0);   S2_Write(1);    S1_Write(0);    S0_Write(1);     break;
        case  I7:    S3_Write(0);   S2_Write(1);    S1_Write(1);    S0_Write(0);     break;
        case  I8:    S3_Write(0);   S2_Write(1);    S1_Write(1);    S0_Write(1);     break;
        case  I9:    S3_Write(1);   S2_Write(0);    S1_Write(0);    S0_Write(0);     break;
        case I10:    S3_Write(1);   S2_Write(0);    S1_Write(0);    S0_Write(1);     break;
        case I11:    S3_Write(1);   S2_Write(0);    S1_Write(1);    S0_Write(0);     break;
        case I12:    S3_Write(1);   S2_Write(0);    S1_Write(1);    S0_Write(1);     break;
        case I13:    S3_Write(1);   S2_Write(1);    S1_Write(0);    S0_Write(0);     break;
        case I14:    S3_Write(1);   S2_Write(1);    S1_Write(0);    S0_Write(1);     break;
        case I15:    S3_Write(1);   S2_Write(1);    S1_Write(1);    S0_Write(0);     break;
        case I16:    S3_Write(1);   S2_Write(1);    S1_Write(1);    S0_Write(1);     break;
    }
}

void delay(int val){
    CyDelay(val);
}

void switchTo(uint8 val){
    uint16 timeout=10000;
    while(UART_SpiUartGetTxBufferSize() != 0 && timeout){timeout--;};
    UART_SpiUartClearTxBuffer();
    UART_SpiUartClearRxBuffer();
    CTRL_Write(val);
}

void PSC_McM_6_00_init(struct PSC_McM_6_00 *p){
    UART_Start();
    switchTo(USB);
}

//ble+wifi
const char* tostring(char str[], int num)
{
    int i, rem, len = 0, n;
    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
    return *str;
}

int bw_writeCmd(struct PSC_McM_6_00 *p, char *atcmd,char *rec_data,int len, unsigned long long timeout){

    char *ptr;
    uint64 j;
    uint16 i;
    volatile int temp;
    ptr=rec_data;

    switchTo(BLE);
    if (strcmp(atcmd,"+++")==0) UART_UartPutString("+++");//printf("%s", atcmd);
    else printf("%s\r\n", atcmd);
    i=0;
    j=timeout;
//    CyDelay(5000);
//    for(k=0;k<100000000;k++);
    for(;;){
        j--;
        if (!j) {
            switchTo(USB);
            printf("Timeout\n");
            switchTo(BLE);
            temp =  -2;break;
        }
        if(UART_SpiUartGetRxBufferSize()!=0ul){
            rec_data[i] = UART_SpiUartReadRxData();
            if ((i>=5) && (strncmp(ptr-5, "\r\nOK\r\n",6)==0)) {temp = i-6; break;}
            if ((i>=8) && (strncmp(ptr-8, "\r\nERROR\r\n",9)==0)) {temp =  -1;break;}
            i++; ptr++;
            if (i==(len-2)) {temp = -3;break;}
        }
    }
    if (temp > 0) rec_data[temp+1] = '\0';
    else rec_data[i+1] = '\0';
    //UART_SpiUartClearRxBuffer();
    switchTo(USB); 
    return temp;
}

int ble_mac(struct PSC_McM_6_00 *p, char *mac){
    uint8 result, i;
    char rec_data[200],*ptr;
    result = bw_writeCmd(p,"AT+BLEMAC?", rec_data, 200, 1000000);
    ptr = rec_data;
    if (result>=0){
        i = result;
        while(rec_data[i] != ':'){
            i--;
            if (i < 0)
                return -2;
        }
        for (uint8 j = 0; j<12; j++)
        {
            mac[j] = rec_data[i+j+1];
        }
        return 0;
    }
    return -1;
}

int ble_checkRFpower(struct PSC_McM_6_00 *p){
    uint8 result, i;
    char rec_data[200],*ptr;
    result = bw_writeCmd(p,"AT+BLERFPWR?", rec_data, 200, 1000000);
    ptr = rec_data;
    if (result>=0){
        i = result;
        while(rec_data[i] != ':'){
            i--;
            if (i < 0)
                return -2;
        }
        return(atof(ptr+i+1));
    }
    return -1;
}

int ble_setRFpower(struct PSC_McM_6_00 *p, int val){
    
    char val_str[2];
    tostring(val_str, val);
    
    char buffer[16], rec_data[100];
    int checkRF;
    sprintf(buffer, "%s%s%s", "AT+BLERFPWR=", val_str, "\r\n");
    bw_writeCmd(p, buffer, rec_data, 100, 1000000);
    CyDelay(60);
    checkRF = ble_checkRFpower(p);
    if (checkRF == val) return 0;
    switchTo(USB);
    printf("%d\n", checkRF);
    switchTo(BLE);
    return -1;
}

int ble_status(struct PSC_McM_6_00 *p){
    
    uint8 result, i;
    char rec_data[100],*ptr;
    result = bw_writeCmd(p, "AT+BLEMODE?", rec_data, 100, 100000000);
    ptr = rec_data;
    if (result>=0){
        i = result;
        while(rec_data[i] != ':'){
            i--;
            if (i < 0)
                return -2;
        }
        if ((atof(ptr+i+1))==1) return 2;
        if ((atof(ptr+i+1))==0) return 1;
        if ((atof(ptr+i+1))==9) return 0;
//        return(atof(ptr+i+1));
    }
    return -1;
}

int ble_OFF(struct PSC_McM_6_00 *p){
    
    int status;
    status = ble_status(p);
    if (status == 0) return 0;
    
    char rec_data[100],*ptr;
    int result;
    result = bw_writeCmd(p, "AT+BLEMODE=9", rec_data, 100, 1000000);
    ptr = rec_data;
    if (result>=0){
        int i = result;
        while(rec_data[i] != '='){
            i--;
            if (i < 0)
                return -2;
        }
        if((atof(ptr+i+1))==9)return 0;
    }
    return -1;
}

int bleON_host(struct PSC_McM_6_00 *p){
    int status,j;
    status = ble_status(p);
    if (status == 2) return 0;
    
    char rec_data[100],*ptr;
    int result;
    result = bw_writeCmd(p, "AT+BLEMODE=1", rec_data, 100, 10000000);
    for(j=0;j<1000;j++);
    ptr = rec_data;
    if (result>=0){
        int i = result;
        while(rec_data[i] != '='){
            i--;
            if (i < 0)
                return -2;
        }
        return(atof(ptr+i+1));
    }
    return -1;
    
}

int bleON_slave(struct PSC_McM_6_00 *p){
    
    int status,j;
    status = ble_status(p);
    if (status == 1) return 0;
    
    char rec_data[100],*ptr;
    int result;
    result = bw_writeCmd(p, "AT+BLEMODE=0", rec_data, 100, 10000000);
    for(j=0;j<1000;j++);
    ptr = rec_data;
    if (result>=0){
        int i = result;
        while(rec_data[i] != '='){
            i--;
            if (i < 0)
                return -2;
        }
        return(atof(ptr+i+1));
    }
    return -1;
}

int ble_scan(struct PSC_McM_6_00 *p, char *c){
    
    char rec_data[100],*ptr;
    int result;
    result = bw_writeCmd(p, "AT+BLESCAN", rec_data, 100, 1000000);
    ptr = rec_data;
    if (result>=0){
        int i = result;
        while(rec_data[i] != '='){
            i--;
            if (i < 0)
                return -2;
        }
        if((atof(ptr+i+1))==9)return 0;
    }
    return -1;
}

int ble_connect(struct PSC_McM_6_00 *p, char *s){
    int result;
    char rec_data[100];
    char buffer[200];
    sprintf(buffer, "AT+BLECONNECT=%s", s);
    result = bw_writeCmd(p,buffer, rec_data, 100, 1000000);
    printf("%s", rec_data);
    return result;
}

int ble_disconnect(struct PSC_McM_6_00 *p){

    int result;
    char rec_data[100];
    result = bw_writeCmd(p,"+++", rec_data, 100, 1000000);
    printf("%s", rec_data);
    return result;
}

const char* ble_sendData(struct PSC_McM_6_00 *p, char *send){

    char buffer[1000];
    
    sprintf(buffer, "%s%s", send, "\r\n");
    switchTo(BLE);
    printf("%s", buffer);
    return 0;
}

//char ble_receiveData(struct PSC_McM_6_00 *p){
//    
//    char rec_data = 0;
//    switchTo(BLE);
//    if(UART_SpiUartGetRxBufferSize() != 0)
//        rec_data = UART_UartGetByte();
//    switchTo(USB);
//    return rec_data;
//}






int WiFi_status(struct PSC_McM_6_00 *p){
    
    uint8 result, i;
    char rec_data[100],*ptr;
    result = bw_writeCmd(p, "AT+WMODE?", rec_data, 100, 100000000);
    printf("%s", rec_data);
    ptr = rec_data;
    if (result>=0){
        i = result;
        while(rec_data[i] != ':'){
            i--;
            if (i < 0)
                return -2;
        }
        if ((atof(ptr+i+1))==0) return 0;
        if ((atof(ptr+i+1))==1 || (atof(ptr+i+1))==2 || (atof(ptr+i+1))==3) return 1;
//        return(atof(ptr+i+1));
    }
    return -1;
}

int WiFi_OFF(struct PSC_McM_6_00 *p){
    
    char rec_data[100],*ptr;
    int result;
    result = bw_writeCmd(p, "AT+RST", rec_data, 100, 10000);
    printf("%s", rec_data);
    
    return 0;    
}

int WiFi_ON(struct PSC_McM_6_00 *p){
    
    char rec_data[100],*ptr;
    int result;
    result = bw_writeCmd(p, "AT+WMODE=3,0", rec_data, 100, 10000);
    ptr = rec_data;
    if (result>=0){
        int i = result;
        while(rec_data[i] != '='){
            i--;
            if (i < 0)
                return -2;
        }
        //char ctemp = *(ptr+i+1);
        if((*(ptr+i+1))=='1' || (*(ptr+i+1))=='2' || (*(ptr+i+1))=='3')return 0;
//        return(atof(ptr+i+1));
    }
    return -1;   
}

int WiFi_scan(struct PSC_McM_6_00 *p){
    //Timeout
    char rec_data[1000];
    bw_writeCmd(p, "AT+WSCAN",rec_data, 1000, 100000000);
    printf("%s", rec_data);
    return 0;
}

int WiFi_connect(struct PSC_McM_6_00 *p, char* ssid, char* password){
    //Check
    char buffer[1000],rec_data[200];
    p->bleWiFi.ssid[strlen(ssid)] = '\0';
    p->bleWiFi.password[strlen(password)] = '\0';
    sprintf(buffer, "AT+WJAP=%s,%s", p->bleWiFi.ssid,  p->bleWiFi.password);
    bw_writeCmd(p, buffer, rec_data, 200, 1000000);
    return 0;
}

int WiFi_disconnect(struct PSC_McM_6_00 *p){
    //Check
    char rec_data[100];
    bw_writeCmd(p, "AT+RST", rec_data, 100, 10000);
    printf("%s", rec_data);
    return 0;
}

int WiFi_TS_sendData(struct PSC_McM_6_00 *p, int val){
    char buffer[500], str[100],rec_data[100];
    tostring(str, val);
    sprintf(buffer, "%s%s", "AT+HTTTPCLIENTLINE=2,2,application/json,api.thingspeak.com,443,/update?api_key=5OC2ZNCC6GZHM5VX&field1=0,", str);
    bw_writeCmd(p, buffer, rec_data, 100, 10000);
    printf("%s",rec_data);
    return 0;
}

int WiFi_mac(struct PSC_McM_6_00 *p){

    char rec_data[100],*ptr;
    int result;
    result = bw_writeCmd(p, "AT+CIPSTAMAC_DEF?", rec_data, 100, 10000);
    ptr = rec_data;
    if (result>=0){
        int i = result;
        while(rec_data[i] != 'F'){
            i--;
            if (i < 0)
                return -2;
        }
        i+=2;
        uint j = i;
        while(rec_data[j] != '\r'){
            j++;
            if (j > sizeof(rec_data[j]))
                return -2;
        }
        for(uint k=i; k<j; k++){
            p->bleWiFi.mac[k-i] = rec_data[k];
        }
    }
    return 0;
}

int WiFi_sendData(struct PSC_McM_6_00 *p, char *trans_type, char *opt, char *host, int port, char *path, int data){
    
    int type, optype;
    char buffer[500], rec_data[100];
    
    host[strlen(host)] = '\0';
    path[strlen(path)] = '\0';
    
    if(strcmp(trans_type,"http")==0) type = 1;
    if(strcmp(trans_type,"https")==0) type = 2;
    if(strcmp(opt,"get")==0) optype = 2;
    if(strcmp(opt,"post")==0) optype = 3;
    
    sprintf(buffer, "AT+HTTTPCLIENTLINE=%d,%d,application/json,%s,%d,%s,%d", type, optype, host, port, path, data);
    printf("Buffer: %s.", buffer);
    bw_writeCmd(p, buffer, rec_data, 100, 10000);
    printf("%s",rec_data);
    
    return 0;
}

    
#endif
/* [] END OF FILE */
