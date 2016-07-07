/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on August 20, 2014, 2:45 PM
 //Purpose: First Program
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <ctime>    //Time for random seed
#include <cstdlib>  //random number seed
#include <iomanip>  //formating
#include <cmath>    //Math Library
#include <fstream>  //File I/O
#include <string>   //String Object

using namespace std; //Iostream uses the standard namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)))<<endl;
    //Declare Variables Here, NO DOUBLES
    int nGames,nWins=0,nLose=0;
    
    //Input Data
    cout<<"The Game of Craps"<<endl;
    cout<<"How many games to play?"<<endl;
    cin>>nGames;
    
    //Process Data
    for(int game=1;game<=nGames;game++){
        //Throw a pair of dice
        char die1=rand()%6+1;
        char die2=rand()6+1;
        char sum=die1+die2;
        //Determine Win or Loss
        if (sum==7||sum==11)nWins++;
        else if (sum==2||sum==3||sum==12)nLose++;
        else{
            //When to Roll again
            bool rollAgn=false;
            do{
                //Throw another set of dice
                die1=rand()%6+1;
                die2=rand()6+1;
                char sumAgn=die1+die2;
                if(sum==sumAgn){
                    nWins++;
                    rollAgn=false;}
                else if(sumAgn==7){
                    nLose++;
                    rollAgn=false;}
                else rollAgn=true;
            }while(rollAgn);
    }
    
    //Output Data
        cout<<"Number of Games = "<<nGames<<endl;
        cout<<"Number of Wins = "<<nWins<<endl;
        cout<<"Number of Losses ="<<nLose<<Endl;
    
    //Exit Stage Right!
    return 0;
}



