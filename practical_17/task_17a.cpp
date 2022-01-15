#include <iostream>
#include <list>
#include <iterator>
using namespace std;


void printList (list <int> g) {
      
    list < int >::iterator it;
      
    for (it = g.begin (); it != g.end (); ++it)
        cout << *it << " ";
      
    cout << '\n';
}


int main () {
  
    list <int> lst;
    int n;
      
    cout << "\nEnter size of the List: ";
    cin >> n;
      
    for (int i = 0; i < n; i++){
        int tmp;
              
        cin >> tmp;
              
        lst.push_back (tmp);
    } 
    
    printList (lst);
      
    // B part of Task
    cout << "Size of the list is: " << lst.size () << "\n";
    
    // C part of Task
    lst.sort ();
      
    cout << "Printing list after sorting: ";
      
    printList (lst);
      
    // D part of Task
    lst.reverse ();
      
    cout << "Printing list after Reversing: ";
      
    printList (lst);
      
    return 0;

}


