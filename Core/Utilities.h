#pragma once
#include <Clexy\Types.h>

ns Clexy
{
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
	const T c = a;
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
}
