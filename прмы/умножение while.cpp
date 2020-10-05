

using namespace std;
using std::string;

int newquestion(vector<int> remaining_multiplication_tables, vector<int> multiplication_tables, int table_selecter) {
	cout << remaining_multiplication_tables[table_selecter] << " * " << multiplication_tables[remaining_multiplication_tables[table_selecter] - 1] << " =" << "\n";
	return remaining_multiplication_tables[table_selecter] * multiplication_tables[remaining_multiplication_tables[table_selecter] - 1];
}


int main()
{
	int b = 1;
	int a = 1;
	while (b != 11) {
		while (a != 11) {
			cout <<(b*a + "");
			a++;
		}
		cout <<();
		n++;
		a = 1;
	}

}