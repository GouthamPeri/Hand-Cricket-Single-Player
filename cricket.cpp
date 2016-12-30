#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
using namespace std;
int compbat()
{
    int score=0,a,b;
    do
    {
        cout<<"enter ur choice:(<7)";
        cin>>a;
        b=rand();
        b=b%7;
        cout<<"computer choice is:"<<b<<endl;
        if(a==b)
        {
            cout<<"computer is out:"<<endl;
            return score;
        }
        else
            score=score+b;
    }
    while(a!=b);
}
int compbat(int d)
{
    int score=0,a,b;
    do
    {
        cout<<"enter ur choice:(<7)";
        cin>>a;
        b=rand();
        b=b%7;
        cout<<"computer choice is:"<<b<<endl;
        if((a!=b))
        {
            score=score+b;
            if(score>d)
                return score;
        }
        else
        {
            cout<<"computer is out:"<<endl;
            return score;
        }
    }
    while((a!=b));
}
int compbowl()
{
    int score=0,a,b;
    do
    {
        cout<<"enter ur choice:(<7)";
        cin>>a;
        b=rand();
        b=b%7;
        cout<<"computers choice is:"<<b<<endl;
        if(a==b)
        {
            cout<<"you are out:"<<endl;
            return score;
        }
        else
            score=score+a;
    }
    while(a!=b);
}
int compbowl(int e)
{
    int score=0,a,b;
    do
    {
        cout<<"enter ur choice:(<7)";
        cin>>a;
        b=rand();
        b=b%7;
        cout<<"computers choice is:"<<b<<endl;
        if((a!=b))
        {
            score=score+a;
            if(score>e)
                return score;
        }
        else
        {
            cout<<"you are out:"<<endl;
            return score;
        }
    }
    while((a!=b));
}
int func(int &e,int &f)
{
    e=compbat();
    cout<<"computer score is:"<<e<<endl;
    cout<<"its ur batting"<<endl;
    f=compbowl(e);
    cout<<"your score is:"<<f<<endl;

}
int func1(int &e,int &f)
{
    f=compbowl();
    cout<<"u r score is:"<<f<<endl;
    cout<<"now its computer batting:"<<endl;
    e=compbat(f);
    cout<<"computer score is:"<<e<<endl;
}
int main()
{
    int a,b,c,d,coin,e,f;
    cout<<"toss time:"<<endl;
    cout<<"press any key if u r ready:"<<endl;
    getch();
    srand(time(NULL));
    a=rand()%2;
    if((a==0))
    {
        cout<<"computers chance to choose:"<<endl;
        cout<<"press any key to continue:"<<endl;
        getch();
        srand(time(NULL));
        b=rand()%2;
        if(b==0)
            cout<<"computer chooses heads:"<<endl;
        else
            cout<<"computer chooses tails:"<<endl;
    }
    else
    {
        cout<<"list:"<<endl;
        cout<<"1.heads"<<endl;
        cout<<"2.tails"<<endl;
        cout<<"please enter u r choice:";
        cin>>c;
        if(c==1)
            cout<<"you choose heads:"<<endl;
        else
            cout<<"you choose tails:"<<endl;
    }
    cout<<"coin is in the air:"<<endl;
    srand(time(NULL));
    coin=rand()%2;
    if(coin==0)
    {
        if((b==0)||(c==2))
        {
            cout<<"computer wins the toss"<<endl;
            srand(time(NULL));
            d=rand()%2;
            if(d==0)
            {
                cout<<"computer chooses to bat first:"<<endl;
                func(e,f);
            }
            else
            {
                cout<<"computer chooses to bowl first:"<<endl;
                func1(e,f);
            }
        }
        else
        {
            cout<<"you won the toss";
            cout<<"list:"<<endl;
            cout<<"1.bat"<<endl;
            cout<<"2.bowl"<<endl;
            cout<<"please enter u r choice:";
            cin>>d;
            if(d==2)
            {
                cout<<"computer chooses to bat first:"<<endl;
                func(e,f);
            }
            else
            {
                cout<<"computer chooses to bowl first:"<<endl;
                func1(e,f);
            }
        }

    }
    else
    {
        if((b==1)||(c==1))
        {
            cout<<"you won the toss";
            cout<<"list:"<<endl;
            cout<<"1.bat"<<endl;
            cout<<"2.bowl"<<endl;
            cout<<"please enter u r choice:";
            cin>>d;
            if(d==1)
            {
                cout<<"you choose to bat first";
                func1(e,f);
            }
            else
            {
                cout<<"You choose to bowl first:"<<endl;
                func(e,f);
            }
        }
        else
        {
            cout<<"computer wins the toss"<<endl;
            srand(time(NULL));
            d=rand()%2;

            if(d==0)
            {
                cout<<"computer chooses to bat first:"<<endl;
                func(e,f);
            }
            else
            {
                cout<<"computer chooses to bowl first:"<<endl;
                func1(e,f);
            }
        }

    }
    if(e>f)
        cout<<"computer won the match:";
    else if(e==f)
        cout<<"it's a tie:";
    else
        cout<<"you won the match:";
    return 0;

}
