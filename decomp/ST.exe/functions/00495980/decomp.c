#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_dump.cpp
   DumpClassC::GetMessage */

undefined4 __thiscall DumpClassC::GetMessage(DumpClassC *this,int param_1)

{
  code *pcVar1;
  DumpClassC *pDVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  STWorldObject **ppSVar9;
  undefined4 *puVar10;
  InternalExceptionFrame local_90;
  InternalExceptionFrame local_4c;
  DumpClassC *local_8;

  local_8 = this;
  FUN_006e5fd0();
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 2:
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      iVar4 = ReportDebugMessage(s_E____titans_wlad_To_dump_cpp_007abdd4,0x3d,0,iVar3,&DAT_007a4ccc,
                                 s_DumpClassC__GetMessage___MESS_ID_007abda4);
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x3e;
LAB_00495c27:
      RaiseInternalException(iVar3,0,s_E____titans_wlad_To_dump_cpp_007abdd4,iVar4);
      return 0xffff;
    }
    g_pathingGrid.sizeX = *DAT_00806750;
    g_pathingGrid.sizeY = DAT_00806750[1];
    g_pathingGrid.sizeZ = 5;
    g_pathingGrid.planeStride = *DAT_00806750 * DAT_00806750[1];
    g_pathingGrid.cells =
         (short *)Library::DKW::LIB::FUN_006aac70
                            ((int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX * 10);
    if (g_pathingGrid.cells == (short *)0x0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_To_dump_cpp_007abdd4,0x2b);
    }
    uVar6 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar8 = g_pathingGrid.cells;
    for (uVar7 = (uVar6 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
      psVar8[0] = 0;
      psVar8[1] = 0;
      psVar8 = psVar8 + 2;
    }
    for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)psVar8 = 0;
      psVar8 = (short *)((int)psVar8 + 1);
    }
    g_pathingScratchGrid.sizeY = g_pathingGrid.sizeY;
    g_pathingScratchGrid.sizeZ = g_pathingGrid.sizeZ;
    g_pathingScratchGrid.sizeX = g_pathingGrid.sizeX;
    g_pathingScratchGrid.planeStride = g_pathingGrid.planeStride;
    g_pathingScratchGrid.cells =
         (short *)Library::DKW::LIB::FUN_006aac70
                            ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY *
                             (int)g_pathingGrid.sizeX * 2);
    if (g_pathingScratchGrid.cells == (short *)0x0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_To_dump_cpp_007abdd4,0x30);
    }
    g_worldGrid.sizeY = g_pathingGrid.sizeY;
    g_worldGrid.sizeZ = g_pathingGrid.sizeZ;
    g_worldGrid.sizeX = g_pathingGrid.sizeX;
    g_worldGrid.planeStride = g_pathingGrid.planeStride;
    g_worldGrid.cells =
         (STWorldCell *)
         Library::DKW::LIB::FUN_006aac70
                   ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX *
                    8);
    if (g_worldGrid.cells == (STWorldCell *)0x0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_wlad_To_dump_cpp_007abdd4,0x34);
    }
    iVar3 = ((int)g_worldGrid.sizeZ * (int)g_worldGrid.sizeY * (int)g_worldGrid.sizeX & 0x1fffffffU)
            << 1;
    ppSVar9 = (g_worldGrid.cells)->objects;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppSVar9 = (STWorldObject *)0x0;
      ppSVar9 = ppSVar9 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)ppSVar9 = 0;
      ppSVar9 = (STWorldObject **)((int)ppSVar9 + 1);
    }
    DAT_007fb26c = (undefined4 *)
                   Library::DKW::LIB::FUN_006aac70
                             ((int)g_pathingScratchGrid.sizeY * (int)g_pathingScratchGrid.sizeX);
    iVar3 = (int)g_pathingScratchGrid.sizeY;
    iVar4 = (int)g_pathingScratchGrid.sizeX;
    puVar10 = DAT_007fb26c;
    for (uVar6 = (uint)(iVar3 * iVar4) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = iVar3 * iVar4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    PTR_007fb270 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x18,10);
    thunk_FUN_00495e50();
    g_currentExceptionFrame = local_4c.previous;
    FUN_006e4d40((void *)local_8->field_0010,local_8->field_000C);
    break;
  case 3:
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    iVar3 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_90.previous;
      iVar4 = ReportDebugMessage(s_E____titans_wlad_To_dump_cpp_007abdd4,0x58,0,iVar3,&DAT_007a4ccc,
                                 s_DumpClassC__GetMessage___MESS_ID_007abd74);
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x59;
      goto LAB_00495c27;
    }
    thunk_FUN_00495ea0();
    if (g_pathingGrid.cells != (short *)0x0) {
      FreeAndNull(&g_pathingGrid.cells);
    }
    if (g_pathingScratchGrid.cells != (short *)0x0) {
      FreeAndNull(&g_pathingScratchGrid.cells);
    }
    if (g_worldGrid.cells != (STWorldCell *)0x0) {
      FreeAndNull(&g_worldGrid.cells);
    }
    pDVar2 = local_8;
    thunk_FUN_00497000();
    if (PTR_007fb270 != (DArrayTy *)0x0) {
      DArrayDestroy(PTR_007fb270);
    }
    iVar3 = FUN_006e4d40((void *)pDVar2->field_0010,pDVar2->field_000C);
    if (iVar3 == 1) {
      g_currentExceptionFrame = local_90.previous;
      return 0;
    }
  }
  return 0;
}

