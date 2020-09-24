MyStack <int> m(10,0);
m.peek();
m.push(10);
m.push(20);
m.push(30);
m.push(40);
m.pop();
m.peek();
bool j,k;
j=m.isEmpty();
k=m.isFull();
if(j==true){cout<<"underflow";}
else{cout<<"No underflow";}
if(k==true){cout<<"stack overflow";}
else(cout<<"No stack overflow";)
