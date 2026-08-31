#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_dump.cpp
   DumpClassC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402E8C|00495980; family_names=DumpClassC::GetMessage; ret4=3;
   direct_offsets={10:3,14:0,18:0,1c:0} */

int __thiscall DumpClassC::GetMessage(DumpClassC *this,STMessage *message)

{
  DumpClassC *pDVar2;
  int iVar5;
  int iVar3;
  int uVar4;
  int local_EAX_923;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  STWorldObject **ppSVar9;
  uint *puVar10;
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

      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_dump.cpp",0x3d,0,iVar3,"%s",
                                 "DumpClassC::GetMessage - MESS_ID_CREATE");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x3e;
LAB_00495c27:
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\To_dump.cpp",iVar4);
      return 0xffff;
    }
    g_pathingGrid.sizeX = *PTR_00806750;
    g_pathingGrid.sizeY = PTR_00806750[1];
    g_pathingGrid.sizeZ = 5;
    g_pathingGrid.planeStride = *PTR_00806750 * PTR_00806750[1];

    g_pathingGrid.cells =
         Library::DKW::LIB::MemAlloc((int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX * 10);
    if (g_pathingGrid.cells == nullptr) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_dump.cpp",0x2b);
    }
    uVar5 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar8 = g_pathingGrid.cells;
    for (uVar6 = (uVar5 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      psVar8[0] = 0;
      psVar8[1] = 0;
      psVar8 = psVar8 + 2;
    }
    for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)psVar8 = 0;
      psVar8 = (short *)((int)psVar8 + 1);
    }
    g_pathingScratchGrid.sizeY = g_pathingGrid.sizeY;
    g_pathingScratchGrid.sizeZ = g_pathingGrid.sizeZ;
    g_pathingScratchGrid.sizeX = g_pathingGrid.sizeX;
    g_pathingScratchGrid.planeStride = g_pathingGrid.planeStride;

    g_pathingScratchGrid.cells =
         Library::DKW::LIB::MemAlloc
                   ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX *
                    2);
    if (g_pathingScratchGrid.cells == nullptr) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_dump.cpp",0x30);
    }
    g_worldGrid.sizeY = g_pathingGrid.sizeY;
    g_worldGrid.sizeZ = g_pathingGrid.sizeZ;
    g_worldGrid.sizeX = g_pathingGrid.sizeX;
    g_worldGrid.planeStride = g_pathingGrid.planeStride;

    g_worldGrid.cells =
         Library::DKW::LIB::MemAlloc
                   ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX *
                    8);
    if (g_worldGrid.cells == nullptr) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_dump.cpp",0x34);
    }
    iVar4 = ((int)g_worldGrid.sizeZ * (int)g_worldGrid.sizeY * (int)g_worldGrid.sizeX & 0x1fffffffU)
            << 1;
    ppSVar9 = (g_worldGrid.cells)->objects;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppSVar9 = nullptr;
      ppSVar9 = ppSVar9 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)ppSVar9 = 0;
      ppSVar9 = (STWorldObject **)((int)ppSVar9 + 1);
    }

    DAT_007fb26c = Library::DKW::LIB::MemAlloc
                             ((int)g_pathingScratchGrid.sizeY * (int)g_pathingScratchGrid.sizeX);
    iVar4 = (int)g_pathingScratchGrid.sizeY;
    iVar7 = (int)g_pathingScratchGrid.sizeX;
    puVar10 = DAT_007fb26c;
    for (uVar5 = (uint)(iVar4 * iVar7) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar5 = iVar4 * iVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    g_array_007FB270 = Library::DKW::TBL::DArrayCreate(nullptr,10,0x18,10);
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

      local_EAX_923 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_dump.cpp",0x58,0,iVar3,"%s",
                              "DumpClassC::GetMessage - MESS_ID_DONE");
      if (local_EAX_923 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x59;
      goto LAB_00495c27;
    }
    thunk_FUN_00495ea0();
    if (g_pathingGrid.cells != nullptr) {
      FreeAndNull(&g_pathingGrid.cells);
    }
    if (g_pathingScratchGrid.cells != nullptr) {
      FreeAndNull(&g_pathingScratchGrid.cells);
    }
    if (g_worldGrid.cells != nullptr) {
      FreeAndNull(&g_worldGrid.cells);
    }
    pDVar2 = local_8;
    thunk_FUN_00497000();
    if (g_array_007FB270 != nullptr) {
      DArrayDestroy(g_array_007FB270);
    }

    uVar4 = FUN_006e4d40((void *)pDVar2->field_0010,pDVar2->field_000C);
    if (uVar4 == 1) {
      g_currentExceptionFrame = local_90.previous;
      return 0;
    }
  }
  return 0;
}

