
 #include <bits/stdc++.h>
 using namespace std;

 class go {
 	public:
 	int x;
 	go(int a){ // parameterized constructor.
 		x=a;
	} 
 	go(go &i){ // copy constructor
 		x = 2*i.x;
 	}
 };
 int main(){
 	go a1(20); // Calling the parameterized constructor.
 	go a2(a1); // Calling the copy constructor.
 	cout << a2.x << endl;
 	return 0;
  } 

 // Output : 20