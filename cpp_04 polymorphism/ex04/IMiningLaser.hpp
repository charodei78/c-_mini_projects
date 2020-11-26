//
// Created by Holli Heimerdinger on 11/16/20.
//

#ifndef CPP_04_IMININGLASER_HPP
#define CPP_04_IMININGLASER_HPP

class IAsteroid;

class IMiningLaser
{
public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid*) = 0;
};

#endif //CPP_04_IMININGLASER_HPP
