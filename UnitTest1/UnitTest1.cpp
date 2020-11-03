#include "pch.h"
#include "CppUnitTest.h"
#include "../Timur_1500_1/List.h"
#include "../Timur_1500_1/List.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(push_back_test)
		{
			List* list = new List();
			list->push_back(1);
			list->push_back(2);
			Assert::IsTrue(list->at(1) == 2);
		}

		TEST_METHOD(push_front_test)
		{
			List* list = new List();
			list->push_front(1);
			list->push_front(2);
			Assert::IsTrue(list->at(1) == 1);
		}

		TEST_METHOD(pop_back_test)
		{
			List* list = new List();
			list->push_front(1);
			list->push_front(2);
			list->push_front(3);
			list->pop_back();
			Assert::IsTrue(list->at(1) == 2);
		}

		TEST_METHOD(pop_front_test)
		{
			List* list = new List();
			list->push_back(1);
			list->push_back(2);
			list->push_back(3);
			list->pop_front();
			Assert::IsTrue(list->at(0) == 2);
		}

		TEST_METHOD(insert_test)
		{
			List* list = new List();
			list->push_back(5);
			list->push_back(6);
			list->push_back(7);
			list->push_back(8);
			list->insert(9, 2);
			Assert::IsTrue(list->at(2) == 9);
		}

		TEST_METHOD(remove_test)
		{
			List* list = new List();
			list->push_back(5);
			list->push_back(6);
			list->push_back(7);
			list->push_back(8);
			list->remove(2);
			Assert::IsTrue(list->at(2) == 8);
		}



		TEST_METHOD(clear_test)
		{
			List* list = new List();
			list->push_back(5);
			list->push_back(6);
			list->push_back(7);
			list->push_back(8);
			list->clear();
			Assert::IsTrue(list->get_size() == 0);
			Assert::IsTrue(list->getHead() == nullptr);
		}



		TEST_METHOD(set_test)
		{
			List* list = new List();
			list->push_back(5);
			list->push_back(6);
			list->push_back(7);
			list->push_back(8);
			list->set(1, 9);
			Assert::IsTrue(list->at(1) == 9);
		}



		TEST_METHOD(isEmpty_test)
		{
			List* list = new List();
			Assert::IsTrue(list->isEmpty());
			list->push_back(5);
			list->push_back(6);
			list->push_back(7);
			list->push_back(8);
			Assert::IsTrue(!list->isEmpty());
		}



		TEST_METHOD(push_backLIST_test)
		{
			List* list = new List();
			List* list2 = new List();
			list->push_back(5);
			list->push_back(6);
			list->push_back(7);
			list->push_back(8);

			list2->push_back(6);
			list2->push_back(7);

			list->push_back(*list2);
			Assert::IsTrue(list->at(5) == 7 && list->at(4) == 6 && list->at(3) == 8);

			
		}
	};
}
