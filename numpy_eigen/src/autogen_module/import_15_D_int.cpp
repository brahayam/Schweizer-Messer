// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_15_D_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 15, Eigen::Dynamic > >::register_converter();
}

