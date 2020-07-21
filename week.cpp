//this is the implemntation fo the .cpp of week
#include "week.h"
week::week()
{
    array = NULL;
}

//int init(day *& array, int i)
//{
//    if(i == arraySize) return 0;
//    //if(!array[i]) return 0; //base case needs ot be array oriented
//    array[i].array = NULL; //this is the actual array of the real DLL that we ACTUALLY post/remove stuff to
//    return init(array->to_nextDay(), i++) + 1; //returns # of indices
//}

week::week(int size)
{
    arraySize = size;
    array = new day * [size]; //allocates an array of size size
   // int i = 0;
   // init(*array, i);
}

//week::~week()
//{
//    int i = 0;
//    if(array) //?
//    {
//        //deleteWrapper(i);
//    }
//}

//int week::deleteWrapper(int i)
//{
//    //if(i <= arraySize)
//    //{
//    //    deleteAll(array[i];
//    //    return deleteWrapper(++i);
//    //}
//    //delete [] array;
//
//    if(i > arraySize )
//    {
//        delete [] array;
//    }
//    deleteDll(array[i]);
//    return deleteWrapper(++i);
//}

//deleting a DLL
//int week::deleteDll(day *& array)
//{
//    if(array == NULL) return 0;
//
//    deleteDll(array->to_nextDay());
//    if(!array->to_nextDay())
//    {
//        delete array;
//        array = NULL;
//    }
//    return 1;
//}

//this function
//int week::displayWeek()
//{
//    int i = 0;
//    return displayWeek(*array, i);
//}

//goes through the array and calls the display function on each array
//int week::displayWeek(day *& array, int i)
//{
//    if(i == arraySize) return 0; 
//
//    //traverse the dll of array[i]
//    //displayDll(*array[i])); 
//
//    displayWeek(array->to_nextDay(), i++); //protected in this context :((
//    return 1;
//}

//this function iterates through DLL node, calling each node's display function
//int week::displayDayDll(day *& array) //trying to pass the array of a DLL 
//{
//    if(!array) return 0;
//
//    //what should this actually be?
//    
//    array[i]->displayDay();  //we're not actually getting to the real DLL array index for traaversla w/ this syntax
////    array[i].array->dis
//
//    displayDayL(array->to_nextDay());
//    return 1;
//}

//wrapper
//int week::addDay(char * name, int i) //i == array index we're adding x to?
//{
//    day * temp = array[i];
//    array[i] = new day(name);
//    if(temp) {temp->to_prevDay() = array[i]; }
//    array[i]->to_nextDay() = temp;
//    //return array[i]->addNode(name); //node a
//    return 1;
//}

//wrapper function that calls
int week::createProg(char * name)
{
    return 1;
}

//````````````````````````````````````````````````````````````````
//int day::addNode(char * dayName)
//{
//    return addNode(dayName, nextDay); //i hope we reset back to OG position afterwords lol or like have a way to move aorudn 
//}
//
//int day::addNode(char * dayName, day *& array)
//{
//    if(!array)
//    {
//        array = new day(dayName); //we also have a nice copyfunction
//        array->to_nextDay() = NULL;
//    }
//    else
//    {    
//        addNode(dayName, array->to_nextDay()); //iterate until the end
//    }
//    return 1;
//}


