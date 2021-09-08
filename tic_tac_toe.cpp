#include <bits/stdc++.h>
using namespace std;

char val[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
string winner ="Draw",loser;
string p1="Player 1",p2="Player 2";
char p1_mark='X',p2_mark='O';


void display_board()
{
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t            |             |             ";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t      "<< val[0][0]<<"     |       "<<val[0][1]<<"     |        "<<val[0][2];
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t ___________|_____________|_____________";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t            |             |             ";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t      "<< val[1][0]<<"     |       "<<val[1][1]<<"     |        "<<val[1][2];
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t ___________|_____________|_____________";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t            |             |             ";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t      "<< val[2][0]<<"     |       "<<val[2][1]<<"     |        "<<val[2][2];
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t            |             |             \n";
}

bool win()
{
    string r1="",r2="",r3="",c1="",c2="",c3="",d1="",d2="";
    r1+=val[0][1];
    r1+=val[0][0];
    r1+=val[0][2];

    r2+=val[1][1];
    r2+=val[1][0];
    r2+=val[1][2];

    r3+=val[2][1];
    r3+=val[2][0];
    r3+=val[2][2];

    c1+=val[0][0];
    c1+=val[1][0];
    c1+=val[2][0];

    c2+=val[0][1];
    c2+=val[1][1];
    c2+=val[2][1];

    c3+=val[0][2];
    c3+=val[1][2];
    c3+=val[2][2];

    d1+=val[0][0];
    d1+=val[1][1];
    d1+=val[2][2];

    d2+=val[0][2];
    d2+=val[1][1];
    d2+=val[2][0];

    if(r1=="XXX" || r2=="XXX" || r3=="XXX" || c1=="XXX" || c2=="XXX" || c3=="XXX" || d1=="XXX" || d2=="XXX" )
    {
        if(p1_mark=='X') 
        {
            winner=p1;
            loser=p2;
        }
        else 
        {
            winner=p2;
            loser=p1;
        }
        return true;
    }
    else if(r1=="OOO" || r2=="OOO" || r3=="OOO" || c1=="OOO" || c2=="OOO" || c3=="OOO" || d1=="OOO" || d2=="OOO" )
    {
          if(p1_mark=='X') 
          {
              winner=p2;
              loser=p1;
          }
          else 
          {
              winner=p1;
              loser=p2;
          }
          return true;
    }
    return false;
}

int main()
{
    int choice;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t-|------------------|-";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t | TIC TAC TOE GAME |";
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t-|------------------|-\n\n";
    cout<<"\t\t\t\t\tEnter Player 1 Name :- ";
    cin>>p1;
    cout<<"\t\t\t\t\tSelect ['O'/'X'] :- ";
    cin>>p1_mark;
    if(p1_mark=='X') p2_mark='O';
    else p2_mark='X';
    cout<<"\t\t\t\t\tEnter Player 2 Name :- ";
    cin>>p2;
    cout<<"\n\t\t\t\t\t\t\t\t          "<<p1<<" will enter "<<p1_mark<<" & "<<p2<<" will enter "<<p2_mark;
    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t        This is Our Game Board\n\t\t\t\t\t\t\t\t   To Enter Your Mark in field Enter Number displayed in that field \n";

    //code to display board
    display_board();

    //Code to take value
    int i=0,f=0;
    while(i<9)
    {
        if(!(i&1))
        {
            cout<<"\n\t\t\t\t\t\t\t\t\t\t"<<p1<<" where u want to enter "<<p1_mark<<" :- ";
            cin>>choice;
            switch(choice)
            {
                case 1 : 
                if(val[0][0]!='O' && val[0][0]!='X')val[0][0]=p1_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 2 : 
                if(val[0][1]!='O' && val[0][1]!='X')val[0][1]=p1_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 3 : 
                if(val[0][2]!='O' && val[0][2]!='X')val[0][2]=p1_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 4 : 
                if(val[1][0]!='O' && val[1][0]!='X')val[1][0]=p1_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 5 : 
                if(val[1][1]!='O' && val[1][1]!='X')val[1][1]=p1_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 6 : 
                if(val[1][2]!='O' && val[1][2]!='X')val[1][2]=p1_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 7 : 
                if(val[2][0]!='O' && val[2][0]!='X')val[2][0]=p1_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 8 : 
                if(val[2][1]!='O' && val[2][1]!='X')val[2][1]=p1_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 9 : 
                if(val[2][2]!='O' && val[2][2]!='X')val[2][2]=p1_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                default:
                cout<<"\n\t\t\t\t\t\t\t\t\t Enter the Number between 1-9\n";
                break;
                
            }
        }
        else
        {
            cout<<"\n\t\t\t\t\t\t\t\t\t\t"<<p2<<" where u want to enter "<<p2_mark<<" :- ";
            cin>>choice;
            switch(choice)
            {
                case 1 : 
                if(val[0][0]!='O' && val[0][0]!='X')val[0][0]=p2_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 2 : 
                if(val[0][1]!='O' && val[0][1]!='X')val[0][1]=p2_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 3 : 
                if(val[0][2]!='O' && val[0][2]!='X')val[0][2]=p2_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 4 : 
                if(val[1][0]!='O' && val[1][0]!='X')val[1][0]=p2_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 5 : 
                if(val[1][1]!='O' && val[1][1]!='X')val[1][1]=p2_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 6 : 
                if(val[1][2]!='O' && val[1][2]!='X')val[1][2]=p2_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 7 : 
                if(val[2][0]!='O' && val[2][0]!='X')val[2][0]=p2_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 8 : 
                if(val[2][1]!='O' && val[2][1]!='X')val[2][1]=p2_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                case 9 : 
                if(val[2][2]!='O' && val[2][2]!='X')val[2][2]=p2_mark;
                else 
                {
                    cout<<"\n\t\t\t\t\t\t\t\t\t\tThis field is already filled\n";
                    i--;
                }
                break;
                default:
                cout<<"\n\t\t\t\t\t\t\t\t\t Enter the Number between 1-9\n";
                break;
            }
        }
        
        i++;
        display_board();
        if(win()) 
        {
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t        This game is won by "<< winner<<"\n";
            cout<<"\n\n\t\t\t\t\t\t\t\t\t\t      Sorry "<< loser<<" better luck next time\n";
            f=1;
            break;

        }
    }
    if(f==0)
    {
        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t     Well Played "<<p1<<" & "<<p2<<" , it was a good match but we haven't got our winner\n";
    }
    return 0;
}