/*
  matrix.c
  Ruby/GSL: Ruby extension library for GSL (GNU Scientific Library)
    (C) Copyright 2001-2006 by Yoshiki Tsunesada

  Ruby/GSL is free software: you can redistribute it and/or modify it
  under the terms of the GNU General Public License.
  This library is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY.
*/

/*
  This code uses "templates_on.h" and "templates_off.h",
  which are provided by the GSL source.
 */

#include "include/rb_gsl_array.h"
#include "include/rb_gsl_histogram.h"
#include "include/rb_gsl_complex.h"
#include "include/rb_gsl_poly.h"
#include "include/rb_gsl_narray_nmatrix.h"

int gsl_linalg_matmult_int(const gsl_matrix_int *A,
                           const gsl_matrix_int *B, gsl_matrix_int *C);

#define BASE_DOUBLE
#include "include/templates_on.h"
#include "matrix_source.c"
#include "include/templates_off.h"
#undef  BASE_DOUBLE

#define BASE_INT
#include "include/templates_on.h"
#include "matrix_source.c"
#include "include/templates_off.h"
#undef  BASE_INT
