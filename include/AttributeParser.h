#ifndef ATTRIBUTE_PARSER_H
#define ATTRIBUTE_PARSER_H

#include <iostream>
#include <map>
#include <sstream>

using namespace std;

class AttributeParser
{
	//stringstream ss; //it is not needed
	map<string, map<string, string> > parserMap;
	string line;	
	
	string removeChar(string str, char c);
	public:
		string getValue(string tag, string attr);
		AttributeParser(string tag);
		string getTag(stringstream &ss);
		map<string,string> getAttributeList(stringstream &ss);
		void add(string tag, map<string, string> attributeMap);
};

#endif
