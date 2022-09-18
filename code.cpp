#include"iostream"
#include"bits/stdc++.h"
using namespace std;
void push();
void pop();
void display();
void size();
int top=-1;
int i=0;
int ar[5]={0,0,0,0,0};
int main()
{
    int choice=0;
    cout<<"Select any one..."<<endl;
    do
    {
    cout<<"1.Insert"<<endl<<"2.Delete"<<endl<<"3.Display"<<endl<<"4.size"<<endl<<"100.exit"<<endl;
    cin>>choice;
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                size();
                break;
            default:
                cout<<"Enter the correct number..."<<endl;
        }
    }
    while(choice!=100);
}
void push()
{
    if(top>4)
    {
        cout<<"Overflow"<<endl;
    }
    else
    {
    int item;
    cout<<"Enter the item you want to insert.."<<endl;
    cin>>item;
    top++;
    ar[top]=item;
    cout<<"Inserted"<<endl;
    }
}
void pop()
{
     if(top<0)
    {
        cout<<"Underflow"<<endl;
    }
    else
    {
    int item;
    item=ar[top];
    ar[top]=0;
    top--;
    }
}
void display()
{
    for(i=0;i<5;i++)
    {
        cout<<ar[i]<<"\t";
    }
}
void size()
{
    cout<<top<<endl;
}
