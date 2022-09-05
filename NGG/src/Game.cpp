#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Game {



	int Run()
	{
		int num, guess, tries = 0;
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


			else
				cout << "\n  yay! you Guessed right " << tries << "guess!\n";

		} while (guess != num);


		


	}
	
};

