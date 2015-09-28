# testRepo
#include <queue>
namespace MY_NAME_SPACE{
	class mycomparison
	{
		bool reverse;
	public:
		mycomparison(const bool& revparam = false)
		{
			reverse = revparam;
		}
		bool operator() (const int& lhs, const int&rhs) const
		{
			if (reverse) return (lhs > rhs);
			else return (lhs < rhs);
		}
	};
	typedef std::priority_queue<int, std::vector<int>, mycomparison> my_priority_queue;

}

#include <vector>
#include <queue>

#include "mycompare.h"

namespace MY_NAME_SPACE {
	class xx {
	public:
		xx(const bool greater = false) {
			my_priority_queue x(greater);
			pq = x;
		}
		~xx() {
		}
		void push(int x);
		int top(void);
		my_priority_queue pq;
	};
}
