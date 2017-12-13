#define Header_h 
#include <iostream> 
#include "TextVersionOfNumber.h" 
using namespace std;
main() 


string TextVersionOfNumber::getTextVersionOfNumber() 
{ string one_19[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
					 "eleven", "twelve", "thirteen", "fourteen", "fifteen", 
					"sixteen", "seventeen", "eighteen", "nineteen" }; 
string twenty_90[] = { "","","twenty","thirty","forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
int amount; 
int thousand = amount / 1000;
int hundred = (amount / 100) - (thousand * 10);
int ten = (amount / 10) - ((thousand * 100) + (hundred * 10));
int one = (amount)-((thousand * 1000) + (hundred * 100) + (ten * 10));
int t_alt = ((ten * 10) + one);
int cents = (amount * 100) - ((thousand * 100000) + (hundred * 10000) + (ten * 1000) + (one * 100));
if (thousand >= 1) 
{ 
	cout << one_19[thousand] << " thousand ";
} 
if (hundred >= 1) 
{ 
	cout << one_19[hundred] << " hundred "; 
}
if (ten == 1) 
{ 
	cout << one_19[t_alt] << ' '; 
} 
else { 
if(ten > 1) 
{ 
	cout << twenty_90[ten] << ' '; 
} 
if (one >= 1)
{
 	cout << one_19[one] << ' '; 
}
}
if (amount < 1)
{ 
	cout << "0 "; 
} 
	cout << "dollars";

if (one >= 1) 
{ 
	cout << one_19[one] << " dollars";
}
if (amount < 1) 
{ 
	cout << "0 dollars"; 
} 

if (cents >= 1) 
{ 
	cout << " and " << cents << " cents";
} 
else if (cents < 1) 
{ 
	cout << " and 0 cents"; 
} 

return string();
} 

}
