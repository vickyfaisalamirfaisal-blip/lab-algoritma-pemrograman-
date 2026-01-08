#include <iostream>
using namespace std;
int main() {
string data[3][2] = {
{"Messi", "252310001"},
{"Julio", "252310021"},
{"Hama", "242310001"}
};
cout << "Nama\tNPM\n";
for (int i = 0; i < 3; i++) {
cout << data[i][0] << "\t" << data[i][1] << endl;
}
return 0;
}
