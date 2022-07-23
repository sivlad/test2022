// ConsoleApplication48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "OneLinkedList.h"
#include "Stack.h"

#include "StackasFunc.h"
#include "NodeLaba.h"
#include"que.h"
#include "StackLab.h"
#include"queue.h"
#include<string>
#include"Stack3.h"
#include"StackTemplate.h"

using namespace std;


ostream& operator <<(ostream& out, const tag& sourth)
{
	out << sourth.str << " ; " << boolalpha << sourth.valid << " ; " << sourth.index << " ; " << sourth.marker << endl;
	return out;
}


int main()
{
/*	OneLinkedList list1;

	list1.AddFront(10).AddFront(20).AddFront(30).AddTail(100).AddTail(200).AddTail(300).Print();
	list1.DeleteTail().DeleteFront().Print();
	list1.DeleteTail().Print();
	list1.DeleteTail().DeleteTail().DeleteTail().DeleteTail().DeleteTail().DeleteTail().DeleteTail().Print();
	list1.AddFront(11).AddFront(12).AddFront(13).AddFront(14).AddFront(15).AddFront(16).Print();

	list1.AddIndex(100, 1).Print();
	list1.AddIndex(200, 3).Print();
	list1.AddIndex(100, 8).Print();

	OneLinkedList* list3 = new OneLinkedList;
	list3->AddFront(10).AddFront(20).Print();

	delete list3;

	OneLinkedList list2;
	list2.AddIndex(1000, 0).Print();
	list2.AddIndex(2000, 0).Print();

	cout << list1.GetByIndex(5) << endl;
	cout << list1.GetByIndex(1) << endl;
	cout << list1.GetByIndex(9) << endl;
	cout << list1.GetByIndex(19) << endl;

	list1.DeleteIndex(1).Print();
	list1.DeleteIndex(5).Print();
	list1.DeleteIndex(7).Print();

	cout << "///////////////////////////////////////" << endl;

	Stack stack1;
	stack1.Push(1111);
	stack1.Push(1211);
	stack1.Push(1311);
	stack1.Push(1411);
	stack1.Push(1511);
	stack1.View();
	cout << stack1.Top() << endl;
	stack1.View();
	cout << stack1.Pop() << endl;
	stack1.View();
	cout << stack1.Pop() << endl;
	stack1.View();
	stack1.Push(1110);
	stack1.Push(1210);
	stack1.View();
	cout << boolalpha << stack1.IsEmpty() << endl;
	stack1.Clear();
	cout << boolalpha << stack1.IsEmpty() << endl;
	stack1.View();
	stack1.Push(4444);
	cout << boolalpha << stack1.IsEmpty() << endl;
	stack1.View();
*/
		/*NodeLaba* stack_func1 = nullptr;
		stack_func1 = push(stack_func1, 11);
		view(stack_func1);
		stack_func1 = push(stack_func1, 21);
		stack_func1 = push(stack_func1, 31);
		stack_func1 = push(stack_func1, 41);
		stack_func1 = push(stack_func1, 51);
		view(stack_func1);
		cout << top(stack_func1) << endl;
		stack_func1 = pop(stack_func1);
		view(stack_func1);
		cout << top(stack_func1) << endl;
		stack_func1 = pop(stack_func1);
		view(stack_func1);
		stack_func1 = push(stack_func1, 512);
		stack_func1 = push(stack_func1, 513);
		view(stack_func1);
		cout << boolalpha << empty(stack_func1) << endl;
		stack_func1 = clear(stack_func1);
		view(stack_func1);
		cout << boolalpha << empty(stack_func1) << endl;
		stack_func1 = push(stack_func1, 513);
		view(stack_func1);

		stack_func1 = push(stack_func1, 514);
		stack_func1 = push(stack_func1, 515);
		stack_func1 = push(stack_func1, 516);
		stack_func1 = push(stack_func1, 517);

		NodeLaba* stack_func2 = nullptr;
		stack_func2 = push(stack_func2, 1);
		stack_func2 = push(stack_func2, 2);
		stack_func2 = push(stack_func2, 3);
		stack_func2 = push(stack_func2, 4);
		stack_func2 = push(stack_func2, 5);
		stack_func2 = push(stack_func2, 6);
		stack_func2 = push(stack_func2, 7);
		stack_func2 = push(stack_func2, 8);
		stack_func2 = push(stack_func2, 9);
		stack_func2 = push(stack_func2, 10);
		stack_func2 = push(stack_func2, 11);
		stack_func2 = push(stack_func2, 12);
		stack_func2 = push(stack_func2, 13);
		stack_func2 = push(stack_func2, 14);

		cout << "//////////////////////////////////////" << endl;
		view(stack_func1);
		view(stack_func2);
		stack_func1 = push(stack_func1, stack_func2);
		stack_func2 = nullptr;
		cout << "//////////////////////////////////////" << endl;
		view(stack_func1);
	
		stack_func1 = clear(stack_func1);
		stack_func2 = clear(stack_func2);*/


//	StackLab stack_lab1;

	//StackLab stack_lab1 {100,200 ,300,400,500,600,700,800,900,1000};

/*	stack_lab1.push(100);
	stack_lab1.push(200);
	stack_lab1.push(300);
	stack_lab1.push(400);
	stack_lab1.push(500);
	stack_lab1.push(600);
	stack_lab1.push(700);
	stack_lab1.push(800);
*/
//	stack_lab1.push(100).push(200).push(300).push(400).push(500).push(600).push(700);

	//StackLab stack_lab10;
	//StackLab stack_lab11;

	//stack_lab1.view();
	//while (!stack_lab1.empty())
	//{
	//	int pop_stack = stack_lab1.top();
	//	if (pop_stack % 200 == 0)
	//	{
	//		stack_lab10.push(pop_stack);
	//	}
	//	else 
	//	{
	//		stack_lab11.push(pop_stack);
	//	}
	//	stack_lab1.pop();
	//}
	//stack_lab10.view();
	//stack_lab11.view();

	//stack_lab1.push(100).push(200).push(300).push(400).push(500).push(600).push(700);

	//stack_lab1.view();
	//cout << stack_lab1.top() << endl;
	//stack_lab1.pop();
	//stack_lab1.view();
	//cout << stack_lab1.top() << endl;
	//stack_lab1.pop();
	//stack_lab1.view();
	//cout << stack_lab1.top() << endl;
	//stack_lab1.pop();
	//stack_lab1.view();
	//cout << boolalpha << stack_lab1.empty() << endl;
	//stack_lab1.pop();
	//stack_lab1.pop();
	//stack_lab1.pop();
	//stack_lab1.pop();
	//stack_lab1.pop();
	//stack_lab1.pop();
	//stack_lab1.pop();
	//stack_lab1.pop();
	//stack_lab1.pop();
	//stack_lab1.pop();
	//stack_lab1.pop();
	//stack_lab1.pop();
	//stack_lab1.pop();
	//cout << boolalpha << stack_lab1.empty() << endl;

	//stack_lab1.push(1);
	//stack_lab1.push(2);
	//stack_lab1.push(3);
	//stack_lab1.push(4);
	//stack_lab1.push(5);
	//stack_lab1.push(6);
	//stack_lab1.push(7);
	//stack_lab1.push(8);

	//StackLab stack_lab2;
	//stack_lab2.push(10);
	//stack_lab2.push(20);
	//stack_lab2.push(30);
	//stack_lab2.push(40);
	//stack_lab2.push(50);
	//stack_lab2.push(60);

	//cout << "//////////////////////////////////////////" << endl;
	//stack_lab1.view();
	//stack_lab2.view();
	//stack_lab1.push(stack_lab2);
	//cout << "//////////////////////////////////////////" << endl;
	//stack_lab1.view();
	//stack_lab2.view();



	////////////////////
	//cout << "////////////////////////" << endl;

	//NodeLaba* que_func3 = nullptr;
	//que_func3 = enque(que_func3, 200);
	//que_func3 = enque(que_func3, 400);
	//que_func3 = enque(que_func3, 200);
	//que_func3 = enque(que_func3, 2100);
	//que_func3 = enque(que_func3, 100);
	//que_func3 = enque(que_func3, 900);
	//view1(que_func3);
	//
	//int first1 = first(que_func3);
	//int last1 = last(que_func3);

	//cout << first1 << " " << last1 << endl;
	//que_func3 = deque(que_func3);
	//view1(que_func3);
	//que_func3 = clear(que_func3);
	//view1(que_func3);
	//que_func3 = enque(que_func3, 1);
	//que_func3 = enque(que_func3, 2);
	//que_func3 = enque(que_func3, 3);
	//view1(que_func3);
	//NodeLaba* que_func4 = nullptr;
	//que_func4 = enque(que_func4, 14);
	//que_func4 = enque(que_func4, 45);
	//que_func4 = enque(que_func4, 34);

	//que_func3 = push1(que_func3, que_func4);
	//que_func4 = nullptr;
	//view1(que_func3);



	//cout << "Task2" << endl;
	//Queue que;
	//Queue que1;

	//que.enque(3);
	//que.enque(4);
	//que.enque(2);
	//que.enque(8);

	//que.view();
	//cout << "/////////////////" << endl;

	//que1.enque(11);
	//que1.enque(45);
	//que1.enque(21);
	//que1.enque(35);
	//que1.view();
	//cout << "//////////////////" << endl;
	//que.enque(que1);
	//que.view();
	//cout << "///////////" << endl;
	//que.deque();
	//que.deque();
	//que.deque();
	//que.view();

	//cout << que.first() << "///////" << que.last();

	ofstream outfile("outtest.txt");

	ifstream infile("test.txt");

	if (!infile)
	{
		cerr << "Uh oh, SomeText.txt could not be opened for writing!" << endl;
		exit(1);
	}
	
	string str = { "<ahhh>hi<//hhh> <b>fire<b>ice</b> <a> gfg </a></b>" };

	while (infile)
	{

		getline(infile, str);

		if (str == "")
		{
			continue;
		}

		cout << "////////////////////////////////" << endl << endl;
		cout << str << endl;

		int flag = 0;
		int flag1 = 0;
		StackTemplate<char> stack_char;
		StackTemplate<tag> stack_teg;
		string name;
		string name1;
		int index = 0;
		if (str[0] != '<')
		{
			str[0] = '<';
			cout << str;
			return 0;
		}

		if (str[str.size() - 1] != '>')
		{
			str[str.size() - 1] = '>';
			cout << str;
			return 0;
		}

		if (str[1] == '<' || str[1] == '>' || str[1] == '/')
		{
			str[1] = 'h';
		}

		if (str[str.size() - 2] == '>' || str[str.size() - 2] == '<' || str[str.size() - 2] == '/')
		{
			str[str.size() - 2] = 'h';
		}

		for (int i = 0; i < str.size(); i++)
		{
			if (flag == 0)
			{
				name = "";

			}

			if (flag1 == 1)
			{
				name1.push_back(str[i]);

			}

			if (str[i] == '<' && (str[i + 1] == '>' || str[i + 1] == '<') && stack_char.empty())
			{
				str[i + 1] = 'c';
				i = 0;
				continue;
			}

			if (str[i] == '<')
			{
				if (stack_char.empty())
				{
					stack_char.push(str[i]);
					flag = 1;
					index = i + 1;
					continue;
				}
				else
				{
					if (stack_char.top() == '/')
					{
						str[index + stack_teg.top().str.size()] = '>';
						stack_teg.pop();
						break;
					}
					else
					{
						flag = 0;
						tag tmp;
						tmp.str = name;
						tmp.valid = false;
						tmp.index = index;
						tmp.marker = 1;        //отсутствует закрывающая скобка
						stack_teg.push(tmp);
						stack_teg.view();
						name = "";
						stack_char.clear();

						stack_char.push(str[i]);
						flag = 1;
						index = i + 1;
						continue;
					}
				}

			}

			if (str[i] == '/' && str[i - 1] == '<')
			{
				stack_char.push(str[i]);
				flag = 1;
				index = i + 1;
				continue;
			}

			if (str[i] == '/' && stack_char.empty())
			{
				stack_char.push(str[i]);
				flag = 1;
			}

			/*if (flag == 1)
			{
				name.push_back(str[i]);
			}*/


			if (str[i] == '>')
			{
				flag = 1;
				flag1 = 1;
				int flag_close = 0;
				if (stack_char.top() == '/')
				{
					flag_close = 1;
					stack_char.pop();
				}

				if (stack_char.empty())
				{
					if (flag_close == 1)
					{
						str[i - stack_teg.top().str.size() - 2] = '<';
						stack_teg.clear();
						break;
					}
					else
					{
						name1.pop_back();
						tag tmp;
						tmp.str = name1;
						tmp.valid = false;
						tmp.index = i - name1.size();
						tmp.marker = 2; //отсутствует открывающая скобка
						stack_teg.push(tmp);
						stack_teg.view();
						flag = 0;
						continue;
					}

				}
				else
				{
					if (flag_close == 1)
					{
						stack_char.push('/');
					}
				}

				name1 = "";

				flag = 0;
				if (stack_char.top() == '/')
				{
					cout << name << endl;
					if (stack_teg.top().str == name)
					{
						stack_teg.pop();
						cout << "Equal" << endl;
					}

					else
					{
						cout << "Not equal" << endl;

						if (stack_teg.top().valid == false)
						{
							switch (stack_teg.top().marker)
							{
							case 1:
								str[stack_teg.top().index + name.size()] = '>';
								stack_teg.clear();
								break;
							case 2:
								str[stack_teg.top().index + stack_teg.top().str.size() - name.size() - 1] = '<';
								stack_teg.clear();
								break;
							}
							break;
						}
						else
						{
							tag last = stack_teg.top();
							stack_teg.pop();

							if (!stack_teg.empty())
							{
								tag prelast = stack_teg.top();
								stack_teg.pop();

								if (stack_teg.top().str == name)
								{
									str[last.index + last.str.size() - prelast.str.size() - 1] = '/';
									stack_teg.clear();
									break;
								}
								else
								{
									string res = last.str;
									for (int i = 0; i < res.size(); i++)
									{
										str[index + i] = res[i];
									}
								}
							}
							else
							{
								string res = last.str;
								for (int i = 0; i < res.size(); i++)
								{
									str[index + i] = res[i];
								}
							}
						}
					}
				}

				else
				{
					flag = 0;
					tag tmp;
					tmp.str = name;
					tmp.valid = true;
					tmp.index = index;
					tmp.marker = 0;  // правильно сформированный тег
					stack_teg.push(tmp);
					stack_teg.view();
				}

				stack_char.clear();
			}


			if (flag == 1)
			{
				name.push_back(str[i]);

			}

		}

		if (!stack_teg.empty())
		{
			if (stack_teg.top().valid == false && stack_teg.top().marker == 2)
			{
				tag last = stack_teg.top();
				stack_teg.pop();
				str[last.index + last.str.size() - stack_teg.top().str.size() - 2] = '<';
			}
			else {
				str[stack_teg.top().index] = '/';
			}
		}

		cout << "////////////////////////////////" << endl << endl;
		cout << str << endl;

		outfile << str << endl;
	}
	infile.close();

	outfile.close();

}

