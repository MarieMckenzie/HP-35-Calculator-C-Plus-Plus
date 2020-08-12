#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>

using namespace std;

class Node
{
 private:
             float data;
             Node * next;

 public:
         Node()
             {
                setNext(NULL);
             }
          Node(float DATA)
             {
                setNext(NULL);
                setData(DATA);
             }
         ~Node()
            {

            }

         float getData()const
             { return data; }

         Node* getNext()const
            { return next; }

         void setData(float Data)
            { data=Data;}

         void setNext(Node* Next)
            {next=Next;}

         void show()const
         { cout<<data<<endl; }


};
#endif
