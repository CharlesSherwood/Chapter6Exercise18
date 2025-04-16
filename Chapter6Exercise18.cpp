/*FileName:Chapter6Exercise18.cpp
ProgrammerName:Charles Sherwood
Date:4/2025
Requirements:This program should estimate
how much paint a person needs for a wall
*/


#include<cmath>
#include<iomanip>
#include <iostream>
using namespace std;

void Welcome();
int GetHoursPrice();
bool repeat();

 

int main(int Info[2])
{
	GetHoursPrice();
	cout << Info[1] << "\n" << Info[0];
}


void Welcome()
{

}


int GetHoursPrice()
{
	int Info[2];
	cout << "Please Enter the amount of hours:";
	cin >> Info[0];
	cout << "PLease Enter The Rate That You Are Paying";
	cin >> Info[1];
	return Info[2];
}

bool repeat()
{	char repeat;
	cout << "Would You Like To Repeat The Program Y/N:";
	cin >> repeat;
	return repeat;
}