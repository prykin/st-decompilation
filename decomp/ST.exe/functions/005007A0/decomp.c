#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::SetNewDeep

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=1, reads=1, sites=00500985 MOV BL,byte ptr
   [EBP + 0xc]

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CPanelTy::SetNewDeep(CPanelTy *this,byte param_1,byte param_2)

{
  char cVar1;
  bool bVar3;
  CPanelTy *pCVar4;
  int iVar5;
  int iVar7;
  BITMAPINFO *pBVar8;
  uint uVar9;
  int iVar6;
  uint uVar10;
  byte bVar11;
  RecoveredSourceFamily_dibcopy *pRVar12;
  InternalExceptionFrame local_58;
  byte local_14;
  undefined3 uStack_13;
  CPanelTy *local_10;
  RecoveredSourceFamily_dibcopy *local_c;
  byte local_5;

  if (DAT_00808784 == 0) {
    if (((DAT_00808788 == 0) && (DAT_0080878c == 0)) && (DAT_00808790 == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      if (param_1 == 0) {
        if (this->field_0B80 == '\0') {
          return;
        }
        if (this->field_0B63 == '\0') {
          return;
        }
        if (this->field_0B63 == '\x03') {
          return;
        }
      }
      else {
        if (this->field_0C6E == '\0') {
          return;
        }
        cVar1 = this->field_0C51;
        if (cVar1 == '\0') {
          return;
        }
        if (cVar1 == '\x03') {
          return;
        }
        if (cVar1 == '\x04') {
          return;
        }
      }
      local_58.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_58;
      local_10 = this;
      iVar5 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
      pCVar4 = local_10;
      if (iVar5 == 0) {
        pRVar12 = (RecoveredSourceFamily_dibcopy *)(uint)param_1;
        bVar11 = *(byte *)((int)&pRVar12[0x2a].field_0008 + (int)local_10);
        local_c = pRVar12;
        if (bVar11 != 0xff) {
          if (DAT_0080874e == '\x03') {
            if (param_1 == 0) {
              uVar9 = (uint)(byte)local_10->field_02A8;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(char *)((int)local_10->field_0B1F + uVar9 + 0x6e) == '\0') {
                uVar9 = uVar9 + 5;
              }
              uVar10 = (uint)(byte)local_10->field_02A8;
              pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02A2,uVar9
                                   );
              iVar7 = (5 - uVar10) * 0xb;
              pRVar12 = pCVar4->field_018C;
            }
            else {
              uVar9 = (uint)bVar11;
              if ((&local_10->field_0xc7b)[uVar9] == '\0') {
                iVar7 = uVar9 + 0x14;
              }
              else {
                iVar7 = uVar9 + 0x19;
              }
              uVar10 = (uint)*(byte *)((int)&pRVar12[0x2a].field_0008 + (int)local_10);
              pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02A2,iVar7
                                   );
              pRVar12 = (RecoveredSourceFamily_dibcopy *)pCVar4->field_0194;
              iVar7 = uVar10 * 0xb + 0x87;
            }
            DibPut(pRVar12,iVar7,uVar10 * 0xb + 0xb,'\x06',(byte *)pBVar8);
            bVar11 = (-(param_1 != 0) & 2U) + 3;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            _local_14 = CONCAT31(uStack_13,bVar11);
            pRVar12 = local_c;
            if (bVar11 < 0xb) {
              if (-1 < (int)pCVar4->field_0148[bVar11]) {
                Library::DKW::DDX::FUN_006b3640
                          ((int *)g_ddxContext_008075A8,(uint)pCVar4->field_0148[bVar11],0xffffffff,
                           (&pCVar4->field_003C)[bVar11],(&pCVar4->field_0094)[bVar11]);
                pRVar12 = local_c;
              }
            }
          }
          else {
            if (param_1 == 0) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              cVar1 = *(char *)((int)local_10->field_0B1F + (byte)local_10->field_02A8 + 0x6e);
              local_c = (RecoveredSourceFamily_dibcopy *)local_10->field_0188;
            }
            else {
              cVar1 = (&local_10->field_0xc7b)[bVar11];
              local_c = (RecoveredSourceFamily_dibcopy *)local_10->field_0198;
            }
            pBVar8 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_02A2,
                                  (-(uint)(cVar1 != '\0') & 0xfffffffe) + 2);
            DibPut(local_c,7,
                   (uint)*(byte *)((int)&pRVar12[0x2a].field_0008 + (int)pCVar4) * 0x1d + 6,'\x01',
                   (byte *)pBVar8);
            bVar11 = (-(param_1 != 0) & 4U) + 2;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            _local_14 = CONCAT31(uStack_13,bVar11);
            if (bVar11 < 0xb) {
              if (-1 < (int)pCVar4->field_0148[bVar11]) {
                Library::DKW::DDX::FUN_006b3640
                          ((int *)g_ddxContext_008075A8,(uint)pCVar4->field_0148[bVar11],0xffffffff,
                           (&pCVar4->field_003C)[bVar11],(&pCVar4->field_0094)[bVar11]);
              }
            }
          }
        }
        ((undefined1 *)((int)&pRVar12[0x2a].field_0004 + 2))[(int)pCVar4] = 0;
        *(byte *)((int)&pRVar12[0x2a].field_0008 + (int)pCVar4) = param_2;
        *(undefined4 *)((int)pCVar4->field_0308 + (int)pRVar12 * 4 + -0x5e) = 0;
        thunk_FUN_005252c0(0xb4);
        local_5 = param_2;
        thunk_FUN_0054edf0((undefined4 *)0x15,(uint *)&local_5,0,0xffffffff);
        g_currentExceptionFrame = local_58.previous;
        return;
      }
      g_currentExceptionFrame = local_58.previous;
      iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x1fb,0,iVar5,
                                 "%s","CPanelTy::SetNewDeep");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x1fb);
    }
  }
  return;
}

