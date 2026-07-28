#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerTeam

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall
SettMapMTy::ChangePlayerTeam(SettMapMTy *this,uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  code *pcVar2;
  SettMapMTy *pSVar3;
  int errorCode;
  void *pvVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  DArrayTy *pDVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  InternalExceptionFrame local_54;
  byte local_10;
  undefined3 uStack_f;
  SettMapMTy *local_c;
  uint local_8;

  if ((this->field_1F84 != (DArrayTy *)0x0) && (DAT_00808a8f == param_2)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_c = this;
    errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pSVar3 = local_c;
    if (errorCode == 0) {
      pDVar9 = local_c->field_1F84;
      if (param_1 < pDVar9->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar9, param_1) (runtime stride) */
        pvVar4 = (void *)(pDVar9->elementSize * param_1 + (int)pDVar9->data);
      }
      else {
        pvVar4 = (void *)0x0;
      }
      if (pvVar4 != (void *)0x0) {
        if (param_2 != 0) {
          uVar10 = param_1 + 1;
          *(byte *)((int)pvVar4 + 0x4a) = (byte)param_3;
          pDVar9 = local_c->field_1F84;
          bVar11 = uVar10 < pDVar9->count;
          if ((int)uVar10 < (int)pDVar9->count) {
            do {
              if (bVar11) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar9, uVar10) (runtime stride) */
                pcVar5 = (char *)(pDVar9->elementSize * uVar10 + (int)pDVar9->data);
              }
              else {
                pcVar5 = (char *)0x0;
              }
              if ((pcVar5 == (char *)0x0) || (*pcVar5 != '\0')) break;
              pcVar5[0x4a] = (byte)param_3;
              pDVar9 = local_c->field_1F84;
              uVar10 = uVar10 + 1;
              bVar11 = uVar10 < pDVar9->count;
            } while ((int)uVar10 < (int)pDVar9->count);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)local_c->field_0000->field_002C)();
          pSVar3->field_2121 = pSVar3->field_2121 + 1;
          g_currentExceptionFrame = local_54.previous;
          return;
        }
        if (param_3 != 0xff) {
          bVar12 = *(byte *)((int)pvVar4 + 2);
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar12);
          if ((bVar12 != 0xff) && (param_3 != bVar12)) {
            if (*(char *)((int)pvVar4 + 4) == '\x04') {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_10 = CONCAT31(uStack_f,bVar12);
              if ((byte)param_3 == bVar12) {
                uVar6 = 0;
                uVar10 = (uint)bVar12;
              }
              else {
                uVar7 = param_3 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar7][bVar12];
                uVar10 = local_8;
                if ((bVar1 == 0) && (g_playerRelationMatrix[bVar12][uVar7] == 0)) {
                  uVar6 = 0xfffffffe;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar12][uVar7] == 0)) {
                  uVar6 = 0xffffffff;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[bVar12][uVar7] == 1)) {
                  uVar6 = 1;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar12][uVar7] == 1)) {
                  uVar6 = 2;
                }
                else {
                  uVar6 = 0;
                }
              }
              bVar12 = (byte)uVar10;
              switch(uVar6) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar12,(byte)param_3,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,(byte)param_3,bVar12,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,(byte)param_3,bVar12,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar12,(byte)param_3,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,(byte)param_3,bVar12);
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (*(code *)pSVar3->field_0000->field_002C)();
            DAT_00808aab = DAT_00808aab + 1;
          }
        }
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x5df,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerTeam");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x5df);
  }
  return;
}

