// ProjectEuler1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

bool IsPrime(long long unsigned int nr);
bool IsPalindromic(int product);			// Problem 4

int main()
{

	/* Problem 1
		// Find the sum of all the multiples of 3 or 5 below 1000

		int sum = 0;

		for (int i = 0; i < 1000; i++) {
			if (i % 3 == 0 || i % 5 == 0)		{
				sum += i;
			}
		}

		std::string sumString = std::to_string(sum);
		printf("Result: %d", sum);
		// Result was 233168
		*/
	/* Problem 2
		int i = 0;
		int j = 1;
		int sum = 0;

		while (i < 4000000 || j < 4000000) {
			i = i + j;
			j = j + i;
			if (i % 2 == 0) {
				sum += i;
			}
			if (j % 2 == 0) {
				sum += j;
			}

		}
		printf("Result: %d \n", sum);
		// Result is 4613732
		*/
	/* Problem 3
		long long unsigned int base = 600851475143;
		long long unsigned int baseBiggestPrimeFactor = 0;
		long long unsigned int primeFactor = 2;

		baseBiggestPrimeFactor = sqrt(base) +1;

		for (unsigned int i = 3; i < baseBiggestPrimeFactor; i+=2) {
			if (IsPrime(i)) {
				if (base%i == 0) {
					if (i > primeFactor) {
							primeFactor = i;
					}
				}

			}
		}

		printf("Result: %lld \n", primeFactor);
		*/
	/* Problem 4
		int iResult = 0;
		for (int i = 999; i > 0; i--) {
			for (int j = 999; j > 0; j--) {
				if (IsPalindromic(i*j)) {
					if (i*j > iResult) {
						iResult = i * j;
					}
				}
			}
		}
		printf("Result: %d \n", iResult); // Result: 906609
		*/
	/* Problem 5
		int j = 20, max = 20;
		bool eDiv = false;
		while (!eDiv) {
			j++;
			for (int i = 1; i <= max; i++) {
				if (j%i != 0){
					break;
				}
				if (i == max) {
					eDiv = true;
				}
			}
		}
		printf("Reslut: %d \n", j); // Result: 232792560
		*/
	/* Problem 6
	int iResult = 0;
	int sumSquare = 0;
	int squareSum = 0;

	for (int i = 1; i <= 100; i++) {
		sumSquare += i * i;
		squareSum += i;
	}
	squareSum *= squareSum;
	iResult = squareSum - sumSquare;

	printf("Result: %d %d %d \n", iResult, squareSum, sumSquare); //Result: 25164150 //25502500 338350
	*/
	/* Problem 7
		int count = 0;
		int primeWanted = 10001;
		int i = 0;
		while (count < primeWanted) {
			i++;
			if(IsPrime(i)) {
				count++;
			}
		}
		printf("Result: %d \n", i); // Result: 104743
		*/

	/* Problem 8 
	std::string numbers =
	"7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

	long long unsigned int product = 1;
	long long unsigned int result = 1;
	int currentDigit = 0;

	

	for (int i = 0; i < numbers.size()-11; i++) {
		for (int j = 0; j < 13; j++) {
			currentDigit = (int)numbers[i + j]-48;
			product *= currentDigit;
		}
		if (product > result) {
			result = product;
		}
		product = 1;
	}

	printf("Result: %lld \n", result); // 23514624000
	*/

		/* Problem 9
	int sum = 1000;
	int product = 0;
	int counter = 0;
	int a = 0, b = 0, c = 0;
	for (int i = 1; i < 1000; i++) {
		for (int j = 1; j < 1000; j++) {
			for (int k = 1; k < 1000; k++) {
				if (i + j + k == 1000) {
					if ((i*i) + (j*j) == (k*k)) {
						product = i*j*k;
						a = i;
						b = j;
						c = k;
						counter++;
					}
				}
			}
		}
	}
	printf("Result: %d %d \n", product, counter);
	*/

		/* Problem 10 
	int max = 2000000;
	long long unsigned int sum = 0;
	for (int i = 0; i < max; i++) {
		if (IsPrime(i)) {
			sum += i;
		}
	}

	printf("Result: %lld \n", sum); // 1179908154
	*/
	
	/* Problem 11 
	std::ifstream in;
	in.open("numbers.txt");
	int numbersArray[20][20];
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			in >> numbersArray[i][j];
		}
	}
	long long int max = 0;
	long long int up = 1, left = 1, diagR = 1, diagL = 1;
	int row = 0, colomun = 0;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			for (int k = 0; k < 4; k++) {
				if(i + 3 < 20)
					up *= numbersArray[i + k][j];
				if(j + 3 < 20)
					left *= numbersArray[i][j + k];
				if(i + 3 < 20 && j + 3 < 20)
					diagR *= numbersArray[i + k][j + k];
				if (i + 3 < 20 && j - 3 > 0)
					diagL *= numbersArray[i + k][j - k];
			}
			if (up > max) {
				max = up;
				row = i;
				colomun = j;
			}
			if (left > max) {
				max = left;
				row = i;
				colomun = j;
			}
			if (diagR > max) {
				max = diagR;
				row = i;
				colomun = j;
			}
			if (diagL > max) {
				max = diagL;
				row = i;
				colomun = j;
			}
			up = 1; left = 1; diagR = 1; diagL = 1;
		}
	}
	printf("Result: %lld %d %d ", max, row, colomun);
	*/

	/* Problem 12 */
	

	return 0;
}

bool IsPrime(long long unsigned int nr) {
	if (nr < 2) {
		return false;
	}
	if (nr == 2) {
		return true;
	}
	if (nr % 2 == 0) {
		return false;
	}
	for (int i = 3; i < sqrt(nr +1); i += 2) {
		if (nr%i == 0) {
			return false;
		}
	}
	return true;
}
// Problem 4
bool IsPalindromic(int product) {
	std::string resultNormal, resultReversed;
	resultNormal = std::to_string(product);

	for (std::string::reverse_iterator rit = resultNormal.rbegin(); rit != resultNormal.rend(); ++rit) {
		resultReversed.push_back(*rit);
	}

	if (resultNormal == resultReversed) {
		return true;
	}

	return false;

}


