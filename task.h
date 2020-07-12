//This is the implementation of the task.h file
//tasks are the simplest unit in the class Coping.  
//Task.h
//Chris Lu

#include <cstring> //where does this actually go

class task
{
    public:
        task(); //default constructor
        task(char * name); //this parameterized constructor only produces a name
        ~task(); //default destructor
        int cpTask(task & task_toCopy); //copy function
        int displayTask();
        int compareTaskName(task & task_toCompare); //DOES NOT TAKE POINTERS 
        int setDone(); //we still need to figure how out we're gonna use it upstairs
    protected:
        char * name; 
        bool done; 
        task * next;
};

//this derived class has a doubly linked list of feelings
class feeling: public task
{ 
    public:
        feeling(); //default constructor
        feeling(char * name_toadd); //creates name
        ~feeling();  //default destructor
        int setCurr(int val_toset); //sets curr to argVal
        int setDone(); //oh hey could we virtualist this
        int displayFeel(); //prints name, task status, curr/max/min
        int copyFeeling(feeling & feeling_toCopy); //does NOT take pointers, does not copy prev/n
        int compareFeelCurr(feeling & feeling_toCompare); 
        int increaseCurr();
        int compareFeelName(feeling & feeling_tocp);
        feeling * & to_next(); //a getter that returns the next pointer
    protected:
        int max;
        int min;
        int curr;
        feeling * next;
    private:
};

class program : public task
{
    public:
        program();
        ~program();
        program(char * name_toadd); //paramteraized name constructor
        int displayProgram(); //we could virtualize it 
        int copyProg(program & prog_tocopy);
        int compareProgName(program & prog_tocp);
        int setHours(int hours_toset);
        int setOverWhelmed();  //just toggles it
        int setDone(); //could be virtual i guess
        int doHomework(); //++feels.curr, ++hrs
    protected:
        bool is_overwhelmed;
        int hours;
        program * next;
};
