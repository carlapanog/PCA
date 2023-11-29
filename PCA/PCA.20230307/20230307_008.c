void troca(float *a, float *b){
    float c;
    c = *a;
    *a = *b;
    *b = c;
}
    
int main(){
    float x = 11, y = 22;
    
    printf("valor a: %f e valor b: %f\n", x, y);
    
    troca(&x, &y);
    
    printf("apos a troca:\n");
    printf("valor a: %f e valor b: %f\n", x, y);
    
    return 0;
}
