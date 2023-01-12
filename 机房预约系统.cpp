#include <iostream>
using namespace std;
#include <fstream>
#include <string>


int main() {

	ofstream ofs("test.txt", ios::out);
	for (int i = 0; i < 10; i++) {
		ofs << i << " ";
	}
	ofs.close();

	ifstream ifs("test.txt", ios::in);

	char a[20] = { 0 };
	int b[20];
	int n = 0;

	while (ifs >> a) {
		b[n] = a;
		n++;
	}

	ifs.close();
	for (int j : b) {
		cout << j << endl;
	}
	return 0;
}