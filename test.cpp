#include <iostream>
#include "include/AttributeParser.h"

using namespace std;

int main(int argc, char * argv[]){
	cout<<" tag"<<"<tag1 value = \"HelloWorld\">"<<endl;
	AttributeParser *parser = new AttributeParser("<tag1 value = \"HelloWorld\">");
	parser->getTag();
	cout<<"fuerar"<<endl;
return 0;

}
