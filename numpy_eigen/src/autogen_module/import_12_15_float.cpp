// This file automatically generated by create_export_module.py
#include "../NumpyEigenConverter.hpp"


void import_12_15_float()
{
	// Without this import, the converter will segfault
	import_array();
	NumpyEigenConverter<Eigen::Matrix< float, 12, 15 > >::register_converter();
}
