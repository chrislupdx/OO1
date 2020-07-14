//this is the implentation of the week class, it manages the DLL of days
#include "day.h"

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
        day * head; //a doubly linked list of days

        int removeAllDays();
};
