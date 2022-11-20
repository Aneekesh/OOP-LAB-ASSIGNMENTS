#include <iostream>
using namespace std;
class Arr
{
    int index;
    int maxsize;
    int* arr;
    static int _i;
public:
    Arr(int s = 100)
    {
        arr = new int[s] {0};
        maxsize = s;
        index = 0;

    }
    Arr& operator=(const Arr& obj)
    {
        this->arr = obj.arr;
        this->index = obj.index;
        this->maxsize = obj.maxsize;
        return *this;
    }
    void add(int value)
    {
        arr[index] = value;
        index++;
    }
    int getNumber(int index)
    {
        return arr[index];
    }
    int& operator[](int i)
    {
        return arr[i];
    }
    friend istream& operator >>(istream& input, Arr& a);
    friend ostream& operator <<(ostream& output, Arr& a);
};
int Arr::_i;
ostream& operator <<(ostream& output, Arr& a)
{
    for (int i = 0; i < a.maxsize; i++)
    {
        cout << a[i] << ' ';
    }
    return output;
}


istream& operator >>(istream& input, Arr& a)
{
    int value = 0;
    cout << "Enter value: ";
    cin >> a[Arr::_i];
    cout << a[Arr::_i] << endl;
    return input;
}
int main()
{
    Arr a(5);
    cin >> a[5];        // How do I make this happen
    cout << a[5];       // How to do this too
    return 0;
}