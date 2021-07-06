#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

double Suma (float a, float b){
  result = a+b;
  return result;
}

double Resta (float a, float b){
  result = a-b;
  return result;
}

double Mult (float a, float b){
  result = a*b;
  return result;
}

double Div (float a, float b){
  result = a/b;
  return result;
}

void main() {
  float a, b;
  char op;
  double result;

  cout<<"Ingrese primer numero: ";
  cin>>n1;
  cout<<"Ingrese segundo numero: ";
  cin>>n2;
  cout<<"Ingrese operacion que gusta realizar (+,-,*,/): ";
  cin>>op;
  switch(op){case '+': double Suma(a, b); break;
             case '-': double Resta(a, b); break;
             case '*': double Mult(a, b); break;
             case '/': double Div(a, b); break;
             default: cout<<"Operador no definido";
             exit(1);
             }
  cout<<"El resultado es: "<<result;
  }
}
