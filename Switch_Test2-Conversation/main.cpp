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
    char choice; //If you have a variety
    //Input Data
    cout<<"Hi";
    cout<<" "<<endl;
    cout<<"A - *shyly* h...hi..."<<endl;
    cout<<"B - *enthusiastically* Hi! Who are you?"<<endl;
    cout<<"C - *sneers* Who the hell are you?"<<endl;
    cout<<"Enter A, B, or C to reply."<<endl;
    cin>>choice;
    //Process Data
    
    //Output Data
    switch (choice)
    {
        case 'A' : cout<<"Don't be shy! I don't bite!"<<endl;
                   cout<<" "<<endl;
                   cout<<"A - S...sorry...I'm just not too familiar with you...",
                           cout<<endl;
                   cout<<"B - I didn't think so, I'm just a bit shy, is all.",
                           cout<<endl;
                   cout<<"C - Well no shit Sherlock, you're a computer program!",
                           cout<<endl;
                   cin>>choice;
                   
                      switch (choice)
                      {
                         case 'A' : cout<<"It's okay, I'd like to know more about",
                                  cout<<"you too!"<<endl;
                                  break;
                         case 'B' : cout<<"Aww, that's alright! You can open up",
                                  cout<<"to me! Like I said, I don't bite!"<<endl;
                                  break;
                         case 'C' : cout<<"You know I've had enough of your",
                                  cout<<"bullshit jackass..."<<endl;
                                  break;
                         default:"Um...what? I don't understand...";
                                  break;
                       }
                   
                      break;
        
        case 'B' : cout<<"I'm just a test program to try out switch functions.",
                   cout<<"Seems like it works!";
                   cout<<" "<<endl;
                   cout<<"A - Oh...that's nice..."<<endl;
                   cout<<"B - Really? That's so cool!"<<endl;
                   cout<<"C - Useless pile of junk..."<<endl;
                   cin>>choice;
                   
                   switch(choice)
                   {
                       case 'A' : cout<<"Yeah, I know I don't do much, but it's still helpful!",
                                <<endl;
                                  break;
                       case 'B' : cout<<"I know right! It's helpful for creating",
                               cout<<"menus and stuff!"<<endl;
                                 break;
                       case 'C' : cout<<"And you're a useless pile of shit."<<endl;
                                 break;
                   }
                   break;
        case 'C' : cout<<"Well the hell with you too, jerk!";
                   cout<<" ";
                   break;
        default:   cout<<"Umm...what? I don't understand...";
                   break;
    }
    
    //Exit Stage Right!
    return 0;
}



