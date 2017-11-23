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
	//ss<<line;
}


void AttributeParser::add(string tag, map<string, string> attributeMap)
{
	parserMap.insert(pair<string, map<string, string> >(tag, attributeMap));
	cout<<"new tag added"<<endl;

}

string AttributeParser::getValue(string tag, string attr)
{
	map<string, string> tmp = parserMap[tag];
	cout<<" Values: "<<tmp[attr]<<endl;
	return "";
}

string AttributeParser::getTag(stringstream &ss)
{
	string tag;
	getline(ss, tag, ' ');
	tag.erase(tag.begin());
	cout<<"tag : "<<tag<<endl;
	//getAttributeList("");
	return tag;
}


map<string, string> AttributeParser::getAttributeList(stringstream &ss)
{
	string tmp, key="", value="";
	map<string, string> attr;
	
	while(getline(ss, tmp, ' ')){
		if(tmp != "="){
			if(key.empty())
			{
				key = tmp;
			}else if(value.empty())
			{		
				value = tmp;
				attr.insert(pair<string, string>(key, value));	
				cout<<"Key: "<<key<<" Value: "<<value<<endl;
				value = key = "";
			}
		}
	}

	return attr;
}
