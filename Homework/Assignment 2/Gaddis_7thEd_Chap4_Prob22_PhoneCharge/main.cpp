/*File:   main.cpp
 * Author: B'Elanna Walker
 *
 * Created on July 5, 2016, 12:23 PM
 //Purpose: First Program
 */

//System Libraries
#include <iostream> //Imput/Output Stream Library
#include <iomanip> //format the output
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
    int minute;
    float hrsMin;
    int hrs,min;
    float charge;
    
    //Input Data
    do{
        cout<<"Input the time at which the call starts"<<endl;
        cout<<"Format 00:00 to 23.59 -> hrs.min"<<endl;
        cin>>hrsMin;
        hrs=hrsMin;
        min=(hrsMin-hrs)*100+0.5;
    }while(hrs<0||hrs>23||min<0||min>59);
    cout<<"Input the minutes on the phone"<<endl;
    cin>>minute;
    cout<<" "<<endl;
    //Process Data
    if(hrs>=0&&hrs<6){
            charge=.12*minute;
    }else if(hrs>=7&&hrs<18||hrs==19&&min==10){
            charge=.35*minute;
    }
    
    
    //Output Data
    if (hrs==0) cout<<"The phone call started at 00";     
    else if(hrs<10)cout<<"The phone call started at 0"<<hrs;
    else cout<<"The phone call started at "<<hrs; 
    if (min==0) cout<<":00"<<endl;
     else if(min<10)cout<<":0"<<min<<endl;
     else cout<<":"<<min<<endl; 
    cout<<"It lasted for "<<minute<<" mins"<<endl;
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"The total charge = $"<<charge<<endl;
                   
    //Exit Stage Right!
    return 0;
}