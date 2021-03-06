#include <iostream>
#include <map>
#include <string>

using namespace std;
map<string, bool> twtState;
int main(){
	int n,k;
	int openCount = 0;
	scanf("%d %d", &n,&k);
	string input;
	
	// clear buffer
	cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

	while(k-- > 0){
		getline(cin,input);
		if(input == "CLOSEALL"){
			openCount = 0;
			twtState.clear();
		}else{
			if(twtState[input]){
				openCount--;
			}else{
				openCount++;
			}
			twtState[input] = !twtState[input];
		}
		printf("%d\n", openCount);
	}
	return 0;
}