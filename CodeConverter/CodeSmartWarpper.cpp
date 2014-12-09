#include "stdafx.h"

#include "CodeSmart.h"
#include "CodeSmartWarpper.h"

static CodeSmart *codeSmart=NULL;

extern "C"{
	void registerCodeSmartObject(void *pCodeSmart)
	{
		codeSmart=static_cast<Cod\
eSmart*>(pCodeSmart);
	}
	void unregisterCodeSmartObject()
	{
		codeSmart=NULL;
	}
	void hashCommandAddChar(char c)
	{
		codeSmart->hashCommandAddChar(c);
	}
	void hashCommandNewLine()
	{
		codeSmart->hashCommandAddChar('\\');
		codeSmart->hashCommandAddChar('\n');
	}
	void beginHashCommand()
	{
		codeSmart->beginHashCommand();
	}
}