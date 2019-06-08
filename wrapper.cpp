#include "detex_mod.h"
#include <boost/python.hpp>
#include <iostream>

using namespace boost::python;

 
int greet(int argc, char*argv[])
{
	hhh(argc,argv);
    std::cout << "hello cute  bbh!" << std::endl;
}
 
 BOOST_PYTHON_MODULE(mygreet)
 {
     def("greet", greet,arg("argc"),arg("agrv"));
 }
