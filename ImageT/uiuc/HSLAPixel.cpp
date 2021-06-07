/**
 * @file HSLAPixel.cpp
 * Implementation of the HSLAPixel class for use in with the PNG library.
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#include <cmath>
#include <iostream>
#include "HSLAPixel.h"
using namespace std;

namespace uiuc {
	HSLAPixel::HSLAPixel()
		{
		l=0;
		a=1;
		h=s=0;
		}
	HSLAPixel::HSLAPixel(double hue,double sat,double lum)
		{
		h=hue;
		s=sat;
		l=lum;
		a=1;
		}
	HSLAPixel::HSLAPixel(double hue,double sat,double lum, double alp)
		{
		h=hue;
		s=sat;
		l=lum;
		a=alp;		
		}
}
