#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\tapp.cpp
   STAppC::ChangeResolution */

void __thiscall STAppC::ChangeResolution(STAppC *this,int param_1)

{
  AnonPointee_STAppC_115A *pAVar1;
  int local_EAX_107;
  int iVar3;
  DWORD DVar3;
  int iVar4;
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
    local_EAX_107 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
    if (local_EAX_107 == 0) {
      FUN_006b13e0((int *)g_ddxContext_008075A8);
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
        iVar5 = 0;
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
            iVar5 = iVar5 + 1;
            pAVar1 = (AnonPointee_STAppC_115A *)&pAVar1[1].field_0004;
          } while (iVar5 < (int)*puVar8);
        }
        if (local_10 != 0) {
          memset(local_4bc, 0, 0x400); /* compiler bulk-zero initialization */
          iVar5 = 0;
          memset(local_78, 0, 0x20); /* compiler bulk-zero initialization */
          g_currentExceptionFrame = &local_bc;
          local_bc.previous = pIVar6;
          iVar3 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0);
          uVar7 = local_c;
          if (iVar3 == 0) {
            DVar3 = Library::DKW::DDX::FUN_006b9b40
                              (g_dDXContext_0080759C,0x10000001,g_nWidth_00806730,DAT_00806734,
                               DAT_00806738,g_nWidth_00806730,DAT_00806734,(int)local_4bc,0,0x100);
            local_c = (uint)(DVar3 == 0);
            MoveWindow(HWND_00856d78,0,0,g_nWidth_00806730,DAT_00806734,1);
            local_68 = 0x66;
            AppClassTy::SendMessage((AppClassTy *)local_14,3,1,(int)local_78);
            uVar7 = (uint)(DVar3 == 0);
          }
          pIVar6 = local_bc.previous;
          g_currentExceptionFrame = local_bc.previous;
          if ((local_10 != 0) && (uVar7 != 0)) break;
        }
      }
      iVar5 = local_8;
      if (local_8 < 0) {
        RaiseInternalException(-1,g_overwriteContext_007ED77C,"E:\\__titans\\tapp.cpp",0x442);
      }
      Library::DKW::DDX::FUN_006b1470((int *)g_ddxContext_008075A8);
      Library::DKW::DDX::FUN_006b1680((int *)g_ddxContext_008075A8,g_dDXContext_0080759C);
      FUN_006b1980((int *)g_ddxContext_008075A8,2,-1,(&DAT_00807568)[iVar5 * 4],
                   (&DAT_0080756c)[iVar5 * 4],(&DAT_00807570)[iVar5 * 4],(&DAT_00807574)[iVar5 * 4]);
      FUN_006b1cc0(g_ddxContext_008075A8,2,(&DAT_00807568)[iVar5 * 4],(&DAT_0080756c)[iVar5 * 4],
                   nullptr);
      FUN_006b1980((int *)g_ddxContext_008075A8,3,-1,(&DAT_00807568)[iVar5 * 4],
                   (&DAT_0080756c)[iVar5 * 4],(&DAT_00807570)[iVar5 * 4],(&DAT_00807574)[iVar5 * 4]);
      FUN_006b1cc0(g_ddxContext_008075A8,3,0,0,nullptr);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\tapp.cpp",0x44f,0,local_EAX_107,"%s",
                               "STAppC::ChangeResolution");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_107,0,"E:\\__titans\\tapp.cpp",0x44f);
  }
  return;
}

