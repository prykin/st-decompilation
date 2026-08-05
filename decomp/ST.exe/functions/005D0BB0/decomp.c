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
  SettMapMTy *this_00;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  SettMapMTy_field_1F84DArray *pSVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
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
    this_00 = local_c;
    if (errorCode == 0) {
      pSVar7 = local_c->field_1F84;
      if (param_1 < pSVar7->count) {
        element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar7, param_1);
      }
      else {
        element_1f84 = nullptr;
      }
      if (element_1f84 != nullptr) {
        if (param_2 != 0) {
          uVar8 = param_1 + 1;
          element_1f84->field_004A = (byte)param_3;
          pSVar7 = local_c->field_1F84;
          bVar9 = uVar8 < pSVar7->count;
          if ((int)uVar8 < (int)pSVar7->count) {
            do {
              if (bVar9) {
                element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar7, uVar8);
              }
              else {
                element_1f84 = nullptr;
              }
              if ((element_1f84 == nullptr) || (element_1f84->field_0000 != '\0')) break;
              element_1f84->field_004A = (byte)param_3;
              pSVar7 = local_c->field_1F84;
              uVar8 = uVar8 + 1;
              bVar9 = uVar8 < pSVar7->count;
            } while ((int)uVar8 < (int)pSVar7->count);
          }
          local_c->SetListCtrls();
          this_00->field_2121 = this_00->field_2121 + 1;
          g_currentExceptionFrame = local_54.previous;
          return;
        }
        if (param_3 != 0xff) {
          bVar10 = element_1f84->state;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar10));
          if ((bVar10 != 0xff) && (param_3 != bVar10)) {
            if (element_1f84->field_0004 == '\x04') {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_10 = CONCAT31(uStack_f,bVar10);
              if ((byte)param_3 == bVar10) {
                uVar4 = 0;
                uVar8 = (uint)bVar10;
              }
              else {
                uVar5 = param_3 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar5][bVar10];
                uVar8 = local_8;
                if ((bVar1 == 0) && (g_playerRelationMatrix[bVar10][uVar5] == 0)) {
                  uVar4 = 0xfffffffe;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar10][uVar5] == 0)) {
                  uVar4 = 0xffffffff;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[bVar10][uVar5] == 1)) {
                  uVar4 = 1;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar10][uVar5] == 1)) {
                  uVar4 = 2;
                }
                else {
                  uVar4 = 0;
                }
              }
              bVar10 = (byte)uVar8;
              switch(uVar4) {
              case 1:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar10,(byte)param_3,'\0');
                break;
              case 2:
                thunk_FUN_0056a8d0(&DAT_00807620,(byte)param_3,bVar10,'\0');
                break;
              case 0xfffffffe:
                thunk_FUN_0056a8d0(&DAT_00807620,(byte)param_3,bVar10,'\x01');
                break;
              case 0xffffffff:
                thunk_FUN_0056a8d0(&DAT_00807620,bVar10,(byte)param_3,'\x01');
              }
            }
            else {
              thunk_FUN_0056a960(&DAT_00807620,(byte)param_3,bVar10);
            }
            this_00->SetListCtrls();
            DAT_00808aab = DAT_00808aab + 1;
          }
        }
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x5df,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerTeam");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x5df);
  }
  return;
}

