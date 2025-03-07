#include <iostream>
#include "clsDynamicArray.h"

using namespace std;


int main()
{
    system("color f3");

    clsDynamicArray <int> MyDynamicArray(5);

    MyDynamicArray.SetItem(0, 10);
    MyDynamicArray.SetItem(1, 20);
    MyDynamicArray.SetItem(2, 30);
    MyDynamicArray.SetItem(3, 40);
    MyDynamicArray.SetItem(4, 50);

    cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";

    cout << "\nArray Items: \n";
    MyDynamicArray.PrintList();



    //MyDynamicArray.Resize(2);
    //cout << "\nArray Size: " << MyDynamicArray.Size();
    //cout << "\nArray Items after resize to 2 : \n";
    //MyDynamicArray.PrintList();



    //MyDynamicArray.Resize(5);
    //cout << "\nArray Size: " << MyDynamicArray.Size();
    //cout << "\nArray Items after resize to 5 : \n";
    //MyDynamicArray.PrintList();



    //cout << "\nItem(1) : " << MyDynamicArray.GetItem(1) << endl;

    //MyDynamicArray.Reverse();
    //cout << "\nArray Items after reverse: \n";
    //MyDynamicArray.PrintList();

    //MyDynamicArray.Clear();
    //cout << "\nArray Items after clear: \n";
    //MyDynamicArray.PrintList();

    //cout << "\nIs Empty?  " << MyDynamicArray.IsEmpty();


    //MyDynamicArray.DeleteItemAt(2);
    //cout << "\nArray Items after deleting item(2): \n";
    //cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    //MyDynamicArray.PrintList();


    //MyDynamicArray.DeleteFirstItem();
    //cout << "\nArray Items after deleting FirstItem: \n";
    //cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    //MyDynamicArray.PrintList();

    //MyDynamicArray.DeleteLastItem();
    //cout << "\nArray Items after deleting LastItem: \n";
    //cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    //MyDynamicArray.PrintList();


    //int Index = MyDynamicArray.Find(30);
    //if (Index == -1)
    //    cout << "\nItem was not Found :-(\n ";
    //else
    //    cout << "\n30 is found at index : " << Index;
    //


    //MyDynamicArray.DeleteItem(30);
    //cout << "\n\nArray Items after deleting 30:";
    //cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    //MyDynamicArray.PrintList();


    MyDynamicArray.InsertAt(2, 900);
    cout << "\n\nArray after insert 900 at index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();


    MyDynamicArray.InsertAtBeginning(400);
    cout << "\n\nArray after insert 400 at Begining:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertBefore(2, 500);
    cout << "\n\nArray after insert 500 before index 2:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    MyDynamicArray.InsertAfter(7, 600);
    cout << "\n\nArray after insert 600 after index 7:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();


    MyDynamicArray.InsertAtEnd(800);
    cout << "\n\nArray after insert 800 at End:";
    cout << "\nArray Size: " << MyDynamicArray.Size() << "\n";
    MyDynamicArray.PrintList();

    system("pause>0");
    return 0;
}