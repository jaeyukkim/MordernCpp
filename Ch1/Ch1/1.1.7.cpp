#pragma once

import <iostream>;
import <format>; // 모듈 선언
import employee;


using namespace std;

int main()
{
	Employee employ1;
	employ1.employeeNumber = 15;
	employ1.firstInitial = 'K';
	employ1.lastInitial = 'N';
	employ1.salary = 10000;

	cout << format("firstInitial : {}\nlastInitial : {}\nsalary : {}\nemployeeNumber : {}", 
		employ1.firstInitial, employ1.lastInitial, employ1.salary, employ1.employeeNumber) << endl;
}