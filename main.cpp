#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <rlutil.h>

using namespace std;

int manual()
{
    system("cls");
    cout<<"Guess the number!";
    cout<<"\nManual\n\n  ";
    cout<<"The scope of the game is to guess the number.\n  In case of failure a life may be deducted from your life counter.\n  If no lives remain,the game is over.\n\n  GAME DIFFICLUTIES\n\n  Easy Mode - 10 lives\n  Normal Mode - 8 lives\n  Hard Mode - 6 lives\n\n";
    system("pause");
    system("cls");
}

int main()
{
    rlutil::hidecursor();
    srand (time(NULL));

    while(true)
    {
        system("cls");
        system("color 1F");
        int ch1,ch2,choice=1,selected;
        while(true)
        {
            cout<<"Guess the number!";
            cout<<"\nMain Menu\n\n  ";
            if(choice==1)
            {
                rlutil::setBackgroundColor(15);
                rlutil::setColor(1);
                cout<<"Easy Mode";
                rlutil::setBackgroundColor(1);
                rlutil::setColor(15);
            }
            else
                cout<<"Easy Mode";
            cout<<"\n  ";

            if(choice==2)
            {
                rlutil::setBackgroundColor(15);
                rlutil::setColor(1);
                cout<<"Normal Mode";
                rlutil::setBackgroundColor(1);
                rlutil::setColor(15);
            }
            else
                cout<<"Normal Mode";
            cout<<"\n  ";

            if(choice==3)
            {
                rlutil::setBackgroundColor(15);
                rlutil::setColor(1);
                cout<<"Hard Mode";
            rlutil::setBackgroundColor(1);
                rlutil::setColor(15);
            }
            else
                cout<<"Hard Mode";
            cout<<"\n\n  ";
            if(choice==4)
            {
                rlutil::setBackgroundColor(15);
                rlutil::setColor(1);
                cout<<"Manual";
                rlutil::setBackgroundColor(1);
                rlutil::setColor(15);
            }
            else
                cout<<"Manual";
            cout<<"\n  ";
            if(choice==5)
            {
                rlutil::setBackgroundColor(15);
                rlutil::setColor(1);
                cout<<"Quit game";
                rlutil::setBackgroundColor(1);
                rlutil::setColor(15);
            }
            else
                cout<<"Quit game";
            cout<<"\n  ";

            ch1=getch();
            if(ch1==224)
            {
                ch2=getch();
                if(ch2==72)
                {
                    choice--;
                    if(choice==0)
                        choice=5;
                }
                else if(ch2==80)
                {
                    choice++;
                    if(choice==6)
                        choice=1;
                }
            }
            else if(ch1==13)
            {
                if(choice==1||choice==2||choice==3)
                    {
                        selected=choice;
                        break;
                    }
                else if(choice==4)
                    manual();
                else
                    break;
            }
            system("cls");
            selected=1;
            break;
        }

        system("cls");

        int randomNumber;int lives,previousChoices[10],input;
        randomNumber=rand()%100;

        if(selected==1)
            lives=10;
        else if(selected==2)
            lives=8;
        else if(selected==3)
            lives=6;

        for(int i=0;i<lives;i++)
        {
            cout<<"Guess the number!\n";
            if(i>0)
            {
                cout<<"Previous Guesses: ";
                for(int j=0;j<i;j++)
                    cout<<previousChoices[j]<<",";
                cout<<"\n\n";
            }
            cout<<"Input the number: ";
            cin>>input;cout<<"\n\n";
            previousChoices[i]=input;
            if(input<randomNumber)
            {
                cout<<"The number is higher\n";
                cout<<"You have "<<lives-i-1<<" lives remaining\n";
                system("pause");
            }
            else if(input>randomNumber)
            {
                cout<<"The number is lower\n";
                cout<<"You have "<<lives-i-1<<" lives remaining\n";
                system("pause");
            }
            else
            {
                cout<<"CONGRATULATIONS! YOU WIN!\n\n\n\n\n\n";
                cout<<"Returning to main menu...\n";
                system("pause");
                break;
            }
            system("cls");

        }
    }
    return 0;
}
