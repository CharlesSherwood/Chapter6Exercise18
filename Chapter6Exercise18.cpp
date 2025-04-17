/*FileName:Chapter6Exercise18.cpp
ProgrammerName:Charles Sherwood
Date:4/2025
Requirements:This program should estimate
how much paint a person needs for a wall
*/


#include<cmath>
#include<string>
#include<iomanip>
#include <iostream>
using namespace std;

void Welcome();
double GetRooms();
double GetPrice();
double GetWall();
void Calculate(double Rooms,double Price,double Wall);
bool repeat();
void Display();
 

int main()
{
	Welcome();
	double Rooms, Price, Wall;
	do
	{
		Rooms=GetRooms();
		Price=GetPrice();
		Wall=GetWall();
		Calculate(Rooms, Price, Wall);



	} while (repeat());

}

double GetRooms()
{
	double Rooms;
	cout << "How Many Rooms Does This Project Have?:";
	cin >> Rooms;
	while (Rooms < 1)
	{
		cout << "Please Enter A Valid Number";
		cin >> Rooms;
	}
	return Rooms;
}

double GetPrice()
{
	double Price;
	cout << "How Much Did The Paint Cost?:";
	cin >> Price;
	while (Price < 10)
	{
		cout << "PLease Enter A Valid Price";
		cin >> Price;
	}
	return Price;
}

double GetWall()
{
	double Wall;
	cout << "What Is The Area Of The Wall?:";
	cin >> Wall;
	while (Wall < 0)
	{
		cout << "PLease Enter A Valid Amount";
		cin >> Wall;
	}
	return Wall;

}


void Calculate(double Rooms,double Price,double Wall)
{
	int PHour=25, Sfeet=110, Gpaint=1,Labor=8;
		
	cout << Rooms << endl;
	cout << Price << endl;
	cout << Wall << endl;


}



void Welcome()
{
	cout << "--------------------------------------\n";
	cout << "!!Welcome To The Paint Job Estimater!!\n";
	cout << "--------------------------------------\n";
}



bool repeat()
{	char repeat;
	cout << "Would You Like To Repeat The Program Y/N:";
	cin >> repeat;
	return (repeat == 'Y' || repeat == 'y');
}

void Display()
{




}