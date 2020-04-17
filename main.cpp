#include <iostream>
#include "test/tester.h"
#include "structures/stack.h"
#include "structures/queue.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "\tLists Practice" << endl;
    cout << "===========================================================" << endl << endl;

    //Tester::execute();

    /*stack<int> z;
    z.push(2);
    z.push(3);
    z.push(4);
    int g = z.peak();
    cout<<g;
    cout<<endl;
    z.pop();
    z.pop();
    int s = z.peak();
    cout<<s<<endl;
    int y = z.size();
    cout<<y;
    z.~stack();
     */
    queue<int> z;
    z.push(40);
    z.push(20);
    z.push(0);
    z.pop();
    cout<<endl;
    cout<<z.front()<<endl;
    cout<<z.back()<<endl;
    cout<<endl;
    z.pop();
    cout<<z.front()<<endl;
    cout<<z.back()<<endl;
    //cout << z[1];
    //cout<<z.size();
    //cout<<endl;
    //z.peak();
    z.pop();
    cout<<z.empty();
    z.~queue();

    return EXIT_SUCCESS;
}
