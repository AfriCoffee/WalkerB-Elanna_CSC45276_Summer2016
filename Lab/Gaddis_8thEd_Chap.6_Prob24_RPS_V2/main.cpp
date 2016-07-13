/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on July 13,2016 1:14 PM
 //Purpose: Rock Paper Scissors
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <cstdlib>  //Random Seed
#include <ctime>    //Time
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void gameRPS(char,char,int &,int &,int &);
void evalu8(char,char,int &,int &, int &);

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
//set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables Here, NO DOUBLES
    char player,comp;
    int win=0,loss=0,tie=0;
    
    //Play until user wants to stop.
    do{
    //Input Data
        cout<<"RPS Game, what is your move R,P, or S?"<<endl;
        cin>>player;
        
        
    //Play the Game
        //input player and computer
        //output wins, ties, losses
        gameRPS(player,comp,win,tie,loss);
  
    cout<<"Total Wins = "<<win<<endl;
    cout<<"Total Ties = "<<tie<<endl;
    cout<<"Total Losses= "<<loss<<endl;
    }while(player=='P'||player=='R'||player=='S');
    //Exit Stage Right!
    return 0;
}
void gameRPS(char player,char comp,int &win,int &tie,int &loss){
     do{
            comp=rand()%4+80;//P,Q,R,S
        }while(comp=='Q');
        evalu8(player,comp,win,tie,loss);
}  
void evalu8(char player,char comp,int &win,int &tie,int &loss){
    switch(player){
            case'P':{
                if(comp=='P')cout<<"Ties so far = "<<++tie<<endl;
                else if(comp=='R')cout<<"Win so far = "<<++win<<endl;
                else cout<<"losses so far = "<<++loss<<endl;
                break;
            }
            case'R':{
                if(comp=='P')cout<<"Losses so far = "<<++loss<<endl;
                else if(comp=='R')cout<<"Ties so far = "<<++tie<<endl;
                else cout<<"wins so far = "<<++win<<endl;
                break;
            }
            case'S':{
                if(comp=='P')cout<<"Wins so far = "<<++loss<<endl;
                else if(comp=='R')cout<<"Loss so far = "<<++loss<<endl;
                else cout<<"Ties so far = "<<++tie<<endl;
                break;
            }
            default: cout<<"You are quitting with"<<player<<endl;
        }
}

