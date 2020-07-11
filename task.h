//This is the implementation of the task.h file
//tasks are the simplest unit in the class Coping.  
//Task.h
//Chris Lu

#include <cstring> //where does this actually go

class task
{
    public:
        //default constructor
        task();

        //this parameterized constructor only produces a name
        task(char * name);
        //figure out the defaults

        //default destructor
        ~task();

        //copy function
        int cpTask(task & task_toCopy);

        //a version of cpTask that takes poiners?

        //display function displays the class it calls off of
        int displayTask();

        //returns 1 if match 0 if false
        int compareTaskName(task & task_toCompare); //DOES NOT TAKE POINTERS 
        //do we need a version of copmareTask that takes poitners ??

        //toggles done bool, but how
        int setDone(); //we still need to figure how out we're gonna use it upstairs

    protected:
        //this is the name of a the specific task being worked on/created 
        char * name; 

        bool done; 

        //pointer the next task
        task * next;
        task * prev;
    private:
};

//this derived class has a doubly linked list of feelings
class feeling: public task
{ 
    public:
        //default constructor
        feeling();

        feeling(char * name_toadd); //creates name

        ~feeling();  //default destructor

        int setCurr(int val_toset); //sets curr to argVal

        //could virtualize?
        int setDone(); //oh hey could we virtualist this
       
        //could virtulize?
        int displayFeel(); //prints name, task status, curr/max/min

        int copyFeeling(feeling & feeling_toCopy); //does NOT take pointers, does not copy prev/next

        //returns 0 if currs match in # val
        int compareFeelCurr(feeling & feeling_toCompare); 

        //increments curr by 1
        int increaseCurr();

        //HAHAHAHAHA 
       // int increaseMax();
       // int decreaseMax();
       // int decreaseCurr();
       // int increaseMin();
       // int decreaseMin();
       
            protected:
        //client NEVER interacts with the numbers
        int max;
        int min;
        int curr;

        feeling * prev;
        feeling * next;
    private:
};

class program : public task
{
    public:
    program();
    ~program();
    program(char * name_toadd); //paramteraized name constructor
//    setOverWhelmed();  
//    setHours(int hours_toset);
    
    protected:
    bool is_overwhelmed;
    int hours;

    program * prev;
    program * next;
};
