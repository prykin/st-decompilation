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
  SettMapMTy_field_1F84Element *element_1f84;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  SettMapMTy_field_1F84DArray *pSVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  InternalExceptionFrame local_54;
  byte local_10;
  undefined3 uStack_f;
  SettMapMTy *local_c;
  uint local_8;

  if ((this->field_1F84 != nullptr) && (DAT_00808a8f == param_2)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_c = this;
    errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pSVar3 = local_c;
    if (errorCode == 0) {
      pSVar8 = local_c->field_1F84;
      if (param_1 < pSVar8->count) {
        element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar8, param_1);
      }
      else {
        element_1f84 = nullptr;
      }
      if (element_1f84 != nullptr) {
        if (param_2 != 0) {
          uVar9 = param_1 + 1;
          element_1f84->field_004A = (byte)param_3;
          pSVar8 = local_c->field_1F84;
          bVar10 = uVar9 < pSVar8->count;
          if ((int)uVar9 < (int)pSVar8->count) {
            do {
              if (bVar10) {
                element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar8, uVar9);
              }
              else {
                element_1f84 = nullptr;
              }
              if ((element_1f84 == nullptr) || (element_1f84->field_0000 != '\0')) break;
              element_1f84->field_004A = (byte)param_3;
              pSVar8 = local_c->field_1F84;
              uVar9 = uVar9 + 1;
              bVar10 = uVar9 < pSVar8->count;
            } while ((int)uVar9 < (int)pSVar8->count);
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)local_c->field_0000->field_002C)();
          pSVar3->field_2121 = pSVar3->field_2121 + 1;
          g_currentExceptionFrame = local_54.previous;
          return;
        }
        if (param_3 != 0xff) {
          bVar11 = element_1f84->state;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar11);
          if ((bVar11 != 0xff) && (param_3 != bVar11)) {
            if (element_1f84->field_0004 == '\x04') {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_10 = CONCAT31(uStack_f,bVar11);
              if ((byte)param_3 == bVar11) {
                uVar5 = 0;
                uVar9 = (uint)bVar11;
              }
              else {
                uVar6 = param_3 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar6][bVar11];
                uVar9 = local_8;
                if ((bVar1 == 0) && (g_playerRelationMatrix[bVar11][uVar6] == 0)) {
                  uVar5 = 0xfffffffe;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar11][uVar6] == 0)) {
                  uVar5 = 0xffffffff;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[bVar11][uVar6] == 1)) {
                  uVar5 = 1;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar11][uVar6] == 1)) {
                  uVar5 = 2;
                }
                else {
                  uVar5 = 0;
                }
              }
              bVar11 = (byte)uVar9;
              switch(uVar5) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar11,(byte)param_3,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,(byte)param_3,bVar11,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,(byte)param_3,bVar11,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar11,(byte)param_3,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,(byte)param_3,bVar11);
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
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x5df,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerTeam");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x5df);
  }
  return;
}

