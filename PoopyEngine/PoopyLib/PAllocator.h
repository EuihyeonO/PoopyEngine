#pragma once
#include "PoopyLibBase.h"

template<typename T>
class PAllocator
{
public:
	T* Allocate(int32 _Size);
	void DeAllocate(T* _StartPoint, int32 _Size);
	void Construct(T* _ConstructPoint, const T& _ConstructData);
	void Destroy(T* _DestroyPoint);
private:
};

template<typename T>
inline T* PAllocator<T>::Allocate(int32 _Size)
{
	return nullptr;
}

template<typename T>
inline void PAllocator<T>::DeAllocate(T* _StartPoint, int32 _Size)
{
}

template<typename T>
inline void PAllocator<T>::Construct(T* _ConstructPoint, const T& _ConstructData)
{
}

template<typename T>
inline void PAllocator<T>::Destroy(T* _DestroyPoint)
{
}
