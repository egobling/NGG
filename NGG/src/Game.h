#include<iostream>
#include<cstdlib>
#include<ctime>
#include<Source.cpp>

using namespace std;



int main();
{
	int num, guess, tires = 0;
	srand(time(0));	
	num = rand() % 100 + 1;
	cout << "THE NNG\n\n";


	do
	{
		cout << " Guess a nuber:";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "too hight LOL\n\n";
		else if (guess < num)
			cout << "too low bro\n\n";
	}

}

