#include "person.h"

	person::person()
	{
	std::cout<<"default contructor"<<std::endl;
}

        void person::setfirstName(const std::string &fn)
	{
	p_firstName=fn;
}
        void person::setlastName(const std::string &ln)
	{
	p_lastName=ln;
}
        void person::setmiddleName(const std::string &mn)
	{
	p_middleName=mn;
}
        std::string const person:: getfirstName()const
	{
	 return p_firstName;
}
        std::string const person::getlastName()const
	{
	return p_lastName;
}
        std::string const person::getmiddleName()const
	{
	return p_middleName;
}

       person::~person()
	{
	std::cout<<"default destructor"<<std::endl;
}
