#include "detex_mod.h"
#include <boost/python.hpp>
#include <string.h>
#include <iostream>

using std::string;
using namespace boost::python;
using std::cout;
using std::endl;
 
int greet( string argv)
{
    char *char_agrv[10];
    char_agrv[1] = (char*)argv.c_str();
    hhh(2,char_agrv);
    return 0;
}
 
 BOOST_PYTHON_MODULE(mygreet)
 {
     def("greet", greet,arg("agrv"));
 }
