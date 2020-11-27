void popHead();
void popAll();
long DateNumber(int, int, int);
struct data *createNode(int, int, int, char*);

struct data {
	int date, month, year;
	char name[255];
	struct data *next, *prev;
}*head, *tail, *temp;

