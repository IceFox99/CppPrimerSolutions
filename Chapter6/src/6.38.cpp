#include <iostream>
#include <string>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector; using std::begin; using std::end;

int odd[] = { 1, 3, 5, 7, 9 };
int even[] = { 0, 2, 4, 6, 8 };
decltype(odd)& arrRef(int i) {
	return (i % 2) ? odd : even;
}