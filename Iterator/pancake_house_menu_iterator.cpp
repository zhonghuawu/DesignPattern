#include "pancake_house_menu_iterator.h"

PancakeHouseMenuIterator::PancakeHouseMenuIterator(std::vector<MenuItem*> &_items) :items(_items), position(0) {}
//PancakeHouseMenuIterator::PancakeHouseMenuIterator(const std::vector<MenuItem*> &_items) : items(_items), position(0) {}

void* PancakeHouseMenuIterator::next() {
	MenuItem* menuItem = items[position];
	position = position + 1;
	return menuItem;
}

bool PancakeHouseMenuIterator::hasNext() {
	if (position >= items.size()) {
		return false;
	}
	else {
		return true;
	}
}
