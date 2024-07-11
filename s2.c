#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

void inputDetails(struct Student* s) {
    printf("Enter details of Student %d:\n", s->roll_no);
    printf("Roll no => %d\n", s->roll_no);
    printf("Name => ");
    scanf(" %[^\n]%*c", s->name);
    printf("Chemistry => ");
    scanf("%d", &s->chem_marks);
    printf("Mathematics => ");
    scanf("%d", &s->maths_marks);
    printf("Physics => ");
    scanf("%d", &s->phy_marks);
}

void displayDetails(struct Student s) {
    int total = s.chem_marks + s.maths_marks + s.phy_marks;
    float percentage = (total / 3.0);
    printf("%s (%d)\n", s.name, s.roll_no);
    printf("Chemistry => %d\n", s.chem_marks);
    printf("Mathematics => %d\n", s.maths_marks);
    printf("Physics => %d\n", s.phy_marks);
    printf("Total => %d/300\n", total);
    printf("Percent => %.2f%%\n\n", percentage);
}

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        students[i].roll_no = 121 + i;
        inputDetails(&students[i]);
    }

    printf("Output:\n");
    for (int i = 0; i < 5; i++) {
        displayDetails(students[i]);
    }

    return 0;
}
