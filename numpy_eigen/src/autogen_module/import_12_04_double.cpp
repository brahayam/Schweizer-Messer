// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_12_04_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 12, 4 > >::register_converter();
}

