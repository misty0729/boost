extern "C" #include "detex_modified.c"
#include <boost/python.hpp>
#include <iostream>

using namespace boost::python;

 
void greet()
{
    std::cout << "hello cute  bbh!" << std::endl;
}
 
BOOST_PYTHON_MODULE(mygreet)
{
    def("greet", greet);
}
