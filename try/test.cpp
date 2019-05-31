#include<string>
#include <boost/python.hpp>
 
using namespace std;
 
 
int greet()
{
    cout << "hello bbh!" << endl;
}
 
BOOST_PYTHON_MODULE(mygreet)
{
    using namespace boost::python;
    def("greet", greet);
}