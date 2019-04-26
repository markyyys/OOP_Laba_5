#include <iostream>
#include <string>

using namespace std;

class Child
{
private:
	string name;
	string second_name;
	int age;
public:

	Child data_input() 
	{
		cout << "Enter the name: ";
		cin >> name;
		cout << endl;

		cout << "Enter the second name: ";
		cin >> second_name;
		cout << endl;

		cout << "Enter the age: ";
		cin >> age;
		cout << endl;

		return Child(name, second_name, age);
	}

	void data_output()
	{
		cout << name << " " << second_name << " " << age << endl;
	}

	Child(string name, string second_name, int age) : name(name), second_name(second_name), age(age) {}
	Child() {}
	~Child() {}
};

