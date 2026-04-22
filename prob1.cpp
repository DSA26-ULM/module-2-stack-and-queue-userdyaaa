int main() {
    Stack s;
    init(&s); 
    
    string simbol;
    // Baca terus selama masih ada simbol yang diketik
    while (cin >> simbol) {
        if (simbol == "+" || simbol == "-" || simbol == "*" || simbol == "/") {
            int b = peek(&s); pop(&s);
            int a = peek(&s); pop(&s);
            
            if (simbol == "+") push(&s, a + b);
            else if (simbol == "-") push(&s, a - b);
            else if (simbol == "*") push(&s, a * b);
            else if (simbol == "/") push(&s, a / b);
        } else {
            push(&s, stoi(simbol));
        }
    }
    
    cout << peek(&s) << endl;
    return 0;
}
