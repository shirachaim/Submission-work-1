#include<iostream>

using namespace std;

const int N = 3; // נגדיר את גודל המטריצות כ-3, אפשר לשנות לגודל שונה

// פונקציה להדפסת מטריצה
void printMatrix(int mat[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

// פונקציה לחיבור של שתי מטריצות
void addMatrices(int mat1[N][N], int mat2[N][N], int result[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// פונקציה לכפל של שתי מטריצות
void multiplyMatrices(int mat1[N][N], int mat2[N][N], int result[N][N]) {
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            result[i][j] = 0;
            for(int k = 0; k < N; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int sum[N][N];
    int product[N][N];

    cout << "Matrix 1:" << endl;
    printMatrix(mat1);
    cout << endl;

    cout << "Matrix 2:" << endl;
    printMatrix(mat2);
    cout << endl;

    // חיבור של שתי מטריצות
    addMatrices(mat1, mat2, sum);
    cout << "Sum of the matrices:" << endl;
    printMatrix(sum);
    cout << endl;

    // כפל של שתי מטריצות
    multiplyMatrices(mat1, mat2, product);
    cout << "Product of the matrices:" << endl;
    printMatrix(product);

    return 0;
}
/*
 איך האלגוריתם לכפל מטריצות מתבטא בקוד


נמצא צורה להגדרת המטריצות שלנו לשאלות - במקרה זה, המטריצות מוגדרות בקוד כמערך דו-מדי בעל גודל N x N
 הפונקציה multiplyMatricesמקבלת שלושה פרמטרים: שתי מטריצות (mat1 ו-mat2) שנרצה לכפול
זו בזו, ומטריצה ריקה  שתכיל את התוצאה
בתוך פונקציה יש לנו שלושה לולאות קוננות. הלולאה החיצונה (i) מסמלת את השורות של מטריצה התוצאה.

הלולאה הפנימית הראשונה (j) מסמלת את העמודות של מטריצה התוצאה.

הלולאה הפנימית השנייה (k) מתרוצת על השורות של mat1 ועל העמודות של mat2. בכל איטרציה, אנו מחשבים את המכפלה של המתאים בשני המטריצות ומציבים את התוצאה בתא המתאים במטריצה התוצאה.

לאחר יום הלולאות המקוננות, תוצאת המטריצה תכיל את תוצאת הכפל של mat1 ו-mat2.

בסיום הפונקציה, התוצאה תוכנס לתוך המטריצה שהועברה כפרמטר לפונקציה.

לאחר יום, הפונקציה multiplyMatricesמבצעת את כל החישובים הדרושים כדי לחשב את מכפלת שתי מטריצות, ומחזירה את התוצאה כמטריצה חדשה.



 */