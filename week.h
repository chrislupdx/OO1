//this is the implentation of the week class, it manages the DLL of days
#include "day.h"
#include <iostream>

class week
{
    public:
        week(); //could we init 7 days?
        ~week();

        //int removeDay(char * name); //find and remove
        //int retrieveDay(char * day);

        int addDay(char * name, int num); //hard copy a day class add to the dll, num == index of the array
        
        int displayWeek(); //prints the DLL
        int createProg(char * name);

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
        int arraySize;  //force human input
        int hI;
        day ** head; //a doubly linked list of days
        //head[hI].functionName();

        int addDay(char * name, day *& head);
        int removeAllDays();
};
