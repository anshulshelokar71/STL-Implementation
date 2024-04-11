typedef struct {
    char** data;
    size_t size;
    size_t capacity;
} Vector;


void Init_vector(Vector* vec);
void Vector_push_back(Vector* vec, const char* value);
void Vector_pop_back(Vector* vec);
const char* Vector_at(Vector* vec, size_t index);
int Vector_isempty(Vector* vec);
void Vector_free(Vector* vec);