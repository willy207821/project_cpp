#include <iostream>
#include "person.h"
int main(int argc, char const *argv[])
{
	Person::pname pn;
	pn.printName();

	const Person::pname nN("First Name","Middle Name", "Last Name");
 	nN.printName();
	const Person::pname CLC("Ma. Crisitna","Legaspi","Caparas");
	CLC.printName();

	const Person::pname WMC("Wilfredo","Medina","Caparas");
	WMC.printName();

	
	return 0;
}
