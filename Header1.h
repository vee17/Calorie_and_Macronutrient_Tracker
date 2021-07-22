#pragma once
#include "Form1.h"
#include <string.h>
using namespace std;
class updatebtn {
public:
	double dailycal;
	double concal;
	double remcal;
	double curpro;
	double curfat;
	double curcarb;
	double pro;
	double fat;
	double carb;
	double cal;
	double serving;
};
class conversion {
public:


	float temp;
	float val;
	float val2;
	void convert(double& num1) {
		temp= num1 * 1000 ;
	}
	void convert(float& num1) {
		temp= num1 * 1000 ;
	}
};
class update {
public:
	double upcal;
	double uppro;
	double upfat;
	double upcarb;
	 double uprem;
	double addto(double& num1, double& num2) {
		return{
			num1 * num2
		};
	}
};
class dailycal2 {
public:
	double fatmul;
	double genmul;
	int m = 24;
	double calcalc(double& num1, double& num2, double& num3) {
		return{ num1 * num2 * num3 * m};
	}
};
class BMI2 :public dailycal2 {

public:
	double bmicalc(double& num1, double& num2) {
		return { num1 / ((num2/100) * (num2/100)) };
	}
	int bmi;
	int dailycal;
	int concal;
	int remcal;
	
	
}; 




class user : public  BMI2, public update ,public conversion {
public:
	int id;
	double height;
	double weight;		
};