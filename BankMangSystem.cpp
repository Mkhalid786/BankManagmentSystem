#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<windows.h>
using namespace std;
class Bank
{
private:
    int total;
    string id;
    struct person
    {
        string name,ID,address;
        int contact,cash;
    }person[100];
public:
    Bank()
    {
        total=0;
    }
    void choice();
    void perdata();
    void show();
    void update();
    void searchh();
    void transaction();
    void del();
};
main()
{
    Bank b;
    b.choice();
    return 0;
}
void Bank::choice()
{
    char ch;
    while(1)
    {
        cout<<"\n\nPress..."<<endl;
        cout<<"\t\t1. Create New Account"<<endl;
        cout<<"\t\t2. View Customer List"<<endl;
        cout<<"\t\t3. Update Information"<<endl;
        cout<<"\t\t4. Check Details"<<endl;
        cout<<"\t\t5. For Transactions"<<endl;
        cout<<"\t\t6. Remove Account"<<endl;
        cout<<"\t\t7. Exit"<<endl;
        ch=getch();
        system("CLS");
        switch(ch)
        {
        case '1':
            Bank::perdata();
            break;
        case '2':
            Bank::show();
            break;
        case '3':
            Bank::update();
            break;
        case '4':
            Bank::searchh();
            break;
        case '5':

            Bank::transaction();
            break;
        case '6':
            Bank::del();
            break;
        case '7':
            exit(0);
            break;
        default:
            cout<<"Invalid Choice "<<endl;
            break;





        }
    }
}

void Bank::perdata()
{
    cout<<"Enter Person Data :"<<total+1<<endl;
    cout<<"Enter Your Name: ";
    cin>>person[total].name;
    cout<<"ID :";
    cin>>person[total].ID;
    cout<<"Address :";
    cin>>person[total].address;
    cout<<"Contact :";
    cin>>person[total].contact;
    cout<<"Total Cash :";
    cin>>person[total].cash;
    total++;

}
void Bank::show()
{
    for(int i=0;i<total;i++)
    {
        cout<<"Person Data :"<<i+1<<endl;
        cout<<"Name :"<<person[i].name<<endl;
        cout<<"ID :"<<person[i].ID<<endl;
        cout<<"Address :"<<person[i].address<<endl;
        cout<<"Contact :"<<person[i].contact<<endl;
        cout<<"Cash :"<<person[i].cash<<endl;
        cout<<endl;
    }
}

void Bank::update()
{
    cout<<"Enter ID those want to update :"<<endl;
    cin>>id;
    for(int i=0;i<total;i++)
    {
        if(id==person[i].ID)
        {
            cout<<"Previous Data :"<<endl;
            cout<<"Person Data :"<<i+1<<endl;
            cout<<"Name :"<<person[i].name<<endl;
            cout<<"Id :"<<person[i].ID<<endl;
            cout<<"Address :"<<person[i].address<<endl;
            cout<<"contact :"<<person[i].contact<<endl;
            cout<<"Cash :"<<person[i].cash<<endl;
            cout<<"\tENTER NEW DATA.. "<<endl;

            cout<<"Enter name :";
            cin>>person[i].name;
            cout<<"Enter ID :";
            cin>>person[i].ID;
            cout<<"Enter Address :";
            cin>>person[i].address;
            cout<<"Enter Contact :";
            cin>>person[i].contact;
            cout<<"Enter Cash :";
            cin>>person[i].cash;
            break;
        }
        if (i==total-1){
            cout<<"No Such Data found :"<<endl;
        }
    }
}
void Bank::searchh()
{
    cout<<"Enter id do you want search.."<<endl;
    cin>>id;
    for(int i=0;i<total;i++)
    {
        if(id==person[i].ID)
        {
            cout<<"Name :"<<person[i].name<<endl;
            cout<<"ID :"<<person[i].ID<<endl;
            cout<<"Address :"<<person[i].address<<endl;
            cout<<"Contact no :"<<person[i].contact<<endl;
            cout<<"Cash :"<<person[i].cash<<endl;
            break;
        }
        if(i==total-1)
        {
            cout<<"No Such Data Found..."<<endl;
        }
    }
}
void Bank::transaction()
{
    int cash;
    int ch;
    cout<<"Enter id those data you want to Trasaction.."<<endl;
    cin>>id;
    for(int i=0;i<total;i++)
    {
        if(id==person[i].ID)
        {
            cout<<"Name :"<<person[i].name<<endl;
            cout<<"Address :"<<person[i].address<<endl;
            cout<<"Contact :"<<person[i].contact<<endl;
            cout<<"\n Existing Cash :"<<person[i].cash<<endl;
            cout<<"Press 1 to deposit "<<endl;
            cout<<"Press 2 to Withdraw "<<endl;
            ch=getch();
            switch(ch)
            {
            case '1':
                cout<<"How much cash do you want deposit :"<<endl;
                cin>>cash;
                person[i].cash+=cash;
                cout<<"Your Currant Cash is :"<<person[i].cash<<endl;
                break;

            case '2':
                cout<<"How much Withdraw :"<<endl;
                cin>>cash;
                if(cash>person[i].cash)
                {
                    cout<<"You Existing Cash is :"<<person[i].cash<<endl;
                    Sleep(3000);


                }
                person[i].cash-=cash;
                cout<<"New cash :"<<person[i].cash<<endl;
                break;
            default:
                cout<<"Invalid Input "<<endl;
                break;

            }
            break;



        }
        if (i==total-1)
        {
            cout<<"No Such Record Found.."<<endl;
        }
    }
}
void Bank::del()
{
    char ch;
    cout<<"Press 1 for remove Specific Account :";
    cout<<"Press 2 for remove All Account :";
    ch=getch();
    switch(ch)
    {
    case '1':
        cout<<"Enter ID do you want :";
        cin>>id;
        for(int i=0;i<total;i++)
        {
            if(id==person[i].ID)
            {
                for(int j=i;j<total;j++)
                {
                    person[j].name=person[j+1].name;
                    person[j].ID=person[j+1].ID;
                    person[j].address=person[j+1].address;
                    person[j].contact=person[j+1].contact;
                    person[j].cash=person[j+1].cash;
                    total--;
                    cout<<"Your requird data are deleted.."<<endl;
                    break;

                }
            }
            if(i==total-1)
            {
                cout<<"No Such Record Found :"<<endl;
            }
        }
        break;
    case '2':
        total=0;
        cout<<"All Record is Deleted "<<endl;
        break;
    default:
        cout<<"Invalid input :"<<endl;
        break;

    }

}















