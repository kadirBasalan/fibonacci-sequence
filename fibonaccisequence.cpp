#include <iostream.h>
#include <conio.h>

main()
{
 int f1=0,f2=1,f3,elemandegeri;

	cout<<"Lutfen sayi giriniz. "; cin>>elemandegeri;

	cout<<f1<<endl<<f2;

		for (int i = 2; i < elemandegeri; i++)
		{
		f3=f2+f1;
		cout<<endl<<f3;
		f1=f2;
		f2=f3;
		}
getch();
}
