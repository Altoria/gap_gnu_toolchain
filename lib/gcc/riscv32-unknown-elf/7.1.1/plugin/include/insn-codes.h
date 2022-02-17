/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,
  CODE_FOR_addsf3 = 1,
  CODE_FOR_adddf3 = 2,
  CODE_FOR_addhf3 = 3,
  CODE_FOR_addohf3 = 4,
  CODE_FOR_addsi3 = 5,
  CODE_FOR_adddi3 = 6,
  CODE_FOR_subsf3 = 9,
  CODE_FOR_subdf3 = 10,
  CODE_FOR_subhf3 = 11,
  CODE_FOR_subohf3 = 12,
  CODE_FOR_subdi3 = 13,
  CODE_FOR_subsi3 = 14,
  CODE_FOR_mulsf3 = 17,
  CODE_FOR_muldf3 = 18,
  CODE_FOR_mulhf3 = 19,
  CODE_FOR_mulohf3 = 20,
  CODE_FOR_mulsi3 = 21,
  CODE_FOR_muldi3 = 22,
  CODE_FOR_muldi3_highpart = 25,
  CODE_FOR_umuldi3_highpart = 26,
  CODE_FOR_usmuldi3_highpart = 27,
  CODE_FOR_mulsi3_highpart = 28,
  CODE_FOR_umulsi3_highpart = 29,
  CODE_FOR_usmulsi3_highpart = 30,
  CODE_FOR_mulsi3_64extended = 31,
  CODE_FOR_mulsi3_u64extended = 32,
  CODE_FOR_divsi3 = 33,
  CODE_FOR_udivsi3 = 34,
  CODE_FOR_modsi3 = 35,
  CODE_FOR_umodsi3 = 36,
  CODE_FOR_divdi3 = 37,
  CODE_FOR_udivdi3 = 38,
  CODE_FOR_moddi3 = 39,
  CODE_FOR_umoddi3 = 40,
  CODE_FOR_divsf3_internal = 45,
  CODE_FOR_divdf3_internal = 46,
  CODE_FOR_divhf3_internal = 47,
  CODE_FOR_divohf3_internal = 48,
  CODE_FOR_sqrtsf2_internal = 49,
  CODE_FOR_sqrtdf2_internal = 50,
  CODE_FOR_sqrthf2_internal = 51,
  CODE_FOR_sqrtohf2_internal = 52,
  CODE_FOR_fmasf4 = 53,
  CODE_FOR_fmadf4 = 54,
  CODE_FOR_fmahf4 = 55,
  CODE_FOR_fmaohf4 = 56,
  CODE_FOR_fmssf4 = 57,
  CODE_FOR_fmsdf4 = 58,
  CODE_FOR_fmshf4 = 59,
  CODE_FOR_fmsohf4 = 60,
  CODE_FOR_fnmssf4 = 61,
  CODE_FOR_fnmsdf4 = 62,
  CODE_FOR_fnmshf4 = 63,
  CODE_FOR_fnmsohf4 = 64,
  CODE_FOR_fnmasf4 = 65,
  CODE_FOR_fnmadf4 = 66,
  CODE_FOR_fnmahf4 = 67,
  CODE_FOR_fnmaohf4 = 68,
   CODE_FOR_mulv1sfsf3 = CODE_FOR_nothing,
   CODE_FOR_mulhfsf3 = CODE_FOR_nothing,
  CODE_FOR_mulohfsf3 = 85,
   CODE_FOR_maddv1sfsf3_internal = CODE_FOR_nothing,
   CODE_FOR_maddhfsf3_internal = CODE_FOR_nothing,
  CODE_FOR_maddohfsf3_internal = 86,
  CODE_FOR_abssf2 = 87,
  CODE_FOR_absdf2 = 88,
  CODE_FOR_abshf2 = 89,
  CODE_FOR_absohf2 = 90,
  CODE_FOR_abssi2 = 91,
  CODE_FOR_absdi2 = 92,
  CODE_FOR_copysignsf3 = 93,
  CODE_FOR_copysigndf3 = 94,
  CODE_FOR_copysignhf3 = 95,
  CODE_FOR_copysignohf3 = 96,
  CODE_FOR_negsf2 = 97,
  CODE_FOR_negdf2 = 98,
  CODE_FOR_neghf2 = 99,
  CODE_FOR_negohf2 = 100,
  CODE_FOR_sminsf3 = 101,
  CODE_FOR_smindf3 = 102,
  CODE_FOR_sminhf3 = 103,
  CODE_FOR_sminohf3 = 104,
  CODE_FOR_smaxsf3 = 105,
  CODE_FOR_smaxdf3 = 106,
  CODE_FOR_smaxhf3 = 107,
  CODE_FOR_smaxohf3 = 108,
  CODE_FOR_sminsi3 = 109,
  CODE_FOR_smindi3 = 110,
  CODE_FOR_smaxsi3 = 111,
  CODE_FOR_smaxdi3 = 112,
  CODE_FOR_uminsi3 = 113,
  CODE_FOR_umindi3 = 114,
  CODE_FOR_umaxsi3 = 115,
  CODE_FOR_umaxdi3 = 116,
  CODE_FOR_avgsi3 = 117,
  CODE_FOR_avgusi3 = 118,
  CODE_FOR_popcountsi2 = 119,
  CODE_FOR_popcountdi2 = 120,
  CODE_FOR_clrsbsi2 = 121,
  CODE_FOR_fl1si2 = 122,
  CODE_FOR_ctzsi2 = 123,
  CODE_FOR_rotrsi3 = 124,
  CODE_FOR_truncv2hfhf2 = 125,
  CODE_FOR_truncv2ohfohf2 = 126,
  CODE_FOR_truncsihi2 = 127,
  CODE_FOR_truncsiqi2 = 128,
  CODE_FOR_mulhisi3 = 129,
  CODE_FOR_umulhisi3 = 130,
  CODE_FOR_mulsForced_si3 = 131,
  CODE_FOR_muluForced_si3 = 132,
  CODE_FOR_smulhi3_highpart = 133,
  CODE_FOR_umulhi3_highpart = 134,
  CODE_FOR_mulhhs_si3 = 135,
  CODE_FOR_mulhhu_si3 = 136,
  CODE_FOR_mulsNr_si3 = 137,
  CODE_FOR_mulsRNr_si3 = 138,
  CODE_FOR_mulsRNr_hi3 = 139,
  CODE_FOR_muluNr_si3 = 140,
  CODE_FOR_muluRNr_si3 = 141,
  CODE_FOR_mulsForcedNr_si3 = 142,
  CODE_FOR_mulsForcedRNr_si3 = 143,
  CODE_FOR_muluForcedNr_si3 = 144,
  CODE_FOR_muluForcedRNr_si3 = 145,
  CODE_FOR_mulhhsNr_si3 = 146,
  CODE_FOR_mulhhuNr_si3 = 147,
  CODE_FOR_mulhhsRNr_si3 = 148,
  CODE_FOR_mulhhuRNr_si3 = 149,
  CODE_FOR_macshi_si4 = 150,
  CODE_FOR_macuhi_si4 = 151,
  CODE_FOR_macsForced_si3 = 152,
  CODE_FOR_macuForced_si3 = 153,
  CODE_FOR_machlsu_si4 = 154,
  CODE_FOR_machlu_si4 = 155,
  CODE_FOR_machhs_si4 = 156,
  CODE_FOR_machhu_si4 = 157,
  CODE_FOR_machls_si4 = 158,
  CODE_FOR_macsNr_si3 = 159,
  CODE_FOR_macuNr_si3 = 160,
  CODE_FOR_macsForcedNr_si3 = 161,
  CODE_FOR_macsForcedRNr_si3 = 162,
  CODE_FOR_macuForcedNr_si3 = 163,
  CODE_FOR_macuForcedRNr_si3 = 164,
  CODE_FOR_macsRNr_si3 = 165,
  CODE_FOR_macuRNr_si3 = 166,
  CODE_FOR_machhsNr_si3 = 167,
  CODE_FOR_machhuNr_si3 = 168,
  CODE_FOR_machhsRNr_si3 = 169,
  CODE_FOR_machhuRNr_si3 = 170,
  CODE_FOR_maddsisi4 = 171,
  CODE_FOR_msubsisi4 = 172,
  CODE_FOR_madddisisi4 = 173,
  CODE_FOR_msubdisisi4 = 174,
  CODE_FOR_madddiusiusi4 = 175,
  CODE_FOR_msubdiusiusi4 = 176,
  CODE_FOR_addN_si3 = 177,
  CODE_FOR_addNu_si3 = 178,
  CODE_FOR_addN_reg_si3 = 179,
  CODE_FOR_addNu_reg_si3 = 180,
  CODE_FOR_subN_si3 = 181,
  CODE_FOR_subNu_si3 = 182,
  CODE_FOR_subN_reg_si3 = 183,
  CODE_FOR_subNu_reg_si3 = 184,
  CODE_FOR_addRN_si3 = 185,
  CODE_FOR_addRNu_si3 = 186,
  CODE_FOR_addRN_reg_si3 = 187,
  CODE_FOR_addRNu_reg_si3 = 188,
  CODE_FOR_subRN_si3 = 189,
  CODE_FOR_subRNu_si3 = 190,
  CODE_FOR_subRN_reg_si3 = 191,
  CODE_FOR_subRNu_reg_si3 = 192,
  CODE_FOR_clip_maxmin = 193,
  CODE_FOR_clip_minmax = 194,
  CODE_FOR_clip_minmax_reg = 195,
  CODE_FOR_clipu_maxmin = 196,
  CODE_FOR_clipu_minmax = 197,
  CODE_FOR_clipu_minmax_reg = 198,
  CODE_FOR_bclrsi3 = 199,
  CODE_FOR_bclrsi3_reg = 200,
  CODE_FOR_bsetsi3 = 201,
  CODE_FOR_bsetsi3_reg = 202,
  CODE_FOR_extvsi = 203,
  CODE_FOR_bextracts_reg_si3 = 204,
  CODE_FOR_bextracts_reg_alt_si3 = 205,
  CODE_FOR_bextractu_reg_alt_si3 = 206,
  CODE_FOR_extzvsi = 207,
  CODE_FOR_bextractu_reg_si3 = 208,
  CODE_FOR_insvsi = 209,
  CODE_FOR_invsipat1 = 212,
  CODE_FOR_binsert_reg_si3 = 213,
  CODE_FOR_andsi3 = 217,
  CODE_FOR_iorsi3 = 218,
  CODE_FOR_xorsi3 = 219,
  CODE_FOR_anddi3 = 220,
  CODE_FOR_iordi3 = 221,
  CODE_FOR_xordi3 = 222,
  CODE_FOR_and_di3 = 223,
  CODE_FOR_ior_di3 = 224,
  CODE_FOR_xor_di3 = 225,
  CODE_FOR_one_cmplsi2 = 229,
  CODE_FOR_one_cmpldi2 = 230,
  CODE_FOR_truncdfsf2 = 232,
  CODE_FOR_truncdfhf2 = 233,
  CODE_FOR_truncdfohf2 = 234,
  CODE_FOR_truncsfhf2 = 235,
  CODE_FOR_truncsfohf2 = 236,
  CODE_FOR_zero_extendsidi2 = 237,
  CODE_FOR_zero_extendhisi2 = 238,
  CODE_FOR_zero_extendhidi2 = 239,
  CODE_FOR_zero_extendqihi2 = 240,
  CODE_FOR_zero_extendqisi2 = 241,
  CODE_FOR_zero_extendqidi2 = 242,
  CODE_FOR_zero_extend_qidi2 = 243,
  CODE_FOR_zero_extend_hidi2 = 244,
  CODE_FOR_zero_extend_sidi2 = 245,
  CODE_FOR_extendsidi2 = 246,
  CODE_FOR_extendqihi2 = 247,
  CODE_FOR_extendqisi2 = 248,
  CODE_FOR_extendqidi2 = 249,
  CODE_FOR_extendhihi2 = 250,
  CODE_FOR_extendhisi2 = 251,
  CODE_FOR_extendhidi2 = 252,
  CODE_FOR_extendsfdf2 = 253,
  CODE_FOR_extendhfsf2 = 254,
  CODE_FOR_extendohfsf2 = 255,
  CODE_FOR_extendhfohf2 = 256,
  CODE_FOR_extendohfhf2 = 257,
  CODE_FOR_sign_extend_qidi2 = 258,
  CODE_FOR_sign_extend_hidi2 = 259,
  CODE_FOR_sign_extend_sidi2 = 260,
  CODE_FOR_fix_truncsfsi2 = 261,
  CODE_FOR_fix_truncsfdi2 = 262,
  CODE_FOR_fix_truncdfsi2 = 263,
  CODE_FOR_fix_truncdfdi2 = 264,
  CODE_FOR_fixuns_truncsfsi2 = 265,
  CODE_FOR_fixuns_truncsfdi2 = 266,
  CODE_FOR_fixuns_truncdfsi2 = 267,
  CODE_FOR_fixuns_truncdfdi2 = 268,
  CODE_FOR_floatsisf2 = 269,
  CODE_FOR_floatdisf2 = 270,
  CODE_FOR_floatsidf2 = 271,
  CODE_FOR_floatdidf2 = 272,
  CODE_FOR_floatunssisf2 = 273,
  CODE_FOR_floatunsdisf2 = 274,
  CODE_FOR_floatunssidf2 = 275,
  CODE_FOR_floatunsdidf2 = 276,
  CODE_FOR_lrintsfsi2 = 277,
  CODE_FOR_lroundsfsi2 = 278,
  CODE_FOR_lrounddownsfsi2 = 279,
  CODE_FOR_lroundupsfsi2 = 280,
  CODE_FOR_lrintsfdi2 = 281,
  CODE_FOR_lroundsfdi2 = 282,
  CODE_FOR_lrounddownsfdi2 = 283,
  CODE_FOR_lroundupsfdi2 = 284,
  CODE_FOR_lrintdfsi2 = 285,
  CODE_FOR_lrounddfsi2 = 286,
  CODE_FOR_lrounddowndfsi2 = 287,
  CODE_FOR_lroundupdfsi2 = 288,
  CODE_FOR_lrintdfdi2 = 289,
  CODE_FOR_lrounddfdi2 = 290,
  CODE_FOR_lrounddowndfdi2 = 291,
  CODE_FOR_lroundupdfdi2 = 292,
  CODE_FOR_lrinthfsi2 = 293,
  CODE_FOR_lroundhfsi2 = 294,
  CODE_FOR_lrounddownhfsi2 = 295,
  CODE_FOR_lrounduphfsi2 = 296,
  CODE_FOR_lrinthfdi2 = 297,
  CODE_FOR_lroundhfdi2 = 298,
  CODE_FOR_lrounddownhfdi2 = 299,
  CODE_FOR_lrounduphfdi2 = 300,
  CODE_FOR_lrintohfsi2 = 301,
  CODE_FOR_lroundohfsi2 = 302,
  CODE_FOR_lrounddownohfsi2 = 303,
  CODE_FOR_lroundupohfsi2 = 304,
  CODE_FOR_lrintohfdi2 = 305,
  CODE_FOR_lroundohfdi2 = 306,
  CODE_FOR_lrounddownohfdi2 = 307,
  CODE_FOR_lroundupohfdi2 = 308,
  CODE_FOR_fix_truncohfsi2 = 309,
  CODE_FOR_fix_truncohfdi2 = 310,
  CODE_FOR_fix_trunchfsi2 = 311,
  CODE_FOR_fix_trunchfdi2 = 312,
  CODE_FOR_fixuns_truncohfsi2 = 313,
  CODE_FOR_fixuns_truncohfdi2 = 314,
  CODE_FOR_fixuns_trunchfsi2 = 315,
  CODE_FOR_fixuns_trunchfdi2 = 316,
   CODE_FOR_floatsiv1sf2 = CODE_FOR_nothing,
   CODE_FOR_floatdiv1sf2 = CODE_FOR_nothing,
  CODE_FOR_floatsihf2 = 317,
  CODE_FOR_floatdihf2 = 318,
  CODE_FOR_floatsiohf2 = 319,
  CODE_FOR_floatdiohf2 = 320,
   CODE_FOR_floatunssiv1sf2 = CODE_FOR_nothing,
   CODE_FOR_floatunsdiv1sf2 = CODE_FOR_nothing,
  CODE_FOR_floatunssihf2 = 321,
  CODE_FOR_floatunsdihf2 = 322,
  CODE_FOR_floatunssiohf2 = 323,
  CODE_FOR_floatunsdiohf2 = 324,
  CODE_FOR_got_loadsi = 325,
  CODE_FOR_got_loaddi = 326,
  CODE_FOR_tls_add_tp_lesi = 327,
  CODE_FOR_tls_add_tp_ledi = 328,
  CODE_FOR_got_load_tls_gdsi = 329,
  CODE_FOR_got_load_tls_gddi = 330,
  CODE_FOR_got_load_tls_iesi = 331,
  CODE_FOR_got_load_tls_iedi = 332,
  CODE_FOR_auipcsi = 333,
  CODE_FOR_auipcdi = 334,
  CODE_FOR_loadqi_ind_reg_reg = 339,
  CODE_FOR_loadhi_ind_reg_reg = 340,
  CODE_FOR_loadhf_ind_reg_reg = 341,
  CODE_FOR_loadohf_ind_reg_reg = 342,
  CODE_FOR_loadsi_ind_reg_reg = 343,
  CODE_FOR_loadsf_ind_reg_reg = 344,
  CODE_FOR_loadv2hi_ind_reg_reg = 345,
  CODE_FOR_loadv2hf_ind_reg_reg = 346,
  CODE_FOR_loadv2ohf_ind_reg_reg = 347,
  CODE_FOR_loadv4qi_ind_reg_reg = 348,
  CODE_FOR_loadqi_ext_ind_reg_reg = 349,
  CODE_FOR_loadqi_uext_ind_reg_reg = 350,
  CODE_FOR_loadhi_ext_ind_reg_reg = 351,
  CODE_FOR_loadhi_uext_ind_reg_reg = 352,
  CODE_FOR_loadhf_ext_ind_reg_reg = 353,
  CODE_FOR_loadhf_uext_ind_reg_reg = 354,
  CODE_FOR_loadohf_ext_ind_reg_reg = 355,
  CODE_FOR_loadohf_uext_ind_reg_reg = 356,
  CODE_FOR_loadsi_ext_ind_reg_reg = 357,
  CODE_FOR_loadsi_uext_ind_reg_reg = 358,
  CODE_FOR_loadsf_ext_ind_reg_reg = 359,
  CODE_FOR_loadsf_uext_ind_reg_reg = 360,
  CODE_FOR_loadv2hi_ext_ind_reg_reg = 361,
  CODE_FOR_loadv2hi_uext_ind_reg_reg = 362,
  CODE_FOR_loadv2hf_ext_ind_reg_reg = 363,
  CODE_FOR_loadv2hf_uext_ind_reg_reg = 364,
  CODE_FOR_loadv2ohf_ext_ind_reg_reg = 365,
  CODE_FOR_loadv2ohf_uext_ind_reg_reg = 366,
  CODE_FOR_loadv4qi_ext_ind_reg_reg = 367,
  CODE_FOR_loadv4qi_uext_ind_reg_reg = 368,
  CODE_FOR_storeqi_ind_reg_reg = 369,
  CODE_FOR_storehi_ind_reg_reg = 370,
  CODE_FOR_storehf_ind_reg_reg = 371,
  CODE_FOR_storeohf_ind_reg_reg = 372,
  CODE_FOR_storesi_ind_reg_reg = 373,
  CODE_FOR_storesf_ind_reg_reg = 374,
  CODE_FOR_storev2hi_ind_reg_reg = 375,
  CODE_FOR_storev2hf_ind_reg_reg = 376,
  CODE_FOR_storev2ohf_ind_reg_reg = 377,
  CODE_FOR_storev4qi_ind_reg_reg = 378,
  CODE_FOR_load_evt_unit = 379,
  CODE_FOR_load_evt_unit_internal = 380,
  CODE_FOR_read_spr = 381,
  CODE_FOR_read_spr_vol = 382,
  CODE_FOR_write_spr = 383,
  CODE_FOR_read_then_write_spr = 384,
  CODE_FOR_spr_bit_set = 385,
  CODE_FOR_read_then_spr_bit_set = 386,
  CODE_FOR_spr_bit_clr = 387,
  CODE_FOR_read_then_spr_bit_clr = 388,
  CODE_FOR_read_fcsr = 389,
  CODE_FOR_write_fcsr = 390,
  CODE_FOR_writesivol = 391,
  CODE_FOR_writesi = 392,
  CODE_FOR_readsivol = 393,
  CODE_FOR_OffsetedRead = 394,
  CODE_FOR_OffsetedReadHalf = 395,
  CODE_FOR_OffsetedReadByte = 396,
  CODE_FOR_OffsetedWrite = 397,
  CODE_FOR_OffsetedWritePtrInternal = 398,
  CODE_FOR_OffsetedWriteHalf = 399,
  CODE_FOR_OffsetedWriteByte = 400,
  CODE_FOR_OffsetedReadOMP = 401,
  CODE_FOR_OffsetedReadNonVol = 402,
  CODE_FOR_loadqi_ind_postinc = 403,
  CODE_FOR_loadhi_ind_postinc = 404,
  CODE_FOR_loadhf_ind_postinc = 405,
  CODE_FOR_loadohf_ind_postinc = 406,
  CODE_FOR_loadsi_ind_postinc = 407,
  CODE_FOR_loadsf_ind_postinc = 408,
  CODE_FOR_loadv2hi_ind_postinc = 409,
  CODE_FOR_loadv2hf_ind_postinc = 410,
  CODE_FOR_loadv2ohf_ind_postinc = 411,
  CODE_FOR_loadv4qi_ind_postinc = 412,
  CODE_FOR_loadqi_ext_ind_postinc = 413,
  CODE_FOR_loadqi_uext_ind_postinc = 414,
  CODE_FOR_loadhi_ext_ind_postinc = 415,
  CODE_FOR_loadhi_uext_ind_postinc = 416,
  CODE_FOR_loadhf_ext_ind_postinc = 417,
  CODE_FOR_loadhf_uext_ind_postinc = 418,
  CODE_FOR_loadohf_ext_ind_postinc = 419,
  CODE_FOR_loadohf_uext_ind_postinc = 420,
  CODE_FOR_loadsi_ext_ind_postinc = 421,
  CODE_FOR_loadsi_uext_ind_postinc = 422,
  CODE_FOR_loadsf_ext_ind_postinc = 423,
  CODE_FOR_loadsf_uext_ind_postinc = 424,
  CODE_FOR_loadv2hi_ext_ind_postinc = 425,
  CODE_FOR_loadv2hi_uext_ind_postinc = 426,
  CODE_FOR_loadv2hf_ext_ind_postinc = 427,
  CODE_FOR_loadv2hf_uext_ind_postinc = 428,
  CODE_FOR_loadv2ohf_ext_ind_postinc = 429,
  CODE_FOR_loadv2ohf_uext_ind_postinc = 430,
  CODE_FOR_loadv4qi_ext_ind_postinc = 431,
  CODE_FOR_loadv4qi_uext_ind_postinc = 432,
  CODE_FOR_loadqi_ind_postdec = 433,
  CODE_FOR_loadhi_ind_postdec = 434,
  CODE_FOR_loadhf_ind_postdec = 435,
  CODE_FOR_loadohf_ind_postdec = 436,
  CODE_FOR_loadsi_ind_postdec = 437,
  CODE_FOR_loadsf_ind_postdec = 438,
  CODE_FOR_loadv2hi_ind_postdec = 439,
  CODE_FOR_loadv2hf_ind_postdec = 440,
  CODE_FOR_loadv2ohf_ind_postdec = 441,
  CODE_FOR_loadv4qi_ind_postdec = 442,
  CODE_FOR_loadqi_ext_ind_postdec = 443,
  CODE_FOR_loadqi_uext_ind_postdec = 444,
  CODE_FOR_loadhi_ext_ind_postdec = 445,
  CODE_FOR_loadhi_uext_ind_postdec = 446,
  CODE_FOR_loadhf_ext_ind_postdec = 447,
  CODE_FOR_loadhf_uext_ind_postdec = 448,
  CODE_FOR_loadohf_ext_ind_postdec = 449,
  CODE_FOR_loadohf_uext_ind_postdec = 450,
  CODE_FOR_loadsi_ext_ind_postdec = 451,
  CODE_FOR_loadsi_uext_ind_postdec = 452,
  CODE_FOR_loadsf_ext_ind_postdec = 453,
  CODE_FOR_loadsf_uext_ind_postdec = 454,
  CODE_FOR_loadv2hi_ext_ind_postdec = 455,
  CODE_FOR_loadv2hi_uext_ind_postdec = 456,
  CODE_FOR_loadv2hf_ext_ind_postdec = 457,
  CODE_FOR_loadv2hf_uext_ind_postdec = 458,
  CODE_FOR_loadv2ohf_ext_ind_postdec = 459,
  CODE_FOR_loadv2ohf_uext_ind_postdec = 460,
  CODE_FOR_loadv4qi_ext_ind_postdec = 461,
  CODE_FOR_loadv4qi_uext_ind_postdec = 462,
  CODE_FOR_loadqi_ind_post_mod = 463,
  CODE_FOR_loadhi_ind_post_mod = 464,
  CODE_FOR_loadhf_ind_post_mod = 465,
  CODE_FOR_loadohf_ind_post_mod = 466,
  CODE_FOR_loadsi_ind_post_mod = 467,
  CODE_FOR_loadsf_ind_post_mod = 468,
  CODE_FOR_loadv2hi_ind_post_mod = 469,
  CODE_FOR_loadv2hf_ind_post_mod = 470,
  CODE_FOR_loadv2ohf_ind_post_mod = 471,
  CODE_FOR_loadv4qi_ind_post_mod = 472,
  CODE_FOR_loadqi_ext_ind_post_mod = 473,
  CODE_FOR_loadqi_uext_ind_post_mod = 474,
  CODE_FOR_loadhi_ext_ind_post_mod = 475,
  CODE_FOR_loadhi_uext_ind_post_mod = 476,
  CODE_FOR_loadhf_ext_ind_post_mod = 477,
  CODE_FOR_loadhf_uext_ind_post_mod = 478,
  CODE_FOR_loadohf_ext_ind_post_mod = 479,
  CODE_FOR_loadohf_uext_ind_post_mod = 480,
  CODE_FOR_loadsi_ext_ind_post_mod = 481,
  CODE_FOR_loadsi_uext_ind_post_mod = 482,
  CODE_FOR_loadsf_ext_ind_post_mod = 483,
  CODE_FOR_loadsf_uext_ind_post_mod = 484,
  CODE_FOR_loadv2hi_ext_ind_post_mod = 485,
  CODE_FOR_loadv2hi_uext_ind_post_mod = 486,
  CODE_FOR_loadv2hf_ext_ind_post_mod = 487,
  CODE_FOR_loadv2hf_uext_ind_post_mod = 488,
  CODE_FOR_loadv2ohf_ext_ind_post_mod = 489,
  CODE_FOR_loadv2ohf_uext_ind_post_mod = 490,
  CODE_FOR_loadv4qi_ext_ind_post_mod = 491,
  CODE_FOR_loadv4qi_uext_ind_post_mod = 492,
  CODE_FOR_storeqi_ind_postinc = 493,
  CODE_FOR_storehi_ind_postinc = 494,
  CODE_FOR_storehf_ind_postinc = 495,
  CODE_FOR_storeohf_ind_postinc = 496,
  CODE_FOR_storesi_ind_postinc = 497,
  CODE_FOR_storesf_ind_postinc = 498,
  CODE_FOR_storev2hi_ind_postinc = 499,
  CODE_FOR_storev2hf_ind_postinc = 500,
  CODE_FOR_storev2ohf_ind_postinc = 501,
  CODE_FOR_storev4qi_ind_postinc = 502,
  CODE_FOR_storeqi_ind_postdec = 503,
  CODE_FOR_storehi_ind_postdec = 504,
  CODE_FOR_storehf_ind_postdec = 505,
  CODE_FOR_storeohf_ind_postdec = 506,
  CODE_FOR_storesi_ind_postdec = 507,
  CODE_FOR_storesf_ind_postdec = 508,
  CODE_FOR_storev2hi_ind_postdec = 509,
  CODE_FOR_storev2hf_ind_postdec = 510,
  CODE_FOR_storev2ohf_ind_postdec = 511,
  CODE_FOR_storev4qi_ind_postdec = 512,
  CODE_FOR_storeqi_ind_postmod = 513,
  CODE_FOR_storehi_ind_postmod = 514,
  CODE_FOR_storehf_ind_postmod = 515,
  CODE_FOR_storeohf_ind_postmod = 516,
  CODE_FOR_storesi_ind_postmod = 517,
  CODE_FOR_storesf_ind_postmod = 518,
  CODE_FOR_storev2hi_ind_postmod = 519,
  CODE_FOR_storev2hf_ind_postmod = 520,
  CODE_FOR_storev2ohf_ind_postmod = 521,
  CODE_FOR_storev4qi_ind_postmod = 522,
  CODE_FOR_movv2hi_internal = 524,
  CODE_FOR_movv4qi_internal = 525,
  CODE_FOR_fence = 539,
  CODE_FOR_fence_i = 540,
  CODE_FOR_ashlsi3 = 541,
  CODE_FOR_ashrsi3 = 542,
  CODE_FOR_lshrsi3 = 543,
  CODE_FOR_ashldi3 = 544,
  CODE_FOR_ashrdi3 = 545,
  CODE_FOR_lshrdi3 = 546,
  CODE_FOR_ashlsidi3 = 547,
  CODE_FOR_ashrsidi3 = 548,
  CODE_FOR_lshrsidi3 = 549,
  CODE_FOR_vec_initv2hi_internal = 553,
  CODE_FOR_vec_initv4qi_internal = 554,
  CODE_FOR_vec_initv2hf_internal_x = 555,
  CODE_FOR_vec_initv2ohf_internal_x = 556,
  CODE_FOR_movv2hf_internal = 557,
  CODE_FOR_movv2ohf_internal = 558,
  CODE_FOR_movv1sf_internal = 559,
  CODE_FOR_extendv2hfv2ohf2 = 560,
  CODE_FOR_extendv2ohfv2hf2 = 561,
  CODE_FOR_floatv2hiv2hf2_internal = 562,
  CODE_FOR_floatv2hiv2ohf2_internal = 563,
  CODE_FOR_floatunsv2hiv2hf2_internal = 564,
  CODE_FOR_floatunsv2hiv2ohf2_internal = 565,
  CODE_FOR_fix_truncv2hfv2hi2_internal = 566,
  CODE_FOR_fix_truncv2ohfv2hi2_internal = 567,
  CODE_FOR_fixuns_truncv2hfv2hi2_internal = 568,
  CODE_FOR_fixuns_truncv2ohfv2hi2_internal = 569,
  CODE_FOR_lshrimmv2hf = 570,
  CODE_FOR_lshrimmv2ohf = 571,
  CODE_FOR_lshrimmv2hi = 572,
  CODE_FOR_lshrimmv4qi = 573,
  CODE_FOR_orv2hf = 574,
  CODE_FOR_orv2ohf = 575,
  CODE_FOR_orv2hi = 576,
  CODE_FOR_orv4qi = 577,
  CODE_FOR_vec_pack_trunc_v1sf = 578,
  CODE_FOR_vec_pack_trunc_v1sf_to_v2hf_builtin = 579,
  CODE_FOR_vec_pack_trunc_v1sf_alt = 580,
  CODE_FOR_vec_pack_trunc_v1sf_to_v2ohf_builtin = 581,
  CODE_FOR_vec_unpacks_lo_v2hf = 582,
  CODE_FOR_vec_unpacks_lo_v2ohf = 583,
  CODE_FOR_vec_pack_v2hf = 584,
  CODE_FOR_vec_pack_v2ohf = 585,
  CODE_FOR_vec_pack_v2hi = 586,
  CODE_FOR_vec_pack_v4qi_lo = 587,
  CODE_FOR_vec_pack_v4qi_lo_first = 588,
  CODE_FOR_vec_pack_v4qi_hi = 589,
  CODE_FOR_unpack1_lo_h_b_s = 590,
  CODE_FOR_unpack1_lo_h_b_u = 591,
  CODE_FOR_unpack1_hi_h_b_s = 592,
  CODE_FOR_unpack1_hi_h_b_u = 593,
  CODE_FOR_unpack2_h_b_s = 594,
  CODE_FOR_unpack2_h_b_u = 595,
  CODE_FOR_vec_permv2hf_internal2_1 = 596,
  CODE_FOR_vec_permv2ohf_internal2_1 = 597,
  CODE_FOR_vec_permv2hi_internal2_1 = 598,
  CODE_FOR_vec_permv2hf_internal2 = 599,
  CODE_FOR_vec_permv2ohf_internal2 = 600,
  CODE_FOR_vec_permv2hi_internal2 = 601,
  CODE_FOR_vec_permv2hf_int1 = 602,
  CODE_FOR_vec_permv2ohf_int1 = 603,
  CODE_FOR_vec_permv2hi_int1 = 604,
  CODE_FOR_vec_permv2hf_low = 605,
  CODE_FOR_vec_permv2ohf_low = 606,
  CODE_FOR_vec_permv2hi_low = 607,
  CODE_FOR_vec_permv2hf_high = 608,
  CODE_FOR_vec_permv2ohf_high = 609,
  CODE_FOR_vec_permv2hi_high = 610,
  CODE_FOR_vec_permv4qi_internal2_1 = 611,
  CODE_FOR_vec_permv4qi_internal2 = 612,
  CODE_FOR_vec_permv4qi_int1 = 613,
  CODE_FOR_vec_setv2hf_internal = 614,
  CODE_FOR_vec_setv2ohf_internal = 615,
  CODE_FOR_vec_setv2hi_internal = 616,
  CODE_FOR_vec_setv4qi_internal = 617,
  CODE_FOR_vec_set_firstv2hf_internal = 618,
  CODE_FOR_vec_set_firstv2ohf_internal = 619,
  CODE_FOR_vec_set_firstv2hi_internal = 620,
  CODE_FOR_vec_set_firstv4qi_internal = 621,
  CODE_FOR_vec_extract_sext_qi_v2hf = 622,
  CODE_FOR_vec_extract_sext_qi_v2ohf = 623,
  CODE_FOR_vec_extract_sext_qi_v2hi = 624,
  CODE_FOR_vec_extract_sext_qi_v4qi = 625,
  CODE_FOR_vec_extract_sext_hi_v2hf = 626,
  CODE_FOR_vec_extract_sext_hi_v2ohf = 627,
  CODE_FOR_vec_extract_sext_hi_v2hi = 628,
  CODE_FOR_vec_extract_sext_hi_v4qi = 629,
  CODE_FOR_vec_extract_sext_si_v2hf = 630,
  CODE_FOR_vec_extract_sext_si_v2ohf = 631,
  CODE_FOR_vec_extract_sext_si_v2hi = 632,
  CODE_FOR_vec_extract_sext_si_v4qi = 633,
  CODE_FOR_vec_extract_zext_qi_v2hf = 634,
  CODE_FOR_vec_extract_zext_qi_v2ohf = 635,
  CODE_FOR_vec_extract_zext_qi_v2hi = 636,
  CODE_FOR_vec_extract_zext_qi_v4qi = 637,
  CODE_FOR_vec_extract_zext_hi_v2hf = 638,
  CODE_FOR_vec_extract_zext_hi_v2ohf = 639,
  CODE_FOR_vec_extract_zext_hi_v2hi = 640,
  CODE_FOR_vec_extract_zext_hi_v4qi = 641,
  CODE_FOR_vec_extract_zext_si_v2hf = 642,
  CODE_FOR_vec_extract_zext_si_v2ohf = 643,
  CODE_FOR_vec_extract_zext_si_v2hi = 644,
  CODE_FOR_vec_extract_zext_si_v4qi = 645,
  CODE_FOR_vec_extractv2hf = 646,
  CODE_FOR_vec_extractv2ohf = 647,
  CODE_FOR_vec_extractv2hi = 648,
  CODE_FOR_vec_extractv4qi = 649,
  CODE_FOR_cplx_conjhi2 = 650,
  CODE_FOR_cplx_conjsi3 = 651,
  CODE_FOR_add_div2_v2hi3 = 652,
  CODE_FOR_add_div2_v4qi3 = 653,
  CODE_FOR_add_div4_v2hi3 = 654,
  CODE_FOR_add_div8_v2hi3 = 655,
  CODE_FOR_add_div4_v4qi3 = 656,
  CODE_FOR_sub_div2_v2hi3 = 657,
  CODE_FOR_sub_div2_v4qi3 = 658,
  CODE_FOR_sub_div4_v2hi3 = 659,
  CODE_FOR_sub_div8_v2hi3 = 660,
  CODE_FOR_sub_div4_v4qi3 = 661,
  CODE_FOR_subrotmj_v2hi3 = 662,
  CODE_FOR_addv2hf3 = 663,
  CODE_FOR_subv2hf3 = 664,
  CODE_FOR_sminv2hf3 = 665,
  CODE_FOR_smaxv2hf3 = 666,
  CODE_FOR_mulv2hf3 = 667,
  CODE_FOR_addv2ohf3 = 668,
  CODE_FOR_subv2ohf3 = 669,
  CODE_FOR_sminv2ohf3 = 670,
  CODE_FOR_smaxv2ohf3 = 671,
  CODE_FOR_mulv2ohf3 = 672,
  CODE_FOR_addscv2hf3 = 673,
  CODE_FOR_subscv2hf3 = 674,
  CODE_FOR_sminscv2hf3 = 675,
  CODE_FOR_smaxscv2hf3 = 676,
  CODE_FOR_mulscv2hf3 = 677,
  CODE_FOR_addscv2ohf3 = 678,
  CODE_FOR_subscv2ohf3 = 679,
  CODE_FOR_sminscv2ohf3 = 680,
  CODE_FOR_smaxscv2ohf3 = 681,
  CODE_FOR_mulscv2ohf3 = 682,
  CODE_FOR_add_swap_scv2hf3 = 683,
  CODE_FOR_sub_swap_scv2hf3 = 684,
  CODE_FOR_smin_swap_scv2hf3 = 685,
  CODE_FOR_smax_swap_scv2hf3 = 686,
  CODE_FOR_mul_swap_scv2hf3 = 687,
  CODE_FOR_add_swap_scv2ohf3 = 688,
  CODE_FOR_sub_swap_scv2ohf3 = 689,
  CODE_FOR_smin_swap_scv2ohf3 = 690,
  CODE_FOR_smax_swap_scv2ohf3 = 691,
  CODE_FOR_mul_swap_scv2ohf3 = 692,
  CODE_FOR_addv2hi3 = 693,
  CODE_FOR_subv2hi3 = 694,
  CODE_FOR_sminv2hi3 = 695,
  CODE_FOR_smaxv2hi3 = 696,
  CODE_FOR_addv4qi3 = 697,
  CODE_FOR_subv4qi3 = 698,
  CODE_FOR_sminv4qi3 = 699,
  CODE_FOR_smaxv4qi3 = 700,
  CODE_FOR_addscv2hi3 = 701,
  CODE_FOR_subscv2hi3 = 702,
  CODE_FOR_sminscv2hi3 = 703,
  CODE_FOR_smaxscv2hi3 = 704,
  CODE_FOR_addscv4qi3 = 705,
  CODE_FOR_subscv4qi3 = 706,
  CODE_FOR_sminscv4qi3 = 707,
  CODE_FOR_smaxscv4qi3 = 708,
  CODE_FOR_add_swap_scv2hi3 = 709,
  CODE_FOR_sub_swap_scv2hi3 = 710,
  CODE_FOR_smin_swap_scv2hi3 = 711,
  CODE_FOR_smax_swap_scv2hi3 = 712,
  CODE_FOR_add_swap_scv4qi3 = 713,
  CODE_FOR_sub_swap_scv4qi3 = 714,
  CODE_FOR_smin_swap_scv4qi3 = 715,
  CODE_FOR_smax_swap_scv4qi3 = 716,
  CODE_FOR_fmav2hf3_internal = 717,
  CODE_FOR_fmav2ohf3_internal = 718,
  CODE_FOR_fmsv2hf4 = 719,
  CODE_FOR_fmsv2ohf4 = 720,
  CODE_FOR_copysignv2hf3 = 721,
  CODE_FOR_copysignv2ohf3 = 722,
  CODE_FOR_uminv2hi3 = 723,
  CODE_FOR_umaxv2hi3 = 724,
  CODE_FOR_uminv4qi3 = 725,
  CODE_FOR_umaxv4qi3 = 726,
  CODE_FOR_uminscv2hi3 = 727,
  CODE_FOR_umaxscv2hi3 = 728,
  CODE_FOR_uminscv4qi3 = 729,
  CODE_FOR_umaxscv4qi3 = 730,
  CODE_FOR_umin_swap_scv2hi3 = 731,
  CODE_FOR_umax_swap_scv2hi3 = 732,
  CODE_FOR_umin_swap_scv4qi3 = 733,
  CODE_FOR_umax_swap_scv4qi3 = 734,
  CODE_FOR_vlshrv2hi3 = 735,
  CODE_FOR_vashrv2hi3 = 736,
  CODE_FOR_vashlv2hi3 = 737,
  CODE_FOR_vlshrv4qi3 = 738,
  CODE_FOR_vashrv4qi3 = 739,
  CODE_FOR_vashlv4qi3 = 740,
  CODE_FOR_vlshrscv2hi3 = 741,
  CODE_FOR_vashrscv2hi3 = 742,
  CODE_FOR_vashlscv2hi3 = 743,
  CODE_FOR_vlshrscv4qi3 = 744,
  CODE_FOR_vashrscv4qi3 = 745,
  CODE_FOR_vashlscv4qi3 = 746,
  CODE_FOR_avgv2hi3 = 747,
  CODE_FOR_avgv4qi3 = 748,
  CODE_FOR_avgscv2hi3 = 749,
  CODE_FOR_avgscv4qi3 = 750,
  CODE_FOR_avgsc_swap_v2hi3 = 751,
  CODE_FOR_avgsc_swap_v4qi3 = 752,
  CODE_FOR_avgv2uhi3 = 753,
  CODE_FOR_avgv4uqi3 = 754,
  CODE_FOR_avgscv2uhi3 = 755,
  CODE_FOR_avgscv4uqi3 = 756,
  CODE_FOR_avgsc_swap_v2uhi3 = 757,
  CODE_FOR_avgsc_swap_v4uqi3 = 758,
  CODE_FOR_andv2hf3 = 759,
  CODE_FOR_iorv2hf3 = 760,
  CODE_FOR_exorv2hf3 = 761,
  CODE_FOR_andv2ohf3 = 762,
  CODE_FOR_iorv2ohf3 = 763,
  CODE_FOR_exorv2ohf3 = 764,
  CODE_FOR_andv2hi3 = 765,
  CODE_FOR_iorv2hi3 = 766,
  CODE_FOR_exorv2hi3 = 767,
  CODE_FOR_andv4qi3 = 768,
  CODE_FOR_iorv4qi3 = 769,
  CODE_FOR_exorv4qi3 = 770,
  CODE_FOR_andscv2hf3 = 771,
  CODE_FOR_iorscv2hf3 = 772,
  CODE_FOR_exorscv2hf3 = 773,
  CODE_FOR_andscv2ohf3 = 774,
  CODE_FOR_iorscv2ohf3 = 775,
  CODE_FOR_exorscv2ohf3 = 776,
  CODE_FOR_andscv2hi3 = 777,
  CODE_FOR_iorscv2hi3 = 778,
  CODE_FOR_exorscv2hi3 = 779,
  CODE_FOR_andscv4qi3 = 780,
  CODE_FOR_iorscv4qi3 = 781,
  CODE_FOR_exorscv4qi3 = 782,
  CODE_FOR_and_swap_scv2hf3 = 783,
  CODE_FOR_ior_swap_scv2hf3 = 784,
  CODE_FOR_exor_swap_scv2hf3 = 785,
  CODE_FOR_and_swap_scv2ohf3 = 786,
  CODE_FOR_ior_swap_scv2ohf3 = 787,
  CODE_FOR_exor_swap_scv2ohf3 = 788,
  CODE_FOR_and_swap_scv2hi3 = 789,
  CODE_FOR_ior_swap_scv2hi3 = 790,
  CODE_FOR_exor_swap_scv2hi3 = 791,
  CODE_FOR_and_swap_scv4qi3 = 792,
  CODE_FOR_ior_swap_scv4qi3 = 793,
  CODE_FOR_exor_swap_scv4qi3 = 794,
  CODE_FOR_absv2hf2 = 795,
  CODE_FOR_absv2ohf2 = 796,
  CODE_FOR_absv2hi2 = 797,
  CODE_FOR_absv4qi2 = 798,
  CODE_FOR_negv2hf2 = 799,
  CODE_FOR_negv2ohf2 = 800,
  CODE_FOR_negv2hi2 = 801,
  CODE_FOR_negv4qi2 = 802,
  CODE_FOR_bitrevsi = 803,
  CODE_FOR_cplxmulsv2hi_low_first = 804,
  CODE_FOR_cplxmulsv2hi_div2_low_first = 805,
  CODE_FOR_cplxmulsv2hi_div4_low_first = 806,
  CODE_FOR_cplxmulsv2hi_div8_low_first = 807,
  CODE_FOR_cplxmulsv2hi_hi = 808,
  CODE_FOR_cplxmulsv2hi_div2_hi = 809,
  CODE_FOR_cplxmulsv2hi_div4_hi = 810,
  CODE_FOR_cplxmulsv2hi_div8_hi = 811,
  CODE_FOR_cplxmulsv2hi = 812,
  CODE_FOR_cplxmulsv2hi_div2 = 813,
  CODE_FOR_cplxmulsv2hi_div4 = 814,
  CODE_FOR_vec_vit_max_v2hi = 815,
  CODE_FOR_vec_vit_sel_v2hi = 816,
  CODE_FOR_dotpv2hi = 817,
  CODE_FOR_dotspscv2hi_le = 818,
  CODE_FOR_reduc_plus_scal_v2hi = 819,
  CODE_FOR_dotupv2hi = 820,
  CODE_FOR_dotupscv2hi_le = 821,
  CODE_FOR_dotuspv2hi = 822,
  CODE_FOR_dotuspscv2hi_le = 823,
  CODE_FOR_dotpv4qi = 824,
  CODE_FOR_reduc_plus_scal_v4qi = 825,
  CODE_FOR_dotspscv4qi_le = 826,
  CODE_FOR_dotupv4qi = 827,
  CODE_FOR_dotupscv4qi_le = 828,
  CODE_FOR_dotuspv4qi = 829,
  CODE_FOR_dotuspscv4qi_le = 830,
  CODE_FOR_sdot_prodv2hi = 831,
  CODE_FOR_sdotspscv2hi_le = 832,
  CODE_FOR_udot_prodv2hi = 833,
  CODE_FOR_sdotupscv2hi_le = 834,
  CODE_FOR_sdotuspv2hi = 835,
  CODE_FOR_sdotuspscv2hi_le = 836,
  CODE_FOR_sdot_prodv4qi = 837,
  CODE_FOR_sdotspscv4qi_le = 838,
  CODE_FOR_udot_prodv4qi = 839,
  CODE_FOR_sdotupscv4qi_le = 840,
  CODE_FOR_sdotuspv4qi = 841,
  CODE_FOR_sdotuspscv4qi_le = 842,
  CODE_FOR_cmpv2hf_eq = 843,
  CODE_FOR_cmpv2hf_ne = 844,
  CODE_FOR_cmpv2hf_le = 845,
  CODE_FOR_cmpv2hf_lt = 846,
  CODE_FOR_cmpv2hf_ge = 847,
  CODE_FOR_cmpv2hf_gt = 848,
  CODE_FOR_cmpv2ohf_eq = 849,
  CODE_FOR_cmpv2ohf_ne = 850,
  CODE_FOR_cmpv2ohf_le = 851,
  CODE_FOR_cmpv2ohf_lt = 852,
  CODE_FOR_cmpv2ohf_ge = 853,
  CODE_FOR_cmpv2ohf_gt = 854,
  CODE_FOR_vec_cmpeqv2hfv2hi = 855,
  CODE_FOR_vec_cmpeqv2ohfv2hi = 856,
  CODE_FOR_cmpv2hf_sceq = 857,
  CODE_FOR_cmpv2hf_scne = 858,
  CODE_FOR_cmpv2hf_scle = 859,
  CODE_FOR_cmpv2hf_sclt = 860,
  CODE_FOR_cmpv2hf_scge = 861,
  CODE_FOR_cmpv2hf_scgt = 862,
  CODE_FOR_cmpv2hf_scgtu = 863,
  CODE_FOR_cmpv2hf_scltu = 864,
  CODE_FOR_cmpv2hf_scgeu = 865,
  CODE_FOR_cmpv2hf_scleu = 866,
  CODE_FOR_cmpv2ohf_sceq = 867,
  CODE_FOR_cmpv2ohf_scne = 868,
  CODE_FOR_cmpv2ohf_scle = 869,
  CODE_FOR_cmpv2ohf_sclt = 870,
  CODE_FOR_cmpv2ohf_scge = 871,
  CODE_FOR_cmpv2ohf_scgt = 872,
  CODE_FOR_cmpv2ohf_scgtu = 873,
  CODE_FOR_cmpv2ohf_scltu = 874,
  CODE_FOR_cmpv2ohf_scgeu = 875,
  CODE_FOR_cmpv2ohf_scleu = 876,
  CODE_FOR_cmp_swap_v2hf_sceq = 877,
  CODE_FOR_cmp_swap_v2hf_scne = 878,
  CODE_FOR_cmp_swap_v2hf_scle = 879,
  CODE_FOR_cmp_swap_v2hf_sclt = 880,
  CODE_FOR_cmp_swap_v2hf_scge = 881,
  CODE_FOR_cmp_swap_v2hf_scgt = 882,
  CODE_FOR_cmp_swap_v2hf_scgtu = 883,
  CODE_FOR_cmp_swap_v2hf_scltu = 884,
  CODE_FOR_cmp_swap_v2hf_scgeu = 885,
  CODE_FOR_cmp_swap_v2hf_scleu = 886,
  CODE_FOR_cmp_swap_v2ohf_sceq = 887,
  CODE_FOR_cmp_swap_v2ohf_scne = 888,
  CODE_FOR_cmp_swap_v2ohf_scle = 889,
  CODE_FOR_cmp_swap_v2ohf_sclt = 890,
  CODE_FOR_cmp_swap_v2ohf_scge = 891,
  CODE_FOR_cmp_swap_v2ohf_scgt = 892,
  CODE_FOR_cmp_swap_v2ohf_scgtu = 893,
  CODE_FOR_cmp_swap_v2ohf_scltu = 894,
  CODE_FOR_cmp_swap_v2ohf_scgeu = 895,
  CODE_FOR_cmp_swap_v2ohf_scleu = 896,
  CODE_FOR_cmpv2hi_eq = 897,
  CODE_FOR_cmpv2hi_ne = 898,
  CODE_FOR_cmpv2hi_le = 899,
  CODE_FOR_cmpv2hi_lt = 900,
  CODE_FOR_cmpv2hi_ge = 901,
  CODE_FOR_cmpv2hi_gt = 902,
  CODE_FOR_cmpv4qi_eq = 903,
  CODE_FOR_cmpv4qi_ne = 904,
  CODE_FOR_cmpv4qi_le = 905,
  CODE_FOR_cmpv4qi_lt = 906,
  CODE_FOR_cmpv4qi_ge = 907,
  CODE_FOR_cmpv4qi_gt = 908,
  CODE_FOR_cmpv2hi_gtu = 909,
  CODE_FOR_cmpv2hi_ltu = 910,
  CODE_FOR_cmpv2hi_geu = 911,
  CODE_FOR_cmpv2hi_leu = 912,
  CODE_FOR_cmpv4qi_gtu = 913,
  CODE_FOR_cmpv4qi_ltu = 914,
  CODE_FOR_cmpv4qi_geu = 915,
  CODE_FOR_cmpv4qi_leu = 916,
  CODE_FOR_cmpv2hi_sceq = 917,
  CODE_FOR_cmpv2hi_scne = 918,
  CODE_FOR_cmpv2hi_scle = 919,
  CODE_FOR_cmpv2hi_sclt = 920,
  CODE_FOR_cmpv2hi_scge = 921,
  CODE_FOR_cmpv2hi_scgt = 922,
  CODE_FOR_cmpv2hi_scgtu = 923,
  CODE_FOR_cmpv2hi_scltu = 924,
  CODE_FOR_cmpv2hi_scgeu = 925,
  CODE_FOR_cmpv2hi_scleu = 926,
  CODE_FOR_cmpv4qi_sceq = 927,
  CODE_FOR_cmpv4qi_scne = 928,
  CODE_FOR_cmpv4qi_scle = 929,
  CODE_FOR_cmpv4qi_sclt = 930,
  CODE_FOR_cmpv4qi_scge = 931,
  CODE_FOR_cmpv4qi_scgt = 932,
  CODE_FOR_cmpv4qi_scgtu = 933,
  CODE_FOR_cmpv4qi_scltu = 934,
  CODE_FOR_cmpv4qi_scgeu = 935,
  CODE_FOR_cmpv4qi_scleu = 936,
  CODE_FOR_cmp_swap_v2hi_sceq = 937,
  CODE_FOR_cmp_swap_v2hi_scne = 938,
  CODE_FOR_cmp_swap_v2hi_scle = 939,
  CODE_FOR_cmp_swap_v2hi_sclt = 940,
  CODE_FOR_cmp_swap_v2hi_scge = 941,
  CODE_FOR_cmp_swap_v2hi_scgt = 942,
  CODE_FOR_cmp_swap_v2hi_scgtu = 943,
  CODE_FOR_cmp_swap_v2hi_scltu = 944,
  CODE_FOR_cmp_swap_v2hi_scgeu = 945,
  CODE_FOR_cmp_swap_v2hi_scleu = 946,
  CODE_FOR_cmp_swap_v4qi_sceq = 947,
  CODE_FOR_cmp_swap_v4qi_scne = 948,
  CODE_FOR_cmp_swap_v4qi_scle = 949,
  CODE_FOR_cmp_swap_v4qi_sclt = 950,
  CODE_FOR_cmp_swap_v4qi_scge = 951,
  CODE_FOR_cmp_swap_v4qi_scgt = 952,
  CODE_FOR_cmp_swap_v4qi_scgtu = 953,
  CODE_FOR_cmp_swap_v4qi_scltu = 954,
  CODE_FOR_cmp_swap_v4qi_scgeu = 955,
  CODE_FOR_cmp_swap_v4qi_scleu = 956,
  CODE_FOR_flt_quietsfsi4 = 975,
  CODE_FOR_fle_quietsfsi4 = 976,
  CODE_FOR_flt_quietsfdi4 = 977,
  CODE_FOR_fle_quietsfdi4 = 978,
  CODE_FOR_flt_quietdfsi4 = 979,
  CODE_FOR_fle_quietdfsi4 = 980,
  CODE_FOR_flt_quietdfdi4 = 981,
  CODE_FOR_fle_quietdfdi4 = 982,
  CODE_FOR_flt_quiethfsi4 = 983,
  CODE_FOR_fle_quiethfsi4 = 984,
  CODE_FOR_flt_quiethfdi4 = 985,
  CODE_FOR_fle_quiethfdi4 = 986,
  CODE_FOR_flt_quietohfsi4 = 987,
  CODE_FOR_fle_quietohfsi4 = 988,
  CODE_FOR_flt_quietohfdi4 = 989,
  CODE_FOR_fle_quietohfdi4 = 990,
  CODE_FOR_jump = 1041,
  CODE_FOR_indirect_jumpsi = 1042,
  CODE_FOR_indirect_jumpdi = 1043,
  CODE_FOR_tablejumpsi = 1044,
  CODE_FOR_tablejumpdi = 1045,
  CODE_FOR_blockage = 1046,
  CODE_FOR_simple_return = 1047,
  CODE_FOR_simple_return_internal = 1048,
  CODE_FOR_simple_it_return = 1049,
  CODE_FOR_simple_itu_return = 1050,
  CODE_FOR_simple_its_return = 1051,
  CODE_FOR_simple_ith_return = 1052,
  CODE_FOR_simple_itm_return = 1053,
  CODE_FOR_eh_set_lr_si = 1054,
  CODE_FOR_eh_set_lr_di = 1055,
  CODE_FOR_set_hwloop_lpstart = 1056,
  CODE_FOR_set_hwloop_lpend = 1057,
  CODE_FOR_set_hwloop_lc = 1058,
  CODE_FOR_set_hwloop_lc_le = 1059,
  CODE_FOR_hw_loop_prolog = 1060,
  CODE_FOR_zero_cost_loop_end = 1061,
  CODE_FOR_loop_end = 1062,
  CODE_FOR_sibcall_internal = 1063,
  CODE_FOR_sibcall_value_internal = 1064,
  CODE_FOR_call_internal = 1065,
  CODE_FOR_call_value_internal = 1066,
  CODE_FOR_nop = 1067,
  CODE_FOR_forced_nop = 1068,
  CODE_FOR_trap = 1069,
  CODE_FOR_gpr_save = 1070,
  CODE_FOR_gpr_restore = 1071,
  CODE_FOR_gpr_restore_return = 1072,
  CODE_FOR_riscv_frflags = 1073,
  CODE_FOR_riscv_fsflags = 1074,
  CODE_FOR_stack_tiesi = 1075,
  CODE_FOR_stack_tiedi = 1076,
  CODE_FOR_mem_thread_fence_1 = 1078,
  CODE_FOR_atomic_storesi = 1079,
  CODE_FOR_atomic_storedi = 1080,
  CODE_FOR_atomic_addsi = 1081,
  CODE_FOR_atomic_orsi = 1082,
  CODE_FOR_atomic_xorsi = 1083,
  CODE_FOR_atomic_andsi = 1084,
  CODE_FOR_atomic_adddi = 1085,
  CODE_FOR_atomic_ordi = 1086,
  CODE_FOR_atomic_xordi = 1087,
  CODE_FOR_atomic_anddi = 1088,
  CODE_FOR_atomic_fetch_addsi = 1089,
  CODE_FOR_atomic_fetch_orsi = 1090,
  CODE_FOR_atomic_fetch_xorsi = 1091,
  CODE_FOR_atomic_fetch_andsi = 1092,
  CODE_FOR_atomic_fetch_adddi = 1093,
  CODE_FOR_atomic_fetch_ordi = 1094,
  CODE_FOR_atomic_fetch_xordi = 1095,
  CODE_FOR_atomic_fetch_anddi = 1096,
  CODE_FOR_atomic_exchangesi = 1097,
  CODE_FOR_atomic_exchangedi = 1098,
  CODE_FOR_atomic_cas_value_strongsi = 1099,
  CODE_FOR_atomic_cas_value_strongdi = 1100,
  CODE_FOR_mulditi3 = 1141,
  CODE_FOR_umulditi3 = 1142,
  CODE_FOR_usmulditi3 = 1143,
  CODE_FOR_mulsidi3 = 1144,
  CODE_FOR_umulsidi3 = 1145,
  CODE_FOR_usmulsidi3 = 1146,
  CODE_FOR_divsf3 = 1147,
  CODE_FOR_divdf3 = 1148,
  CODE_FOR_divhf3 = 1149,
  CODE_FOR_divohf3 = 1150,
  CODE_FOR_sqrtsf2 = 1151,
  CODE_FOR_sqrtdf2 = 1152,
  CODE_FOR_sqrthf2 = 1153,
  CODE_FOR_sqrtohf2 = 1154,
   CODE_FOR_maddv1sfsf4 = CODE_FOR_nothing,
   CODE_FOR_maddhfsf4 = CODE_FOR_nothing,
  CODE_FOR_maddohfsf4 = 1155,
  CODE_FOR_clzsi2 = 1156,
  CODE_FOR_paritysi2 = 1157,
  CODE_FOR_movdi = 1158,
  CODE_FOR_load_evt_unit_fenced = 1159,
  CODE_FOR_pulp_omp_barrier = 1160,
  CODE_FOR_pulp_omp_critical_start = 1161,
  CODE_FOR_pulp_omp_critical_end = 1162,
  CODE_FOR_OffsetedWritePtr = 1163,
  CODE_FOR_OffsetedReadNonVol_m1 = 1164,
  CODE_FOR_movsi = 1165,
  CODE_FOR_movv2hi = 1166,
  CODE_FOR_movv4qi = 1167,
  CODE_FOR_movmisalignv4qi = 1168,
  CODE_FOR_movmisalignv2hi = 1169,
  CODE_FOR_movmisalignv2hf = 1170,
  CODE_FOR_movmisalignv2ohf = 1171,
  CODE_FOR_movmisalignohf = 1172,
  CODE_FOR_movmisalignsf = 1173,
  CODE_FOR_movmisalignsi = 1174,
  CODE_FOR_movhi = 1175,
  CODE_FOR_movqi = 1176,
  CODE_FOR_movhf = 1177,
  CODE_FOR_movohf = 1178,
  CODE_FOR_movsf = 1179,
  CODE_FOR_movdf = 1180,
  CODE_FOR_clear_cache = 1181,
  CODE_FOR_movmemsi = 1182,
  CODE_FOR_vec_initv2hf_internal_f = 1183,
  CODE_FOR_vec_initv2ohf_internal_f = 1184,
  CODE_FOR_vec_initv2hf = 1185,
  CODE_FOR_vec_initv2ohf = 1186,
  CODE_FOR_vec_initv2hi = 1187,
  CODE_FOR_vec_initv4qi = 1188,
  CODE_FOR_movv2hf = 1189,
  CODE_FOR_movv2ohf = 1190,
  CODE_FOR_movv1sf = 1191,
  CODE_FOR_floatv2hiv2hf2 = 1192,
  CODE_FOR_floatv2hiv2ohf2 = 1193,
  CODE_FOR_floatunsv2hiv2hf2 = 1194,
  CODE_FOR_floatunsv2hiv2ohf2 = 1195,
  CODE_FOR_fix_truncv2hfv2hi2 = 1196,
  CODE_FOR_fix_truncv2ohfv2hi2 = 1197,
  CODE_FOR_fixuns_truncv2hfv2hi2 = 1198,
  CODE_FOR_fixuns_truncv2ohfv2hi2 = 1199,
  CODE_FOR_vec_unpacks_hi_v2hf = 1200,
  CODE_FOR_vec_unpacks_hi_v2ohf = 1201,
  CODE_FOR_vec_pack_v4qi = 1202,
  CODE_FOR_vec_perm_constv2hf = 1203,
  CODE_FOR_vec_perm_constv2ohf = 1204,
  CODE_FOR_vec_perm_constv2hi = 1205,
  CODE_FOR_vec_permv2hf = 1206,
  CODE_FOR_vec_permv2ohf = 1207,
  CODE_FOR_vec_permv2hi = 1208,
  CODE_FOR_vec_permv4qi = 1209,
  CODE_FOR_vec_set_firstv2hf = 1210,
  CODE_FOR_vec_set_firstv2ohf = 1211,
  CODE_FOR_vec_set_firstv2hi = 1212,
  CODE_FOR_vec_set_firstv4qi = 1213,
  CODE_FOR_vec_setv2hf = 1214,
  CODE_FOR_vec_setv2ohf = 1215,
  CODE_FOR_vec_setv2hi = 1216,
  CODE_FOR_vec_setv4qi = 1217,
  CODE_FOR_fmav2hf4 = 1218,
  CODE_FOR_fmav2ohf4 = 1219,
  CODE_FOR_cplxmulsv2hi2 = 1220,
  CODE_FOR_cplxmulsv2hi2_div2 = 1221,
  CODE_FOR_cplxmulsv2hi2_div4 = 1222,
  CODE_FOR_cplxmulsv2hi2_div8 = 1223,
  CODE_FOR_vcondv2hiv2hf = 1224,
  CODE_FOR_vcondv2hiv2ohf = 1225,
  CODE_FOR_vcondv2hiv2hi = 1226,
  CODE_FOR_vcondv4qiv4qi = 1227,
  CODE_FOR_vconduv2hiv2hi = 1228,
  CODE_FOR_vconduv4qiv4qi = 1229,
  CODE_FOR_condjump = 1230,
  CODE_FOR_cbranchsi4 = 1231,
  CODE_FOR_cbranchdi4 = 1232,
  CODE_FOR_cbranchsf4 = 1233,
  CODE_FOR_cbranchdf4 = 1234,
  CODE_FOR_cbranchhf4 = 1235,
  CODE_FOR_cbranchohf4 = 1236,
  CODE_FOR_cstoresi4 = 1237,
  CODE_FOR_cstoredi4 = 1238,
  CODE_FOR_cstoresf4 = 1239,
  CODE_FOR_cstoredf4 = 1240,
  CODE_FOR_cstorehf4 = 1241,
  CODE_FOR_cstoreohf4 = 1242,
  CODE_FOR_indirect_jump = 1243,
  CODE_FOR_tablejump = 1244,
  CODE_FOR_prologue = 1245,
  CODE_FOR_epilogue = 1246,
  CODE_FOR_sibcall_epilogue = 1247,
  CODE_FOR_return = 1248,
  CODE_FOR_eh_return = 1249,
  CODE_FOR_doloop_end = 1250,
  CODE_FOR_sibcall = 1251,
  CODE_FOR_sibcall_value = 1252,
  CODE_FOR_call = 1253,
  CODE_FOR_call_value = 1254,
  CODE_FOR_untyped_call = 1255,
  CODE_FOR_memory_barrier = 1256,
  CODE_FOR_mem_thread_fence = 1257,
  CODE_FOR_atomic_compare_and_swapsi = 1258,
  CODE_FOR_atomic_compare_and_swapdi = 1259,
  CODE_FOR_atomic_test_and_set = 1260
};

const unsigned int NUM_INSN_CODES = 1261;
#endif /* GCC_INSN_CODES_H */
