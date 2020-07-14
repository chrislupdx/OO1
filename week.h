//this is the implentation of the week class, it manages the DLL of days
#include "day.h"
#include <iostream>

class week
{
    public:
        week(); //could we init 7 days?
        ~week();

        int addDay(char * name); //hard copy a day class add to the dll
        int displayWeek(); //prints the DLL
        
        //delete days(remove from week)
        
        //retrieveDay

        //createcry
        //createprog
        //createfeel
        
        //removecry
        //removeprog
        //removefeel
        //removeall
        

    protected:
        int displayWeek(day *& head);
        day * head; //a doubly linked list of days
        int addDay(char * name, day *& head);

        int removeAllDays();
};
