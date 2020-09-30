
#include<iostream>
#include<conio.h>
#include<time.h>
#include<windows.h>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y)
{
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);  }
void how_to_play()
{
   system("Color 34");//choose a suitable Color X,Y is screen,text
   gotoxy(20,4); cout<<" Our Dino is in a hurry ";
   gotoxy(20,5); cout<<" Help him reach faster by avoiding various obstacles";
   gotoxy(20,6); cout<<" Press spacebar for jump them \n";
   gotoxy(20,7); cout<<" Now hurry, dino is waiting for your help";
   getch();
}

int main()
{
//setcursor(0,0);
do{
system("cls");
system("Color 07");//choose a suitable Color X,Y is screen,text
gotoxy(10,5); cout<< " -------------------------------------------------------------------";
gotoxy(10,6);cout<<"|                           DINO RUN                                |";
gotoxy(10,7); cout<< " -------------------------------------------------------------------";
gotoxy(10,9); cout<<"1. LET US PLAY ";
gotoxy(10,10);cout<<"2. HOW TO PLAY ";
gotoxy(10,11);cout<<"3. BYE ";
gotoxy(10,13);cout<<"CHOOSE 1,2 or 3: ";
char op=getche();

system("cls");
//if(op=='1') play(); (function yet to be made)
if(op=='2') how_to_play(); //(function yet to be made)
//else if(op=='3') exit(0); (function yet to be made)
}while(1);
}
