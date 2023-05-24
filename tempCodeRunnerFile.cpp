    ofstream out("samplefile.txt");
    string name;
    cout<<"enter the name";
    cin>>name;

    out<< "My name is:"+ name;
    out.close();