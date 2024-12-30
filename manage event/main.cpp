// Aqdas Juya , 05/23/2024 , ajuya@pdx.edu ,  Program # 4 , cs 162
#include "events.h"
#include <iostream>

int main() { 
	int initial_size;
	cout << "Enter the number of events you would like to enter: ";
	cin >> initial_size;
	cin.ignore(100,'\n');
	
	event_list eventsList(initial_size); 
	int pick; 
	char field[SIZE];
	float minprice;
	float maxprice;
	do {
		cout << "1. Add an event\n"; 
		cout << "2. Display all events\n";
		cout << "3. Display the events by field\n";
		cout << "4. Display events by price range\n";
                cout << "5. Display 5 to exit\n";
		cout << "\nPlease enter your choice: ";
		cin >> pick; 
		cin.ignore(100,'\n');

		if (pick== 1) {
			eventsList.read(); 
		}
		else if (pick == 2 ) { 
			eventsList.display();
		}
		else if (pick == 3) {
			cout << "Enter the field name to search: "; 
			cin.get(field, SIZE, '\n');
			cin.ignore(100, '\n');
			eventsList.display_by_specific_field(field);
		}
		else if (pick == 4) {
			cout << "enter the minimum price: "; 
			cin >> minprice;
			cout << "enter the maximum price; ";
			cin >> maxprice;
			cin.ignore(100,'\n');
			eventsList.displayPrice(minprice, maxprice);
		}
                else if (pick == 5) {
                        cout << "" << endl;
                }

		else {
			cout <<"Please only enter the menu listed"<<endl;
		}
	} while (pick != 5); 

	return 0; 
}
