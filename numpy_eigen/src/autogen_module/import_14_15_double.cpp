// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_14_15_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, 14, 15 > >::register_converter();
}

