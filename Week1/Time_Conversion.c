char* timeConversion(char* s) {
    if(s[8]=='P')
    {
        if(s[0]=='0'&&s[1]<'8')
        {
            s[1]=s[1]+2;
            s[0]='1';
        }
        else if(s[0]==0&&s[1]>=8)
        {
            s[1]=s[1]-8;
            s[0]='2';
        }else if(s[0]=='1'&&s[1]<'2')
        {
            s[1]=s[1]+2;
            s[0]='2';
        }
    }
    else if(s[8]=='A')
    {
        if(s[0]=='1'&&s[1]=='2')
        {
            s[0]='0';
            s[1]='0';
        }
    }
    s[8]='\0';
    s[9]='\0';
    return s;
}
