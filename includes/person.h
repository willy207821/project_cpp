#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <cstdio>

const std::string unk ="unknown";
namespace Person{
class pname {
private:
	std::string p_firstName="";
	std::string p_lastName="";
	std::string p_middleName="";

	
public:
	pname();//default constructor
	pname(const std::string &firstName,const std::string &middleName,const std::string &lastName);

	void setfirstName(const std::string &fn);
	void setlastName(const std::string &ln);
	void setmiddleName(const std::string &mn);

	std::string const getfirstName()const;
	std::string const getlastName()const;
	std::string const getmiddleName()const;
	
	~pname();
};

}
#endif //PERSON_H
