/*MenyBuganim_302490610     BaruchRothkoff_311603252*/
#include<iostream>
#include "Vector.h"
using namespace std;

int main(){
	cout << "========================================================" << endl;		//our names.
	cout << "Meny Buganim  302490610 ---- Baruch Rothkoff  311603252" << endl;
	cout << "========================================================" << endl << endl;

	Vector one, two;
	cout << "please enter the first vector (first,second): ";
	cin >> one;
	while (cin.fail()){
		cout << "wrong, again first vector please: ";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> one;
	}
	cout << "the vector you entered is: ";
	one.print();
	cout << "please enter the second vector (first,second): ";
	cin >> two;
	while (cin.fail()){
		cout << "wrong, again second vector please: ";
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cin >> two;
	}
	cout << "the vector you entered is: ";
	two.print();

	int menu;
	do{
		cout << "Please enter your choice: " << endl;
		cout << "1. +" << endl;
		cout << "2. -" << endl;
		cout << "3. *" << endl;
		cout << "4. ++" << endl;
		cout << "5. --" << endl;
		cout << "6. <" << endl;
		cout << "7. >" << endl;
		cout << "8. ==" << endl;
		cout << "9. []" << endl;
		cout << "10. exit." << endl;
		cin >> menu;
		switch (menu){
		case 1:
			cout << (one + two);
			break;
		case 2:
			cout << (one - two);
			break;
		case 3:
			cout << (one*two);
			break;
		case 4:
			one++;
			one.print();
			break;
		case 5:
			one--;
			one.print();
			break;
		case 6:
			one < two ? cout << "true" << endl : cout << "false" << endl;
			break;
		case 7:
			one > two ? cout << "true" << endl : cout << "false" << endl;
			break;
		case 8:
			one == two ? cout << "true" << endl : cout << "false" << endl;
			break;
		case 9:
			int index;
			cout << "please enter index: ";
			cin >> index;
			if (cin.fail()){
				cout << "wrong type, try again.";
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cin >> index;
			}
			cout << one[index] << endl;
			break;
		case 10:
			cout << "bye" << endl;
			break;
		default:
			cout << "wrong type. your menu is 1-10." << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}
	} while (menu != 10);
	system("pause");
	return 0;
}
