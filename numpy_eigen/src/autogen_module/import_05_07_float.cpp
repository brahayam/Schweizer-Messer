// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_05_07_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 5, 7 > >::register_converter();
}

