/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 16:29:56 by dvallien          #+#    #+#             */
/*   Updated: 2022/09/20 10:45:01 by dvallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include <iostream>
# include <string>
# include <cmath>
# include "Fixed.hpp"

class Point{

	private:
		Fixed const _x;
		Fixed const _y;
		
	public:
		Point(void);
		Point(const Point &source);
		Point & operator=(const Point &source);
		~Point(void);
		
		Point(const float x, const float y);
		float	getX(void) const;
		float	getY(void) const;
};
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif