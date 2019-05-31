#include<string>
#include <iostream>
#include <boost/python.hpp>
 
using namespace std;
 
 
void greet()
{
    cout << "hello bbh!" << endl;
}
 
BOOST_PYTHON_MODULE(mygreet)
{
    using namespace boost::python;
    def("greet", greet);
}
