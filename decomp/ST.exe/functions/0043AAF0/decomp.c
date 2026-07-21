#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetCamPoint

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0043AE40 -> 0043AAF0 @ 0043AFDF | 0043AE40 -> 0043AAF0 @ 0043B3A5 | 0043AE40 ->
   0043AAF0 @ 0043B82D | 0043AE40 -> 0043AAF0 @ 0043BAA0
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0043AC63 MOVSX EDX,word ptr [EBP + 0x8] | 0043AC7B
   MOVSX EDX,word ptr [EBP + 0x8] | 0043AD55 MOVSX ECX,word ptr [EBP + 0x8] */

undefined4
STAllPlayersC::GetCamPoint
          (short param_1,uint param_2,DArrayTy *param_3,uint param_4,int *param_5,int *param_6,
          int *param_7,uint *param_8)

{
  dword dVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  STFishC *pSVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000006;
  STAllPlayersC_GetObjPtr_param_3Enum SVar10;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;

  uVar6 = 0;
  iVar7 = 0;
  iVar8 = 0;
  local_14 = 10000;
  if ((((param_5 == (int *)0x0) && (param_6 == (int *)0x0)) && (param_7 == (int *)0x0)) &&
     (param_8 == (uint *)0x0)) {
    return 0xffffffff;
  }
  if (_param_1 < 0x19b) {
    if ((_param_1 == 0x19a) || (_param_1 == 0x3c)) {
      if (param_3 == (DArrayTy *)0x0) {
        return 0xffffffff;
      }
      dVar1 = param_3->count;
      local_c = 0;
      if (0 < (int)dVar1) {
        do {
          DArrayGetElement(param_3,local_c,&local_10);
          if ((short)local_10 != -1) {
            uVar6 = uVar6 + 1;
            pSVar5 = (STFishC *)GetObjPtr(g_sTAllPlayers_007FA174,(char)param_2,local_10,CASE_1);
            STFishC::sub_004162B0
                      (pSVar5,&param_1,(undefined2 *)&local_8,(undefined2 *)((int)&param_4 + 2));
            iVar7 = iVar7 + _param_1;
            iVar8 = iVar8 + local_8;
          }
          local_c = local_c + 1;
        } while ((int)local_c < (int)dVar1);
        if (uVar6 != 0) {
          local_c = 0;
          do {
            DArrayGetElement(param_3,local_c,&local_10);
            if ((short)local_10 != -1) {
              pSVar5 = (STFishC *)GetObjPtr(g_sTAllPlayers_007FA174,(char)param_2,local_10,CASE_1);
              STFishC::sub_004162B0
                        (pSVar5,&param_1,(undefined2 *)&local_8,(undefined2 *)((int)&param_4 + 2));
              iVar3 = FUN_006acf90((int)param_1,(int)(short)local_8,
                                   (int)(short)((int)(short)iVar7 / (int)(uint)uVar6),
                                   (int)(short)((int)(short)iVar8 / (int)(uint)uVar6));
              bVar9 = (ushort)iVar3 < (ushort)local_14;
              if (bVar9) {
                if (param_5 != (int *)0x0) {
                  *param_5 = (int)param_1;
                }
                if (param_6 != (int *)0x0) {
                  *param_6 = (int)(short)local_8;
                }
                if (param_7 != (int *)0x0) {
                  *param_7 = (int)param_4._2_2_;
                }
                local_14 = iVar3;
                if (param_8 != (uint *)0x0) {
                  *param_8 = *(uint *)&pSVar5->field_0x1ed;
                }
              }
            }
            local_c = local_c + 1;
          } while ((int)local_c < (int)dVar1);
          return 0;
        }
      }
      return 0xffffffff;
    }
    if (_param_1 == 0x5a) {
      SVar10 = CASE_4;
    }
    else {
      if (_param_1 != 0x172) {
LAB_0043acdb:
        iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x19fb,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC__GetCamPoint_inval_007a79f4);
        if (iVar7 == 0) {
          return 0xffffffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      SVar10 = CASE_2;
    }
  }
  else if (_param_1 == 0x1a4) {
    SVar10 = CASE_5;
  }
  else if (_param_1 == 0x1ae) {
    SVar10 = CASE_3;
  }
  else {
    if (_param_1 != 0x1b8) goto LAB_0043acdb;
    SVar10 = CASE_6;
  }
  pSVar5 = (STFishC *)GetObjPtr(g_sTAllPlayers_007FA174,(char)param_2,param_4,SVar10);
  STFishC::sub_004162B0(pSVar5,&param_1,(undefined2 *)&local_8,(undefined2 *)((int)&param_4 + 2));
  if (param_5 != (int *)0x0) {
    *param_5 = (int)param_1;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = (int)(short)local_8;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = (int)param_4._2_2_;
  }
  if (param_8 != (uint *)0x0) {
    *param_8 = *(uint *)&pSVar5->field_0x1ed;
  }
  return 0;
}

