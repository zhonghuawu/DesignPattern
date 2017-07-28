#ifndef __SUBJECT_H__
#define __SUBJECT_H__
#include "observer.h"

class Subject {
public:
	virtual void registerObserver(Observer* o) = 0;
	virtual void removeObserver(Observer* o) = 0;
	virtual void notifyObservers() = 0;
};

#endif
