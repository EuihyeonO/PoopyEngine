#pragma once
#include "memory"
#include "PoopyLibBase.h"

template<typename T>
class PAllocator
{
public:
	typedef T Value_Type;

public:
	T* Allocate(int32 _Size);
	void DeAllocate(T* _StartPoint);
private:
};

template<typename T>
inline T* PAllocator<T>::Allocate(int32 _Size)
{
}

template<typename T>
inline void PAllocator<T>::DeAllocate(T* _StartPoint)
{
}