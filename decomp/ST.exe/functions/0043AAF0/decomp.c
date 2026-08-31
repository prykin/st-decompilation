#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetCamPoint

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0043AE40 -> 0043AAF0 @ 0043AFDF | 0043AE40 -> 0043AAF0 @ 0043B3A5 | 0043AE40 ->
   0043AAF0 @ 0043B82D | 0043AE40 -> 0043AAF0 @ 0043BAA0
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0043AC63 MOVSX EDX,word ptr [EBP + 0x8] | 0043AC7B
   MOVSX EDX,word ptr [EBP + 0x8] | 0043AD55 MOVSX ECX,word ptr [EBP + 0x8]
   [STAbiConsistencyApplier] stack_parameter_width_revert target=parameter:0: parameter=/undefined4
   Evidence: previous automatic narrow-width proof no longer qualifies; restoring generated baseline
   /undefined4
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/short
   previous_type=/undefined4 Evidence: restoring an automation-owned narrow ABI from its exact
   surviving MOVSX/MOVZX machine anchor; downstream prototype churn is not contradictory width
   evidence */

undefined4
STAllPlayersC::GetCamPoint
          (short param_1,uint param_2,DArrayTy *param_3,uint param_4,int *param_5,int *param_6,
          int *param_7,uint *param_8)

{
  dword dVar1;
  int iVar3;
  int iVar7;
  uint uVar4;
  STGameObjC *pSVar5;
  ushort uVar6;
  int iVar8;
  int iVar9;
  bool bVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined2 in_stack_00000006;
  STAllPlayersC_GetObjPtr_param_3Enum SVar11;
  int local_14;
  byte local_10 [4];
  uint local_c;
  int local_8;

  uVar6 = 0;
  iVar8 = 0;
  iVar9 = 0;
  local_14 = 10000;
  if ((((param_5 == nullptr) && (param_6 == nullptr)) && (param_7 == nullptr)) &&
     (param_8 == nullptr)) {
    return 0xffffffff;
  }
  if (_param_1 < 0x19b) {
    if ((_param_1 == 0x19a) || (_param_1 == 0x3c)) {
      if (param_3 == nullptr) {
        return 0xffffffff;
      }
      dVar1 = param_3->count;
      local_c = 0;
      if (0 < (int)dVar1) {
        do {

          DArrayGetElement(param_3,local_c,local_10);
          if (STPiece<0,2>(local_10) != 0xffff) {
            uVar6 = uVar6 + 1;
            /* ST_CALLSITE[0043ABBD]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
            pSVar5 = GetObjPtr(g_allPlayers_007FA174,(char)param_2,STPiece<0,2>(local_10),CASE_1);
            /* ST_CALLSITE[0043ABD0]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            STFishC::sub_004162B0
                      ((STFishC *)pSVar5,&param_1,(short *)&local_8,(short *)((int)&param_4 + 2));
            iVar8 = iVar8 + _param_1;
            iVar9 = iVar9 + local_8;
          }
          local_c = local_c + 1;
        } while ((int)local_c < (int)dVar1);
        if (uVar6 != 0) {
          local_c = 0;
          do {

            DArrayGetElement(param_3,local_c,local_10);
            if (STPiece<0,2>(local_10) != 0xffff) {
              /* ST_CALLSITE[0043AC3D]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
              pSVar5 = GetObjPtr(g_allPlayers_007FA174,(char)param_2,STPiece<0,2>(local_10),CASE_1);
              /* ST_CALLSITE[0043AC52]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
              STFishC::sub_004162B0
                        ((STFishC *)pSVar5,&param_1,(short *)&local_8,(short *)((int)&param_4 + 2));

              iVar3 = FUN_006acf90((int)param_1,(short)local_8,
                                   (short)((short)iVar8 / (int)(uint)uVar6),
                                   (short)((short)iVar9 / (int)(uint)uVar6));
              bVar10 = (ushort)iVar3 < (ushort)local_14;
              if (bVar10) {
                if (param_5 != nullptr) {
                  *param_5 = (int)param_1;
                }
                if (param_6 != nullptr) {
                  *param_6 = (short)local_8;
                }
                if (param_7 != nullptr) {
                  *param_7 = (int)STPiece<2,2>(param_4);
                }
                local_14 = iVar3;
                if (param_8 != nullptr) {
                  *param_8 = pSVar5->field_01ED;
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
      SVar11 = CASE_4;
    }
    else {
      if (_param_1 != 0x172) {
LAB_0043acdb:

        iVar7 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x19fb,0,0,"%s"
                                   ,"STAllPlayersC::GetCamPoint invalid game type");
        if (iVar7 == 0) {
          return 0xffffffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      SVar11 = CASE_2;
    }
  }
  else if (_param_1 == 0x1a4) {
    SVar11 = CASE_5;
  }
  else if (_param_1 == 0x1ae) {
    SVar11 = CASE_3;
  }
  else {
    if (_param_1 != 0x1b8) goto LAB_0043acdb;
    SVar11 = CASE_6;
  }
  /* ST_CALLSITE[0043AD34]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STFishC; source view only; no Ghidra override */
  pSVar5 = GetObjPtr(g_allPlayers_007FA174,(char)param_2,(ushort)param_4,SVar11);
  /* ST_CALLSITE[0043AD49]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
  STFishC::sub_004162B0((STFishC *)pSVar5,&param_1,(short *)&local_8,(short *)((int)&param_4 + 2));
  if (param_5 != nullptr) {
    *param_5 = (int)param_1;
  }
  if (param_6 != nullptr) {
    *param_6 = (short)local_8;
  }
  if (param_7 != nullptr) {
    *param_7 = (int)STPiece<2,2>(param_4);
  }
  if (param_8 != nullptr) {
    *param_8 = pSVar5->field_01ED;
  }
  return 0;
}

