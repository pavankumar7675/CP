void checkStrings() {
    int len1, len2, countA1 = 0, countA2 = 0, countB1 = 0, countB2 = 0;
    string str1, str2;
    
    cin >> len1 >> len2;
    cin >> str1 >> str2;
    
    for (int i = 0; i < len1; i++) {
        if (str1[i] == 'a') {
            countA1++;
        }
    }
    for (int i = 0; i < len2; i++) {
        if (str2[i] == 'a') {
            countA2++;
        }
    }
    
    if (countA1 != countA2) {
        cout << "No\n";
        return;
    }
    
    for (int i = 0; i < len1; i++) {
        if (str1[i] != 'b') {
            break;
        } else {
            countB1++;
        }
    }
    for (int i = 0; i < len2; i++) {
        if (str2[i] != 'b') {
            break;
        } else {
            countB2++;
        }
    }
    
    if (countB1 != countB2) {
        cout << "No\n";
        return;
    }
    
    cout << "Yes\n";
}
