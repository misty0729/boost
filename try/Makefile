PYTHON_VERSION = 3
PYTHON_INC = /usr/local/bin/python$(PYTHON_VERSION)
# PYTHON_CONFIG = /usr/lib/python2.7/config

BOOST_INC = /Applications/boost_1_70_0
BOOST_LIB = /Applications/boost_1_70_0/stage/lib

SRC = $(wildcard *.cc)
OBJ = $(addsuffix .o, $(basename $(SRC)))

# this target has to match whatever you have in BOOST_PYTHON_MODULE()
TARGET = foo

# make this a so library
$(TARGET).so : $(OBJ)
	g++ -shared -Wl,-install_name $(OBJ) -L$(BOOST_LIB) -lboost_python -lpython3 -o $(TARGET).so

%.o : %.cc
	g++ -I$(PYTHON_INC) -I$(BOOST_INC) -fPIC -o $@ -c $<

clean:
	-rm -f *.o *.so