#include "person.h"

	Person::pname::pname():p_firstName(unk),p_middleName(unk),p_lastName(unk){
		puts("default contructor");
	}
	Person::pname::pname(const std::string &cfn,const std::string &cmn,const std::string &cln):p_firstName(cfn),p_middleName(cmn),p_lastName(cln){
		puts("constructor with argument");
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

       Person::pname::~pname(){
       	puts("destructor");
       }
