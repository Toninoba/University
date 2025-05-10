int main(){
    char* p = 0x20;
    
    *p = 'X';
    *(p+1) = 'X';
    ++p;
    
    int* r = (int*) &p[-12];
    p = (char*) (r+2);
    *p = 'X';
    *((char*) &r[-2]) = 'X';
    
    *++p='X';
    *p++='X';
    p[0] = 'X';
    
    double* f = (double*) &r[3];
    p = (char*) (f++);
    *--p = 'X';
    *((char*) &f[1]) = 'X';
}