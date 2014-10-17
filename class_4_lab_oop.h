struct All
{
	char* firm;
	char* model;
	int prise;
	int inShop;
	int* ArrayOfNumbers;
	int ArraySize;
};

class good
{
	char* firm;
	char* model;
	int prise;
	int inShop;
	int *ArrayOfNumbers;
	int ArraySize;
public:
	good();
	good(char*, char*, int, int, int*, int);
	good(good &);
	good(struct All);
	~good();
	void set_firm(char*);
	void set_model(char*);
	void set_model(int); 
	void set_prise(int);
	void set_inShop(int);
	void set_ArrayOfNumbers(int*);
	void set_ArraySize(int);
	void set(char*, char*, int, int, int*, int);
	char* get_firm();
	char* get_model();
	int get_prise();
	int get_inShop();
	int* get_ArrayOfNumbers();
	int get_ArraySize();
	void showClass();
	good &operator = (good &);
	good &operator = (char*);
	good operator ++ ();
	int operator + ();
	int &operator [](int); 
	good operator --(int);
	good operator -();
	friend good operator ++(good &, int);
	void* operator new[](size_t, int);
	friend void* operator new(size_t);
	void operator delete(void*);
	friend void operator delete[](void*);
	operator int();
	operator char*();
	friend ostream& operator<<(ostream&, good& );
};