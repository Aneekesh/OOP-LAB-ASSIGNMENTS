// create a class which allocates to a memory
#include <string>

using namespace std;

class String
{
public:
    String(string str)
    {
        len = str.length();
        chstr = new char[len];
        for (int i = 0; i < str.length(); i++)
        {
            chstr[i] = str[i];
            cout << chstr[i];
        }
    }

    bool operator<(const String &S)
    {
        return this->len < S.len;
    }
    String &operator+(const String &S)
    {
