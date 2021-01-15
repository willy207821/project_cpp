#include "person.h"

	Person::pname::pname():p_firstName(unk),p_middleName(unk),p_lastName(unk){
		puts("default contructor");
	}
	Person::pname::pname(const std::string &cfn,const std::string &cmn,const std::string &cln):p_firstName(cfn),p_middleName(cmn),p_lastName(cln){
		puts("constructor with argument");
	}

	Person::pname::pname(const Person::pname & cpname){
		puts("copy contructor");
		p_firstName=cpname.p_firstName;
		p_middleName=cpname.p_middleName;
		p_lastName=cpname.p_lastName;
	}
	Person::pname & Person::pname::operator=(const Person::pname & opname){
		puts("copy operator");
		if(this != &opname){
			p_firstName=opname.p_firstName;
			p_middleName=opname.p_middleName;
			p_lastName=opname.p_lastName;		
		}
		return *this;
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

void Person::pname::printName()const{
	printf("%s %s %s \n",p_firstName.c_str(),p_middleName.c_str(),p_lastName.c_str());
}

       Person::pname::~pname(){
       	puts("destructor");
       }
