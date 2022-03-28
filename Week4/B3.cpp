void printArrow(int n, bool left) {
    if(left==1) {
        for(int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= n - i; j++)
		{
            cout << " ";
        }
        for(int k = i; k <= n; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }	

    for(int i = 1; i < n; i++)
    {
    	for(int j = 0; j < i; j++)
		{
            cout << " ";
        }
        for(int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    }
    else {
        
	for(int i=0;i<n;i++){
		for(int j=2*i-1;j>=0;j--){
			cout<<" ";
		}
		for(int k=2*i;k<n+i;k++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	for(int i=n-2;i>=0;i--){
		for(int j=2*i-1;j>=0;j--){
			cout<<" ";
		}
		for(int k=i+1;k<=n;k++){
			cout<<"*";
		}cout<<"\n";
	
    }
        
}
}
