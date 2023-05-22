/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define S7_REGNUM 23
#define S9_REGNUM 25
#define REG_LS0 70
#define T0_REGNUM 5
#define S6_REGNUM 22
#define S11_REGNUM 27
#define REG_LS1 71
#define REG_LE0 68
#define REG_LE1 69
#define S8_REGNUM 24
#define S3_REGNUM 19
#define S1_REGNUM 9
#define A0_REGNUM 10
#define S0_REGNUM 8
#define S4_REGNUM 20
#define T1_REGNUM 6
#define TP_REGNUM 4
#define GP_REGNUM 3
#define RETURN_ADDR_REGNUM 1
#define S2_REGNUM 18
#define REG_LC0 66
#define REG_LC1 67
#define S5_REGNUM 21
#define S10_REGNUM 26
#define VIT_REG 72
#define SP_REGNUM 2

enum unspec {
  UNSPEC_EH_RETURN = 0,
  UNSPEC_ADDRESS_FIRST = 1,
  UNSPEC_PCREL = 2,
  UNSPEC_LOAD_GOT = 3,
  UNSPEC_TLS = 4,
  UNSPEC_TLS_LE = 5,
  UNSPEC_TLS_IE = 6,
  UNSPEC_TLS_GD = 7,
  UNSPEC_AUIPC = 8,
  UNSPEC_FLT_QUIET = 9,
  UNSPEC_FLE_QUIET = 10,
  UNSPEC_COPYSIGN = 11,
  UNSPEC_LRINT = 12,
  UNSPEC_LROUND = 13,
  UNSPEC_LROUND_DN = 14,
  UNSPEC_LROUND_UP = 15,
  UNSPEC_TIE = 16,
  UNSPEC_VEC_PERM1 = 17,
  UNSPEC_VEC_PERM2 = 18,
  UNSPEC_VEC_PERM3 = 19,
  UNSPEC_VEC_PERM4 = 20,
  UNSPEC_VEC_PERM5 = 21,
  UNSPEC_VEC_PERM6 = 22,
  UNSPEC_VEC_PERM7 = 23,
  UNSPEC_VEC_PERM8 = 24,
  UNSPEC_VIT_MAX = 25,
  UNSPEC_VIT_SEL = 26,
  UNSPEC_BINS_REG = 27,
  UNSPEC_BEXTS_REG = 28,
  UNSPEC_BEXTU_REG = 29,
  UNSPEC_READSI = 30,
  UNSPEC_WRITESI = 31,
  UNSPEC_SPR_READ = 32,
  UNSPEC_SPR_WRITE = 33,
  UNSPEC_SPR_BIT_SET = 34,
  UNSPEC_SPR_BIT_CLR = 35,
  UNSPEC_FCSR_READ = 36,
  UNSPEC_FCSR_WRITE = 37,
  UNSPEC_NOP = 38,
  UNSPEC_LSETUP_END = 39,
  UNSPEC_ITU = 40,
  UNSPEC_ITS = 41,
  UNSPEC_ITH = 42,
  UNSPEC_ITM = 43,
  UNSPEC_READSI_NONVOL = 44,
  UNSPEC_MULS = 45,
  UNSPEC_MULU = 46,
  UNSPEC_MULSN = 47,
  UNSPEC_MULSRN = 48,
  UNSPEC_MULUN = 49,
  UNSPEC_MULURN = 50,
  UNSPEC_MACS = 51,
  UNSPEC_MACU = 52,
  UNSPEC_MACSN = 53,
  UNSPEC_MACSRN = 54,
  UNSPEC_MACUN = 55,
  UNSPEC_MACURN = 56,
  UNSPEC_TRUNCSIHI = 57,
  UNSPEC_TRUNCSIQI = 58,
  UNSPEC_TRUNCV2HFHF = 59,
  UNSPEC_TRUNCV2OHFOHF = 60,
  UNSPEC_BITREV = 61,
  UNSPEC_COMPARE_AND_SWAP = 62,
  UNSPEC_SYNC_OLD_OP = 63,
  UNSPEC_SYNC_EXCHANGE = 64,
  UNSPEC_ATOMIC_STORE = 65,
  UNSPEC_MEMORY_BARRIER = 66
};
#define NUM_UNSPEC_VALUES 67
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_GPR_SAVE = 0,
  UNSPECV_GPR_RESTORE = 1,
  UNSPECV_FRFLAGS = 2,
  UNSPECV_FSFLAGS = 3,
  UNSPECV_BLOCKAGE = 4,
  UNSPECV_FENCE = 5,
  UNSPECV_FENCE_I = 6,
  UNSPECV_ALLOC = 7,
  UNSPECV_LC_SET = 8,
  UNSPECV_READ_EVU = 9,
  UNSPECV_OFFSETED_READ = 10,
  UNSPECV_OFFSETED_READ_HALF = 11,
  UNSPECV_OFFSETED_READ_BYTE = 12,
  UNSPECV_OFFSETED_READ_OMP = 13,
  UNSPECV_OFFSETED_WRITE = 14,
  UNSPECV_OFFSETED_WRITE_HALF = 15,
  UNSPECV_OFFSETED_WRITE_BYTE = 16,
  UNSPECV_OMP_PULP_BARRIER = 17,
  UNSPECV_OMP_PULP_CRITICAL_START = 18,
  UNSPECV_OMP_PULP_CRITICAL_END = 19,
  UNSPECV_OMP_PULP_THREAD_NUM = 20,
  UNSPECV_WRITESI_VOL = 21,
  UNSPECV_READSI_VOL = 22,
  UNSPECV_SPR_READ_VOL = 23,
  UNSPECV_POINTER_ARG = 24
};
#define NUM_UNSPECV_VALUES 25
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */