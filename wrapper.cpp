#include "detex_mod.h"
#include <boost/python.hpp>
#include <string.h>
#include <iostream>

using namespace std;
using namespace boost::python;

 
int greet(int argc, string argv)
{
    char *char_agrv[2];
    char_agrv[0] = (char*)argv.c_str();
	hhh(argc,char_agrv);
    std::cout << "hello cute  bbh!" << std::endl;
}
 
 BOOST_PYTHON_MODULE(mygreet)
 {
     def("greet", greet,arg("argc"),arg("agrv"));
 }
