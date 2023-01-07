#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x , int y);
char getCharAtxy(short int x , short int y);
void printMaze();
void printpacMan(int x , int y);
void remove(int x , int y);

main()
{
    int x = 4;
    int y = 4; 
    bool playing = true; 
   system ("cls");
   printMaze();



   while(true)
   {

     if(GetAsyncKeyState(VK_RIGHT))
     {
        char nextposition;
        nextposition = getCharAtxy( x+1, y);
        if(nextposition == ' ')
        {
            remove(x  , y);
            x = x+1;
            printpacMan(x , y);

        }
     }
     
     if(GetAsyncKeyState(VK_LEFT))
     {
        char nextposition ; 
        nextposition = getCharAtxy(x - 1 , y);
        if(nextposition  == ' ')
        {
            remove(x , y);
            x = x-1;
            printpacMan(x , y);

        }
        
     }


     if(GetAsyncKeyState(VK_UP))
     {
        char nextposition ; 
        nextposition = getCharAtxy(x , y-1);
        if(nextposition  == ' ')
        {
            remove(x , y);
            y = y-1;
            printpacMan(x , y);

        }
        
     }

    if(GetAsyncKeyState(VK_DOWN))
     {
        char nextposition ; 
        nextposition = getCharAtxy(x , y+1);
        if(nextposition == ' ')
        {
            remove(x , y);
            y = y+1;
            printpacMan(x , y);

        }
        
     }

        Sleep(200);
   }
   
  
   



}



void gotoxy(int x , int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


char  getCharAtxy(short int x , short int y)
{
    CHAR_INFO ci;
    COORD xy = {0 , 0};
    SMALL_RECT rect = {x , y , x , y};
    COORD coordBufsize;
    coordBufsize.X = 1;
    coordBufsize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci , coordBufsize , xy , &rect) ? ci.Char.AsciiChar : ' ';

}

void printMaze()
{
    cout<<"**********"<<endl;
    cout<<"*        *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"*        *"<<endl;
    cout<<"**********"<<endl;

}

void printpacMan(int x , int y)
{
    gotoxy(x , y);
    cout<<"P";
}

void remove(int x , int y)
{   gotoxy(x , y);

    cout<<" ";
}
