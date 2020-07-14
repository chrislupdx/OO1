//this is the implemntation fo the .cpp of week
#include "week.h"
week::week()
{
    head = NULL;
}

int init(day *& head, int i)
{
    if(!head) return 0;
    head[i] = NULL;
    init(head->to_nextDay(), i++);

    return 1;
}

week::week(int size)
{
    arraySize = size;
    head = new day * [size]; //does that actually do it?
    int i = 0;
    init(*head, i);
}

week::~week()
{
    int i = 0;
    if(head) //?
    {
        deleteWrapper(i);
    }
}

int week::deleteWrapper(int i)
{
    //if(i <= arraySize)
    //{
    //    deleteAll(head[i];
    //    return deleteWrapper(++i);
    //}
    //delete [] head;

    if(i > arraySize )
    {
    delete [] head;
    }
    deleteDll(head[i]);
    return deleteWrapper(++i);
}

//deleting a DLL
int week::deleteDll(day *& head)
{
    if(head == NULL) return 0;

    deleteDll(head->to_nextDay());
    if(!head->to_nextDay())
    {
        delete head;
        head = NULL;
    }
    return 1;
}


//recursive call
//int week::addDay(char * name, day *& head)
//{
//    if(!head) return 0;
//    addDay(name, head->to_nextDay());
//    if(!head->to_nextDay()) //if we reach the end?
//    {
//        day * newDay = new day(name);
//        head->to_nextDay() = newDay;
//        newDay->to_nextDay() = NULL; 
//    }
//     return 1;
//}

//wrapper
int week::addDay(char * name, int i) //i == array index we're adding x to?
{
    return head[i]->addNode(name); //node 
}

//recursively iterates through week, printing each day
//int week::displayWeek(day *& head)
//{
//    if(!head) return 0;
//    head->displayDay();
//    std::cout << std::endl;
//
//    return displayWeek(head->to_nextDay()) + 1;
//}

//wrapper
//int week::displayWeek()
//{
//    return displayWeek(head);
//}

//remove all nodes in the dll
int week::removeAllDays()
{
    //im pretty sure we have one of these lying around somehwere 
    return 1;
}

//wrapper function that calls
int week::createProg(char * name)
{
    return 1;
}

//````````````````````````````````````````````````````````````````
//traverse until you find an appropriate 
int day::addNode(char * dayName)
{
    return addNode(dayName, nextDay); //i hope we reset back to OG position afterwords lol or like have a way to move aorudn 
}

int day::addNode(char * dayName, day *& head)
{
    if(!head)  //if there is no day delete it
    {
        head = new day(dayName); //we also have a nice copyfunction
        head->to_nextDay() = NULL;
        head->to_prevDay() = NULL; 
    }
    else
    {    
        addNode(dayName, head->to_nextDay()); //iterate until the end
    }
    return 1;
}
