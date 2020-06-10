add_library(MathFunctions mysqrt.cxx)

install (TARGETS MathFunctions DESTINATION ${OUT_DIR}/bin)
install (FILES MathFunctions.h DESTINATION ${OUT_DIR}/include)
