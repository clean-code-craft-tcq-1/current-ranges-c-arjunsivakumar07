#include <stdio.h>
#include "MonitorBatteryRange.h"

ValidityOfRange CurrentReadingValidity(int numofreadings, int *BMS_Current_Range)
{
	if((numofReadings== 0) || (BMS_Current_Range == NULL))
    {
        return RangeInvalid;
    }
    else
    {
        return  RangeValid;
    }
}

int NumofCurrentReadings_InRange(int listofvalues,int *CurrentRange,int *BreachType)
{
    int i,count = 0;
    for(i=0;i<listofvalues;i++)
    {
        if((CurrentRange[i] >= BreachType[0]) && (CurrentRange[i] <= BreachType[1]))
        {
            count++;
        }
    }
    return count;
}