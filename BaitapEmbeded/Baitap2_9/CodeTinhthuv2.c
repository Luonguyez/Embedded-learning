
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct 
{
    uint8_t day;
    uint8_t month;
    uint16_t year;
} Date;

Date cur = {2, 9, 2023};

bool leapYear(uint16_t year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        return true;     
    } else {
        return false;
    }
}

int calNoDayinMonth(uint8_t month, uint16_t year) {
    if (month == 2) {
        if (leapYear(year)) {   
            return 29;
        } else {
            return 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}


uint16_t noDayfromJan(uint8_t day, uint8_t month, uint16_t year) {
    uint16_t Nodate = day;
    for (int i = 1; i < month; i++) {
        Nodate += calNoDayinMonth(i, year);
    }
    return Nodate;
}


uint16_t calNoDay(uint8_t day, uint8_t month, uint16_t year) {
    uint16_t No = 0;
    for (int i = 2000; i < year; i++) {
        if (leapYear(i)) {
            No += 366;
        } else {
            No += 365;
        }
    }
    No += noDayfromJan(day, month, year) -1;
    return No;
}

int distanceCal(uint8_t day, uint8_t month, uint16_t year) {
    uint16_t distance = calNoDay(day, month, year);
    // printf("So ngay: %d", distance);
    return distance;
}

typedef enum{
    Sat = 0,
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
}dayOfweek;


int main() {
    int result = distanceCal(cur.day, cur.month, cur.year);

    int dayOfweek = result % 7;
    switch (dayOfweek)
    {
    case Sat:
       printf("Sat");
        break;
    case Sun:
       printf("Sun");
        break;
    case Mon:
       printf("Mon");
        break;
     case Tue:
       printf("Tue");
        break;
     case Wed:
       printf("Wed");
        break;
     case Thu:
       printf("Thu");
        break;
     case Fri:
       printf("Fri");
        break;
    default:
        break;
    }

    return 0;
}
