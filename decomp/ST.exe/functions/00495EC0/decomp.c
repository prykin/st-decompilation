#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_dump.cpp
   DumpClassC::WritePtr */

undefined4
DumpClassC::WritePtr
          (short param_1,short param_2,short param_3,uint param_4,
          AnonShape_00495EC0_95A268C6 *param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;

  if ((((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) || (param_2 < 0)) ||
     (((g_worldGrid.sizeY <= param_2 || (param_3 < 0)) || (g_worldGrid.sizeZ <= param_3)))) {
    iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_dump.cpp",0x7f,0,0,"%s",
                               "DumpClassC::WritePtr");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    return 0;
  }
  if (g_worldGrid.cells
      [(int)g_worldGrid.sizeX * (int)param_2 + (int)g_worldGrid.planeStride * (int)param_3 +
       (int)param_1].objects[param_4 & 0xff] == (STWorldObject *)0x0) {
    g_worldGrid.cells
    [(int)g_worldGrid.sizeX * (int)param_2 + (int)g_worldGrid.planeStride * (int)param_3 +
     (int)param_1].objects[param_4 & 0xff] = (STWorldObject *)param_5;
    param_5->field_005F = param_3;
    param_5->field_005D = param_2;
    param_5->field_005B = param_1;
    return 0;
  }
  iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\To_dump.cpp",0x84,0,0,"%s",
                             "DumpClassC::WritePtr cell is busy");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0xffffffff;
}

