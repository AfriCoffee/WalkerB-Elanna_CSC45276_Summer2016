/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on August 20, 2014, 2:45 PM
 //Purpose: First Program
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library

using namespace std; //Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables Here, NO DOUBLES
    char a;
    unsigned char b;
    short c;
    unsigned short d;
    int e;
    unsigned int f;
    bool g;
    float h;
    double i; //F
    long double j;//Long FFFFFF
    long k;
    unsigned long l;
    //Input Data
    
    //Process Data
    
    //Output Data
    cout<<"The Size of Different Data Types:"<<endl;
    cout<<""<<endl;
    cout<<"Character has          "<<sizeof (a)<<" bytes"<<endl;
    cout<<"Unsigned Character has "<<sizeof (b)<<" bytes"<<endl;
    cout<<"Short has              "<<sizeof (c)<<" bytes"<<endl;
    cout<<"Unsigned Short has     "<<sizeof (d)<<" bytes"<<endl;
    cout<<"Int has                "<<sizeof (e)<<" bytes"<<endl;
    cout<<"Unsigned Int has       "<<sizeof (f)<<" bytes"<<endl;
    cout<<"Bool has               "<<sizeof (g)<<" bytes"<<endl;
    cout<<"Float has              "<<sizeof (h)<<" bytes"<<endl;
    cout<<"Double has             "<<sizeof (i)<<" bytes (will give you an F in this class)"<<endl;
    cout<<"Long Double has        "<<sizeof (j)<<" bytes (will give you an even BIGGER F in this class)"<<endl;
    cout<<"long has               "<<sizeof (k)<<" bytes"<<endl;
    cout<<"Unsigned Long has      "<<sizeof (l)<<" bytes"<<endl;
    cout<<""<<endl;
    cout<<"Beware things bigger than four bytes-they're unnecessary!"<<endl;
    
    //Exit Stage Right!
    return 0;
}



