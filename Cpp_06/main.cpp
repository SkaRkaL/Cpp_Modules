#include <iostream>

using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
	virtual ~Animal() {}
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Meow!" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Woof!" << endl;
    }
};

int main()
{
	cout << "Reinterpret cast case\n" << endl;
	float f = 42.42f;
	int i;
	i = reinterpret_cast<int &>(f);
	cout << i << endl;

	float fptr = reinterpret_cast<float &>(i);
	cout << fptr << endl;
	cout << endl;

	int myNumber = 10; // Let's pretend this is a number
    void *ptr = &myNumber; // Treat the number like an address

	cout << ptr << endl;
    // Now let's reinterpret that address as an integer again
    int *myPointer = reinterpret_cast<int*>(ptr);

    // Now we can dereference the pointer and print the value
    cout << "Value of myNumber: " << *myPointer << endl;

	
	cout << "---------------------------------------------------------------\n" << endl;

	cout << "Static cast case\n" << endl;
	double x = 3.14;
    int y = static_cast<int>(x); // Static casting from double to int
    cout << "Value of y: " << y << endl;

	cout << "---------------------------------------------------------------\n" << endl;
	
	cout << "Dynamic cast case\n" << endl;
	Animal *myToy = new Cat(); // Pretend the toy is a cat
    Cat	*myCat = dynamic_cast<Cat*>(myToy); // Check if it's really a cat
    if (myCat) {
        myCat->makeSound(); // If it's a cat, make it meow
    } else {
        cout << "Not a cat!" << endl; // If it's not a cat, say it's not a cat
    }
    delete myToy; // Clean up memory
}
