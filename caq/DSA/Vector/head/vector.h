#ifndef VECTOR_H
#define VECTOR_H

typedef int Rank;
#define DEFAULT_CAPACITY 3

#include <iostream>
#include <utility>

template <typename T> 
class Vector {
private:
	Rank _size; int _capacity; T* _elem;
protected:
	void copyFrom(const T* A, Rank lo, Rank hi);
	void expend();

	void bubbleSort(Rank lo, Rank hi);
	void mergeSort(Rank lo, Rank hi);
	void merge(Rank lo, Rank mi, Rank hi);

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
	int uniquify();
	//Rank binSearch(T* A, const T& value, Rank lo, Rank hi);

	Rank search(T const& value) const //有序向量整体查找
	{
		return (0 >= _size) ? -1 : search(value, 0, _size);
	}
	Rank search(T const& value, Rank lo, Rank hi) const; //有序向量区间查找

	//排序算法截口
	void sort(Rank lo, Rank hi);

	void swap(Rank a, Rank b);

};

#endif
