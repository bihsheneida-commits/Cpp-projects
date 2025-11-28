#include<iostream>
#include<cmath>
void findquadraticroots(double a,double b,double c){
	if (a==0){
		std::cout<<"invalid:not a quadratic equation(a cannot be zero)."<<std::endl;
		return;
	}
	double discriminant=b*b-4*a*c;
	if(discriminant>0){
		double root1=(-b+std::sqrt(discriminant))/(2*a);
		double root2=(-b-std::sqrt(discriminant))/(2*a);
		std::cout<<"roots are real and  different:"<<std::endl;
		std::cout<<"root 1="<<root1<<std::endl;
		std::cout<<"root 2="<<root2<<std::endl;
	}
	else{
		double realpart=-b/(2*a);
		double imaginarypart=std::sqrt(-discriminant)/(2*a);
		std::cout<<"roots are complex and different:"<<std::endl;
		std::cout<<"root 1="<<realpart<<"+"<<imaginarypart<<"i"<<std::endl;
		std::cout<<"root 1="<<realpart<<"-"<<imaginarypart<<"i"<<std::endl;        
	}
}
int main(){
	double a,b,c;
	std::cout<<"enter coefficients a,b,and c for the quadratic equation(ax^2+bx+c=0):"<<std::endl;
	std::cout<<"enter a:";
	std::cin>>a;
	std::cout<<"enter b:";
	std::cin>>b;
	std::cout<<"enter c:";
	std::cin>>c;
	findquadraticroots(a,b,c);
	return 0;
}
