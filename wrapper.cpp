#include </home/misscut/qianz/boost/detex.h>
#include <boost/python.hpp>
#include <iostream>

using namespace std::cout;
using namespace std::endl;
using namespace boost::python;

 
void greet()
{
    cout << "hello bbh!" << endl;
}
 
BOOST_PYTHON_MODULE(mygreet)
{
    using namespace boost::python;
    def("greet", greet);
}
