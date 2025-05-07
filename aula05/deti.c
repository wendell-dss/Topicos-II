#include <stdio.h>

// #define STM

int main(void){
    int reg = 0;

    //ST-M
#ifdef STM
    reg = 0x101;
    printf("STM32 reg = %d\r\n", reg);
#else
    //TEXAS
    reg = 0x010;
    printf("CC1312 reg = %d\r\n", reg);
#endif
    //COMUM
    printf("REG comum = %d\r\n", reg);
    
#if DEBUG == 1
    printf("DEBUG N1\r\n");
#elif DEBUG == 2
    printf("DEBUG N2\r\n");
#elif DEBUG == 3
    printf("DEBUG N3\r\n"); 
#endif

    return 0;
}

//gcc -DSTM -DDEBUG=3 deti.c -o deti