#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string ten, truong;
    cout << "Nhap Ten Cua Ban: ";
    getline(cin, ten);
    cout << "Nhap Ten Truong Cua Ban: ";
    getline(cin, truong);

    ofstream htmlFile("profile.html");

    if (!htmlFile.is_open()) {
        cout << " Khong the tao tep profile.html ! " << endl;
        return 1;
    }
    htmlFile << "<html>\n";
    htmlFile << "<head>\n";
    htmlFile << "<title>Profile Cua Toi</title>\n";
    htmlFile << "<link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC\" crossorigin=\"anonymous\">";
    htmlFile << "<script src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.bundle.min.js\"integrity=\"sha384-MrcW6ZMFYlzcLA8Nl+NtUVF0sA7MsXsP1UyJoMp4YLEuNSfAP+JcXn/tWtIaxVXM\" crossorigin=\"anonymous\"></script>";
    htmlFile << "</head>\n";
    htmlFile << "<body style=\"background-image: url('test.jpg'); background-size: cover; background-repeat: no-repeat; display: flex; justify-content: center; align-items: center; height: 100vh; margin: 0;\">\n";
    htmlFile << "<div style=\"border: 1px solid black; padding: 10px; text-align: center; background-color: lightblue;\">\n";
	htmlFile << "<h1 style=\"color: red;\"> Hello !! My name is: " << ten << "</h1>\n";
	htmlFile << "<p style=\"font-weight: bold; font-size: 1.7em;\">" << truong << "</p>\n";
	htmlFile << "<small>Khoa CNTT 17-02</small>\n";
    htmlFile << "</div>\n";
    htmlFile << "</body>\n";
    htmlFile << "</html>\n";

    htmlFile.close();

    cout << "Tep tin profile.html da duoc tao thanh cong." << endl;

    return 0;
}
