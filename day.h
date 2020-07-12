//this is the implmentation for the .h of day //CS202 #include "task.h"
#include "task.h"

//a LLL that manages a list of feels
class feelsList
{
    public:
        feelsList();
        ~feelsList();
        int addFeel(feeling & new_feel); //add to the head of the list?
        //int removeFeel(feeling & target_feel); //find and remove
        int displayFeels(); //iterate through and display each
    protected:

    private:
        feeling * next; //linked list head
        int displayFeels(feeling *& head);
        int addFeel(feeling & new_feel, feeling *& head);
        int removeAllFeels(feeling *& head); //used in the list destructor
};

class day
{
    public:
        day(); //constructor for the class itself
        ~day();
        //int displayLists();

        //Create+add to list
        //Delete to list
        //Displaay to list
        //Count to list

        //Derived class functions:

    protected:
        day * prev;
        day * next;
        char * dayOfWeek; //name 
        feelsList * fList; 
        //program * progList; //LLL 
        //cry * cryList;
    private:
};

