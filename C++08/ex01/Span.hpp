#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <exception>
#include <limits>
#include <vector>

class Span {
public:
    Span();
    explicit Span(unsigned int N);
    virtual ~Span();
    Span(Span const& src);

    Span& operator=(Span const& rhs);

    void addNumber(int num);
    void addNumber(std::vector<int>::iterator begin,
        std::vector<int>::iterator end);
    void addNumber(std::vector<int>::const_iterator begin,
        std::vector<int>::const_iterator end);
    int shortestSpan() const;
    int longestSpan() const;

    class SpanIsFullException : public std::exception {
    public:
        char const* what() const throw();
    };

    class SpanIsNullException : public std::exception {
    public:
        char const* what() const throw();
    };

    class SpanIsOneException : public std::exception {
    public:
        char const* what() const throw();
    };

private:
    unsigned int N_;
    std::vector<int> v_;

    unsigned int getN() const;
    unsigned int getSize() const;
    std::vector<int> getVec() const;
};

#endif 