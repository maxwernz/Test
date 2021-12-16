#include <iostream>

#ifndef COMMONVECTOR_H_
#define COMMONVECTOR_H_


template<typename T, size_t len>
class CommonVector {
public:
	CommonVector();
	~CommonVector();
	T& operator[](size_t idx);
	size_t size() const { return len; }
	void out(void) const;

private:
	T* _array;
};

#include "CommonVector.cpp"

#endif /* COMMONVECTOR_H_ */
