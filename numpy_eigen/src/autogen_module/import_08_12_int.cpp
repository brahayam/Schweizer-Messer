// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_08_12_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 8, 12 > >::register_converter();
}

