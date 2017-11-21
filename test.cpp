#include <iostream>
#include <sstream>
#include "include/AttributeParser.h"

using namespace std;

int main(int argc, char * argv[]){
	
stringstream ss("<tag1 attr0 = \"value0\" attr1 = \"value1\">");
	cout<<" Line: "<<ss.str()<<endl;

	AttributeParser *parser = new AttributeParser("<tag1 attr1 = \"HelloWorld\" attr2 = \"value2\">");
	parser->getTag(ss);
	parser->getAttributeList(ss);
	cout<<"fuerar"<<endl;
return 0;

}
