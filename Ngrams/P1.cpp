#include "P1.h"
using namespace std;

typedef string T;

void P1(string fileName_1, string fileName_2, int n, int printNGrams){

	cout << fileName_1 << endl;

	vector<T> tokens;
	read_tokens(fileName_1, tokens, false); // reads tokens from file without EOS

	for (int i = 0; i < tokens.size(); i++){
		cout << tokens[i];
	}
}