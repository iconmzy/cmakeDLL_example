#ifndef MYLIB_H
#define MYLIB_H

#ifdef MYLIB_EXPORTS
#define MYLIB_API __declspec(dllexport)
#else
#define MYLIB_API __declspec(dllimport)
#endif

extern "C" {
    MYLIB_API void hello();
}

#endif // MYLIB_H
