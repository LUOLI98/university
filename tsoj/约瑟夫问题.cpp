/*
这题采用了动态链表
指针不通的就别看了吧···· 
*/
#include<iostream>
using namespace std;

struct CHINE{
	struct CHINE *next;
	int NO;
};

int main(){
	CHINE *p1,*p2,*head;
	int m,n,t;
	while(cin>>n>>m){
		p1=new CHINE;
		p1->NO=1;
		for (int i=2;i<=n;i++){
			p2=new CHINE;
			p2->NO=i;
			if (i==2) {
				p1->next=p2;
				head=p1;
			}
			else{
				p1->next=p2;
			}
			p1=p2;
		}
		p2->next=head;
		/*p1=head;
		while (p1->NO<n) {
			cout<<p1->NO;
			p1=p1->next;
		}
		*/
		p1=head;
		p2=p1;
		t=1;
		while (n>0){
			if (t==m){
				if (n==1) cout<<p1->NO<<endl;
				else cout<<p1->NO<<" ";
				p2->next=p1->next;
				delete p1;
				p1=p2->next;
				n--;
				t=1;
			}
			else {
				t++;
				p2=p1;
				p1=p1->next;
			}
		}
	} 
	return 0;
}
