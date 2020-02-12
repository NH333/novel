#ifndef VECTOR_H
#define VECTOR_H

typedef int Rank;
#define DEFAULT_CAPACITY 3

#include <iostream>

template <typename T> 
class Vector {
private:
	Rank _size; int _capacity; T* _elem;
protected:
	void copyFrom(const T* A, Rank lo, Rank hi);
	void expend();
public:
	
	Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0) : _capacity(c) 
	{
		_elem = new T[_capacity];
		for (_size = 0; _size < s; ++_size) _elem[_size] = v;
		//std::cout << "调用构造函数" << std::endl;
	}
	
	//构造函数
	Vector(const T* A, Rank n) { copyFrom(A, 0, n); }
	Vector(const T* A, Rank lo, Rank hi) { copyFrom(A, lo, hi); }
	Vector(const Vector<T>& V) { copyFrom(V._elem, 0, V._size); }
	Vector(const Vector<T>& V, Rank lo, Rank hi) { copyFrom(V._elem, lo, hi); }

	int size();
	T& operator[](Rank n);
	const T& operator[](Rank n) const;
	Rank insert(Rank index, const T& value);
	int remove(Rank lo, Rank hi); //区间删除
	T remove(Rank n);  //单个元素删除
	Rank find(const T& value);
	Rank find(const T& e, Rank lo, Rank hi) const;

	Rank deduplicate();
};

#endif
