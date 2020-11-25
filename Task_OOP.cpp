// Город (население, страна)
#include <iostream>
#include <string>
using namespace std;

class Position
{
public:
	string name;
	string country;
	int population;

	Position(string name, string country, int population) {
		this->name = name;
		this->country = country;
		this->population = population;
	}

	void Display() {
		cout << name << " " << country << " " << population << endl;
	}

	~Position(){
		cout << "Destraction position" << endl;
	}

	void SetPopulation(int population) {
		if (population >= 0 && population <= 3000000) {
			this->population = population;
		}

	}

};


int main()
{
	Position my_loc("Ivanovo", "Russia", 500000);
	my_loc.Display();
	return 0;
}