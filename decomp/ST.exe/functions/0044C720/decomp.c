#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetScrObjList */

ushort * __thiscall
STAllPlayersC::GetScrObjList
          (STAllPlayersC *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int *param_6)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  DArrayTy *pDVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  bool bVar14;
  InternalExceptionFrame local_68;
  byte local_24;
  undefined3 uStack_23;
  DArrayTy *local_20;
  int local_1c;
  int local_18;
  ushort *local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  short *local_c;
  int local_8;

  iVar12 = 0;
  local_14 = (ushort *)0x0;
  local_20 = (DArrayTy *)0x0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar6 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (iVar6 != -0x5001fff7) {
      iVar12 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x32ad,0,0,"%s",
                                  "STAllPlayersC::GetScrObjList");
      if (iVar12 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar6,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x32ae);
    }
    goto LAB_0044cb54;
  }
  if (param_1 < 1) {
LAB_0044cada:
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x32a9,0,0,"%s",
                               "STAllPlayersC::GetScrObjList invalid mode");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    g_currentExceptionFrame = local_68.previous;
  }
  else {
    if (param_1 < 3) {
      Library::Ourlib::ST3DSPR::FUN_006ead90
                (PTR_00807598,param_2,param_3,param_4,param_5,&local_c,&local_8);
      if (local_8 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x3268);
      }
      pDVar7 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      bVar5 = false;
      local_18 = 0;
      local_20 = pDVar7;
      if (0 < local_8) {
        local_1c = 0;
        do {
          piVar3 = *(int **)(local_1c + 4 + (int)local_c);
          uVar9 = (uint)DAT_0080874d;
          if (piVar3[9] != uVar9) {
            uVar10 = piVar3[8];
            if (uVar10 < 0x1af) {
              if (uVar10 == 0x1ae) {
                local_f = 3;
LAB_0044c950:
                if (((uint)piVar3[9] < 8) &&
                   ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                    ((byte)(&DAT_008087e9)[piVar3[9] * 0x51] < 8)))) {
                  bVar1 = *(byte *)(piVar3 + 9);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_24 = CONCAT31(uStack_23,bVar1);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == DAT_0080874d) {
LAB_0044ca10:
                      iVar6 = 0;
                    }
                    else {
                      bVar2 = g_playerRelationMatrix[bVar1][uVar9];
                      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar9][bVar1] == 0)) {
                        iVar6 = -2;
                      }
                      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar9][bVar1] == 0)) {
                        iVar6 = -1;
                      }
                      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar9][bVar1] == 1)) {
                        iVar6 = 1;
                      }
                      else {
                        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar9][bVar1] != 1))
                        goto LAB_0044ca10;
                        iVar6 = 2;
                      }
                    }
                    bVar14 = iVar6 < 0;
                  }
                  else {
                    bVar14 = (&DAT_008087ea)[uVar9 * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
                  }
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  if (((bVar14) && (iVar6 = (**(code **)(*piVar3 + 0xf8))(), iVar6 != 0)) &&
                     (iVar6 = (**(code **)(*piVar3 + 0xf4))(DAT_0080874d), iVar6 != 0)) {
                    local_10 = (undefined1)piVar3[9];
                    local_e = *(undefined2 *)((int)piVar3 + 0x32);
                    Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar7,(undefined4 *)&local_10);
                    bVar5 = true;
                  }
                }
              }
              else if (uVar10 == 0x14) goto LAB_0044c94c;
            }
            else if ((999 < uVar10) && (uVar10 < 0x3ea)) {
LAB_0044c94c:
              local_f = 1;
              goto LAB_0044c950;
            }
          }
          local_18 = local_18 + 1;
          local_1c = local_1c + 0x14;
        } while (local_18 < local_8);
      }
      FUN_006a5e90(local_c);
      if (!bVar5) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x327d);
      }
      iVar6 = pDVar7->count * 4 + 3;
      *param_6 = iVar6;
      local_14 = (ushort *)Library::DKW::LIB::FUN_006aac70(iVar6);
      *local_14 = (ushort)pDVar7->count;
      *(undefined1 *)(local_14 + 1) = (undefined1)param_1;
      puVar11 = pDVar7->data;
      uVar9 = (uint)*local_14 << 2;
    }
    else {
      if (param_1 != 3) goto LAB_0044cada;
      Library::Ourlib::ST3DSPR::FUN_006ead90
                (PTR_00807598,param_2,param_3,param_4,param_5,&local_c,&local_8);
      if (local_8 == 0) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x3291);
      }
      pDVar7 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
      bVar5 = false;
      local_18 = 0;
      local_20 = pDVar7;
      if (0 < local_8) {
        do {
          iVar6 = *(int *)(iVar12 + 4 + (int)local_c);
          uVar9 = *(uint *)(iVar6 + 0x20);
          if (((uVar9 == 0x14) || ((999 < uVar9 && (uVar9 < 0x3ea)))) &&
             (*(uint *)(iVar6 + 0x24) == (uint)DAT_0080874d)) {
            Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar7,(undefined4 *)(iVar6 + 0x32));
            bVar5 = true;
          }
          local_18 = local_18 + 1;
          iVar12 = iVar12 + 0x14;
        } while (local_18 < local_8);
      }
      FreeAndNull(&local_c);
      if (!bVar5) {
        RaiseInternalException
                  (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
                   0x32a1);
      }
      iVar6 = pDVar7->count * 2 + 3;
      *param_6 = iVar6;
      local_14 = (ushort *)Library::DKW::LIB::FUN_006aac70(iVar6);
      *local_14 = (ushort)pDVar7->count;
      *(undefined1 *)(local_14 + 1) = 3;
      puVar11 = pDVar7->data;
      uVar9 = (uint)*local_14 << 1;
    }
    puVar13 = (undefined4 *)((int)local_14 + 3);
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar13 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    g_currentExceptionFrame = local_68.previous;
  }
LAB_0044cb54:
  puVar8 = local_14;
  if (local_20 != (DArrayTy *)0x0) {
    DArrayDestroy(local_20);
  }
  return puVar8;
}

