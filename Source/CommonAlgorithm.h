#pragma once

namespace cm
{
	inline __int64 pow2(__int64 n)
	{
		if (n == 0) return 1;
		if (n & 1 == 1)
		{
			__int64 sqr = pow2(n >> 1);
			return (sqr * sqr) << 1;
		}
		else
		{
			__int64 sqr = pow2(n >> 1);
			return sqr * sqr;
		}
	}
}

