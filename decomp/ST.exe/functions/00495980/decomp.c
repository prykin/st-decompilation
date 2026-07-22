#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_dump.cpp
   DumpClassC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402E8C|00495980; family_names=DumpClassC::GetMessage; ret4=3;
   direct_offsets={10:3,14:0,18:0,1c:0} */

int __thiscall DumpClassC::GetMessage(DumpClassC *this,STMessage *message)

{
  code *pcVar1;
  DumpClassC *pDVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  STWorldObject **ppSVar8;
  undefined4 *puVar9;
  InternalExceptionFrame local_90;
  InternalExceptionFrame local_4c;
  DumpClassC *local_8;

  local_8 = this;
  FUN_006e5fd0(this,message);
  switch(message->id) {
  case MESS_ID_CREATE:
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\To_dump.cpp",0x3d,0,iVar3,"%s",
                                 "DumpClassC::GetMessage - MESS_ID_CREATE");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x3e;
LAB_00495c27:
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\To_dump.cpp",iVar4);
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
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_dump.cpp",0x2b);
    }
    uVar5 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar7 = g_pathingGrid.cells;
    for (uVar6 = (uVar5 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      psVar7[0] = 0;
      psVar7[1] = 0;
      psVar7 = psVar7 + 2;
    }
    for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)psVar7 = 0;
      psVar7 = (short *)((int)psVar7 + 1);
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
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_dump.cpp",0x30);
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
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_dump.cpp",0x34);
    }
    iVar3 = ((int)g_worldGrid.sizeZ * (int)g_worldGrid.sizeY * (int)g_worldGrid.sizeX & 0x1fffffffU)
            << 1;
    ppSVar8 = (g_worldGrid.cells)->objects;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppSVar8 = (STWorldObject *)0x0;
      ppSVar8 = ppSVar8 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)ppSVar8 = 0;
      ppSVar8 = (STWorldObject **)((int)ppSVar8 + 1);
    }
    DAT_007fb26c = (undefined4 *)
                   Library::DKW::LIB::FUN_006aac70
                             ((int)g_pathingScratchGrid.sizeY * (int)g_pathingScratchGrid.sizeX);
    iVar3 = (int)g_pathingScratchGrid.sizeY;
    iVar4 = (int)g_pathingScratchGrid.sizeX;
    puVar9 = DAT_007fb26c;
    for (uVar5 = (uint)(iVar3 * iVar4) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (uVar5 = iVar3 * iVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    g_dArray_007FB270 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,0x18,10);
    thunk_FUN_00495e50();
    g_currentExceptionFrame = local_4c.previous;
    FUN_006e4d40((void *)local_8->field_0010,local_8->field_000C);
    break;
  case MESS_SHARED_0003:
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    iVar3 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0);
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_90.previous;
      iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\To_dump.cpp",0x58,0,iVar3,"%s",
                                 "DumpClassC::GetMessage - MESS_ID_DONE");
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
    if (g_dArray_007FB270 != (DArrayTy *)0x0) {
      DArrayDestroy(g_dArray_007FB270);
    }
    iVar3 = FUN_006e4d40((void *)pDVar2->field_0010,pDVar2->field_000C);
    if (iVar3 == 1) {
      g_currentExceptionFrame = local_90.previous;
      return 0;
    }
  }
  return 0;
}

