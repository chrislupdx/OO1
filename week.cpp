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

//recursive call
int week::addDay(char * name, day *& head)
{
    if(!head) return 0;
    addDay(name, head->to_nextDay());
    if(!head->to_nextDay()) //if we reach the end?
    {
        day * newDay = new day(name);
        head->to_nextDay() = newDay;
        newDay->to_nextDay() = NULL; 
    }
     return 1;
}

//wrapper
int week::addDay(char * name)
{
    //if completely empty, create the new list
    if(!head)
    {
        head = new day(name); //create a new day
        head->to_nextDay() = NULL; 
    }

    return 1;
}


//recursively iterates through week, printing each day
int week::displayWeek(day *& head)
{
    if(!head) return 0;
    //head->displayDay();
    std::cout << std::endl;

    return displayWeek(head->to_nextDay()) + 1;
}

//wrapper
int week::displayWeek()
{
    return displayWeek(head);
}

//remove all nodes in the dll
int week::removeAllDays()
{
    //im pretty sure we have one of these lying around somehwere 
    return 1;
}
