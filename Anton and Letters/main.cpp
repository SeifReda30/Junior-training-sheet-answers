#include <iostream>
#include <ctype.h>
#include <set>
using namespace std;

int main()
{
   string s;
   set<char> l;
   getline(cin, s); //scan string including spaces

   int i = 0;
   while(s[i])
   {
        if(isalpha(s[i])) //The isalpha() function in C++ checks if the given character is an alphabet or not.
            l.insert(s[i]); //add the distinct letters to l
        i++;
   }

   cout << l.size() << endl; //print size of l
}
