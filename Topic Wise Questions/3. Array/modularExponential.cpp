/***
    URL: `https://www.codingninjas.com/codestudio/problems/modular-exponentiation_8230803?challengeSlug=striver-sde-challenge&leftPanelTab=0`
*/

#include <bits/stdc++.h>

long findExp(long x, long n, long m) {
	if(n == 0) return 1;
	long val = findExp(x, n/2, m);
	long res = (val*val) % m;
	if(n % 2 == 1) return (res * x) % m;
	return res;
}

int modularExponentiation(int x, int n, int m) {
	long result = findExp((long)x, (long)n, (long)m);

	return (int) result;
}