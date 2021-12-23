#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;


main()
{
    cout<<"\t\tCAR PARKING.."<<endl;
    int car=0, bike=0, rikshaw=0;
    int n;
    while(true)
    {
        cout<<"\t\tEnter 1 for Car :"<<endl;
        cout<<"\t\tEnter 2 for Bike :"<<endl;
        cout<<"\t\tEnter 3 for Rikshaw :"<<endl;
        cout<<"\t\tEnter 4 for Show Data :"<<endl;
        cout<<"\t\tEnter 5 for delete Data :"<<endl;
        cout<<"\t\tEnter 6 for Exit :"<<endl;

        cin>>n;
        if(n==1)
        {
            car++;
            system("CLS");
            cout<<"CAR IS ADD.."<<endl;

        }
        else if(n==2)
        {
            bike++;
            system("CLS");
            cout<<"BIKE ADD.."<<endl;
        }
        else if(n==3)
        {
            rikshaw++;
            system("CLS");
            cout<<"RIKSHAW ADD.."<<endl;
        }
        else if(n==4)
        {
            cout<<"CAR :"<<car<<endl;
            cout<<"BIKE :"<<bike<<endl;
            cout<<"RIKSHAW :"<<rikshaw<<endl;

        }
        else if(n==5)
        {
            car=0;
            bike=0;
            rikshaw=0;
            system("CLS");
            cout<<"ALL DATA IS DELETED.."<<endl;
        }
        else
        {
            exit(0);

        }
    }
}
