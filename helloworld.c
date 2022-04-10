#include "Python.h"

void _say(void);

PyObject* say(PyObject* self, PyObject* args) {
    _say();
    return Py_BuildValue("");
}

static PyMethodDef methods[] = { 
    {"say", (PyCFunction)say, METH_VARARGS},
    {NULL}
};

static struct PyModuleDef module = {
    PyModuleDef_HEAD_INIT,
    "",
    "",
    -1,
    methods
};

PyMODINIT_FUNC PyInit_helloworld() {
    return PyModule_Create(&module);
}
