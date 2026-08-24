#include "st/generated.hpp"
// Generated translation unit: source/original/Maps/DefObj.cpp

// 00692C10 FUN_00692c10
#line 4 "decomp/ST.exe/functions/00692C10/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00692C10_param_1Enum. Cases:
   CASE_A=10;CASE_14=20;CASE_32=50;CASE_5A=90;CASE_8C=140;CASE_10E=270;CASE_118=280;CASE_122=290;CASE_12C=300;CASE_172=370;CASE_BBE=3006;CASE_BBF=3007;CASE_BC0=3008;CASE_BC1=3009;CASE_BC3=3011

   [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Maps\DefObj.cpp
   Diagnostic line evidence: 442 | 448 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00694CD0 -> 00692C10 @ 00694E08; MOVSX at 00694DFA establishes signed source width 2 */

uint * __cdecl
st::fn_00692C10(Global_sub_00692C10_param_1Enum param_1,int param_2,undefined4 *param_3,int param_4,
            uint param_5)

{
  char cVar1;
  int iVar3;
  uint uVar3;
  int iVar7;
  uint *puVar4;
  int iVar5;
  uint uVar5;
  uint uVar6;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  Global_sub_00692C10_param_1Enum *pGVar11;
  char *pcVar12;
  uint *puVar13;
  CHAR local_108 [260];

  if (param_1 < 0x1a5) {
    if (param_1 == 0x1a4) {
      *param_3 = 0x155;
      _DAT_007d5e08 = param_2;
      _DAT_007d5e1c = (undefined2)param_4;
      return (uint *)&DAT_007d5df0;
    }
    if (param_1 < 0xe7) {
      if (param_1 == 0xe6) {
        _DAT_007d5b2c = param_4;
        *param_3 = 0x38;
        return (uint *)&DAT_007d5af8;
      }
      switch(param_1) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      case CASE_A:
        *param_3 = 0xa6;
        memset(&DAT_00853cd8, 0, 0xa6); /* compiler bulk-zero initialization */
        DAT_00853cd8 = param_1;
        _DAT_00853cdc = 0xff;
        _DAT_00853ce0 = 2;
        _DAT_00853ce4 = 0;
        _DAT_00853ce8 = 0;
        _DAT_00853cf0 = 0;
        uVar3 = st::fn_00401131(param_2);
        if (DAT_00853d84 <= uVar3) {
          iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Maps\\DefObj.cpp"),0x1ba,0,uVar3,
                                     st::mutable_c_string("%s"),"Out of Range Entourage Group Index ");
          if (iVar7 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          uVar3 = 0;
        }
        iVar8 = uVar3 * 0x218;
        if (*(uint *)(iVar8 + 0x20c + DAT_00853d80) <= param_5) {
          iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Maps\\DefObj.cpp"),0x1c0,0,param_5,
                                     st::mutable_c_string("%s"),"Out of Range Entourage Index ");
          if (iVar5 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          param_5 = 0;
        }
        pcVar9 = (char *)(DAT_00853d80 + iVar8);
        _DAT_00853d7a = param_2;
        _DAT_00853d76 = *(undefined4 *)(pcVar9 + 0x214);
        if (*(int *)(pcVar9 + 0x210) != 0) {
          _DAT_00853d72 = 0xffffffff;
          /* ST_CALLSITE[00692DE7]: CALL dword ptr [0x0085bde8] */
          st::external_00000080(local_108,st::mutable_c_string("%s%u"),pcVar9,param_5);
          iVar3 = DAT_00853d80;
          uVar5 = 0xffffffff;
          pcVar9 = local_108;
          do {
            pcVar10 = pcVar9;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar10 = pcVar9 + 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar10;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar9 = pcVar10 + -uVar5;
          pcVar10 = (char *)&DAT_00853cf2;
          memmove(pcVar10, pcVar9, uVar5); /* compiler REP MOVS byte copy */
          uVar6 = 0;
          pcVar9 = (char *)(iVar8 + 0x104 + iVar3);
          iVar8 = -1;
          pcVar10 = pcVar9;
          do {
            if (iVar8 == 0) break;
            iVar8 = iVar8 + -1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          if (iVar8 != -2) {
            /* ST_CALLSITE[00692E41]: CALL dword ptr [0x0085bde8] */
            st::external_00000080(local_108,st::mutable_c_string("%s%u"),pcVar9,param_5);
            uVar5 = 0xffffffff;
            pcVar9 = local_108;
            do {
              pcVar10 = pcVar9;
              if (uVar5 == 0) break;
              uVar5 = uVar5 - 1;
              pcVar10 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar10;
            } while (cVar1 != '\0');
            uVar5 = ~uVar5;
            pcVar9 = pcVar10 + -uVar5;
            pcVar10 = (char *)&DAT_00853d32;
            memmove(pcVar10, pcVar9, uVar5); /* compiler REP MOVS byte copy */
          }
          return &DAT_00853cd8;
        }
        uVar5 = 0xffffffff;
        pcVar10 = pcVar9;
        do {
          pcVar12 = pcVar10;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar12 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar12;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar10 = pcVar12 + -uVar5;
        pcVar12 = (char *)&DAT_00853cf2;
        memmove(pcVar12, pcVar10, uVar5); /* compiler REP MOVS byte copy */
        uVar6 = 0;
        uVar5 = 0xffffffff;
        pcVar9 = pcVar9 + 0x104;
        do {
          pcVar10 = pcVar9;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar10 = pcVar9 + 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar10;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        pcVar9 = pcVar10 + -uVar5;
        pcVar10 = (char *)&DAT_00853d32;
        memmove(pcVar10, pcVar9, uVar5); /* compiler REP MOVS byte copy */
        _DAT_00853d72 = param_5;
        return &DAT_00853cd8;
      case CASE_14:
        _DAT_007d5c50 = param_2;
        _DAT_007d5c58 = (undefined2)param_4;
        *param_3 = 0x69;
        return (uint *)&DAT_007d5c38;
      case CASE_32:
        *param_3 = 0x28;
        _DAT_007d5a3c = param_4;
        _DAT_007d5a44 = param_2;
        return (uint *)&DAT_007d5a20;
      case CASE_5A:
        *param_3 = 0x28;
        _DAT_007d5a1c = param_2;
        _DAT_007d5a14 = param_4;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        _DAT_007d5a18 = *(undefined4 *)(&DAT_007d59e0 + (param_2 * 3 + -0x297) * 4);
        return (uint *)&DAT_007d59f8;
      case CASE_8C:
        *param_3 = 0x34;
        _DAT_007d5a64 = param_4;
        return (uint *)&DAT_007d5a48;
      }
    }
    else {
      switch(param_1) {
      case CASE_10E:
        *param_3 = 0x28;
        _DAT_007d5d20 = param_2;
        _DAT_007d5d1c = param_4;
        return (uint *)&DAT_007d5d00;
      case CASE_118:
        *param_3 = 0x28;
        _DAT_007d5d48 = param_2;
        _DAT_007d5d44 = param_4;
        return (uint *)&DAT_007d5d28;
      case CASE_122:
        *param_3 = 0x28;
        _DAT_007d5d70 = param_2;
        _DAT_007d5d6c = param_4;
        return (uint *)&DAT_007d5d50;
      case CASE_12C:
        *param_3 = 0x28;
        _DAT_007d5d98 = param_2;
        _DAT_007d5d94 = param_4;
        return (uint *)&DAT_007d5d78;
      case CASE_172:
        *param_3 = 0x151;
        _DAT_007d5f60 = param_2;
        _DAT_007d5f70 = (undefined2)param_4;
        return (uint *)&DAT_007d5f48;
      }
    }
  }
  else if (param_1 < CASE_BBE) {
    if (param_1 == 0xbbd) {
      *param_3 = 0x2c;
      return (uint *)&DAT_007d5b98;
    }
    if (param_1 < 0xbba) {
      if (param_1 == 0xbb9) goto switchD_00693197_caseD_bc0;
      if (param_1 == 0x1ae) {
        *param_3 = 0x4f;
        _DAT_007d5dc0 = param_4;
        _DAT_007d5db4 = param_2;
        return (uint *)&DAT_007d5da0;
      }
      if (param_1 == 1000) {
        _DAT_007d5cbc = param_2;
        _DAT_007d5cc8 = param_4;
        _DAT_007d5cb8 = 0;
        if (((((((param_2 == 0x3b) || (param_2 == 0x3c)) || (param_2 == 0x3d)) ||
              ((param_2 == 0x41 || (param_2 == 0x43)))) || (param_2 == 0x48)) ||
            (((((param_2 == 0x32 || (param_2 == 0x33)) ||
               ((param_2 == 0x34 || (((param_2 == 0x35 || (param_2 == 0x37)) || (param_2 == 0x4d))))
               )) || ((param_2 == 0x52 || (param_2 == 0x50)))) || (param_2 == 0x5b)))) ||
           ((((param_2 == 0x6c || (param_2 == 99)) ||
             ((param_2 == 0x60 || (((param_2 == 0x5f || (param_2 == 0x6e)) || (param_2 == 0x5d))))))
            || (((param_2 == 0x53 || (param_2 == 0x5c)) ||
                ((param_2 == 0x6d ||
                 (((param_2 == 0x70 || (param_2 == 100)) || ((param_2 == 0x62 || (param_2 == 0x73)))
                  ))))))))) {
          _DAT_007d5cb8 = 1;
        }
        *param_3 = 0x57;
        return (uint *)&DAT_007d5ca8;
      }
    }
    else {
      if (param_1 == 0xbba) {
        _DAT_007d5b70 = param_4;
        *param_3 = 0x65;
        puVar13 = &DAT_007d5b7d;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = 0xffffffff;
          puVar13 = puVar13 + 1;
        }
        return (uint *)&DAT_007d5b30;
      }
      if (param_1 == 0xbbc) goto switchD_00693197_caseD_bbf;
    }
  }
  else {
    switch(param_1) {
    case CASE_BBE:
      *param_3 = 0x24;
      _DAT_007d5af0 = param_5;
      return (uint *)&DAT_007d5ad0;
    case CASE_BBF:
switchD_00693197_caseD_bbf:
      _DAT_007d5aa8 = param_1;
      _DAT_007d5ac4 = param_4;
      _DAT_007d5ac8 = param_2;
      _DAT_007d5acc = param_5;
      *param_3 = 0x28;
      return (uint *)&DAT_007d5aa8;
    case CASE_BC0:
switchD_00693197_caseD_bc0:
      _DAT_007d5a80 = param_1;
      _DAT_007d5a9c = param_4;
      _DAT_007d5aa0 = param_2;
      _DAT_007d5aa4 = param_5;
      *param_3 = 0x28;
      return (uint *)&DAT_007d5a80;
    case CASE_BC1:
      *param_3 = 0x2c;
      return (uint *)&DAT_007d5c08;
    case CASE_BC3:
      *param_3 = 0x3f;
      return (uint *)&DAT_007d5bc8;
    }
  }
  return nullptr;
}

