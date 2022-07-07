#include <iostream>  
#include <limits>
#include <string>
#include <cstdio>

using namespace std;

#define TIANSUO 114
const int HAOER = 514; // consts are defined outside main()

int main()
{
#if 1
    auto f = new auto(3.14);
    register
#endif
#if 0
    extern int d, f; // declare d and f 
    int d = 3, f = 5; // define and initialize d and f
    wchar_t x = L'G'; // assign a char 'x' to x

    wcout << x << "\n";
    
    typedef string newname;
    newname name1 = "wtf?????"; // initiate a variable of "newname" type
    cout << name1 << endl;

    enum Dogs { PUPPY, CORGI, SHEPHERD };
    Dogs dog = SHEPHERD; // enumeration 1
    cout << "Wuhuuuuu\n" << dog * 5 << "\n";

    enum color { red, green = 114513, blue } c;
    c = blue; // enumeration 2
    cout << c << "\n";

    short int i;
    short unsigned int j;

    j = 50000;
    i = j;
    
    cout << i << " " << j << endl;
    /** output does seem odd to be -15536, and this
        is so because The bit pattern of the unsigned
        short integer 50,000 is interpreted as the
        signed short integer -15,536*/

    cout << "Xianbei: " << TIANSUO << HAOER << "\n";
    cout << "double: " << "bytes: \t" << sizeof(double) << endl;
    cout << "float: " << "bytes: \t" << sizeof(float) << endl;

    auto f = 3.14;      //double
    auto s("hello");  //const char*
    auto z = new auto(9); // int*
    cout << f << s << z << endl; 
    /** !!!!! OBSELETED UNICODE KEYWORD "auto" !!!!! */

    // system output
    return 0;
#endif
}
