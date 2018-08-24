#include <iostream>
#include "stack3.h"
#include "../require.h"
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream in("E://TEST/Clion/Stash/code_006.txt", ios::in);
	assure(in, "E://TEST/Clion/Stash/code_006.txt");
	
	Stack3 textlines;
	string line;
	while (getline(in, line))
		textlines.push(new string(line));
	
	string *s;
	while ((s = (string*)textlines.pop()) != 0)
	{
		cout << *s << endl;
		delete(s);
	}
		//cout << *s << endl;
	
	
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
