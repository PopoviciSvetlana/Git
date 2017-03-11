#include <iostream> 
#include <time.h>

using namespace std;

void show(){
	switch (choice)
	{
	case 1:cout << "rock"; break;
	case 2: cout << "paper"; break;
	case 3: cout << "scrissors"; break;
	}
int main()
{
	int  computer_choice;
	
	srand(time(NULL));
	bool work = true;
	while (work)
	{
		computer_choice = rand() % 3 +1;
		int your_choice;
		cout << "Enter your choice:" << endl << "1 for rock" << endl << "2 for paper" << endl << "3 for scrissors " << endl << "0  for exit" << endl;
		try {
			cin >> your_choice;
		}
		catch (...) {
			
			cout << "Input error";
			work = false;
			continue;
		}
		cout << "computer_choice :"
			show(computer_choice);
		cout << "your_choice :"
			show(your_choice);
		cout << endl;


		 if (computer_choice == your_choice)
		{
			cout << "" << endl;
		}
			
		switch (your_choice) {

		     case 0: {
				 work = false;
				 break; 

			 case 1: if (computer_choice == 2)
			
				 cout << "You lost" << endl;
				 else  {
					 cout << "You wan" << endl;
				 }

			 case 2: if (computer_choice == 1)

				 cout << "You wan" << endl;
					 else {
						 cout << "You lost" << endl;
					 }
			 case 3: if (computer_choice == 1)

				 cout << "You lost" << endl;
					 else {
						 cout << "You wan" << endl;
					 }


		

			
					 
				 }




			 }
		}





	}
	return 0;

}
