#include <iostream>

using namespace std;

int main(){
	int num = 0;
	for(int i = 0; i < 1000; ++i){
		char a[1000];
		char temp = cin.get();
        //cout << (int) temp << endl;
		if((int)temp == 32 || temp == '\n'){
			//cout << "haha" << endl;
			for(int j = num-1 ;j >= 0; --j)
			{
				//cout << num << endl;
				cout << a[j];
			}
			cout << " " ;
			num = 0;
		}
		else{
			a[num] = temp;
			num++;
		}
		if(temp == '\n')
            break;
	}
	//cout << "end" << endl;
	return 0;
}
