#include <iostream>
#include <cmath>

using namespace std;

float P1(float a); //���������� ���������� � ��������
float P2(float a, float b);
float P3(float a, float b, float c, float d);
float S1(float a);
float S2(float a, float b);
float S3(float a, float b, float h);

int main()

{

    float pi = 3.14;
    float a;
    float b,c,d,h;

      cout << "������� ��������" << endl; //������ ������� �������� (�)
      cin >> a;
      cout << "������� �������� = " << S1(a) << "; �������� �������� = " << P1(a) << endl; //������� �������� = (��. ���. 53-56); �������� �������� = (��. ���. 41-44) � ��� ����� �������������� ������� ������� ��� ������ ������
      cout << "������� ������" << endl;
      cin >> a;
      cout << "������� ����� = " << S2(pi,a) << "; �������� ����� = " << P2(a,pi) << endl;
      cout << "������� ������� ��������" << endl;
      cout << "a:";
      cin >> a;
      cout << "b:";
      cin >> b;
      cout << "c:";
      cin >> c;
      cout << "d:";
      cin >> d;
      cout << "h:";
      cin >> h;
      cout << "������� �������� = " << S3(a,b,h) << "; �������� �������� = " << P3(a,b,c,d) << endl;
}

float P1(float a)
{
return 4*a;
}
float P2(float a, float pi)
{
return 2*a*pi;
}
float P3(float a, float b, float c, float d)
{
return a+b+c+d;
}
float S1(float a)
{
return a*a;
}
float S2(float pi, float b)
{
return pi*b*b;
}
float S3(float a, float b, float h)
{
return ((a+b)/2)*h;
}