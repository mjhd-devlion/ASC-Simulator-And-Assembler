/*
 * core/defines.h
 */

#ifndef CORE_DEFINES_H
#define CORE_DEFINES_H

#include <string>

namespace defines {
  typedef enum {
    UNKNOWN = -1,
    LD = 0,
    ST,
    ADD,
    SUB,
    AND,
    OR,
    B,
    BZ,
    BN,
    OPE1,
    OPE2,
    OPE3,
    OPE4,
    OPE5,
    OPE6,
    HLT
  } OPECODE;
  
  short     ToDecimal(OPECODE);
  short     ToDecimal(std::string);

  OPECODE ToOPECODE(std::string);
  OPECODE ToOPECODE(int);

  std::string ToString(OPECODE);
  std::string ToString(int);

  bool Has1Operand(OPECODE);
  bool HasNumber(OPECODE);
  bool HasName(OPECODE);
}
#endif
