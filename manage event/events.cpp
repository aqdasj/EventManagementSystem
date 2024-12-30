// events.cpp
#include "events.h"



// constructor
event_list::event_list(int mainsize) {
	event_array == new events[mainsize];
	all_size == mainsize; 
	num = 0;
}

//destructor
event_list::~event_list() {
	delete[] event_array;
	event_array = nullptr; 
	all_size = 0; 
	num = 0;

}

void event_list::resizearray() {
	all_size *= 2;
	events* newarray = new events[all_size];
	for(int i {0}; i < num; ++i)
	{
		newarray[i] = event_array[i]; 
	}
	delete [] event_array;
	event_array = newarray; 
}
// This function will read all the new events details
void event_list::read() {
	if (num == all_size) resizearray(); 
	events new_event;

	cout <<" Please enter the event name: " ; 
	cin.get(new_event.name, SIZE, '\n');
	cin.ignore(100, '\n');

	cout << "Please enter your description: "; 
        cin.get(new_event.description, SIZE, '\n');
        cin.ignore(100, '\n');

	cout <<"Please enter the start date: ";
        cin.get(new_event.start, SIZE, '\n');
        cin.ignore(100, '\n');

	cout <<"Please enter the end date: "; 
        cin.get(new_event.end, SIZE, '\n');
        cin.ignore(100, '\n');

	cout <<"please enter the price: "; 
        cin >> new_event.price;
        cin.ignore(100, '\n');

	cout << "Please enter the review: "; 
        cin.get(new_event.review, SIZE, '\n');
        cin.ignore(100, '\n');

	cout << "Please enter the event's location: "; 
        cin.get(new_event.location, SIZE, '\n');
        cin.ignore(100, '\n');

	cout <<"Please enter the contact phone number: ";
        cin >> new_event.number;
        cin.ignore(100, '\n');

	event_array[num++] = new_event;
}

// This function will display all the events
void event_list::display() 
{
	for (int i {0}; i < num ; ++i)  {
		cout << "Event " << (i + 1) << ": " << event_array[i].name << endl;
		cout << "Description: " <<  event_array[i].description << endl;
		cout << "Start Date: " <<   event_array[i].start << endl;
		cout << "End Date: " <<  event_array[i].end << endl;
		cout << "Price: $" <<  event_array[i].price << endl;
		cout << "Review: "<<  event_array[i].review << endl;
		cout << "Location: " <<  event_array[i].location << endl;
		cout << "Phone number: " <<  event_array[i].number << endl;

	}
}

// This function will display the event by specific field
void event_list::display_by_specific_field(char * field) {
	for(int i {0}; i < num; ++i) {
		if (strcmp(event_array[i].name,field) == 0) {
	                cout << "Event " << (i + 1) << ": " <<  event_array[i].name << endl;
	                cout << "Description: " <<  event_array[i].description << endl;
        	        cout << "Start Date: " <<   event_array[i].start << endl;
        	        cout << "End Date: " <<  event_array[i].end << endl;
        	        cout << "Price: $" <<  event_array[i].price << endl;
        	        cout << "Review: "<<  event_array[i].review << endl;
        	        cout << "Location: " <<  event_array[i].location << endl;
        	        cout << "Phone number: " <<  event_array[i].number << endl;
		}
	}
}

//function to display events within a price range
void event_list::displayPrice(float minprice, float maxprice){
	for(int i = 0; i < num; ++i) {
		if ( event_array[i].price >= minprice &&  event_array[i].price <= maxprice) {
                        cout << "Event " << (i + 1) << ": " <<  event_array[i].name << endl;
                        cout << "Description: " <<  event_array[i].description << endl;
                        cout << "Start Date: " <<   event_array[i].start << endl;
                        cout << "End Date: " <<  event_array[i].end << endl;
                        cout << "Price: $" <<  event_array[i].price << endl;
                        cout << "Review: "<<  event_array[i].review << endl;
                        cout << "Location: " <<  event_array[i].location << endl;
                        cout << "Phone number: " <<  event_array[i].number << endl;
    		}
	}
}

