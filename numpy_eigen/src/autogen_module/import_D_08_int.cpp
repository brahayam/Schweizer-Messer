// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_D_08_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, Eigen::Dynamic, 8 > >::register_converter();
}

