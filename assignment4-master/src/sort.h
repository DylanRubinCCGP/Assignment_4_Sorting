//
//  sort.h
//  
//  Functions for bubble sort, selection sort, and insertion sort.
//  You SHOULD modify this file.
//
//  Copyright 2019 David Kopec
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation files
//  (the "Software"), to deal in the Software without restriction,
//  including without limitation the rights to use, copy, modify, merge,
//  publish, distribute, sublicense, and/or sell copies of the Software,
//  and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice
//  shall be included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
//  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
//  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
//  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

#ifndef sort_hpp
#define sort_hpp

#include <algorithm> // for swap()

using namespace std;

namespace csi281 {

	//Swapping algorithm
	void swap(int *pone, int *ptwo)
	{
		int trash = *pone;
		*pone = *ptwo;
		*pone = trash;
	}

	// Performs an in-place ascending sort of *array* of size *length*
	// using the bubble sort algorithm
	template <typename T>
	void bubbleSort(T array[], const int length)
	{
		int i, j;
		for (i = 0; i < length - 1; i++)
			for (j = 0; j < length - i - 1; j++)
				if (array[j] > array[j + 1])
					swap(&array[j], &array[j + 1]);
	}

	// Performs an in-place ascending sort of *array* of size *length*
	// using the selection sort algorithm
	template <typename T>
	void selectionSort(T array[], const int length)
	{
		int i, k, tempMin;
		T garb;

		for (i = 0; i < length - 1; i++)  //moving through the entire array 
		{
			tempMin = i;  //taking the first element of an unsorted part of the array

			for (k = i + 1; k < length; k++)  //moving through the unsorted part of the array 
				if (array[k] < array[tempMin])  //searching for the smallest element
					tempMin = k;

			garb = array[tempMin];  //swapping elements
			array[tempMin] = array[i];
			array[i] = garb;
		}
	}

	// Performs an in-place ascending sort of *array* of size *length*
	// using the insertion sort algorithm
	template <typename T>
	void insertionSort(T array[], const int length)
	{
		int i, k;
		T tempMax;

		for (i = 1; i < length; i++)  //moving through the entire array
		{
			tempMax = array[i];  //taking next element which should be inserted somewhere
			k = i - 1;

			while (k >= 0 && array[k] > tempMax)  //moving while index is more or equal to 0 or while did not find a right place to insert
			{
				array[k + 1] = array[k]; //move an elements to the right
				k = k - 1;
			}

			array[k + 1] = tempMax;  //inserting the element to the right position
		}
	}
}


#endif /* sort_hpp */
