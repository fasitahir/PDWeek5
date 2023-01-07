#include <iostream>
#include <windows.h>
using namespace std;

// Declare the gotoxy function
void gotoxy(int x, int y);

int main()
{
    // Initialize player position
    int x = 3;
    int y = 3;

    // Loop indefinitely
    while(true)
    {

        system("cls");

        if(x<22)
        {
            gotoxy(x , y );
            
            cout<< " ";
            x = x +1;
            gotoxy( x, y );
            cout<<"P";
        }
        
        if(x == 22)
        {
            x =3;
        }
        
        Sleep(300);


    }





}



// Define the gotoxy function
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
