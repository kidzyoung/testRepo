#include <iostream>
#include <vector>
#include <queue>
#include <functional>

using namespace std;

int nthUglyNumber(int n) {
	std::priority_queue<long, std::vector<long>, std::greater<long> > pq;  // minium heap..
	pq.push(1);
	long cnt=1, cur;
	while(cnt<n){
		++cnt;
		cur=pq.top();
		while(!pq.empty() && pq.top()==cur) pq.pop();
		pq.push(cur*2);
		pq.push(cur*3);
		pq.push(cur*5);
	}
	return pq.top();
}

int main(){
	cout<<"The 1500\'th ugly number is "<<nthUglyNumber(1500)<<"."<<endl;
	return 0;
}
