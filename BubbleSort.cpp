#include "pch.h"
#include "BubbleSort.h"

#include <vector>

using namespace std;


vector<int> BubbleSort::Arrange(std::vector<int> unorderedList)
	{
		if (unorderedList.size()<=1)
			return unorderedList;
		else
		{
			for (auto i = 0; i < static_cast<int>( unorderedList.size()-1); i++)
			{
				for(auto j=0;j < static_cast<int>(unorderedList.size()-i-1);j++)
				{
					if(unorderedList[j]>unorderedList[j+1])
				{
					int tempValue = unorderedList[j];
					unorderedList[j]=unorderedList[j+1];
					unorderedList[j+1]=tempValue;
				}
				}
			}
		return unorderedList;
		}
	}