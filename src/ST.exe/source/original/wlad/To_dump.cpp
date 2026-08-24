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
  int iVar5;
  int iVar3;
  uint uVar4;
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
  st::fn_006E5FD0(this,message);
  switch(message->id) {
  case MESS_ID_CREATE:
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (iVar3 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\To_dump.cpp"),0x3d,0,iVar3,st::mutable_c_string("%s"),
                                 "DumpClassC::GetMessage - MESS_ID_CREATE");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x3e;
LAB_00495c27:
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\To_dump.cpp"),iVar4);
      return 0xffff;
    }
    g_pathingGrid.sizeX = *PTR_00806750;
    g_pathingGrid.sizeY = PTR_00806750[1];
    g_pathingGrid.sizeZ = 5;
    g_pathingGrid.planeStride = *PTR_00806750 * PTR_00806750[1];
    g_pathingGrid.cells =static_cast<short *>(
         st::fn_006AAC70((int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX * 10));
    if (g_pathingGrid.cells == nullptr) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\To_dump.cpp"),0x2b);
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
    g_pathingScratchGrid.cells =static_cast<short *>(
         st::fn_006AAC70
                   ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX *
                    2));
    if (g_pathingScratchGrid.cells == nullptr) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\To_dump.cpp"),0x30);
    }
    g_worldGrid.sizeY = g_pathingGrid.sizeY;
    g_worldGrid.sizeZ = g_pathingGrid.sizeZ;
    g_worldGrid.sizeX = g_pathingGrid.sizeX;
    g_worldGrid.planeStride = g_pathingGrid.planeStride;
    g_worldGrid.cells =static_cast<STWorldCell *>(
         st::fn_006AAC70
                   ((int)g_pathingGrid.sizeZ * (int)g_pathingGrid.sizeY * (int)g_pathingGrid.sizeX *
                    8));
    if (g_worldGrid.cells == nullptr) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\To_dump.cpp"),0x34);
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
    DAT_007fb26c = st::machine_word_boundary_cast<undefined4>(st::fn_006AAC70
                             ((int)g_pathingScratchGrid.sizeY * (int)g_pathingScratchGrid.sizeX));
    iVar4 = (int)g_pathingScratchGrid.sizeY;
    iVar7 = (int)g_pathingScratchGrid.sizeX;
    puVar10 = st::pointer_boundary_cast<uint *>(DAT_007fb26c);
    for (uVar5 = (uint)(iVar4 * iVar7) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar5 = iVar4 * iVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
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
      local_EAX_923 =
           st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\To_dump.cpp"),0x58,0,iVar3,st::mutable_c_string("%s"),
                              "DumpClassC::GetMessage - MESS_ID_DONE");
      if (local_EAX_923 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x59;
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
  uint uVar3;
  if ((((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) || (param_2 < 0)) ||
     (((g_worldGrid.sizeY <= param_2 || (param_3 < 0)) || (g_worldGrid.sizeZ <= param_3)))) {
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\To_dump.cpp"),0x7f,0,0,st::mutable_c_string("%s"),
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
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\To_dump.cpp"),0x84,0,0,st::mutable_c_string("%s"),
                             "DumpClassC::WritePtr cell is busy");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0xffffffff;
}

