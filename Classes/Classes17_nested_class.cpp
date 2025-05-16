#include "iostream"

class Person
{
private: //If was public u can put Accout account{"", ""}; -> to private like name
	std::string name;
	class Account
	{
	public:
		Account(const std::string& p_email, const std::string p_password) : email{ p_email }, password{ p_password } {}
		std::string email;
		std::string password;
	};
	Account account { "", "" };
public:
	Person(std::string p_name, std::string p_email, std::string p_password)
	{
		name = p_name;
		account = Account(p_email, p_password);
	}
	void print() const;
};

void Person::print() const
{
	std::cout << "Name: " << name << "\nEmali: " << account.email << "\nPassword: " << account.password << std::endl;
}

void main() 
{
	Person tom{ "Tom", "tom@localhost.com", "qwerty" };
	tom.print();
}