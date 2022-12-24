#include <iostream>
using namespace std;
template <class T>

class calculator
{
private:
    T num1, num2;

public:
    calculator(T n1, T n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void display()
    {
        cout << "numbers are= " << num1 << " " << num2 << endl;
        cout << "Additon of the numbers is= " << add() << endl;
        cout << "Subtraction of the numbers is= " << sub() << endl;
        cout << "Product of the numbers is= " << mul() << endl;
    }
    T add()
    {
        return num1 + num2;
    }

    T sub()
    {
        return num1 - num2;
    }

    T mul()
    {
        return num1 * num2;
    }
};
int main()
{
    calculator<int> calcint(10, 7);
    cout << "Int results are: " << endl;
    calcint.display();
    calculator<float> calcfloat(10.7, 7.3);
    cout << "float results are: " << endl;
    calcfloat.display();
    return 0;
}
