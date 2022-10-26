#include "Span.hpp"

Span::Span(unsigned int n) : size(n) {}

Span::Span(const Span& copy) {
	// this->size = copy.size;
	// this->collection = copy.collection;
	*this = copy;
}

Span::~Span() {}

Span& Span::operator=(const Span& other) {
	this->size = other.size;
	this->collection = other.collection;

	return *this;
}

void Span::addNumber(int n) {
	if (this->collection.size() < this->size) {
		collection.push_back(n);
	}
	else
		throw std::runtime_error("Collection is full");
}

void Span::addSequence(std::vector<int>::iterator start, std::vector<int>::iterator end) {
		unsigned long dist = std::distance(start, end);
		if ((this->size - this->collection.size()) < dist) {
			throw std::out_of_range("Not enought space to insert sequence");
		} else {
			this->collection.insert(this->collection.end(), start, end);
		}
}

unsigned int Span::shortestSpan() {
	if (this->collection.size() < 2)
		throw std::runtime_error
			("Not enough elements in the collection to calculate span");

	std::vector<int> vec = this->collection;
	std::sort(vec.begin(), vec.end());
	unsigned int shortest = abs(vec[1] - vec[0]);
	for (int i = 1; i < (int)vec.size() - 1; ++i) {
		unsigned int dif = abs(vec[i + 1] - vec[i]);
		if (dif < shortest)
			shortest = dif;
	}
	return shortest;
}

unsigned int Span::longestSpan() {
	if (this->collection.size() < 2)
		throw std::runtime_error("Not enough elements in the collection");

	return *std::max_element(this->collection.begin(), this->collection.end())
		- *std::min_element(this->collection.begin(), this->collection.end());
}
