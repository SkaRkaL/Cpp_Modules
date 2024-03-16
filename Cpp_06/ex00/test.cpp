#include <iostream>


int i  = 0;


float j = static_cast<float>(i);

class animal
{
	private:
		int age;
		int breed;
	public:
		animal() {
			this->age = 69;
			this->breed = 420;
		}
		virtual ~animal() {}
};

class dog : public animal
{
	public:
		int name;
		int color;
		std::string *ptr;
	public:
		dog() 
		{
			this->name = 1;
			this->color = 2;
		}
		virtual ~dog() {}
};

class cat
{
	public:
		~cat() {}
};


int main()
{
	dog *a = new dog();
	cat *b = new cat();
	animal *c = new animal();
	return 0;
}