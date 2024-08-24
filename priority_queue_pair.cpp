#include <iostream>
#include <queue>
using namespace std;
int main() {
priority_queue<pair<int , int> > p1;
p1.push(make_pair(2,1));
p1.push(make_pair(3,2));
p1.push(make_pair(7,6));

cout << p1.top().second;
cout << "\n";
p1.pop();
cout << p1.top().second;
    return 0;
}
