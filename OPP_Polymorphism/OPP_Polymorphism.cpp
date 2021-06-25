// OOP_programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Constructors=have the same name as your type and don't have a return type.
//Polymorphism

#include <iostream>
#include<list>
using namespace std;
//class is a user defined datatype.
class cars {//base class
private://access modifier to make these attributes accessible outside of this function.
	string Color;
	int Miles;
	list<string>Specifications;
protected:
	string Make;
	int incomeGenerated;
public:
	//constructor
	cars(string make, string color) {
		Make = make;
		Color = color;
		Miles = 0;
		incomeGenerated = 0;
	};

	void getInfo() {
		cout << "Make: " << Make << endl;
		cout << "Color: " << Color << endl;
		cout << "Miles: " << Miles << endl;
		cout << "Specs: " << endl;
		for (string specs : Specifications) {
			cout << specs << endl;
		}

	};
	void milesCount() {
		Miles++;
	};
	void milesCheat() {
		if (Miles > 0)
			Miles--;
	};
	void specFunc(string specs) {
		Specifications.push_back(specs);
	};
	void checkIncome() {
		if (incomeGenerated < 5)
			cout << Make << " has generated poor income." << endl;
		else
			cout << Make << " has generated great income." << endl;

	}
};

//inheritance
class trucks :public cars {//derived class
public:
	trucks(string Make, string Color) :cars(Make, Color) {

	}
	void industry() {
		cout << "The " << Make << " truck is assigned to food, farmaceuticals, perishables" << endl;
		incomeGenerated++;
	}
};
class motorBikes :public cars {//derived class
public:
	motorBikes(string Make, string Color) :cars(Make, Color) {

	}
	void industry() {
		cout << "The " << Make << " bike is assigned to transportation, recreation and extreme sports." << endl;
		incomeGenerated++;
	}
};
int main()
{
	trucks truckBeds("Mack", "Red");
	truckBeds.specFunc("18 wheeler");
	truckBeds.specFunc("cold storage");
	truckBeds.specFunc("electric");
	truckBeds.milesCount();
	truckBeds.milesCount();
	truckBeds.milesCount();
	truckBeds.milesCount();
	truckBeds.milesCount();
	truckBeds.milesCount();
	truckBeds.milesCount();
	truckBeds.milesCount();
	truckBeds.milesCount();
	truckBeds.milesCount();
	truckBeds.milesCount();
	truckBeds.milesCount();
	truckBeds.getInfo();
	truckBeds.industry();
	motorBikes dirtBikes("Honda", "Red and White");
	dirtBikes.industry(); //polymorphism of .industry method.
	dirtBikes.industry();
	dirtBikes.industry();
	dirtBikes.industry();
	dirtBikes.industry();
	dirtBikes.industry();

	cars* veh1 = &truckBeds;
	cars* veh2 = &dirtBikes;
	veh1->checkIncome();
	veh2->checkIncome();

	//*****************************************************************************************************************
		//repeated code no longer needed commented out.

		//sedan.make = "Honda Civic";
		//sedan.color = "white";
		//sedan.miles = 23;
		//sedan.specs = { "2 doors","sunroof","air cond"};

		//cout << "Make: " << sedan.Make << endl;
		//cout << "Color: " << sedan.Color << endl;
		//cout << "Miles: " << sedan.Miles << endl;
		//cout << "Specs: " << endl;
		//for (string specs : sedan.specs) {
		//	cout << specs << endl;

		//sedan2.make= "Toyota Corolla";
		//sedan2.color = "Black";
		//sedan2.miles = 44;
		//sedan2.specs = { "4 doors","cruise control","GPS nav" };

		//cout << "Make: " << sedan2.Make << endl;
		//cout << "Color: " << sedan2.Color << endl;
		//cout << "Miles: " << sedan2.Miles << endl;
		//cout << "Specs: " << endl;
		//for (string specs : sedan2.specs) {
		//	cout << specs << endl;



	system("pause>0");
}

//cars sedan("Honda Civic", "white");
//sedan.Specifications.push_back("2 doors");
//sedan.Specifications.push_back("sunroof");
//sedan.Specifications.push_back("air cond");
//sedan.milesCount();
//sedan.getInfo();
//
//cars sedan2("Toyota Corolla", "Black");
//sedan2.Specifications.push_back("4 doors");
//sedan2.Specifications.push_back("GPS nav");
//sedan2.Specifications.push_back("break assist");
//sedan2.milesCount();
//sedan2.milesCount();
//sedan2.milesCount();
//sedan2.milesCount();
//sedan2.milesCheat();
//sedan2.getInfo();