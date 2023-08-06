#include <iostream>
#include <fstream>
#include <string>

void solve()
{
	std::ifstream myfile;
	myfile.open("input.txt");
	if(myfile.is_open())
	{
		int totalProblems{};
		int numLines{};
		std::string line{};
		std::getline(myfile, line);
		numLines = (int)line[0];

		while(std::getline(myfile, line)){
			int lineTotal{};
			for(auto &ch: line){
				if(ch != ' '){
					lineTotal += (ch - '0');
				}
			}

			if(lineTotal >= 2){
				totalProblems +=1;
			}
		}

		std::cout << totalProblems;
	}	
}

int main()
{
	solve();

	return 0;

}
