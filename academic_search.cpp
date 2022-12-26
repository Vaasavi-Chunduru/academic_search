#include

#define ROW 5
#define COLUMN 5

using namespace std;

int main(int argc, char** argv) {

int marks[ROW][COLUMN];

cout<<"start entering the marks(5 per row): ";

//Line of code for entering the marks inside a 2-D array;
for(int i = 0; i < ROW; i++)
for(int j = 0; j >marks[i][j];

//Line of code to calculate the heightest marks;
int max = 0; // “max” variable that will store the heighest marks;

for(int i = 0; i < ROW; i++) {
for(int j = 0; j max)
max = marks[i][j];
}
}

cout<<"Heighest marks are: "<<max<<endl;

//Line of code to calculate the lowest marks;
int min = marks[0][0]; // "min" will be used to store lowest marks, it is initialized to first element of the 2-d array;

for(int i = 0; i < ROW; i++) {
for(int j = 0; j < COLUMN; j++) {
if(marks[i][j] < min)
min = marks[i][j];
}
}

cout<<"Minimum marks are: "<<min<<endl;

//Line of code to display average marks;
int sum = 0;

for(int i = 0; i < ROW; i++) {
for(int j = 0; j < COLUMN; j++) {
sum += marks[i][j];
}
}

cout<<"Average marks are: "<<sum / ROW*COLUMN<<endl;

//line of code to output all the marks in ascending order;
//For this we'll first have to convert it into a 2-d array;
//so let's convert it into a 2-d array;

int _1D_MARKS[ROW*COLUMN]; // "_1D_MARKS" array will be used to store 2-d arrays elements;
int k = 0;

for(int i = 0; i < ROW; i++) {
for(int j = 0; j < COLUMN; j++) {
_1D_MARKS[k++] = marks[i][j];
}
}

//Now lets sort the formed 1-d array in "ascending" order;

//We've used selection sort here…
for(int i = 0; i < k – 1; i ++) {
for(int j = i + 1; j < k; j ++) {

if(_1D_MARKS[i] < _1D_MARKS[j]) {
int temp = _1D_MARKS[i];
_1D_MARKS[i] = _1D_MARKS[j];
_1D_MARKS[j] = temp;
}

}
}

cout<<"Marks in ascending order: "<<endl;
for(int i = 0; i < k; i++)
cout<<_1D_MARKS[i]<<" ";
return 0;
}
