#ifndef MonitorRange_h
#define MonitorRange_h

typedef enum
{
    RangeInvalid,
    RangeValid
}ValidityOfRange;

ValidityOfRange CurrentReadingValidity(int numofreadings, int *BMS_Current_Range);
int NumofCurrentReadings_InRange(int listofvalues,int *CurrentRange,int *BreachType);
#endif
