#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::ChangeResolution */

void __thiscall STAppC::ChangeResolution(STAppC *this,int param_1)

{
  AnonPointee_STAppC_115A *pAVar1;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  InternalExceptionFrame *pIVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 local_4bc [256];
  InternalExceptionFrame local_bc;
  undefined4 local_78 [4];
  undefined4 local_68;
  InternalExceptionFrame local_58;
  STAppC *local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_8 = param_1;
  local_c = 0;
  if ((((param_1 != 0) || (g_nWidth_00806730 != 800)) &&
      ((param_1 != 1 || (g_nWidth_00806730 != 0x400)))) &&
     ((param_1 != 2 || (g_nWidth_00806730 != 0x500)))) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    if (iVar3 == 0) {
      FUN_006b13e0(DAT_008075a8);
      pIVar6 = g_currentExceptionFrame;
      uVar7 = local_c;
      for (; (uVar7 == 0 && (-1 < local_8)); local_8 = local_8 + -1) {
        if (local_8 == 0) {
          g_nWidth_00806730 = 800;
          DAT_00806734 = 600;
        }
        else if (local_8 == 1) {
          g_nWidth_00806730 = 0x400;
          DAT_00806734 = 0x300;
        }
        else if (local_8 == 2) {
          g_nWidth_00806730 = 0x500;
          DAT_00806734 = 0x400;
        }
        iVar3 = 0;
        local_10 = 0;
        pAVar1 = local_14->field_115A;
        puVar8 = &pAVar1->field_0004;
        if (0 < (int)*puVar8) {
          do {
            if (((pAVar1[1].field_0000 == g_nWidth_00806730) &&
                (pAVar1[1].field_0004 == DAT_00806734)) && (pAVar1[2].field_0000 == DAT_00806738)) {
              local_10 = 1;
              break;
            }
            iVar3 = iVar3 + 1;
            pAVar1 = (AnonPointee_STAppC_115A *)&pAVar1[1].field_0004;
          } while (iVar3 < (int)*puVar8);
        }
        if (local_10 != 0) {
          puVar8 = local_4bc;
          for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          puVar8 = local_78;
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          g_currentExceptionFrame = &local_bc;
          local_bc.previous = pIVar6;
          iVar3 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0);
          uVar7 = local_c;
          if (iVar3 == 0) {
            DVar4 = Library::DKW::DDX::FUN_006b9b40
                              (DAT_0080759c,0x10000001,g_nWidth_00806730,DAT_00806734,DAT_00806738,
                               g_nWidth_00806730,DAT_00806734,(int)local_4bc,0,0x100);
            local_c = (uint)(DVar4 == 0);
            MoveWindow(HWND_00856d78,0,0,g_nWidth_00806730,DAT_00806734,1);
            local_68 = 0x66;
            AppClassTy::SendMessage((AppClassTy *)local_14,3,1,(int)local_78);
            uVar7 = (uint)(DVar4 == 0);
          }
          pIVar6 = local_bc.previous;
          g_currentExceptionFrame = local_bc.previous;
          if ((local_10 != 0) && (uVar7 != 0)) break;
        }
      }
      iVar3 = local_8;
      if (local_8 < 0) {
        RaiseInternalException(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x442)
        ;
      }
      Library::DKW::DDX::FUN_006b1470(DAT_008075a8);
      Library::DKW::DDX::FUN_006b1680(DAT_008075a8,(int)DAT_0080759c);
      FUN_006b1980(DAT_008075a8,2,-1,(&DAT_00807568)[iVar3 * 4],(&DAT_0080756c)[iVar3 * 4],
                   (&DAT_00807570)[iVar3 * 4],(&DAT_00807574)[iVar3 * 4]);
      FUN_006b1cc0((int)DAT_008075a8,2,(&DAT_00807568)[iVar3 * 4],(&DAT_0080756c)[iVar3 * 4],
                   (undefined4 *)0x0);
      FUN_006b1980(DAT_008075a8,3,-1,(&DAT_00807568)[iVar3 * 4],(&DAT_0080756c)[iVar3 * 4],
                   (&DAT_00807570)[iVar3 * 4],(&DAT_00807574)[iVar3 * 4]);
      FUN_006b1cc0((int)DAT_008075a8,3,0,0,(undefined4 *)0x0);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x44f,0,iVar3,"%s",
                               "STAppC::ChangeResolution");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\tapp.cpp",0x44f);
  }
  return;
}

