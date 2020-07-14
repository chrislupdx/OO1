//this is the implentation of the week class, it manages the DLL of days
#include "day.h"
#include <iostream>

class week
{
    public:
        week();
        week(int size); 
        ~week();

        int addDay(char * name, int num); //hard copy a day class add to the dll, num == index of the array
        int displayWeek(); //prints the DLL
        int createProg(char * name);
        int deleteWrapper(int i);
         
        //int retrieveDay(char * day);
        //int removeDay(char * name); //find and remove
        //delete days(remove from week)
        
        //createcry
        //createprog
        //createfeel
        //removecry
        //removeprog
        //removefeel
        //removeall
    protected:
        int deleteDll(day *& head);
        int displayWeek(day *& head);
        int arraySize;  //force human input
        int hI;         //day
        day ** head; //3 lists of days
        //head[hI].functionName();
        int addDay(char * name, day *& head);
        int removeAllDays();
};
