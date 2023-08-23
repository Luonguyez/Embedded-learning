#include <stdio.h>
#include <stdint.h>

uint8_t GIO_HANG = 0;   //00000000

typedef enum
{
    AO          = 1 << 0,   //00000001
    QUAN        = 1 << 1,   //00000010
    VAY         = 1 << 2,   //00000100   
    DAM         = 1 << 3,   //00001000
    NHAN        = 1 << 4,   //00010000
    VONG_TAY    = 1 << 5,   //00100000
    GIAY        = 1 << 6,   //01000000
    TUI         = 1 << 7,   //10000000
} DO_DUNG_CA_NHAN;

static const char *tendungcu(DO_DUNG_CA_NHAN dungcu_value) {
    switch (dungcu_value) {
        case AO: return "AO";
        case QUAN: return "QUAN";
        case VAY: return "VAY";
        case DAM: return "DAM";
        case NHAN: return "NHAN";
        case VONG_TAY: return "VONG_TAY";
        case GIAY: return "GIAY";
        case TUI: return "TUI";
        default: return "UNKNOWN";
    }
}


void ADD_GIOHANG(uint8_t *GIO_HANG, DO_DUNG_CA_NHAN ten_do_dung)
{
    *GIO_HANG |= ten_do_dung;
    
}

void CHECK_GIOHANG(uint8_t *GIO_HANG, DO_DUNG_CA_NHAN ten_do)
{   
    printf("\n----------------check--------------\n");
    for (DO_DUNG_CA_NHAN dungcu = AO; dungcu <= TUI; dungcu <<= 1)
    {   
       
        uint8_t check=1<<dungcu;      
        if(check & ten_do){
            printf("%s ",tendungcu(check));
            if(*GIO_HANG & check){
                printf("co\n");
            }
            else{
                printf("chua co\n");
            }
        }
    }
}

void SHOW_GIOHANG(uint8_t *GIO_HANG)
{   
    printf("\n------------------showww--------------------\n");
    for (DO_DUNG_CA_NHAN i = AO; i <= TUI; i<<=1)
    {   
        
        if (*GIO_HANG & i)
        {
            printf("%s\n", tendungcu(i) );
        }
        
    }
    
}
int main()
{
    ADD_GIOHANG(&GIO_HANG, AO|QUAN|TUI);

    CHECK_GIOHANG(&GIO_HANG, AO|NHAN|QUAN|VAY );

    SHOW_GIOHANG(&GIO_HANG);

}