#include <gtest/gtest.h>

#include <nnpack/fp16.h>
#include <fp16/values.h>


TEST(IEEE_FP16_BITS, normalized_powers_of_2) {
	const uint16_t min_po2_f16   = UINT16_C(0x0400);
	const uint16_t eighths_f16   = UINT16_C(0x3000);
	const uint16_t quarter_f16   = UINT16_C(0x3400);
	const uint16_t half_f16      = UINT16_C(0x3800);
	const uint16_t one_f16       = UINT16_C(0x3C00);
	const uint16_t two_f16       = UINT16_C(0x4000);
	const uint16_t four_f16      = UINT16_C(0x4400);
	const uint16_t eight_f16     = UINT16_C(0x4800);
	const uint16_t sixteen_f16   = UINT16_C(0x4C00);
	const uint16_t thirtytwo_f16 = UINT16_C(0x5000);
	const uint16_t sixtyfour_f16 = UINT16_C(0x5400);
	const uint16_t max_po2_f16   = UINT16_C(0x7800);

	const uint32_t min_po2_f32   = UINT32_C(0x38800000);
	const uint32_t eighths_f32   = UINT32_C(0x3E000000);
	const uint32_t quarter_f32   = UINT32_C(0x3E800000);
	const uint32_t half_f32      = UINT32_C(0x3F000000);
	const uint32_t one_f32       = UINT32_C(0x3F800000);
	const uint32_t two_f32       = UINT32_C(0x40000000);
	const uint32_t four_f32      = UINT32_C(0x40800000);
	const uint32_t eight_f32     = UINT32_C(0x41000000);
	const uint32_t sixteen_f32   = UINT32_C(0x41800000);
	const uint32_t thirtytwo_f32 = UINT32_C(0x42000000);
	const uint32_t sixtyfour_f32 = UINT32_C(0x42800000);
	const uint32_t max_po2_f32   = UINT32_C(0x47000000);

	EXPECT_EQ(min_po2_f32, fp16b_to_fp32b_ieee(min_po2_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << min_po2_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(min_po2_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << min_po2_f32;

	EXPECT_EQ(eighths_f32, fp16b_to_fp32b_ieee(eighths_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << eighths_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(eighths_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << eighths_f32;

	EXPECT_EQ(quarter_f32, fp16b_to_fp32b_ieee(quarter_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << quarter_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(quarter_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << quarter_f32;

	EXPECT_EQ(half_f32, fp16b_to_fp32b_ieee(half_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << half_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(half_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << half_f32;

	EXPECT_EQ(one_f32, fp16b_to_fp32b_ieee(one_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << one_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(one_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << one_f32;

	EXPECT_EQ(two_f32, fp16b_to_fp32b_ieee(two_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << two_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(two_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << two_f32;

	EXPECT_EQ(four_f32, fp16b_to_fp32b_ieee(four_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << four_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(four_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << four_f32;

	EXPECT_EQ(eight_f32, fp16b_to_fp32b_ieee(eight_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << eight_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(eight_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << eight_f32;

	EXPECT_EQ(sixteen_f32, fp16b_to_fp32b_ieee(sixteen_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << sixteen_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(sixteen_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << sixteen_f32;

	EXPECT_EQ(thirtytwo_f32, fp16b_to_fp32b_ieee(thirtytwo_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << thirtytwo_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(thirtytwo_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << thirtytwo_f32;

	EXPECT_EQ(sixtyfour_f32, fp16b_to_fp32b_ieee(sixtyfour_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << sixtyfour_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(sixtyfour_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << sixtyfour_f32;

	EXPECT_EQ(max_po2_f32, fp16b_to_fp32b_ieee(max_po2_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << max_po2_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(max_po2_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << max_po2_f32;
}

TEST(IEEE_FP16_BITS, denormalized_powers_of_2) {
	const uint16_t exp2_minus_15_f16 = UINT16_C(0x0200);
	const uint16_t exp2_minus_16_f16 = UINT16_C(0x0100);
	const uint16_t exp2_minus_17_f16 = UINT16_C(0x0080);
	const uint16_t exp2_minus_18_f16 = UINT16_C(0x0040);
	const uint16_t exp2_minus_19_f16 = UINT16_C(0x0020);
	const uint16_t exp2_minus_20_f16 = UINT16_C(0x0010);
	const uint16_t exp2_minus_21_f16 = UINT16_C(0x0008);
	const uint16_t exp2_minus_22_f16 = UINT16_C(0x0004);
	const uint16_t exp2_minus_23_f16 = UINT16_C(0x0002);
	const uint16_t exp2_minus_24_f16 = UINT16_C(0x0001);

	const uint32_t exp2_minus_15_f32 = UINT32_C(0x38000000);
	const uint32_t exp2_minus_16_f32 = UINT32_C(0x37800000);
	const uint32_t exp2_minus_17_f32 = UINT32_C(0x37000000);
	const uint32_t exp2_minus_18_f32 = UINT32_C(0x36800000);
	const uint32_t exp2_minus_19_f32 = UINT32_C(0x36000000);
	const uint32_t exp2_minus_20_f32 = UINT32_C(0x35800000);
	const uint32_t exp2_minus_21_f32 = UINT32_C(0x35000000);
	const uint32_t exp2_minus_22_f32 = UINT32_C(0x34800000);
	const uint32_t exp2_minus_23_f32 = UINT32_C(0x34000000);
	const uint32_t exp2_minus_24_f32 = UINT32_C(0x33800000);

	EXPECT_EQ(exp2_minus_15_f32, fp16b_to_fp32b_ieee(exp2_minus_15_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << exp2_minus_15_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(exp2_minus_15_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << exp2_minus_15_f32;

	EXPECT_EQ(exp2_minus_16_f32, fp16b_to_fp32b_ieee(exp2_minus_16_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << exp2_minus_16_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(exp2_minus_16_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << exp2_minus_16_f32;

	EXPECT_EQ(exp2_minus_17_f32, fp16b_to_fp32b_ieee(exp2_minus_17_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << exp2_minus_17_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(exp2_minus_17_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << exp2_minus_17_f32;

	EXPECT_EQ(exp2_minus_18_f32, fp16b_to_fp32b_ieee(exp2_minus_18_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << exp2_minus_18_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(exp2_minus_18_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << exp2_minus_18_f32;

	EXPECT_EQ(exp2_minus_19_f32, fp16b_to_fp32b_ieee(exp2_minus_19_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << exp2_minus_19_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(exp2_minus_19_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << exp2_minus_19_f32;

	EXPECT_EQ(exp2_minus_20_f32, fp16b_to_fp32b_ieee(exp2_minus_20_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << exp2_minus_20_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(exp2_minus_20_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << exp2_minus_20_f32;

	EXPECT_EQ(exp2_minus_21_f32, fp16b_to_fp32b_ieee(exp2_minus_21_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << exp2_minus_21_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(exp2_minus_21_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << exp2_minus_21_f32;

	EXPECT_EQ(exp2_minus_22_f32, fp16b_to_fp32b_ieee(exp2_minus_22_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << exp2_minus_22_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(exp2_minus_22_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << exp2_minus_22_f32;

	EXPECT_EQ(exp2_minus_23_f32, fp16b_to_fp32b_ieee(exp2_minus_23_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << exp2_minus_23_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(exp2_minus_23_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << exp2_minus_23_f32;

	EXPECT_EQ(exp2_minus_24_f32, fp16b_to_fp32b_ieee(exp2_minus_24_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << exp2_minus_24_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(exp2_minus_24_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << exp2_minus_24_f32;
}

TEST(IEEE_FP16_BITS, zero) {
	const uint16_t positive_zero_f16 = UINT16_C(0x0000);
	const uint16_t negative_zero_f16 = UINT16_C(0x8000);

	const uint32_t positive_zero_f32 = UINT32_C(0x00000000);
	const uint32_t negative_zero_f32 = UINT32_C(0x80000000);

	EXPECT_EQ(positive_zero_f32, fp16b_to_fp32b_ieee(positive_zero_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << positive_zero_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(positive_zero_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << positive_zero_f32;

	EXPECT_EQ(negative_zero_f32, fp16b_to_fp32b_ieee(negative_zero_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << negative_zero_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(negative_zero_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << negative_zero_f32;
}

TEST(IEEE_FP16_BITS, infinity) {
	const uint16_t positive_infinity_f16 = UINT16_C(0x7C00);
	const uint16_t negative_infinity_f16 = UINT16_C(0xFC00);

	const uint32_t positive_infinity_f32 = UINT32_C(0x7F800000);
	const uint32_t negative_infinity_f32 = UINT32_C(0xFF800000);

	EXPECT_EQ(positive_infinity_f32, fp16b_to_fp32b_ieee(positive_infinity_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << positive_infinity_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(positive_infinity_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << positive_infinity_f32;

	EXPECT_EQ(negative_infinity_f32, fp16b_to_fp32b_ieee(negative_infinity_f16)) <<
		std::hex << std::uppercase << std::setfill('0') <<
		"F16 = 0x" << std::setw(4) << negative_infinity_f16 << ", " <<
		"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(negative_infinity_f16) << ", " <<
		"F32 = 0x" << std::setw(8) << negative_infinity_f32;
}

TEST(IEEE_FP16_BITS, positive_nan) {
	for (uint16_t m = UINT16_C(1); m < UINT16_C(0x0400); m++) {
		const uint16_t nan_f16 = UINT16_C(0x7C00) | m;
		const uint32_t nan_f32 = fp16b_to_fp32b_ieee(nan_f16);

		/* Check sign */
		EXPECT_EQ(nan_f32 & UINT32_C(0x80000000), 0) <<
			std::hex << std::uppercase << std::setfill('0') <<
			"F16 = 0x" << std::setw(4) << nan_f16 << ", " <<
			"F32(F16) = 0x" << std::setw(8) << nan_f32;

		/* Check exponent */
		EXPECT_EQ(nan_f32 & UINT32_C(0x7F800000), UINT32_C(0x7F800000)) <<
			std::hex << std::uppercase << std::setfill('0') <<
			"F16 = 0x" << std::setw(4) << nan_f16 << ", " <<
			"F32(F16) = 0x" << std::setw(8) << nan_f32;

		/* Check mantissa */
		EXPECT_NE(nan_f32 & UINT32_C(0x007FFFFF), 0) <<
			std::hex << std::uppercase << std::setfill('0') <<
			"F16 = 0x" << std::setw(4) << nan_f16 << ", " <<
			"F32(F16) = 0x" << std::setw(8) << nan_f32;
	}
}

TEST(IEEE_FP16_BITS, negative_nan) {
	for (uint16_t m = UINT16_C(1); m < UINT16_C(0x0400); m++) {
		const uint16_t nan_f16 = UINT16_C(0xFC00) | m;
		const uint32_t nan_f32 = fp16b_to_fp32b_ieee(nan_f16);

		/* Check sign */
		EXPECT_NE(nan_f32 & UINT32_C(0x80000000), 0) <<
			std::hex << std::uppercase << std::setfill('0') <<
			"F16 = 0x" << std::setw(4) << nan_f16 << ", " <<
			"F32(F16) = 0x" << std::setw(8) << nan_f32;

		/* Check exponent */
		EXPECT_EQ(nan_f32 & UINT32_C(0x7F800000), UINT32_C(0x7F800000)) <<
			std::hex << std::uppercase << std::setfill('0') <<
			"F16 = 0x" << std::setw(4) << nan_f16 << ", " <<
			"F32(F16) = 0x" << std::setw(8) << nan_f32;

		/* Check mantissa */
		EXPECT_NE(nan_f32 & UINT32_C(0x007FFFFF), 0) <<
			std::hex << std::uppercase << std::setfill('0') <<
			"F16 = 0x" << std::setw(4) << nan_f16 << ", " <<
			"F32(F16) = 0x" << std::setw(8) << nan_f32;
	}
}

TEST(IEEE_FP16_BITS, positive_normalized_values) {
	const uint32_t exponentBias = 15;
	for (int32_t e = -14; e <= 15; e++) {
		for (uint16_t h = 0; h < 0x0400; h++) {
			const uint16_t fp16 = h + ((uint16_t) (e + exponentBias) << 10);
			const uint32_t fp32 = fp16::normalizedValues[h] + ((uint32_t) e << 23);
			EXPECT_EQ(fp32, fp16b_to_fp32b_ieee(fp16)) <<
				std::hex << std::uppercase << std::setfill('0') <<
				"F16 = 0x" << std::setw(4) << fp16 << ", " <<
				"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(fp16) << ", " <<
				"F32 = 0x" << std::setw(8) << fp32;
		}
	}
}

TEST(IEEE_FP16_BITS, negative_normalized_values) {
	const uint32_t exponentBias = 15;
	for (int32_t e = -14; e <= 15; e++) {
		for (uint16_t h = 0; h < 0x0400; h++) {
			const uint16_t fp16 = (h + ((uint16_t) (e + exponentBias) << 10)) ^ UINT16_C(0x8000);
			const uint32_t fp32 = (fp16::normalizedValues[h] + ((uint32_t) e << 23)) ^ UINT32_C(0x80000000);
			EXPECT_EQ(fp32, fp16b_to_fp32b_ieee(fp16)) <<
				std::hex << std::uppercase << std::setfill('0') <<
				"F16 = 0x" << std::setw(4) << fp16 << ", " <<
				"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(fp16) << ", " <<
				"F32 = 0x" << std::setw(8) << fp32;
		}
	}
}

TEST(IEEE_FP16_BITS, positive_denormalized_values) {
	for (uint16_t h = 0; h < 0x0400; h++) {
		EXPECT_EQ(fp16::denormalizedValues[h], fp16b_to_fp32b_ieee(h)) <<
			std::hex << std::uppercase << std::setfill('0') <<
			"F16 = 0x" << std::setw(4) << h << ", " <<
			"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(h) << ", " <<
			"F32 = 0x" << std::setw(8) << fp16::denormalizedValues[h];
	}
}

TEST(IEEE_FP16_BITS, negative_denormalized_values) {
	for (uint16_t h = 0; h < 0x0400; h++) {
		const uint16_t fp16 = h ^ UINT16_C(0x8000);
		const uint32_t fp32 = fp16::denormalizedValues[h] ^ UINT32_C(0x80000000);
		EXPECT_EQ(fp32, fp16b_to_fp32b_ieee(fp16)) <<
			std::hex << std::uppercase << std::setfill('0') <<
			"F16 = 0x" << std::setw(4) << fp16 << ", " <<
			"F32(F16) = 0x" << std::setw(8) << fp16b_to_fp32b_ieee(fp16) << ", " <<
			"F32 = 0x" << std::setw(8) << fp32;
	}
}

int main(int argc, char* argv[]) {
	setenv("TERM", "xterm-256color", 0);
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
