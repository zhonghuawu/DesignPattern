#ifndef DINER_MENU_ITERATOR_H
#define DINER_MENU_ITERATOR_H
#include "iterator.h"
#include "diner_menu.h"

class DinerMenuIterator : public Iterator {
private :
	MenuItem** items;
	size_t position;
	size_t numberOfItems;
public:
	DinerMenuIterator(MenuItem** &_items, const size_t& nItems);
//	DinerMenuIterator(const MenuItem** &_items, const size_t& nItems);
	void* next();
	bool hasNext();
};
#endif