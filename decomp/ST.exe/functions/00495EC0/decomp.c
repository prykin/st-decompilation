#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_dump.cpp
   DumpClassC::WritePtr
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:3: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=00495F20 MOV EDX,dword ptr [EBP + 0x14];
   first-use mask */

undefined4
DumpClassC::WritePtr
          (short param_1,short param_2,short param_3,byte param_4,
          RecoveredRecord_DumpClassC_00495EC0 *param_5)

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
  if (STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[param_4] == nullptr) {
    STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[param_4] = (STWorldObject *)param_5;
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

