/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:29:56 by dvallien          #+#    #+#             */
/*   Updated: 2022/08/09 17:00:21 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class Point{

	public:
		Point( void );
		Point( const float x, const float y );
		Point( const Point &source );
		Point & operator=( const Point &source);
		~Point( void );
		
	private:
		Fixed const _x;
		Fixed const _y;
	
};

#endif