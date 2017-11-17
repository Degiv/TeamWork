#include "String.h"

// [first, last)
String getSubstring(String &string, int first, int last) {
	String result;
	if (last > string.size || first >= last)
		return result;
	
	int newSize = last - first;
	char* subData = new char[newSize];

	for (int i = first; i < last; ++i) 
		subData[i - first] = string.data[i];

	result.data = subData;
	result.size = newSize;

	return result;
}
