#include "utilityFunctions.h"

bool checkLabel(char* label,label* labels, int labelCount, operation* operations, int lineCount); 
{
	if(strlen(label) > 31)
	{
		printf("Line %d: more than 31 characters in a label", lineCount);
		return false;
	}
	
	if(!isalpha(label[0]))
	{
		printf("Line %d: label has to start with an alphabetic character", lineCount);
		return false;
	} 
	
	if(labelNum((operations,label)  == -1){
		printf("Line %d: a label with that name already exist", lineCount);
		return false;
		
	}
	
	if(operationNum(operations,label)  == -1){
		printf("Line %d: label name can't be an operation name", lineCount);
		return false;
		
	}
	
	if(isGuidance(label)){
		printf("Line %d: label name can't be A guidance word name", lineCount);
		return false;
		
	}
	return true;
	
		
}

int operationNum(operation* operations, char* string){
	/*maybe improve the efficiency*/
	for(int i = 0, i < numOfOperations, i++)
	{
		if(strcmp(label,operations[i].operationName) == 0){
			return i;
		}
	}
	
	return -1;	
}

int labelNum(label* labels,int labelCount, char* string){
	for(int i = 0, i < numOfOperations, i++)
	{
		if(strcmp(label,labels[i].symbol) == 0){
			return i;
		}
	}
	
	return -1;
}

bool isGuidance(char* string){
	char[numOfGuidance]* guidanceWords = {"db","dw","dh","asciz","entry","extern"}
	 for(int i = 0, i < numOfGuidanceWords, i++)
	{
		if(strcmp(label,guidanceWords[i]) == 0){
			return true;
		}
	}
	return false;
}






