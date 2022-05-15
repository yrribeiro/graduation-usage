#define TAM 11

typedef struct object {
    int id;
    int priority;
} object;
 
typedef struct fila {
    struct object *queue[TAM]; 
    int last;
} fila;

// mostra o menu
void handleMenu ();

// troca a prioridade do ID selecionado
void changeWeight (fila *q, int id, int priority);

// remove a raíz atual da fila
void dequeue(fila *novo);

// retorna o index do filho a esquerda
int getLeft (int i);

// retorna o index do filho a direita
int getRight (int i);

// adiciona um novo nó a fila
void enqueue(int id, int priority, fila *novo);

// retorna o index do nó pai
int indexPai(int ultimo);

// faz a troca dos valores entre dois nós
void trocaValores(object *a, object *b);

// inicializa os valores de uma nova fila
fila *start();

// função que printa a estrutura no terminal
void display(fila  *q, int i);

// verifica se não há inconsistências na max-heap
void buildHeap (fila *f, int sz);

fila * max_heapify (fila *f, int i);