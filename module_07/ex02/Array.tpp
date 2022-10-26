#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"
#include <cstring>

template <typename T>
Array<T>::Array() : ptr(new T()), length(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : ptr(new T[n]), length(n) {}

template <typename T>
Array<T>::Array(const Array<T>& copy) {
	this->length = copy.length;
	this->ptr = new T[copy.length];
	std::memcpy(this->ptr, copy.ptr, sizeof(T) * this->length);
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
	if (this == &other)
		return *this;
	delete[] this->ptr;
	this->length = other.length;
	this->ptr = new T[other.length];
	std::memcpy(this->ptr, other.ptr, sizeof(T) * this->length);
	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete[] this->ptr;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= length) {
		throw std::out_of_range("Index out of bounds exception");
	}
	return this->ptr[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return this->length;
}

#endif