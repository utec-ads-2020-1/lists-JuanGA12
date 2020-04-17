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
   LinkedList<int> z;
   z.push_front(3);
   z.push_front(4);
   z.push_front(5);
   //cout<<z.front();
   //cout<<z.back();
   //z.pop_back();
   //z.pop_back();
   //z.pop_back();
   //cout<<z.front();
   //cout<<z.back();
   //cout<<z.size();
   z.clear();
   //cout<<z.size();


    return EXIT_SUCCESS;
}
