#ifndef INSCREASE_H
#define INSCREASE_H

template <typename T> 
struct INSCREASE
{
	virtual void operator() (T& e) { e++; }
};

#endif // !INSCREASE_H

