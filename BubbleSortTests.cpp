#include "pch.h"
#include "CppUnitTest.h"
#include<vector> 
#include "BubbleSort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace BubbleSortTests
{
		TEST_CLASS(BubbleSortTests)
	{
	public:
		BubbleSort bubbleSort;
		TEST_METHOD(SwapEmptyArray)
		{
	
			const vector<int> empty;
			Assert::AreEqual(static_cast<int>(bubbleSort.Arrange(empty).size()),0);
		}
		TEST_METHOD(ListWithOneElements)
		{
			const vector<int> oneElementList ={1};
			Assert::AreEqual(bubbleSort.Arrange(oneElementList)[0],1);
		}
		TEST_METHOD(ArrangeTwoElements)
		{
			const vector<int> twoElements={4,2};
			Assert::AreEqual(bubbleSort.Arrange(twoElements)[0],2);
		}
		TEST_METHOD(ArrangeThreeElements)
		{
			const vector<int> threeElements={4,2,3};
			Assert::AreEqual(bubbleSort.Arrange(threeElements)[1],3);
		}
		TEST_METHOD(ElementsNeedArrangmentMultipleTimes)
		{
			const vector<int> elements={5,1,4,2,3};
			vector<int> orderedElements=bubbleSort.Arrange(elements);
			Assert::AreEqual(orderedElements[2],3);
		}
		};
	};
