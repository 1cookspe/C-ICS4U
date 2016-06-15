

#include <iostream>
#include <string>

int scores[] = {3, 6, 2, 4, 3, 3, 5, 4, 2, 1, 3, 4, 5, 3, 6, 2, 3, 4};

int totalScore() {
    int sum = 0;
    for (int i = 0; i < 18; i++) {
        sum += scores[i];
    }
    return sum;
}

int scoreOnHole(int hole) {
    return scores[hole];
}

int main(int argc, const char * argv[]) {
    std::cout << "Golf time!\n";
    std::cout << "Total score = " << totalScore() << "\n";
    std::cout << "Score on hole #13 = " << scoreOnHole(13);
    return 0;
    
    std::string name = "Bob";
}


