#include<string>
#include <boost/python.hpp>
 
using namespace std;
 
 
int greet()
{
    return 1;
}
 
BOOST_PYTHON_MODULE(hello_ext)
{
    using namespace boost::python;
    def("greet", greet);
}