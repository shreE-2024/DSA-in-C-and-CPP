#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Player {
    char pname[40];
    int jnum;
    int match;
    int run;
    int wicket;

public:
    Player() {
        strcpy(this->pname, "Not given");
        this->jnum = 0;
        this->match = 0;
        this->run = 0;
        this->wicket = 0;
    }

    Player(char* nm, int jnum, int m, int r, int w) {
        strcpy(this->pname, nm);
        this->jnum = jnum;
        this->match = m;
        this->run = r;
        this->wicket = w;
    }

    void setName(char* nm) {
        strcpy(this->pname, nm);
    }

    void setJnum(int j) {
        this->jnum = j;
    }

    void setMatch(int m) {
        this->match = m;
    }

    void setRun(int r) {
        this->run = r;
    }

    void setWicket(int w) {
        this->wicket = w;
    }

    char* getName() {
        return this->pname;
    }

    int getJnum() {
        return this->jnum;
    }

    int getMatch() {
        return this->match;
    }

    int getRun() {
        return this->run;
    }

    int getWicket() {
        return this->wicket;
    }

    void display() {
        cout << "\n\n--------------------------------------\n\n";
        cout << "Name of player : " << this->getName() ;
        cout << "Jersey Number  : " << this->getJnum() << endl;
        cout << "Matches        : " << this->getMatch() << endl;
        cout << "Runs           : " << this->getRun() << endl;
        cout << "Wickets        : " << this->getWicket() << endl;
    }

    void writeToFile(ofstream& outFile) {
        outFile << this->getName() << ","
                << this->getJnum() << ","
                << this->getMatch() << ","
                << this->getRun() << ","
                << this->getWicket() << endl;
    }

    void readFromFile(ifstream& inFile) {
        inFile.getline(this->pname, 40, ',');
        inFile >> this->jnum;
        inFile.ignore();
        inFile >> this->match;
        inFile.ignore();
        inFile >> this->run;
        inFile.ignore();
        inFile >> this->wicket;
        inFile.ignore();
    }
};

struct Node {
    Player player;
    Node* next;

    Node(Player p) {
        player = p;
        next = NULL;
    }
};

void displayPlayers(Node* head) {
    if (head == NULL) {
        cout << "\n\n \t List is Empty....\n";
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        temp->player.display();
        temp = temp->next;
    }
}

void addPlayer(Node*& head) {
    char nm[30];
    int e,j,m,r,w;
    cout << "\n\t\t How Many Players You want to add : ";
    cin >> e;
    //cin.ignore();

    for (int i = 0; i < e; i++) {
        cout << "\n\n\t\t\t Enter Player Name : ";
        fflush(stdin);
        fgets(nm, 30, stdin);
        cout << "\n\n\t\t\t Enter Player Jersey Number : ";
        cin >> j;
        cout << "\n\n\t\t\t How Many Matches He Played : ";
        cin >> m;
        cout << "\n\n\t\t\t How Many Runs He scored : ";
        cin >> r;
        cout << "\n\n\t\t\t How Many Wickets He Took : ";
        cin >> w;

        Player p(nm, j, m, r, w);
        Node* newNode = new Node(p);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }

        ofstream outFile("players.txt", ios::app);
        p.writeToFile(outFile);
        outFile.close();
    }
}

void removePlayer(Node*& head) {
    if (head == NULL) {
        cout << "\n\n \t List is Empty....\n";
        return;
    }
    char nm[30];
    cout << "\n\n\t\t\t Enter Player Name : ";
    cin.ignore();
    fgets(nm, 30, stdin);

    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL) {
        if (strcmp(temp->player.getName(), nm) == 0) {
            if (prev == NULL) {
                head = temp->next;
            } else {
                prev->next = temp->next;
            }
            delete temp;

            ofstream outFile("players.txt");
            Node* curr = head;
            while (curr != NULL) {
                curr->player.writeToFile(outFile);
                curr = curr->next;
            }
            outFile.close();

            cout << "\n\t\t Successfully Removed Player....\n";
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    cout << "\n\t\t Player not found....\n";
}

void searchPlayer(Node* head) {
    if (head == NULL) {
        cout << "\n\n \t List is Empty....\n";
        return;
    }
    char nm[30];
    cout << "\n\n\t\t\t Enter Player Name : ";
    cin.ignore();
    fgets(nm, 30, stdin);

    Node* temp = head;
    while (temp != NULL) {
        if (strcmp(temp->player.getName(), nm) == 0) {
            temp->player.display();
            return;
        }
        temp = temp->next;
    }

    cout << "\n\t\t Player not found....\n";
}

void updateInfo(Node* head) {
    if (head == NULL) {
        cout << "\n\n \t List is Empty....\n";
        return;
    }
    char nm[30];
    cout << "\n\n\t\t\t Enter Player Name : ";
    cin.ignore();
    fgets(nm, 30, stdin);

    Node* temp = head;
    while (temp != NULL) {
        if (strcmp(temp->player.getName(), nm) == 0) {
            char nam[30];
            int j, m, r, w;

            cout << "\n\n\t\t\t Enter New Player Name : ";
            fgets(nam, 30, stdin);
            temp->player.setName(nam);
            cout << "\n\n\t\t\t Enter New Player Jersey Number : ";
            cin >> j;
            temp->player.setJnum(j);
            cout << "\n\n\t\t\t How Many Matches He Played : ";
            cin >> m;
            temp->player.setMatch(m);
            cout << "\n\n\t\t\t How Many Runs He scored : ";
            cin >> r;
            temp->player.setRun(r);
            cout << "\n\n\t\t\t How Many Wickets He Took : ";
            cin >> w;
            temp->player.setWicket(w);

            ofstream outFile("players.txt");
            Node* curr = head;
            while (curr != NULL) {
                curr->player.writeToFile(outFile);
                curr = curr->next;
            }
            outFile.close();

            cout << "\n\t\t Successfully Updated Player Records....\n";
            return;
        }
        temp = temp->next;
    }

    cout << "\n\t\t Player not found....\n";
}

void loadPlayersFromFile(Node*& head) {
    ifstream inFile("players.txt");
    if (!inFile) {
        //cout << "\nError opening file!";
        return;
    }

    while (!inFile.eof()) {
        Player p;
        p.readFromFile(inFile);

        if (inFile) {
            Node* newNode = new Node(p);
            if (head == NULL) {
                head = newNode;
            } else {
                Node* temp = head;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }
    }
    inFile.close();
}

int main() {
    int ch = 0;
    Node* head = NULL;

    loadPlayersFromFile(head);

    do {
        cout << "\n\n___________________________________________________\n\n";
        cout << "\n\t Display        : 01";
        cout << "\n\t Add New Player : 02";
        cout << "\n\t Remove Player  : 03";
        cout << "\n\t Search Player  : 04";
        cout << "\n\t Update info    : 05";
        cout << "\n\t Exit           : 00";
        cout << "\n\n\t\t Enter your choice : ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "\n\n \t\t All Player Records....\n";
                displayPlayers(head);
                break;
            case 2:
                cout << "\n\n \t\t Add New Player Records....\n";
                addPlayer(head);
                break;
            case 3:
                cout << "\n\n \t\t Remove Player Records....\n";
                removePlayer(head);
                break;
            case 4:
                cout << "\n\n \t\t Search Player Records....\n";
                searchPlayer(head);
                break;
            case 5:
                cout << "\n\n \t\t Update Player Records....\n";
                updateInfo(head);
                break;
        }
    } while (ch != 0);

    cout << "\n\n\n \t\t THANK YOU....\n";
    return 0;
}

