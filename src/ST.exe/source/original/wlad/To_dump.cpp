#include "st/generated.hpp"
// Generated translation unit: source/original/wlad/To_dump.cpp

// 00495980 DumpClassC::GetMessage
#line 4 "decomp/ST.exe/functions/00495980/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_dump.cpp
   DumpClassC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402E8C|00495980; family_names=DumpClassC::GetMessage; ret4=3;
   direct_offsets={10:3,14:0,18:0,1c:0} */

int __thiscall st::fn_00495980(DumpClassC *this,STMessage *message)

{
  DumpClassC *pDVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  STWorldObject **ppSVar8;
  undefined4 *puVar9;
  InternalExceptionFrame local_90;
  InternalExceptionFrame local_4c;
  DumpClassC *local_8;

  local_8 = this;
  st::fn_006E5FD0(this,message);
  switch(message->id) {
  case MESS_ID_CREATE:
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_dump.cpp",0x3d,0,iVar3,"%s",
                                 "DumpClassC::GetMessage - MESS_ID_CREATE");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x3e;
LAB_00495c27:
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\wlad\\To_dump.cpp",iVar5);
      return 0xffff;
    }
    g_pathingGrid.sizeX = *PTR_00806750;
    g_pathingGrid.sizeY = PTR_00806750[1];
    g_pathingGrid.sizeZ = 5;
    g_pathingGrid.planeStride = *PTR_00806750 * PTR_00806750[1];
    g_pathingGrid.cells =
         st::fn_006AAC70((int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX * 10);
    if (g_pathingGrid.cells == nullptr) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_dump.cpp",0x2b);
    }
    uVar4 = (int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX;
    psVar7 = g_pathingGrid.cells;
    for (uVar6 = (uVar4 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      psVar7[0] = 0;
      psVar7[1] = 0;
      psVar7 = psVar7 + 2;
    }
    for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)psVar7 = 0;
      psVar7 = (short *)((int)psVar7 + 1);
    }
    g_pathingScratchGrid.sizeY = g_pathingGrid.sizeY;
    g_pathingScratchGrid.sizeZ = g_pathingGrid.sizeZ;
    g_pathingScratchGrid.sizeX = g_pathingGrid.sizeX;
    g_pathingScratchGrid.planeStride = g_pathingGrid.planeStride;
    g_pathingScratchGrid.cells =
         st::fn_006AAC70
                   ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX *
                    2);
    if (g_pathingScratchGrid.cells == nullptr) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_dump.cpp",0x30);
    }
    g_worldGrid.sizeY = g_pathingGrid.sizeY;
    g_worldGrid.sizeZ = g_pathingGrid.sizeZ;
    g_worldGrid.sizeX = g_pathingGrid.sizeX;
    g_worldGrid.planeStride = g_pathingGrid.planeStride;
    g_worldGrid.cells =
         st::fn_006AAC70
                   ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX *
                    8);
    if (g_worldGrid.cells == nullptr) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_dump.cpp",0x34);
    }
    iVar3 = ((int)g_worldGrid.sizeZ * (int)g_worldGrid.sizeY * (int)g_worldGrid.sizeX & 0x1fffffffU)
            << 1;
    ppSVar8 = (g_worldGrid.cells)->objects;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppSVar8 = nullptr;
      ppSVar8 = ppSVar8 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)ppSVar8 = 0;
      ppSVar8 = (STWorldObject **)((int)ppSVar8 + 1);
    }
    DAT_007fb26c = st::fn_006AAC70
                             ((int)g_pathingScratchGrid.sizeY * (int)g_pathingScratchGrid.sizeX);
    iVar3 = (int)g_pathingScratchGrid.sizeY;
    iVar5 = (int)g_pathingScratchGrid.sizeX;
    puVar9 = DAT_007fb26c;
    for (uVar4 = (uint)(iVar3 * iVar5) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (uVar4 = iVar3 * iVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    g_array_007FB270 = st::fn_006AE290(nullptr,10,0x18,10);
    st::fn_00404D22();
    g_currentExceptionFrame = local_4c.previous;
    st::fn_006E4D40((void *)local_8->field_0010,local_8->field_000C);
    break;
  case MESS_SHARED_0003:
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    iVar3 = st::fn_0072D7F0(local_90.jumpBuffer,0);
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_90.previous;
      iVar5 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_dump.cpp",0x58,0,iVar3,"%s",
                                 "DumpClassC::GetMessage - MESS_ID_DONE");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x59;
      goto LAB_00495c27;
    }
    st::fn_00404557();
    if (g_pathingGrid.cells != nullptr) {
      st::fn_006AB060(&g_pathingGrid.cells);
    }
    if (g_pathingScratchGrid.cells != nullptr) {
      st::fn_006AB060(&g_pathingScratchGrid.cells);
    }
    if (g_worldGrid.cells != nullptr) {
      st::fn_006AB060(&g_worldGrid.cells);
    }
    pDVar2 = local_8;
    st::fn_0040544D();
    if (g_array_007FB270 != nullptr) {
      st::fn_006AE110(g_array_007FB270);
    }
    uVar4 = st::fn_006E4D40((void *)pDVar2->field_0010,pDVar2->field_000C);
    if (uVar4 == 1) {
      g_currentExceptionFrame = local_90.previous;
      return 0;
    }
  }
  return 0;
}

// 00495EC0 DumpClassC::WritePtr
#line 4 "decomp/ST.exe/functions/00495EC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_dump.cpp
   DumpClassC::WritePtr
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:3: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00495F20 MOV EDX,dword ptr [EBP + 0x14];
   first-use mask */

undefined4
st::fn_00495EC0
          (short param_1,short param_2,short param_3,byte param_4,
          RecoveredRecord_DumpClassC_00495EC0 *param_5)

{
  int iVar2;
  undefined4 uVar3;

  if ((((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) || (param_2 < 0)) ||
     (((g_worldGrid.sizeY <= param_2 || (param_3 < 0)) || (g_worldGrid.sizeZ <= param_3)))) {
    iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_dump.cpp",0x7f,0,0,"%s",
                               "DumpClassC::WritePtr");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  }
  if (STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[param_4] == nullptr) {
    STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[param_4] = (STWorldObject *)param_5;
    param_5->field_005F = param_3;
    param_5->field_005D = param_2;
    param_5->field_005B = param_1;
    return 0;
  }
  iVar2 = st::fn_006AD4D0("E:\\__titans\\wlad\\To_dump.cpp",0x84,0,0,"%s",
                             "DumpClassC::WritePtr cell is busy");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0xffffffff;
}

