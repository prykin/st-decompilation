#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::InitData */

void __thiscall VisibleClassTy::InitData(VisibleClassTy *this)

{
  byte bVar1;
  code *pcVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  DArrayTy *pDVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  InternalExceptionFrame local_50;
  VisibleClassTy *local_c;
  byte *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pVVar3 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0x77,0,iVar4,"%s",
                               "VisibleClassTy::InitData");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    sub_00558140(local_c);
    RaiseInternalException(iVar4,0,"E:\\__titans\\grig\\visible.cpp",0x79);
    return;
  }
  local_c->field_0020 = (int)g_worldGrid.sizeX;
  iVar4 = local_c->field_0020;
  iVar5 = (int)g_worldGrid.sizeY;
  local_c->field_0024 = iVar5;
  local_c->field_0028 = (iVar4 + iVar5) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_002C = (local_c->field_0024 + iVar4) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_0030 = (local_c->field_0024 + iVar4) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_0034 = (local_c->field_0024 + iVar4) * 0xb505 + 0x117878 >> 0x10;
  if (DAT_0080874d == 0xff) {
    local_c->field_0114 = 0;
    local_c->field_00F8 = 0;
  }
  else {
    local_c->field_0114 = 1;
    puVar6 = Library::DKW::LIB::FUN_006aac10(local_c->field_0024 * iVar4 * 2);
    pVVar3->field_0038 = puVar6;
    pbVar7 = (byte *)Library::DKW::LIB::FUN_006aac10(pVVar3->field_0030 * pVVar3->field_0034);
    pVVar3->field_004C = pbVar7;
    puVar8 = (ushort *)Library::DKW::LIB::FUN_006aac10(pVVar3->field_0030 * pVVar3->field_0034 * 2);
    pVVar3->field_0050 = puVar8;
    puVar6 = &pVVar3->field_003C;
    iVar4 = 4;
    do {
      puVar9 = Library::DKW::LIB::FUN_006aac10(pVVar3->field_0028 * pVVar3->field_002C);
      *puVar6 = puVar9;
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x1c,10);
    pVVar3->field_00F4 = pDVar10;
    pDVar10 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0xc,10);
    pVVar3->field_0110 = pDVar10;
    pVVar3->field_00F8 = (uint)DAT_00808a95;
    *(undefined1 *)((int)&pVVar3->field_00FC + (uint)DAT_0080874d) = 1;
    if (DAT_00808a94 != '\0') {
      uVar13 = 0;
      local_8 = &DAT_008087e9;
      do {
        if ((g_playSystem_00802A38 == (STPlaySystemC *)0x0) || (*local_8 < 8)) {
          uVar11 = (uint)DAT_0080874d;
          if (uVar13 != uVar11) {
            if (DAT_00808a8f == '\0') {
              if (DAT_0080874d == (byte)uVar13) {
LAB_00557b2d:
                iVar4 = 0;
              }
              else {
                uVar12 = uVar13 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar11][uVar12];
                if ((bVar1 == 0) && (g_playerRelationMatrix[uVar12][uVar11] == 0)) {
                  iVar4 = -2;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar12][uVar11] == 0)) {
                  iVar4 = -1;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar12][uVar11] == 1)) {
                  iVar4 = 1;
                }
                else {
                  if ((bVar1 != 1) || (g_playerRelationMatrix[uVar12][uVar11] != 1))
                  goto LAB_00557b2d;
                  iVar4 = 2;
                }
              }
              bVar14 = iVar4 < 0;
            }
            else {
              bVar14 = (&DAT_008087ea)[(uVar13 & 0xff) * 0x51] != (&DAT_008087ea)[uVar11 * 0x51];
            }
            if (bVar14) goto LAB_00557b44;
          }
          *(undefined1 *)((int)&pVVar3->field_00FC + uVar13) = 1;
        }
LAB_00557b44:
        local_8 = local_8 + 0x51;
        uVar13 = uVar13 + 1;
      } while ((int)local_8 < 0x808a71);
    }
  }
  pVVar3->field_001C = 0x5d4;
  g_currentExceptionFrame = local_50.previous;
  return;
}

