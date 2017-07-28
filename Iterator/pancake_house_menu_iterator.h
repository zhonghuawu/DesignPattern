#ifndef PANCAKE_HOUSE_MENU_ITERATOR_H
#define PANCAKE_HOUSE_MENU_ITERATOR_H
#include "iterator.h"
#include "pancake_house_menu.h"
#include <vector>
using std::vector;

class PancakeHouseMenuIterator : public Iterator {
private :
	vector<MenuItem*> items;
	size_t position;
public:
	PancakeHouseMenuIterator(vector<MenuItem*> &_items);
//	PancakeHouseMenuIterator(const vector<MenuItem*> &_items);
	void* next();
	bool hasNext();	
};

#endif