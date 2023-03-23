int start = n, end = n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=end;j++){
                if(j>=start && j<=end)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
            start--;
            end++;
        }