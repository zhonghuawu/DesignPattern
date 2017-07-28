#include "diner_menu_iterator.h"

DinerMenuIterator::DinerMenuIterator(MenuItem** &_items, const size_t& nItems)
	: items(_items), position(0), numberOfItems(nItems) {}

void* DinerMenuIterator::next() {
	MenuItem* menuItem = items[position];
	position = position + 1;
	return menuItem;
}

bool DinerMenuIterator::hasNext() {
	if (position < numberOfItems)
		return true;
	else
		return false;
}