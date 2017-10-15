#include "catch.hpp"
#include "stack.hpp"

SCENARIO("init")
{
	Stack<int> IntArr;
	REQUIRE(IntArr.count() == 0);
}
	
SCENARIO("push") {
	Stack<int> IntArr;

	IntArr.push(3);
	IntArr.push(6);
	IntArr.push(9);

	int val = IntArr.top();
	IntArr.pop();

	REQUIRE(IntArr.count() == 2);
	REQUIRE(val == 9);
}

SCENARIO("pop") {
	Stack<int> IntArr;

	IntArr.push(5);
	IntArr.push(7);
	IntArr.push(9);

	int val = IntArr.top();
	IntArr.pop();
	IntArr.pop();

	REQUIRE(IntArr.count() == 1);
	REQUIRE(val == 9);
}

SCENARIO("empty") {
	Stack<int> IntArr;

	IntArr.push(2);
	IntArr.push(4);
	IntArr.push(6);

	int val = IntArr.top();
	IntArr.pop();
	IntArr.pop();

	REQUIRE(IntArr.empty() == false);
	REQUIRE(val == 6);
}


