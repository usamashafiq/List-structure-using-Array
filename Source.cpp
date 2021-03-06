#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<cmath>
using namespace std;
/*create a class in which 
•  Add item at end
• Add item at any position
• Remove item from end
• Remove item from any position
• Empty list
• Check number of items in list
• Replace item at any position
• Interchange items at any positions
• Sort the list
• Search item from the list*/
class list 
{
	
private:
	static const int num;
	int listA[100];
	int numele;
public:
	list();
	bool add(int);
	bool addanypos(int, int);
	bool remove();
	int removeat(int);
	int get(int);
	int getall();
	bool swap(int, int);
	int check();
	int replace(int,int);
	bool interchange(int, int);
	void sort();
	void display();
	int search(int);

};
const int list::num = 100;
// use for empty list
list::list() {
	numele = 0;

}
//use for display data in list each line
void list::display(){
	for (int i = 0; i < numele; i++)
	{
		cout << listA[i] << endl;
	}
}

//add an item in list at end
//return ture mean task is done
bool list::add(int a) {
	if (numele + 1 != num) {
		listA[numele] = a;
		numele++;
		return true;
	}
	else
		return false;
}
//add at any position
//return true mean task is done
bool list::addanypos(int a, int b) {
	if (a >= 0 && a < numele) { //check capacity of list
		listA[a] = b;


		return true;

	}
	else
		return false;

}
// remove item at the end of list
// return ture mean task is done
bool list::remove() {
	if (numele != 0) {
		numele--;
		return true;

	}
	else {
		return false;
	}


}
int list::removeat(int a) {
	if (a >= 0 && a < numele) {
		if (a == numele-1) {
			remove();
			return true;
		}
		else {
			int temp = 0;
			for (int i = a; i <= numele; i++) {
				//temp = listA[i];
				listA[i] = listA[i+1];
				//listA[i++] = temp;
				//return true;
			}
			numele--;
			return true;
		}
	}
	else
		return false;


}
// show the number in list
int list::get(int a) {
	if (a >= 0 && a < numele) {
		return listA[a];
	}
	else
		return false;

}
// swap the two number
bool list::swap(int a, int b) {
	if (a >= 0 && a < numele&&b >= 0 && b < numele) {
		int temp;
		temp = listA[a];
		listA[a] = listA[b];
		listA[b] = temp;
		return true;
	}
	else
		return false;
}
//return all element
int list::getall() {

	return numele;
}


void main() {
	list a;
		//intput data and display
		a.add(11);
		a.add(44);
		a.add(67);
		a.add(98);
        a.display();
		cout << endl;
		//remove at end
		a.remove();
		cout << endl;
		a.display();
		cout << endl;
		//removeat 
		a.removeat(1);
        cout << endl;
	    a.display();
		cout << endl;
		//swap two number
		a.swap(0, 1);
		cout << endl;
		a.display();
		_getch();

}



