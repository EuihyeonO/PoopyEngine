#include <cmath>
#include "PoopyLibBase.h"

class PLibMath
{
public:
	template<typename T>
	static void Clamp(T& _OutValue, const T& _Min, const T& _Max) 
	{
		if (_OutValue < _Min)
		{
			_OutValue = _Min;
		}
		else if (_OutValue > _Max)
		{
			_OutValue = _Max;
		}
		else
		{
			//To do
		}
	}

	template<typename T>
	static T ClampReturn(const T& _Value, const T& _Min, const T& _Max)
	{
		if (_Value < _Min)
		{
			return _Min;
		}
		else if (_Value > _Max)
		{
			return _Max;
		}
		else
		{
			return _Value;
		}
	}
};