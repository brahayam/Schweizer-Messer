// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_14_04_int()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< int, 14, 4 > >::register_converter();
}

