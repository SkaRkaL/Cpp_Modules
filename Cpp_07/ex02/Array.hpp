#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T *elms;
		unsigned int arraySize;

	public:
		Array()
			: elms(NULL), arraySize(0) {}

		Array(unsigned int n)
			: elms(new T[n]), arraySize(n)
		{
			for (unsigned int i = 0; i < arraySize; ++i)
				elms[i] = T(); // Default initialization
		}

		Array(const Array &other)
			: elms(new T[other.arraySize]), arraySize(other.arraySize)
		{
			for (unsigned int i = 0; i < arraySize; ++i)
			{
				elms[i] = other.elms[i];
			}
		}

		Array &operator=(const Array &other)
		{
			if (this != &other)
			{
				delete[] elms; // Free existing memory
				arraySize = other.arraySize;
				elms = new T[arraySize];
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					elms[i] = other.elms[i];
				}
			}
			return *this;
		}

		T &operator[](unsigned int index)
		{
			if (index >= arraySize)
			{
				throw std::out_of_range("Index out of bounds");
			}
			return elms[index];
		}

		unsigned int size() const
		{
			return arraySize;
		}

		~Array()
		{
			delete[] elms;
		}
};