#include <iostream>
#include <cmath>
//define unary-,+,-,*,~(konjugacija),/,=,==,!=,!(modul),++,--
//x;  (1+i0);   y(5)=(5+i0);   z(2,3)=(2+i3);
using namespace std;
class Complex
{
    private:
    float x,y;

    public:
    Complex(float a=1,float b=0)
    {
        this->x=a;
        this->y=b;
    }    
    Complex(const Complex& orig)
    {
        this->x=orig.x;
        this->y=orig.y;
    }
    void print()
    {
        cout<<this->x;
        if(y>=0)
        cout<<"+i"<<this->y;
        else
        cout<<"-i"<<-this->y;
    }
    Complex operator=(Complex z)
    {
        this->x=z.x;
        this->y=z.y;
        return *this;
    }
    bool operator==(Complex z)
    {
        if(this->x==z.x && this->y==z.y)return 1;
        else return 0;
    }
    bool operator!=(Complex z)
    {
        if(this->x==z.x && this->y==z.y)return 0;
        else return 1;
    }
    // Complex operator-(){
    //     Complex a(-this->x,-this->y);
    //     return a;
    // }
    Complex operator-(Complex a)
    {
        Complex z=*this;
        z.x-=a.x;
        z.y-=a.y;
        return z;
    }
    Complex operator+(Complex a)
    {
        Complex z=*this;
        z.x+=a.x;
        z.y+=a.y;
        return z;
    }
    Complex operator*(Complex a)
    {
        Complex z;
        z.x=this->x*a.x+this->y*a.y;
        z.y=this->x*a.y+this->y*a.x;
        return z;
    }
    Complex operator~()
    {
        Complex z(this->x,-this->y);
        return z;
        
    }
    Complex operator/(Complex a)
    {
        Complex z=*this;
        z.x/=a.x;
        z.y/=a.y;
        return z;
    }
    float operator!()
    {
        return sqrt(this->x*this->x+this->y*this->y);
    }


};
int main()
{
    Complex z;
    Complex x(1,1);
    Complex k(0,0);
    k=x-z;
    k.print();
    cout<<"\n";
    x.print();
    cout<<"\n";
    if(z!=x)
    z.print();
    Complex a(2,3);
    cout<<!a;

}
