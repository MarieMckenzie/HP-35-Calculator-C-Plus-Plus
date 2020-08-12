#ifndef STACKK_H
#define STACKK_H
#include <iostream>
#include <fstream>
#include "Node.h"

using namespace std;

class Stackk
{
 private:

    Node *top;
	int counter;

 public:

	 Stackk()
	 {
		top=NULL;
		counter=0;
	 }

    ~Stackk()
             {
                destroy();
             }

    bool isEmpty()
         {
           if(top==NULL)
			   return true;
		   else
			   return false;
         }

    bool isFull()
         {
             Node* temp= new Node;
             if (temp==NULL)
                 return true;
             else
                {
                    delete temp;
                    return false;
                }
         }

    void destroy()
    {
        while(pop()!=NULL);
    }

    void push(float operand)
     {
        if(isFull())
            cout<<"Stack is Full"<<endl;

			else
			{
				Node *temp = new Node(operand);
				counter++;
				if(isEmpty())
					top = temp;
					else
					{
						temp->setNext(top);
						top =temp;
						
					}
			}
    }

    float pop()
    {
        float operand=0;

        if (isEmpty())
        {
           return operand;
        }


          else {
                    Node* current = top;
                    top = current->getNext();
                    operand =current->getData();
                    delete current;
					counter--;
               }
        return operand;
    }

	void calculation(float oper1, float oper2, char opera)
	{
		switch (opera)
		{
			case '+':
				push(oper1 + oper2);
				break;
			case '-':
				push(oper1 - oper2);
				break;
			case '*':
				push(oper1 * oper2);
				break;
			case '/':
				push(oper1 / oper2);
				break;
		
		}
	 }

	string validFormat(string expr)
	{
	char* subExpr=strtok((char*)(expr.c_str())," ");

		if(isOperator(subExpr))
			return "No";
		else
			return "Yes";
	}

	bool isOperator(char *term)
	{
		if(*term=='+'||*term=='-'||*term=='/'||*term=='*'||*term=='('||*term==')')
			return true;
		else
			return false;
	}

	string rpnEvaluation(string expr)
	{
		char* subExpr=strtok((char*)(expr.c_str())," ");

				while(subExpr!=NULL)
				{
					if(isOperator(subExpr))
					{
						float oper1,oper2;
						if(counter<2)
							return "Invalid Expression";

						oper2=pop();
						oper1=pop();
						calculation(oper1,oper2,*subExpr);

					}
					else if(isdigit(*subExpr))
					{
						push(atof(subExpr));
					}

					subExpr=strtok(NULL," ");
				}

		if(counter>1)
			return "Invalid Expression";
		else
			return to_string(pop());
	}

	void store(string expr)
	{

		try{
			 ofstream file("Calculator.txt", ios::app);
				if (file.fail())
					{
						throw runtime_error("Unable to store data!");
					}

				file<<expr<<endl;
				file.close();
			}

		catch(runtime_error &r)
			{
				cerr<<r.what()<<endl;
			}

	}

};
#endif
