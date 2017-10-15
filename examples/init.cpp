//METHOD INIT
#include <stack.hpp>

void foo_init() {
	try {
		cout << endl << "INITIALIZING 5 INT-ARRAYS & 1 CHAR-ARRAY..." << endl << endl;
		Stack<int> IntArrA;
		Stack<int> IntArrB;
		Stack<int> IntArrC;
		Stack<int> IntArrD;
		Stack<int> IntArrE( { 7, 1, 0, 2, 0, 1, 5, 1 } );
		Stack<char> CharArrE( { 'A', 'I', 'S', 'S', 'U', 'R' } );

		cout << "FILLING IntArrA ARRAY..." << endl;
		for (int i = 0; i < 10; i++) {
			IntArrA.push(i);
		}

		cout << "FILLING IntArrC ARRAY..." << endl << endl;
		for (int i = 0; i < 10; i++) {
			IntArrC.push(i);
		}

		cout << "COPY IntArrA INTO IntArrB..." << endl;
		IntArrB = IntArrA; //  Копируем IntArrA в IntArrB.

		cout << "MOVE IntArrC INTO IntArrD..." << endl << endl;
		IntArrD = std::move(IntArrC);

		cout << "CLEANING IntArrA ARRAY..." << endl << "RESULT\t";
		while(IntArrA.empty()) {
			IntArrA.pop();
			cout << IntArrA.top() << " ";
		}
		cout << endl << endl;

		cout << "CLEANING IntArrB ARRAY..." << endl << "RESULT\t";
		while(IntArrB.empty()) {
			IntArrB.pop();
			cout << IntArrB.top() << " ";
		}
		cout << endl << endl;

		cout << "CLEANING IntArrD ARRAY..." << endl << "RESULT\t";
		while(IntArrD.empty()) {
			IntArrD.pop();
			cout << IntArrD.top() << " ";
		}
		cout << endl << endl;


		cout << "CLEANING IntArrE ARRAY WITH <initializer_list> ..." << endl << "RESULT\t";
		while(IntArrE.empty()) {
			IntArrE.pop();
			cout << IntArrE.top() << " ";
		}
		cout << endl << endl;

		cout << "CLEANING CharArrE ARRAY WITH <initializer_list> ..." << endl << "RESULT\t";
		while(CharArrE.empty()) {
			CharArrE.pop();
			cout << CharArrE.top() << " ";
		}
		cout << endl << endl;

	} catch(const std::exception& e) {
		cout << e.what() << endl;
	}
}

int main() {
	foo_init();
}