//Copyright 2018 Samuel Alonso, All Rights Reserved
#pragma once

#include <omp.h>
#include <stdint.h>
#define Temp template<class T>
#define ETemp template<>
#define DTemp template<class T, class C>
#define ns namespace
#define NoException
#define Epsilon 0.0000001
#define NEpsilon -0.0000001
#define No 0
#define Yes 1
typedef void Void;
typedef bool Bit;
typedef uint8_t UByte;
typedef int8_t Byte;
typedef UByte Letter;
typedef Letter* Word;
typedef uint16_t UShort;
typedef int16_t Short;
typedef uint32_t UInt;
typedef int32_t Int;
typedef uint64_t UBig;
typedef int64_t Big;
typedef float Single;
typedef double Double;
typedef long double Quad;
typedef UInt Size;

DTemp Bit Less(const T a, const C b) NoException
{
	if (a < b) return Yes;
	return No;
}

Temp Bit Less<Single, T>(const Single a, const T b) NoException
{
	if ((a - b) < NEpsilon) return Yes;
	return No;
}

Temp Bit Less<Double, T>(const Double a, const T b) NoException
{
	if ((a - b) < NEpsilon) return Yes;
	return No;
}

Temp Bit Less<Quad, T>(const Quad a, const T b) NoException
{
	if ((a - b) < NEpsilon) return Yes;
	return No;
}

Temp Bit Less<T, Single>(const T a, const Single b) NoException
{
	if ((a - b) < NEpsilon) return Yes;
	return No;
}

Temp Bit Less<T, Double>(const T a, const Double b) NoException
{
	if ((a - b) < NEpsilon) return Yes;
	return No;
}

Temp Bit Less<T, Quad>(const T a, const Quad b) NoException
{
	if ((a - b) < NEpsilon) return Yes;
	return No;
}

DTemp Bit Great(const T a, const C b) NoException
{
	if (a > b) return Yes;
	return No;
}

Temp Bit Great<Single, T>(const Single a, const T b) NoException
{
	if ((a - b) > Epsilon) return Yes;
	return No;
}

Temp Bit Great<Double, T>(const Double a, const T b) NoException
{
	if ((a - b) > Epsilon) return Yes;
	return No;
}

Temp Bit Great<Quad, T>(const Quad a, const T b) NoException
{
	if ((a - b) > Epsilon) return Yes;
	return No;
}

Temp Bit Great<T, Single>(const T a, const Single b) NoException
{
	if ((a - b) > Epsilon) return Yes;
	return No;
}

Temp Bit Great<T, Double>(const T a, const Double b) NoException
{
	if ((a - b) > Epsilon) return Yes;
	return No;
}

Temp Bit Great<T, Quad>(const T a, const Quad b) NoException
{
	if ((a - b) > Epsilon) return Yes;
	return No;
}

DTemp Bit Equal(const T a, const C b) NoException
{
	if (a == b) return Yes;
	return No;
}

Temp Bit Equal<Single, T>(const Single a, const T b) NoException
{
	if ((a - b) <= Epsilon) return Yes;
	return No;
}

Temp Bit Equal<Double, T>(const Double a, const T b) NoException
{
	if ((a - b) <= Epsilon) return Yes;
	return No;
}

Temp Bit Equal<Quad, T>(const Quad a, const T b) NoException
{
	if ((a - b) <= Epsilon) return Yes;
	return No;
}

Temp Bit Equal<T, Single>(const T a, const Single b) NoException
{
	if ((a - b) <= Epsilon) return Yes;
	return No;
}

Temp Bit Equal<T, Double>(const T a, const Double b) NoException
{
	if ((a - b) <= Epsilon) return Yes;
	return No;
}

Temp Bit Equal<T, Quad>(const T a, const Quad b) NoException
{
	if ((a - b) <= Epsilon) return Yes;
	return No;
}

DTemp Bit LessEqual(const T a, const C b) NoException
{
	if (Less(a, b) || Equal(a, b)) return Yes;
	return No;
}

DTemp Bit GreatEqual(const T a, const C b) NoException
{
	if (Great(a, b) || Equal(a, b)) return Yes;
	return No;
}

Temp Swap(T& a, T& b)
{
	T c = a;
#pragma omp parallel sections
	{
#pragma omp section
		{
			a = b;
		}
#pragma omp section
		{
			b = c;
		}
	}
}

DTemp C Cast(const T a)
{
	return reinterpret_cast<C>(a);
}