/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(quadrature_demod_cf.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(9487660011983c19714d4fb1d05ee929)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/analog/quadrature_demod_cf.h>
// pydoc.h is automatically generated in the build directory
#include <quadrature_demod_cf_pydoc.h>

void bind_quadrature_demod_cf(py::module& m)
{

    using quadrature_demod_cf = ::gr::analog::quadrature_demod_cf;


    py::class_<quadrature_demod_cf,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<quadrature_demod_cf>>(
        m, "quadrature_demod_cf", D(quadrature_demod_cf))

        .def(py::init(&quadrature_demod_cf::make),
             py::arg("gain"),
             D(quadrature_demod_cf, make))


        .def("set_gain",
             &quadrature_demod_cf::set_gain,
             py::arg("gain"),
             D(quadrature_demod_cf, set_gain))


        .def("gain", &quadrature_demod_cf::gain, D(quadrature_demod_cf, gain))

        ;
}