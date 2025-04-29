#include "iostream"


class Camera
{
public:
	void makePhoto()
	{
		std::cout << "making photo" << std::endl;
	}
};

class Phone
{
public:
	void makeCall()
	{
		std::cout << "making call" << std::endl;
	}
};

class Smartphone : public Phone, public Camera
{};

void main()
{
	Smartphone iphone;
	iphone.makePhoto();
	iphone.makeCall();
}