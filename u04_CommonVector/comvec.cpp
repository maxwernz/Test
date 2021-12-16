#include <iostream>
#include "CommonVector.h"

using namespace std;


int main () {
	CommonVector<int, 10> a;
	for (size_t i = 0; i < a.size(); ++i) {
		a[i] = (i + 1) * (i + 1);
	}
	a.out();
	CommonVector<char, 25> b;
	string s = "Hallo tolle C++ Welt";
	for (size_t i = 0; i < b.size(); ++i) {
		if (i >= s.length()) {
			b[i] = ']';
			break;
		} else {
			b[i] = s[i];
		}
	}
	b.out();

	CommonVector<char*, 4> c;
	char* ch[] = { "Hallo", "tolle", "C++", "Welt" };
	for (size_t i = 0; i < c.size(); ++i) {
		c[i] = ch[i];
	}
	c.out();


}


