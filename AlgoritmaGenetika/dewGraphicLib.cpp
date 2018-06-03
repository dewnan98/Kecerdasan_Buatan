/*
███████████████████████████
███████▀▀▀░░░░░░░▀▀▀███████
████▀░░░░░Creator░░░░░▀████
███│░░░░░░░░Of░░░░░░░░░│███
██▌│░░░░DEWA NANDA░░░░░│▐██
██░└┐░░░░░░░░░░░░░░░░░┌┘░██
██░░└┐░░░░░░░░░░░░░░░┌┘░░██
██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██
██▌░│██████▌░░░▐██████│░▐██
███░│▐███▀▀░░▄░░▀▀███▌│░███
██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██
██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██
████▄─┘██▌░░░░░░░▐██└─▄████
█████░░▐█─┬┬┬┬┬┬┬─█▌░░█████
████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████
█████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████
███████▄░░░░░░░░░░░▄███████
██████████▄▄▄▄▄▄▄██████████
███████████████████████████
*/

#include "dewGraphicLib.h"

int arraystr(string *p)
{
    return (sizeof(p)/sizeof(*p));
}

extern int menu(string teks[],int maks, string font, int x,int y )
{


    bool pilih;
    bool done;
    int colour [64];
    char key;
    int point=0;;
    done=false;


    while (!done)
    {
        pilih=true;
        for (int a=0; a<maks; a++)
        {
            if (a==point)colour[a]=15;
            else
                colour [a]=8;
        }
        gotoxy(x,y);
        for(int a = 0; a<maks; a++)
        {

            setColor(colour[a]);



            if (font == "normal")
            {
                gotoxy(x,y+a);
                cout<<teks[a];
                gotoxy(x,y+a);
                cout<<endl;
            }

        }



        while(pilih)
        {
            if (kbhit)
            {
                key=getch();

                if (key==72 || key=='w')
                {
                    --point;
                    if(point<0)point=maks-1;
                    break;

                }
                else if (key==80 || key=='s')
                {
                    ++point;
                    if (point>=maks)point=0;
                    break;
                }

                else if (key==13)
                {
                    pilih=false;
                    done=true;
                }


            }

        }
    }
    setColor(15);
    return point+1;




}



void setColor(int value)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),  value);
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int random (int mins , int maks)
{
return mins + ( rand() % ( maks - mins + 1 ) );
}
