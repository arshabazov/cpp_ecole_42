#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

class Span {
private:
	unsigned int size;
	std::vector<int> collection;

public:
	Span(unsigned int n);
	Span(const Span& copy);
	~Span();
	Span& operator=(const Span& other);

	void addNumber(int n);
	void addSequence(std::vector<int>::iterator start, std::vector<int>::iterator end);
	unsigned int shortestSpan();
	unsigned int longestSpan();
};

#endif