#include <vector>
#include <iostream>

int main()
{
    std::vector<int> scores;

    scores.resize(30);

    scores[0]=77;
    scores[1]=99;
    scores[2]=68;

    int size = scores.size();
    for(int i = 0; i<scores.size(); i++)
    {
        std::cout << "score " << i << ": " << scores[i] << std::endl;
    }


}