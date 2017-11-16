#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include "../include/AttributeParser.h"

using namespace std;

AttributeParser::AttributeParser(string line)
{
	//this->line = line;
	//cout<<this->line<<endl;
	ss<<line;
}


void AttributeParser::add(string tag, map<string, string> attributeMap)
{
	parserMap.insert(pair<string, map<string, string> >(tag, attributeMap));
	cout<<"new tag added"<<endl;

}


string AttributeParser::getTag()
{
	string tag;
	getline(ss, tag, ' ');
	tag.erase(tag.begin());
	cout<<"tag : "<<tag<<endl;
	getAttributeList("");

}


map<string, string> AttributeParser::getAttributeList(string str)
{
	string tmp;
	map<string, string> attr;
	
	while(getline(ss, tmp, ' ')){
		//cout<<tmp<<endl;
	}

	
}
