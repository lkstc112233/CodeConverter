#pragma once

#include <string>

class CodeSmart
{
public:
	CodeSmart(void);
	~CodeSmart(void);
public:
	OLECHAR* AlignText(OLECHAR* inText);
	void hashCommandAddChar(char c);
	void beginHashCommand();
private:
	void clear();
	OLECHAR* textBuffer;
	std::string hashCommandCache;
};

