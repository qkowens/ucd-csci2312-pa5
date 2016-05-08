#ifndef LESS_FUNCTOR_H
#define LESS_FUNCTOR_H

#include<string>

namespace CS2312
{
	//functors
	template <typename type>
	class less
	{
	public:
		bool operator() (const type &rhs, const type &lhs);
	};

	template <>
	class less<std::string>
	{
	public:
		bool operator() (const std::string &rhs, const std::string &lhs);
	};

	template <>
	class less<const char*>
	{
	public:
		bool operator() (const char *rhs, const char *lhs);
	};

	//implementations
	template<typename type>
	inline bool less<type>::operator()(const type & rhs, const type & lhs)
	{
		if (rhs < lhs)
			return true;

		return false;
	}

	inline bool less<std::string>::operator()(const std::string & rhs, const std::string & lhs)
	{
		if (rhs < lhs)
			return true;

		return false;
	}

	inline bool less<const char*>::operator()(const char * rhs, const char * lhs)
	{
		string lhsString, rhsString;

		rhsString = rhs;
		lhsString = lhs;

		if (rhsString < lhsString)
			return true;

		return false;
	}

}
#endif LESS_FUNCTOR_H
