#include <iostream>
using namespace std;

string time(int hoursneeded , int days , int workers);
int timeextra(int hoursneeded , int workers , int days);

main()
{
    int hoursneeded , days , workers ;
    cout<<"Enter the Number of hours needed to complete the task: ";
    cin>> hoursneeded;

    cout<<"Enter the number of days they have: ";
    cin>>  days ;

    cout<<"Enter the number of workers: ";
    cin>> workers;
    time(hoursneeded , days ,workers);
  
    string result1=time(hoursneeded , days ,workers);
    int result2= timeextra( hoursneeded ,  workers , days) ;
    cout<<result1<<result2<<" hours "<<endl;
    
}

string time(int hoursneeded , int days , int workers)
{
    int hourhave;
    int workinghours =10 -(0.1 * 10 );
    string result;
    hourhave = workinghours * workers * days ;
    if(hourhave> hoursneeded)
    {
       result = "Yes the hours are enough left hours are: ";
       return result;
    }

        if(hourhave < hoursneeded)
    {
       result = "No! hours are not enough needed hours are: ";
       return result;
    }
}

int timeextra(int hoursneeded , int workers , int days)
{
    int hourhave;
    int workinghours =10 -(0.1 * 10 );
    int result;    

    hourhave = workinghours * workers * days ;

    if(hourhave> hoursneeded)
    {
       result = hourhave - hoursneeded;
       return result;
    }

    if(hourhave< hoursneeded)
    {
       result =  hoursneeded - hourhave;
       return result;
    }
}

