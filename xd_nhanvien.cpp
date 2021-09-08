// xd lop nhan vien gom ht,cv,gt,qq, nvl ,ns & kiem tra no lam trong bao lau

#include <iostream>
using namespace std;
class nhanvien
{
	private:
		char ht[25],cv[15],gt[5],qq[30];int ns, nvl;
	public:
		friend istream &operator>>(istream &is, nhanvien &nv);
		friend ostream &operator>>(ostream &os, nhanvien nv);
		friend int ktra(nhanvien nv);
};
istream &operator>>(istream &is, nhanvien &nv)
{
	cout<<"ho ten: "; cin.ignore(1);cin.get(nv.ht,25);
	cout<<"chuc vu: "; cin.ignore(1);cin.get(nv.cv,15);
	cout<<"gioi tinh: "; cin.ignore(1);cin.get(nv.gt,5);
	cout<<"que quan: "; cin.ignore(1);cin.get(nv.qq,30);
	cout<<"nam sinh: ";is>>nv.ns;
	cout<<"nam vao lam: ";is>>nv.nvl;
}
ostream &operator>>(ostream &os, nhanvien nv)
{
	os<<"ho ten: "<<nv.ht<<"chuc vu: "<<nv.cv<<"gioi tinh: "<<nv.gt;
	os<<"que quan: "<<nv.qq<<"nam sinh: "<<nv.ns<<"nam vao lam: "<<nv.nvl<<endl;
}
int ktra(nhanvien nv)
{
	if (2021-nv.nvl>=20) return 1;
	else return 0;
}
main()
{
	nhanven nv[100]; int i,n;
	cout<<"nhap so nhan vien n= ";cin>>n;
	for (i=0;i<n;i++)
	{
		cout<<"nhap nhan vien thu "<<i<<": ";
		nv[i].nhap();
	}
	cout<<"ds nhan vien lam 20 nam tro len\n";
	for (i=0;i<n;i++)
	if (ktra(nv[i]))
	cout<<nv[i];
}
