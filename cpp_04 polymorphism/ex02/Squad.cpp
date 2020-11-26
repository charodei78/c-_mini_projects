//
// Created by Holli Heimerdinger on 11/15/20.
//

#include "Squad.hpp"

int Squad::getCount() const
{
	return _unitNumber;
}

ISpaceMarine *Squad::getUnit(int i) const
{
	if (i >= 0 && i < _unitNumber)
		return _squad[i];
	return NULL;
}

int Squad::push(ISpaceMarine *marine)
{
	ISpaceMarine **res;

	if (!marine)
		return _unitNumber;
	for (int i = 0; i < _unitNumber; ++i) {
		if (_squad[i] == marine)
			return _unitNumber;
	}
	_unitNumber++;
	res = static_cast<ISpaceMarine**>(operator new[] (sizeof(ISpaceMarine*) * _unitNumber));
	for (int i = 0; i < _unitNumber - 1; ++i) {
		res[i] = _squad[i];
	}
	res[_unitNumber - 1] = marine;
	delete _squad;
	_squad = res;
	return _unitNumber;
}

Squad::Squad(): _unitNumber(0)
{
	_squad = static_cast<ISpaceMarine**>(operator new[] (sizeof(ISpaceMarine*)));
	_squad[0] = 0;
}

Squad::~Squad()
{
	for (int i = 0; i < _unitNumber; i++)
	{
		delete _squad[i];
	}
	_unitNumber = 0;
}

Squad::Squad(Squad const & src)
{
	*this = src;
}

Squad &Squad::operator=(const Squad &src)
{
	for (int i = 0; i < this->getCount(); ++i)
		delete this->getUnit(i);
	delete this->_squad;
	this->_unitNumber = 0;
	this->_squad = static_cast<ISpaceMarine**>(operator new[] (sizeof(ISpaceMarine*) * src._unitNumber));
	for (int i = 0; i < src._unitNumber; ++i) {
		this->push(src.getUnit(i)->clone());
	}
	return *this;
}
