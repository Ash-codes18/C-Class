int marks_summation(int marks[], int number_of_students, char gender) {
    int sum = 0;
    if (gender == 'b') {
        // sum the marks of boys
        for (int i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    } else {
        // sum the marks of girls
        for (int i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }
    return sum;
}