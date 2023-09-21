#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct node {
  int NIM;
  char name[20];
  char time[20];
  struct node *left;
  struct node *right;
} node_t;

node_t *create_new_node(int NIM, char *name, char *time) {
  node_t *new_node  = (node_t*) malloc(sizeof(node_t));
  new_node->NIM = NIM;
  strcpy(new_node->name, name);
  strcpy(new_node->time, time);
  new_node->left    = NULL;
  new_node->right   = NULL;
  return new_node;
}

//insert NIM to BST tree
 node_t *insert_new_node(node_t *node, int NIM,char *name, char *time) {
  if (node == NULL) return node = create_new_node(NIM, name, time);
  else if (NIM < node->NIM) node->left = insert_new_node(node->left, NIM, name, time);
  else node->right = insert_new_node(node->right, NIM, name, time);
  return node;
}

//find student ID
node_t *find_by_student_ID(node_t *node, int NIM) {
  if (node == NULL || node->NIM == NIM) return node;
  if (node->NIM > NIM) return find_by_student_ID(node->left, NIM);
  if (node->NIM < NIM) return find_by_student_ID(node->right, NIM);
  return node;
}
//print data
void print_in_order(node_t *node) {
  if (node == NULL) return;
  print_in_order(node->left);
  printf("Nama=%s\n  NIM= %d\n  Time=%s\n", node->name, node->NIM, node->time);
  print_in_order(node->right);
}

/* Get max node from left subtree */
node_t *max_left(node_t *node) {
  node_t *curr = node->left;
  while (curr != NULL && curr->left != NULL) {
    curr = curr->left;
  }
  return curr;
}

//Menu
void input_file_baru(node_t **tree) {
  puts("Input data siswa/siswi");
  char name[30];
  int NIM;
  time_t ltime;
  time(&ltime);
  printf("Nama siswa/siswi: "); scanf("%s", name); getchar();
  printf("NIM: "); scanf("%d", &NIM); getchar();
  *tree = insert_new_node(*tree, NIM, name, ctime(&ltime));
  puts("Selesai\n");
}

void cari_berdasarkan_NIM_ID(node_t *tree) {
  puts("Cari berdasarkan NIM");
  int NIM;
  printf("NIM siswa/siswi: "); scanf("%d", &NIM); getchar();
  node_t *res = find_by_student_ID(tree, NIM);
  if (res != NULL) printf("nama= %s\nNIM= %d\nTime= %s\n", res->name,  res->NIM, res->time);
  else puts("Tidak hadir");
  puts("Selesai\n");
}
int main() {
  node_t *tree = 0;

  int option = -1;
  while (option) {
    puts("1. Input data siswa/siswi");
    puts("2. tampilkan data siswa/siswi");
    puts("3. Cari berdasarkan NIM");
    puts("0. Exit");

    printf("Option: ");
    scanf("%d", &option); getchar();
    puts("");

    if (option == 1) input_file_baru(&tree);
    if (option == 2) print_in_order(tree);
    if (option == 3) cari_berdasarkan_NIM_ID(tree);

  }
    
  return 0;
}
