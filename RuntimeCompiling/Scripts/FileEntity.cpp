#include "FileEntity.h"
#include <iostream>

FileEntity::FileEntity()
{
	std::cout << "Created Entity!" << std::endl;
	m_name = "Hello World!";
}

void FileEntity::Start()
{
	std::cout << "Started!" << std::endl;
}

void FileEntity::Update()
{
	std::cout << "Updating!" << std::endl;
	GetTransform()->SetX(300);
}

const char* FileEntity::GetName()
{
	return m_name;
}

extern "C" FileEntity* factory(void)
{
return new FileEntity; 
}