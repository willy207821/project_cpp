#include <iostream>
#include "person.h"
int main(int argc, char const *argv[])
{
	
	Person::pname p_name;
	p_name.setfirstName("Wilfredo");
	p_name.setlastName("Caparas");
	p_name.setmiddleName("Medina");

	std::cout<<"My name is "<<p_name.getfirstName()<<" "<<p_name.getlastName()<<" "<<p_name.getmiddleName()<<std::endl;

	return 0;
}
