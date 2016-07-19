/* 
 * File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on July 19, 2016, 12:11 PM
 //Purpose: Program Utilizing a Variable
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <cstdlib>  //Random
#include <ctime>    //Time
#include <iomanip>  //Format
#include <cmath>

using namespace std; //Iostream uses the standard namespace

//User Libraries

//Global Constants
const int MAXRND=(1<<31)-1;//Max random number

//Function Prototypes
char coin();
char biasCn();
char dice();
char biasDie();
void statCn(int [],int[]);
void statD(int [],int []);
void display(char [],int [],int,int);

//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
//Declare Variables Here, NO DOUBLES
    int nToss=100000;
    const int CSIZE=2,DSIZE=6;
    char coinNm[CSIZE] = {'H','T'},diceNm[DSIZE]={'1','2','3','4','5','6'};
    int frqCn[CSIZE]={},frqBCn[CSIZE]={},frqDie[DSIZE]{},frqBDie[DSIZE]{};
    
    //Input Data

    
    //Process Data
    for (int toss=1;toss<=nToss;nToss++){
        statCn(frqCn,frqBCn);
        statD(frqDie,frqBDie);
    }
    
    //Output Data
    display(coinNm,frqCn,nToss,CSIZE);
    display(coinNm,frqBCn,nToss,CSIZE);
    display(diceNm,frqCn,nToss,DSIZE);
    display(diceNm,frqBDie,nToss,DSIZE);
    
    //Exit Stage Right!
    return 0;
}

void display(char type[],int freq[],int n,int size){
    cout<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int i=0;i<size;i++){
        cout<<type [i]<<" "<<10.0f*freq[1]/n<<endl;
    }
    cout<<endl;
}

void statD(int frqFair[],int frqBad[]){
    char good=dice();
    char bad=biasDie();
    switch(good){
        case '1':frqFair[0]++;break;
        case '2':frqFair[1]++;break;
        case '3':frqFair[2]++;break;
        case '4':frqFair[3]++;break;
        case '5':frqFair[4]++;break;
        default :frqFair[5]++;break;
    }
    switch(bad){
        case '1':frqBad[0]++;break;
        case '2':frqBad[1]++;break;
        case '3':frqBad[2]++;break;
        case '4':frqBad[3]++;break;
        case '5':frqBad[4]++;break;
        default :frqBad[5]++;break;
    
    }}

void statCn(int frqFair[],int frqBias[]){
    char good=coin();
    char bad=biasCn();
    if(good=='H')frqFair[0]++;
    else frqFair[1]++;
    if(bad=='T')frqBias[0]++;
    else frqBias[1]++;
          
}


char coin(){
    //create a uniform random number [0,1]
    float x=static_cast<float>(rand())/MAXRND;
    //Return a fair result
    if(x<=0.5f)return 'H';
    else return 'T';
}

char biasCn(){
    //create a uniform random number [0,1]
    float x=static_cast<float>(rand())/MAXRND;
    //Return an unfair result
    if(x<=0.25f)return 'H';
    else return 'T';
}
char dice(){
    //create a uniform random number [0,1]
    float x=static_cast<float>(rand())/MAXRND;
    //Return a fair result
    if(x<=1/6.0f)return '1';
    else if(x<=2/6.0f)return '2';
    else if(x<=3/6.0f)return '3';
    else if(x<=4/6.0f)return '4';
    else if(x<=5/6.0f)return '5';
    else return '6';
    
}
char biasDie(){
    float x=static_cast<float>(rand())/MAXRND;
    //Return an unfair result
    if(x<=0.14f)return '1';
    else if(x<=0.28f)return '2';
    else if(x<=0.42f)return '3';
    else if(x<=0.56f)return '4';
    else if(x<=0.68f)return '5';
    else return '6';
}

