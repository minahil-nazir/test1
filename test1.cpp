#include <iostream>
#include <string>
using namespace std;

class DNASample {
private:
    string patientname;
    int sampleID;
    string DNAsequence;
    static int totalSamples;

public:
    DNASample(string name, int id, string sequence) {
        patientname = name;
        sampleID = id;
        DNAsequence = sequence;
    }
    DNASample(const DNASample &D){
        patientname = D.patientname;
        sampleID = D.sampleID;
        DNAsequence = D.DNAsequence;
       
    }

    friend void checkDNAquality(DNASample obj);
    static void reportTotalSamples() {
        cout << "Total DNA Samples Created: "
             << totalSamples << endl;
    }
};

int DNASample::totalSamples = 0;
void checkDNAquality(DNASample d1) {
    int length = d1.DNAsequence.length();
    bool valid = true;

    for (int i = 0; i < length; i++) {
        if (d1.DNAsequence[i] != 'A' &&
            d1.DNAsequence[i] != 'T' &&
            d1.DNAsequence[i] != 'G' &&
            d1.DNAsequence[i] != 'C') {
            valid = false;
            break;
        }
    }

    cout << "DNA Length: " << length << endl;

    if (valid && length >= 6)
        cout << "Valid DNA Sample" << endl;
    else
        cout << "Invalid DNA Sample" << endl;
}

int main() {
    DNASample d1("Ali", 101, "ATGCGT");
    DNASample d2("Sara", 102, "ATGC");
    DNASample d3(d1);

    cout << "Checking DNA quality:" << endl;
    checkDNAquality(d1);
    checkDNAquality(d2);

    cout << "\n";
    DNASample::reportTotalSamples();

    return 0;
}
