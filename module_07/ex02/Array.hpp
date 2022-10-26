#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {
private:
	T *ptr;
	unsigned int length;

public:
	Array();
	Array(unsigned int n);
	Array(const Array<T>& copy);
	~Array();
	Array &operator=(const Array<T>& other);
	T& operator[](unsigned int index);

	unsigned int size() const;
};

#include "Array.tpp"

#endif