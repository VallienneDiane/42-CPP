/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:49:49 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/26 11:30:40 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template< typename T >
T const &	min(T const &a, T const &b)
{
	return( a <= b ? a : b);
}

template< typename T >
T const &	max(T const &a, T const &b)
{
	return( a >= b ? a : b);
}

class Awesome
{
    private:
        int _n;
    public:
        Awesome(void) : _n(0) {}
        Awesome(int n) : _n(n) {}
        Awesome &operator=(Awesome &a) { _n = a._n; return *this;}
        bool operator==( Awesome const &rhs) const {return (this->_n == rhs._n);}
        bool operator!=( Awesome const &rhs) const {return (this->_n != rhs._n);}
        bool operator>( Awesome const &rhs) const {return (this->_n > rhs._n);}
        bool operator<( Awesome const &rhs) const {return (this->_n < rhs._n);}
        bool operator>=( Awesome const &rhs) const {return (this->_n >= rhs._n);}
        bool operator<=( Awesome const &rhs) const {return (this->_n <= rhs._n);}
        int get_n() const {return _n;}
};
std::ostream &operator<<(std::ostream & o, const Awesome &a) { o<<a.get_n(); return o;}
#endif
