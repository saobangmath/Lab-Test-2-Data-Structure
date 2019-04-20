void createTable(char lookupTable[26][26]);
void printTable(char lookupTable[26][26]);
void encrypt(char lookupTable[26][26], char keyword[20],
char *plaintext, char *ciphertext);
void decrypt(char lookupTable[26][26], char keyword[20],
char *plaintext, char *ciphertext);
int main()
{
 int choice;
 char keyword[20];
 char table[26][26];
 char plaintext[80], ciphertext[80];
 printf("ENCRYPTION PROGRAM \n");
 printf("1: createTable()\n");
 printf("2: printTable()\n");
 printf("3: enter a new keyword\n");
 printf("4: encrypt() a plaintext message \n");
 printf("5: decrypt() a ciphertext message \n");
 printf("6: quit \n");
 do {
     printf("Enter your choice: \n");
     scanf("%d", &choice);
     switch(choice) {
     case 1:
         createTable(table);
         printf("createTable() done \n");
         break;
     case 2:
         printf("printTable(): \n");
         createTable(table);
         printTable(table);
         break;
     case 3:
         printf("Enter a new keyword: \n");
         scanf("%s", keyword);
         break;
     case 4:
         printf("Enter a plaintext: \n");
         scanf("%s", plaintext);
         encrypt(table, keyword, plaintext, ciphertext);
         printf("plaintext: %s\n", plaintext);
         printf("ciphertext: %s\n", ciphertext);
         break;
     case 5:
         printf("Enter a ciphertext: \n");
         scanf("%s", ciphertext);
         decrypt(table, keyword, plaintext, ciphertext);
         printf("ciphertext: %s\n", ciphertext);
         printf("plaintext: %s\n", plaintext);
         break;
     default:
     break;
     }
     } while (choice < 6);
     return 0;
}
void printTable(char lookupTable[26][26])
{
    int row, col;
    char c='a';

    printf(" ");printf(" ");
     for (row = 0; row < 26; ++row) {
     printf("%c ",c); c=c+1;
     }
     printf("\n");
     c='a';
     for (row = 0; row < 26; ++row) {
         printf("%c ",c); c=c+1;
         for (col = 0; col < 26; ++col) {
         printf("%c ", lookupTable[row][col]);
         }
     printf("\n");
     }
}
void createTable(char lookupTable[26][26])
{
 /* Write your code here */
    static char *upper="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 int row,column;
 for (row=0;row<26;row++){
    for (column=0;column<26;column++){
        lookupTable[row][column]=*(upper+(row+column)%26);
    }
 }
}
void encrypt(char lookupTable[26][26], char keyword[20], char
*plaintext, char *ciphertext)
{
 /* Write your code here */
 int  i=0;
 int len=strlen(keyword);
 while (*(plaintext+i)!='\0'){
    *(ciphertext+i)=lookupTable[*(keyword+i%len)-'a'][*(plaintext+i)-'a'];
    i++;
 }

}
void decrypt(char lookupTable[26][26], char keyword[20], char
*plaintext, char *ciphertext)
{
 /* Write your code here */
 int i=0;
 static char *lower="abcdefghijklmnopqrstuvwxyz";
 int len=strlen(keyword);
 while (*(ciphertext+i)!='\0'){
    int column;
    for (column=0;column<26;column++){
        if (*(ciphertext+i)==lookupTable[*(keyword+i%len)-'a'][column]){
            *(plaintext+i)='a'+(column);
            break;
        }
    }
    i++;

    }*(plaintext+i)='\0';
}
