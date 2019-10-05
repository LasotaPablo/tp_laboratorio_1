#define CANT_EMPLEADOS 1000
#define CANT_CARAC 49
#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1

struct eEmpleados
{
    int id;
    char nombre[51];
    char apellido[51];
    float sueldo;
    int sector;
    int status;
};

int initEmpleados(struct eEmpleados* aArray,int cantidad);
int altaEmpleadosID(struct eEmpleados *aArray, int cantidad, struct eEmpleados item);
int buscarLugarLibreEmpleados(struct eEmpleados *aArray, int cantidad);
int altaEmpleados(struct eEmpleados *aArray,int len);
int modificarEmpleadosID(struct eEmpleados *aArray, int cantidad, struct eEmpleados item);
int buscarEmpleadosID(struct eEmpleados *aArray, int cantidad, int id);
int modificarEmpleados(struct eEmpleados *aArray, int cantidad,int ID);
int imprimirEmpleados(struct eEmpleados *aArray, int cantidad);
int bajaEmpleadoID(struct eEmpleados *aArray, int cantidad,int id);
int bajaEmpleado(struct eEmpleados *aArray, int cantidad, int ID);
int ordenarEmpleados(struct eEmpleados *aArray, int cantidad);
