#include <iostream>
#include "person.h"
int main(int argc, char const *argv[])
{
	Person::pname pn;
	Person::pname p_name("Wilfredo","Medina","Caparas");

	std::cout<<"My name is "<<p_name.getfirstName()<<" "<<p_name.getmiddleName()<<" "<<p_name.getlastName()<<std::endl;

	return 0;
}
