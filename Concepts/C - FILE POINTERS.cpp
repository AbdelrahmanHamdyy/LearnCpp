/* FILE POINTERS IN C

```1.fopen(<filename>, <operation>)
--> Opens a file
FILE* file_name = fopen("phonebook.txt", "(w) or (r) or (a)");

```2.fclose(<filepointer>)
--> Closes a file
fclose(file1);

```3.fgetc(<filepointer>)
--> Reads and returns the next character from the file pointed to
Note: The opertation of the file pointer passed in as argument for the fopen function must be "r"
char ch = fgetc(ptr);
We can use a loop to get all the characters of the file
char ch;
while((ch = fgetc(ptr)) != EOF) // EOF means END OF FILE
printf("%c", ch);

```4. fputc(<character>, <filepointer>)
--> Writes or appends the specified character to the pointed-to file
Note: The operation must be "w" or "a"
Example:
char ch;
while((ch = fgetc(ptr)) != EOF)
fputc(ch, ptr2);

```5. fread(<buffer>, <size>, <qty>, <filepointer>)
--> Reads <qty> units of size <size> from the file pointed to and stores them in memory
in a buffer (usually an array) pointed to be <buffer> // The name of an array is a pointer
Note: The operation must be "r"
Example:
int arr[10];
fread(arr, sizeof(int), 10, ptr); 
---------------------------------
or we can dynamically allocate memory from the heap
double* arr = malloc(sizeof(double) * 80);
fread(arr, sizeof(double), 80, ptr);
---------------------------------
We can also do it with characters
char c;
fread(&c, sizeof(char), 1, ptr);

```6.fwrite(<buffer>, <size>, <qty>, <filepointer>)
--> Writes <qty> units of size <size> to the file pointed to by reading them 
from a buffer (usually an array) pointed to be <buffer>
Note: The operation must be "a" or "w"
Example:
int arr[10];
fwrite(arr, sizeof(int), 10, ptr); // writing information from arr into the file pointer 

```7.fprintf(FILE *fptr, "%s %s",....) // stands for formatted print
--> Used to print output infile instead of the stdout console
fprintf(file, "%s,%s\n", name, number);

```8.sprintf(filename, "%03i.jpg", file_index++) // example
--> sprintf stands for “String print”. Instead of printing on console, it store output on char buffer which are specified in sprintf

```OTHER FUNCTIONS
1. fgets() - Reads a full string from a file 
2. fputs() - Writes a full string to a file
3. fprintf() - Writes formatted string to a file 
4. fseek() - Allows you to rewind or fastforward within a file
5. ftell() - Tells you at what byte(position) you are at within a file
6. feof() - Tells whether you have read to the end of the file 
7. ferror() - indicates whether an error has occured when working with the file 
8. fputw() - writes an integer to file
9. fgetw() - reads an integer from file
10.ftell() - returns current position
11.rewind() - sets the file pointer to the beginning of the file
12.fscanf(file, "%s", word)

*/
