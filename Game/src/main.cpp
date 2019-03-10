#include<iostream>
#include<wchar.h>
#include <time.h>
using namespace std;
int cash = 100;
void Play(int bet)
{
    //char c[3] = {'J','Q','K'};
    char *c = new char[3];
    c[0]='J';
    c[1]='Q';
    c[2]='K';
    cout<<"Shuffling...";
    srand(time(NULL));
    int i;
    for(i = 0; i< 5; i++)
    {
        int x = rand()% 3;
        int y = rand()% 3;
        int temp = c[x];
        c[x] = c[y];
        c[y] = temp;
    }
    int playersGuess;
    cout<<"What's the position of Queen ";
    cin>>playersGuess;

    if(c[playersGuess-1]=='Q')
    {
        cash += 3*bet;
        cout<<"You Win ! Positions are"<<c[0]<<" "<<c[1]<<" "<<c[2]<<" Cash ="<<cash<<endl;
    }
    else
    {
        cash -= bet;
        cout<<"You Loose ! Positions are"<<c[0]<<" "<<c[1]<<" "<<c[2]<<" Cash ="<<cash<<endl;
    }
}

int main()
{
    int bet;
    cout<<"**Welcome to the Virtual Casino**\n";
    cout<<"Total Cash = "<<cash<<endl;
    while(cash > 0)
    {
        cout<<"What's your bet? $";
        cin>>bet;
        if(bet == 0 || bet > cash) break;
        Play(bet);
    }
}