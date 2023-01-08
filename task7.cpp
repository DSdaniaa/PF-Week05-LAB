#include <iostream>
using namespace std;

void noflow(int , int , float, int);
void overflowed(int, int , float , int );
main()

{
    int volume, flow, flow1;
    float absent, volfull;
    


    cout<<"Enter volume: ";
    cin>>volume;
    cout<<"Enter flow rate of pipe1: ";
    cin>>flow;
    cout<<"Enter flow rate of pipe2: ";
    cin>>flow1;
    cout<<"Enter the hours absent: ";
    cin>> absent;

    volfull=((flow+flow1)*absent);

    if(volfull<=volume)
    {
        noflow(flow,flow1,absent,volume);
    }
    
    if(volfull>volume)
    {
          overflowed(flow,flow1, absent,volume);
    }

}

void noflow(int flow, int flow1, float absent, int volume)
{
    float total, percent, pipe1, pipe2, vol;

    vol=(flow+flow1)*absent;
    total=(flow+flow1)*absent;
    percent=(total/vol)*100;
    pipe1=((flow*absent)/vol)*100;
    pipe2=((flow1*absent)/vol)*100;
    cout<<"The pool is: "<<percent<<"% full, pipe 1: "<<pipe1<<"%, pipe 2: "<<pipe2 <<"%";

}

void overflowed(int flow, int flow1, float absent, int volume)
{
    float total;
    float overf;

    total=(flow+flow1)*absent;
    overf=total-volume;
    cout<<"for "<<absent<<" hours pool overflowed with "<<overf <<" litres.";
}