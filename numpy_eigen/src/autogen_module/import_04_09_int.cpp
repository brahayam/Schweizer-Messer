// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_04_09_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 4, 9 > >::register_converter();
}

