// I/O libs
#include<iostream>
#include<fstream>
#include<cstdio>

// STL templates
#include<string>
#include<vector>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>
#include<cmath>
#include<numeric>
#include<functional>

// Others
#include<memory.h>
#include<cassert>

// Multithreading
#include<thread>
#include<mutex>
#include<condition_variable>
#include<future>
#include<chrono>

// From local directory
#include"example.hpp"

// Macros: seldom used
#define REP(i,s,n) for(int (i)=s; (i)<(int)(n);(i)++)
#define RIT(it,c) for(__typeof(c.begin()) it = c.begin();it!=c.end();it++)
#define ALL(x) x.begin(), x.end()
#define SZ(x) (int)(x).size()
#define MSET(m,v) memset(m,v,sizeof(m))

using namespace std;

// Typedefs
typedef long long LL;
typedef vector<int> vi;
typedef pair<int,int>ii;
typedef vector<LL> vL;
typedef vector<bool> vb;

// Main function
int main(){
	// For accelerating I/O from std::cin and std::cout
	std::ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

	// Input treatments here

	clock_t start_time = clock(), end_time;
	// Actual code block here

	HelloWorld test;
	test.Process();

	// Output computational time
	end_time = clock();
	double d_t = double(end_time - start_time)/CLOCKS_PER_SEC;
	cout<< "Time spent: " << d_t << " s" <<endl;

	// Show ending
	cout<< "DONE!" <<endl;
	return 0;
}









