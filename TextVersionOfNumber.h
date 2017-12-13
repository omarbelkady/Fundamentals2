#include <iostream>  //std::cout
#include <iomanip>
#include <string>  //std::string
#include <sstream>  //std:;stringstream
#include <string.h>
using namespace std;
class TextVersionOfNumber
{
private:
	int amount;
public:
	string getTextVersionOfNumber();
	void setAmount(int);
};
