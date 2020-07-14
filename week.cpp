//this is the implemntation fo the .cpp of week
#include "week.h"

week::week()
{
    head = NULL; 
}


week::~week()
{
    //i'm pretty sure we deallocate the dll here
}

//wrapper
int week::addDay(char * name)
{
    //if completely empty, create the new list
    if(!head)
    {
        head = new day(name); //create a new day
        head->to_nextDay();

    }


    return 1;
}

//remove all nodes in the dll
int week::removeAllDays()
{
    //im pretty sure we have one of these lying around somehwere 
    return 1;
}
