#include "vPreprocessor.h"
#include "macroSymbol.h"

void macroSymbol::insert(const std::pair<std::string,macro_replace* > item) {
	
	std::string new_replacement = return_preprocessed(item.second->data.tmplate,false);
	/*
	printf("%s -> %s : %s\n",
	item.first.c_str(),
	item.second->data.tmplate.c_str(),
	new_replacement.c_str()
			);
	*/	
	item.second->data.tmplate = new_replacement;
	std::map<std::string,macro_replace* >::insert(item);
}
