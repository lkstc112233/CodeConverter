#include "stdafx.h"
#include "CodeSmart.h"
#include "CodeSmartWarpper.h"
#include <string>
#include <vector>

using std::wstring;
using std::vector;

#pragma warning (disable:4996)

CodeSmart::CodeSmart(void)
	: textBuffer(NULL)
{
}


CodeSmart::~CodeSmart(void)
{
	clear();
}

OLECHAR* CodeSmart::AlignText(OLECHAR* textIn)
{
	::MessageBoxA(NULL,"AlignTextCalled","",0);
	::MessageBoxW(NULL,textIn,L"Text",0);
	clear();
	wstring tin(textIn);
	vector<wstring> lines;
	wstring temp;
	for (auto i=tin.begin();i!=tin.end();++i)
		if (*i==';')
		{
			lines.push_back(temp+=';');
			temp.clear();
		}
		else if (*i!='\n')
			temp+=*i;
	unsigned maxSize=0;
	int tabSum=lines.front().find_first_not_of('\t');
	for (auto i=lines.begin();i!=lines.end();++i)
		maxSize=max(maxSize,i->find_first_of('=')+tabSum*7);
	int length=0;
	wstring final;
	for (auto i=lines.begin();i!=lines.end();++i)
	{
		auto size=i->find_first_of('=');
		if (wstring::npos==size)
			continue;
		auto realSize=size+tabSum*7;
		for (unsigned j=0;j<(maxSize-realSize)/8;++j)
			i->insert(size,1,_T('\t'));
		length+=i->length();
		final+=*i;
	}
	textBuffer=new WCHAR[length+1];
	wcscpy(textBuffer,final.c_str());
	return textBuffer;
}

void CodeSmart::beginHashCommand()
{
	hashCommandCache="";
}
void CodeSmart::hashCommandAddChar(char c)
{
	hashCommandCache+=c;
}

void CodeSmart::clear()
{
	delete[] textBuffer;
}