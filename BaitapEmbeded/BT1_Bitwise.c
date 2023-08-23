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


void ADD_GIOHANG(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung)
{
    *gio_hang |= ten_do_dung;
}

void CHECK_GIOHANG(uint8_t *gio_hang, DO_DUNG_CA_NHAN ten_do_dung)
{
    if((*gio_hang & ten_do_dung) == ten_do_dung )
    {
        printf("Co hang:%s\n", ten_do_dung);
    }else{
        printf("Khong co:\n");
    }
}

void SHOW_GIOHANG(uint8_t *gio_hang)
{
    printf("DO DUNG CO TRONG GIO HANG\n");
   
    for(int i =0; i<8; i++)
    {
        DO_DUNG_CA_NHAN hientai = 1 <<i;
        if (*gio_hang & hientai ) printf("%s\n", tendungcu(hientai));
    }
}

int main()
{
    uint8_t GIO_HANG = 0;
 
    ADD_GIOHANG(&GIO_HANG, AO|QUAN|TUI);

    CHECK_GIOHANG(&GIO_HANG, AO|NHAN );

    SHOW_GIOHANG(&GIO_HANG);

    
}