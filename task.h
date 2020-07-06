//This is the implementation of the task.h file
//tasks are the simplest unit in the class Coping.  
//Task.h
//Chris Lu

class task
{
    public:

        //default constructor
        task();

        //default destructor
        ~task();

        //copy function
        int cpTask(task & task_toCopy);

    protected:
        //this is the name of a the specific task being worked on/created 
        char * name; 
    
        bool done; 
        
        //pointer the next task
        task * next;

    private:

};
