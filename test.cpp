#include <iostream>
#include <sstream>
#include "include/AttributeParser.h"

using namespace std;

int main(int argc, char * argv[]){
	string tag;
	stringstream ss("<tag1 attr0 = \"value0\" attr1 = \"value1\">");
	cout<<" Line: "<<ss.str()<<endl;
	map<string, string> attr;
	AttributeParser *parser = new AttributeParser("<tag1 attr1 = \"HelloWorld\" attr2 = \"value2\">");
	tag = parser->getTag(ss);
	attr =parser->getAttributeList(ss);
	//cout<<"--->"<<tmp["attr0"]<<endl;
	parser->add(tag, attr);

	parser->getValue("tag1", "attr0");
	cout<<"fuerar"<<endl;
return 0;

}
