// This file automatically generated by create_export_module.py
#include <NumpyEigenConverter.hpp>


void import_D_15_double()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< double, Eigen::Dynamic, 15 > >::register_converter();
}

