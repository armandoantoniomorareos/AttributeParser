#ifndef ATTRIBUTE_PARSER_H
#define ATTRIBUTE_PARSER_H

#include <iostream>
#include <map>
#include <sstream>

using namespace std;

class AttributeParser
{
	stringstream ss;
	map<string, map<string, string> > parserMap;
	string line;	
	void add(string tag, map<string, string> attributeMap);
	string removeChar(string str, char c);
	public:
		AttributeParser(string tag);
		string getTag();
		map<string,string> getAttributeList(string str);
		
};

#endif
