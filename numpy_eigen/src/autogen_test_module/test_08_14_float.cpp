#include <Eigen/Core>

#include <numpy_eigen/boost_python_headers.hpp>
Eigen::Matrix<float, 8, 14> test_float_08_14(const Eigen::Matrix<float, 8, 14> & M)
{
	return M;
}
void export_float_08_14()
{
	boost::python::def("test_float_08_14",test_float_08_14);
}

