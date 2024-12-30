// events. h

#include <iostream>
#include <cstring>

using namespace std;

const int SIZE {121}; 


struct events { 
	char name[SIZE];
	char description[SIZE];
	char start[SIZE];
	char end[SIZE];
	float price;
	char review [SIZE]; 
	char location [SIZE];
	int number;
};

class event_list {
public:
	event_list(int mainsize); // constructor
	~event_list(); // destructor

	void read();
	void display(); 
	void display_by_specific_field(char* field);
	void displayPrice(float minprice, float maxprice);

private: 
	events* event_array; 
	int all_size; 
	int num;

	void resizearray();
};
