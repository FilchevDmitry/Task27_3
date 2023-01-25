#include<iostream>
#include"worker.h"
void Worker::setType(char& inType)
{
	type = inType;
}
void Worker::getType(char& inType)
{
	inType = type;
}