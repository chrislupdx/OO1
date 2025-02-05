//this is the implmentation for the .h of day //CS201 #include "task.h"
#include "task.h"

//a LLL that manages a list of feels
class feelsList
{
    public:
        feelsList(); ~feelsList();
        int addFeelWrap(feeling & new_feel); //add to the head of the list?
        int displayFeels(); //iterate through and display each
        int removeFeel(char * name_torm); //find and remove

    private:

        //is this a proper encapsulation and control of this derived class???
        feeling * next; //linked list head

        int removeFeel(char * name_of_torm, feeling *& head); //recursive
        int displayFeels(feeling *& head);
        int addFeel(feeling & new_feel, feeling *& head);
        int removeAllFeels(feeling *& head); //used in the list destructor
};

class pList
{
    public:
        pList();
        ~pList();
        int addP(program & new_prog);
        int displayProgs();
        int removeProg(char * name_torm);
    private:
        program * nextP;
        int removeProgram(char * name_of_torm, program *& head);
        int displayPrograms(program *& program);
        int addProgram(program & new_prog, program *& head);
        int removeAllProgs(program *& program);
};

class cryList
{
    public:
        cryList();
        ~cryList();
        int addaCrying(cry & new_cry);
        int displayCries();
        int removeCry(char * name_torm);
    private:
        cry * nextC;
        int removeCry(char * name_of_torm, cry *& head); //recur
        int displayCries(cry *& cry);
        int addCry(cry & new_cry, cry *& head);
        int removeAllCries(cry *& cry);
};

class node
{
    public:
        node();
        ~node();
        node(task * task_toadd);
        node * & to_previous();
        node * & to_next();
        task *& g_task();        
    protected:
        task * newTask;
        node * previous;
        node * next;
};

class day
{
    public:
        day(int size); //constructor for the class itself
        ~day();
        day(char * name);
        int display();
        int display(int i);
        int displayDay(); //calls all 3 disaply functions
        int addNode(char * dayName, day *& head); 
        int addNode(char * dayName);
        //int displayFList();
        //int addFeeling(feeling & new_feel); //changed to taking refs4consistency
        //int removeFeeling(char * name_torm);
        //int displayCList();
        //int addaCrying(cry & new_cry);
        //int removeaCrying(char * name_torm);
        //int displayPList();
        //int addaProgram(program & new_program);

        int insert(task * task_toadd, int pos);
        int removeaProg(char * name_torm);
        //day * & to_nextDay(); //getters
        //day * & to_prevDay(); //getters

        //it wants to be a node and a managing class at the same time!
    protected:
        int max;
        //day * prevDay; 
        //day * nextDay;
        node ** array; 
        //char * dayOfWeek; //name 
        //feelsList fList;
        //cryList cList;
        //pList progList;
};

