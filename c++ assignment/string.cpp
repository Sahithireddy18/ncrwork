#includ<stdio.h>
using namespace std;
class string
{
	char *name;
	int len;
	public:
	string()
	{
		name=NULL;
		len=0;
	}
	string(char *n)
	{
		len=strlen(n);
		name=(char*)malloc(sizeof(char)*(len+1);
		strcpy(name, n);
	}
	string(string &strObj)
	{
		tmpStr = strObj.getChars();
		str = new tmpStr[sizeof(tmpStr)];
		strcpy (str,tmpStr);
	}
	~string()
	{
		free []name;
	}
}
string &string::operator=(const string &s)
{
            string temp( s );
            std::swap( temp.str, str );
            return *this;
} 
string &string::operator+(string &s)
{
	string t1(s);
	stds
 

