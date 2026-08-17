#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::InitData */

void __thiscall VisibleClassTy::InitData(VisibleClassTy *this)

{
  byte bVar1;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar6;
  byte *pbVar7;
  ushort *puVar8;
  void *pvVar9;
  VisibleClassTy_field_00F4DArray *pVVar10;
  VisibleClassTy_field_0110DArray *pVVar11;
  uint uVar12;
  int iVar5;
  uint uVar13;
  int iVar14;
  uint uVar15;
  void **ppvVar16;
  bool bVar17;
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
    /* ST_CALLSITE[00557BA7]: CALL 0x0040218f; direct=0040218F VisibleClassTy::sub_00558140 */
    sub_00558140(local_c);
    RaiseInternalException(iVar4,0,"E:\\__titans\\grig\\visible.cpp",0x79);
    return;
  }
  local_c->field_0020 = (int)g_worldGrid.sizeX;
  iVar14 = local_c->field_0020;
  iVar6 = (int)g_worldGrid.sizeY;
  local_c->field_0024 = iVar6;
  local_c->field_0028 = (iVar14 + iVar6) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_002C = (local_c->field_0024 + iVar14) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_0030 = (local_c->field_0024 + iVar14) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_0034 = (local_c->field_0024 + iVar14) * 0xb505 + 0x117878 >> 0x10;
  if (DAT_0080874d == 0xff) {
    local_c->field_0114 = 0;
    local_c->field_00F8 = 0;
  }
  else {
    local_c->field_0114 = 1;
    pbVar7 = Library::DKW::LIB::MemAllocClear(local_c->field_0024 * iVar14 * 2);
    pVVar3->field_0038 = pbVar7;
    pbVar7 = Library::DKW::LIB::MemAllocClear(pVVar3->field_0030 * pVVar3->field_0034);
    pVVar3->field_004C = pbVar7;
    puVar8 = Library::DKW::LIB::MemAllocClear(pVVar3->field_0030 * pVVar3->field_0034 * 2);
    pVVar3->field_0050 = puVar8;
    ppvVar16 = pVVar3->field_003C;
    iVar14 = 4;
    do {
      pvVar9 = Library::DKW::LIB::MemAllocClear(pVVar3->field_0028 * pVVar3->field_002C);
      *ppvVar16 = pvVar9;
      ppvVar16 = ppvVar16 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    pVVar10 = (VisibleClassTy_field_00F4DArray *)
              Library::DKW::TBL::DArrayCreate(nullptr,10,0x1c,10);
    pVVar3->field_00F4 = pVVar10;
    pVVar11 = (VisibleClassTy_field_0110DArray *)
              Library::DKW::TBL::DArrayCreate(nullptr,10,0xc,10);
    pVVar3->field_0110 = pVVar11;
    pVVar3->field_00F8 = (uint)DAT_00808a95;
    pVVar3->field_00FC[DAT_0080874d] = 1;
    if (DAT_00808a94 != '\0') {
      uVar15 = 0;
      local_8 = &g_bulkInitializedRecords_008087C7[0].field_0022;
      do {
        if ((g_playSystem_00802A38 == nullptr) || (*local_8 < 8)) {
          uVar12 = (uint)DAT_0080874d;
          if (uVar15 != uVar12) {
            if (DAT_00808a8f == '\0') {
              if (DAT_0080874d == (byte)uVar15) {
LAB_00557b2d:
                iVar14 = 0;
              }
              else {
                uVar13 = uVar15 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar12][uVar13];
                if ((bVar1 == 0) && (g_playerRelationMatrix[uVar13][uVar12] == 0)) {
                  iVar14 = -2;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar13][uVar12] == 0)) {
                  iVar14 = -1;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar13][uVar12] == 1)) {
                  iVar14 = 1;
                }
                else {
                  if ((bVar1 != 1) || (g_playerRelationMatrix[uVar13][uVar12] != 1))
                  goto LAB_00557b2d;
                  iVar14 = 2;
                }
              }
              bVar17 = iVar14 < 0;
            }
            else {
              bVar17 = g_bulkInitializedRecords_008087C7[uVar15 & 0xff].field_0023 !=
                       g_bulkInitializedRecords_008087C7[uVar12].field_0023;
            }
            if (bVar17) goto LAB_00557b44;
          }
          pVVar3->field_00FC[uVar15] = 1;
        }
LAB_00557b44:
        local_8 = local_8 + 0x51;
        uVar15 = uVar15 + 1;
      } while ((int)local_8 < 0x808a71);
    }
  }
  pVVar3->field_001C = 0x5d4;
  g_currentExceptionFrame = local_50.previous;
  return;
}

