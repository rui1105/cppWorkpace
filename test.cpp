#include<iostream>
#include<boost/lexical_cast.hpp>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    using boost::lexical_cast;

    int a= lexical_cast<int>("123");
    double b = lexical_cast<double>("1.23");
    
    cout << a << endl;
    cout << b << endl;
    cout << "123" << endl;
    return 0;
}
