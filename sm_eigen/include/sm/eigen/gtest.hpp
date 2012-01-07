/**
 * @file   gtest.hpp
 * @author Paul Furgale <paul.furgale@gmail.com>
 * @date   Mon Dec 12 11:54:20 2011
 * 
 * @brief  Code to simplify Eigen integration into GTest. Pretty basic but the error messages are good.
 * 
 * 
 */
#ifndef SM_EIGEN_GTEST_HPP
#define SM_EIGEN_GTEST_HPP

#include <gtest/gtest.h>
#include <sm/source_file_pos.hpp>


namespace sm { namespace eigen {

    template<typename M1, typename M2>
    void assertEqual(const M1 & A, const M2 & B, sm::source_file_pos const & sfp, std::string const & message = "")
    {
      ASSERT_EQ(A.rows(),B.rows()) << message << "\nMatrix A:\n" << A << "\nand matrix B\n" << B << "\nare not the same\n" << sfp;
      ASSERT_EQ(A.cols(),B.cols()) << message << "\nMatrix A:\n" << A << "\nand matrix B\n" << B << "\nare not the same\n" << sfp;

      for(int r = 0; r < A.rows(); r++)
	{
	  for(int c = 0; c < A.cols(); c++)
	    {
	      ASSERT_EQ(A(r,c),B(r,c)) << message << "\nEquality comparison failed at (" << r << "," << c << ")\n" << sfp
                                       << "\nMatrix A:\n" << A << "\nand matrix B\n" << B; 
	    }
	}
    }


    template<typename M1, typename M2, typename T>
    void assertNear(const M1 & A, const M2 & B, T tolerance, sm::source_file_pos const & sfp, std::string const & message = "")
    {
      ASSERT_EQ(A.rows(),B.rows()) << message << "\nMatrix A:\n" << A << "\nand matrix B\n" << B << "\nare not the same\n" << sfp;
      ASSERT_EQ(A.cols(),B.cols()) << message << "\nMatrix A:\n" << A << "\nand matrix B\n" << B << "\nare not the same\n" << sfp;

      for(int r = 0; r < A.rows(); r++)
	{
	  for(int c = 0; c < A.cols(); c++)
	    {
	      ASSERT_NEAR(A(r,c),B(r,c),tolerance) << message << "\nTolerance comparison failed at (" << r << "," << c << ")\n" << sfp
						   << "\nMatrix A:\n" << A << "\nand matrix B\n" << B; 
	    }
	}
    }

    template<typename M1, typename M2, typename T>
    void expectNear(const M1 & A, const M2 & B, T tolerance, sm::source_file_pos const & sfp, std::string const & message = "")
    {
      EXPECT_EQ(A.rows(),B.rows()) << message << "\nMatrix A:\n" << A << "\nand matrix B\n" << B << "\nare not the same\n" << sfp;
      EXPECT_EQ(A.cols(),B.cols()) << message << "\nMatrix A:\n" << A << "\nand matrix B\n" << B << "\nare not the same\n" << sfp;

      for(int r = 0; r < A.rows(); r++)
        {
          for(int c = 0; c < A.cols(); c++)
            {
              EXPECT_NEAR(A(r,c),B(r,c),tolerance) << message << "\nTolerance comparison failed at (" << r << "," << c << ")\n" << sfp
						   << "\nMatrix A:\n" << A << "\nand matrix B\n" << B;
            }
        }
    }

}} // namespace sm::eigen

#endif /* SM_EIGEN_GTEST_HPP */