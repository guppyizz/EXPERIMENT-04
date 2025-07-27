//UPDESH ARORA
//PRN - 24070123124
//ENTC B-3
//EXPERIMENT 04
//To study and implement C++ Bitwise Operators

#include <iostream>
using namespace std;
int main()
{
int a,b;
cout << "First number is : ";
cin >> a;
cout << "Second number is : ";
cin >> b;
cout << "For AND " << "a & b : " << (a&b)<< endl;
cout << "For OR " << "a | b : " << (a|b)<< endl;
cout << "For XOR " << "a ^ b : " << (a^b)<< endl;
cout << "For NOT " << "~a : " << (~a) << endl;
cout << "a << 1 = " << (a << 1) << endl;
cout << "b >> 1 = " << (b >> 1) << endl << endl;
        
    int x;
    cout << "Enter number for set and reset : ";
    cin >> x;
    int bit = 3;

    cout << "Original: " << x << endl;

    int setResult = x | (1 << bit);
    cout << "After setting bit " << bit << ": " << setResult << endl;

    int clearResult = x & ~(1 << bit);
    cout << "After clearing bit " << bit << ": " << clearResult << endl;

    return 0;
}

/* OUTPUT EXAMPLE
First number is : 5
Second number is : 4
For AND a & b : 4
For OR a | b : 5
For XOR a ^ b : 1
For NOT ~a : -6
a << 1 = 10
b >> 1 = 2

Enter number for set and reset : 24
Original: 24
After setting bit 3: 24
After clearing bit 3: 16 */
