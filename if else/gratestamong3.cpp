

int main() {
    string job;
    int salary;

    cout << "Are you employed? (yes/no): ";
    cin >> job;

    if (job == "yes" || job == "YES" || job == "Yes") {

        cout << "Enter your monthly salary: ";
        cin >> salary;

        if (salary >= 20000)
            cout << "You are eligible for a bank loan.";
        else
            cout << "You are employed but salary is too low for loan.";
        
    } else {
        cout << "You are not employed. Loan not approved.";
    }

    return 0;
}












