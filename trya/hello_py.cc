#include "hello.hpp"
#include <boost/python.hpp>
 
BOOST_PYTHON_MODULE(hello_py) {
	using namespace boost::python;
	def("greet", greet);
}