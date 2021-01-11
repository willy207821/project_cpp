#include "person.h"

	Person::pname::pname()
	{
	std::cout<<"default contructor"<<std::endl;
}

        void Person::pname::setfirstName(const std::string &fn)
	{
	p_firstName=fn;
}
        void Person::pname::setlastName(const std::string &ln)
	{
	p_lastName=ln;
}
        void Person::pname::setmiddleName(const std::string &mn)
	{
	p_middleName=mn;
}
        std::string const Person::pname:: getfirstName()const
	{
	 return p_firstName;
}
        std::string const Person::pname::getlastName()const
	{
	return p_lastName;
}
        std::string const Person::pname::getmiddleName()const
	{
	return p_middleName;
}

       Person::pname::~pname()
	{
	std::cout<<"default destructor"<<std::endl;
}
