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
        int compareTask(task & task_toCompare); //DOES NOT TAKE POINTERS 

        //do we need a version of copmareTask that takes poitners

        //toggles done bool, but how
        int setDone(); //we still need to figure how out we're gonna use it upstairs

    protected:
        //this is the name of a the specific task being worked on/created 
        char * name; 

        bool done; 

        //pointer the next task
        task * next;

    private:
};

class feeling: public task
{ 
    public:
        //default constructor
        feeling();
        
        feeling(char * name_toadd); //creates name

        ~feeling(); 
        int setCurr(int val_toset);
        int increaseMax();
        int decreaseMax();
        int increaseCurr();
        int decreaseCurr();
        int displayFeel(); //name/done + the int stats
        //can we displayTask instead

    protected:
        //client NEVER interacts with the numbers
        int max;
        int min;
        int curr;

        //if I wanted a list of these...
        task * next;

    private:
};
