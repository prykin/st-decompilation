
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006686F0_param_1Enum. Cases:
   CASE_320=800;CASE_321=801;CASE_384=900;CASE_385=901;CASE_386=902;CASE_387=903;CASE_388=904;CASE_389=905;CASE_38A=906;CASE_38C=908;CASE_38D=909;CASE_38E=910;CASE_38F=911;CASE_7D1=2001;CASE_7D2=2002;CASE_7D3=2003;CASE_7D4=2004;CASE_7D6=2006;CASE_7D7=2007;CASE_7DA=2010;CASE_7DC=2012;CASE_7DD=2013;CASE_7DE=2014;CASE_7E4=2020;CASE_7E5=2021;CASE_7E6=2022;CASE_7E7=2023;CASE_7E8=2024;CASE_7E9=2025;CASE_7EA=2026;CASE_7EB=2027;CASE_7EC=2028;CASE_7ED=2029;CASE_7EE=2030;CASE_7EF=2031;CASE_7F0=2032;CASE_7F2=2034;CASE_7F3=2035;CASE_7F4=2036;CASE_7F5=2037;CASE_7F6=2038;CASE_7F7=2039;CASE_7F8=2040;CASE_7F9=2041;CASE_7FA=2042;CASE_7FB=2043;CASE_7FC=2044;CASE_80C=2060;CASE_80D=2061;CASE_80E=2062;CASE_80F=2063;CASE_810=2064;CASE_816=2070;CASE_817=2071;CASE_818=2072;CASE_819=2073;CASE_81A=2074;CASE_81B=2075;CASE_81C=2076;CASE_81D=2077;CASE_82A=2090;CASE_82B=2091;CASE_82C=2092;CASE_82D=2093;CASE_82E=2094;CASE_82F=2095;CASE_830=2096;CASE_831=2097;CASE_848=2120;CASE_849=2121;CASE_84A=2122;CASE_84B=2123;CASE_84C=2124;CASE_84D=2125
    */

undefined4 __cdecl FUN_006686f0(Global_sub_006686F0_param_1Enum param_1)

{
  if (0x7f1 < (int)param_1) {
    switch(param_1) {
    case CASE_7F2:
    case CASE_7F3:
    case CASE_7F4:
    case CASE_7FC:
    case CASE_819:
    case CASE_81B:
    case CASE_81C:
    case CASE_82A:
    case CASE_830:
      goto switchD_006687a8_caseD_7f2;
    case CASE_7F5:
    case CASE_7FB:
      return 7;
    case CASE_7F6:
    case CASE_7F7:
switchD_00668784_caseD_7ee:
      return 10;
    case CASE_7F8:
    case CASE_7F9:
    case CASE_82F:
      return 8;
    case CASE_7FA:
      return 0xb;
    default:
      goto switchD_0066872f_caseD_322;
    case CASE_80C:
    case CASE_80D:
    case CASE_810:
    case CASE_831:
switchD_0066874d_caseD_38f:
      return 6;
    case CASE_80E:
    case CASE_80F:
      return 5;
    case CASE_816:
    case CASE_817:
    case CASE_818:
    case CASE_848:
      goto switchD_0066872f_caseD_320;
    case CASE_81A:
    case CASE_81D:
    case CASE_82D:
      goto switchD_0066872f_caseD_388;
    case CASE_82B:
    case CASE_82C:
      return 4;
    case CASE_82E:
      return 0xc;
    case CASE_849:
    case CASE_84A:
    case CASE_84B:
    case CASE_84C:
    case CASE_84D:
switchD_00668784_caseD_7d7:
      return 0;
    }
  }
  if (param_1 == 0x7f1) {
switchD_006687a8_caseD_7f2:
    return 3;
  }
  if (0x7d5 < (int)param_1) {
    switch(param_1) {
    case CASE_7D6:
    case CASE_7DD:
    case CASE_7DE:
    case CASE_7E5:
    case CASE_7E7:
    case CASE_7E8:
    case CASE_7EA:
    case CASE_7EC:
      goto switchD_0066872f_caseD_320;
    case CASE_7D7:
    case CASE_7DA:
    case CASE_7DC:
    case CASE_7E4:
    case CASE_7E9:
    case CASE_7EB:
    case CASE_7ED:
      goto switchD_00668784_caseD_7d7;
    default:
      goto switchD_0066872f_caseD_322;
    case CASE_7E6:
      goto switchD_0066872f_caseD_388;
    case CASE_7EE:
    case CASE_7EF:
    case CASE_7F0:
      goto switchD_00668784_caseD_7ee;
    }
  }
  if (param_1 != 0x7d5) {
    if (0x38b < (int)param_1) {
      if (2000 < (int)param_1) {
        switch(param_1) {
        case CASE_7D1:
        case CASE_7D3:
          goto switchD_0066872f_caseD_388;
        case CASE_7D2:
        case CASE_7D4:
          goto switchD_0066872f_caseD_320;
        default:
switchD_0066872f_caseD_322:
          return 0xffffffff;
        }
      }
      if (param_1 != 2000) {
        switch(param_1) {
        case CASE_38C:
          goto switchD_0066872f_caseD_320;
        case CASE_38D:
          break;
        case CASE_38E:
          return 9;
        case CASE_38F:
          goto switchD_0066874d_caseD_38f;
        default:
          goto switchD_0066872f_caseD_322;
        }
      }
switchD_0066872f_caseD_388:
      return 2;
    }
    if (param_1 != 0x38b) {
      switch(param_1) {
      case CASE_320:
      case CASE_321:
      case CASE_384:
      case CASE_385:
      case CASE_386:
      case CASE_387:
      case CASE_38A:
        break;
      default:
        goto switchD_0066872f_caseD_322;
      case CASE_388:
      case CASE_389:
        goto switchD_0066872f_caseD_388;
      }
    }
  }
switchD_0066872f_caseD_320:
  return 1;
}

