
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
  
  if ((((param_1 < 0) || (SHORT_007fb240 <= param_1)) || (param_2 < 0)) ||
     (((SHORT_007fb242 <= param_2 || (param_3 < 0)) || (SHORT_007fb244 <= param_3)))) {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_To_dump_cpp_007abdd4,0x7f,0,0,&DAT_007a4ccc,
                               s_DumpClassC__WritePtr_007abdf8);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    return 0;
  }
  if (g_worldCells
      [(int)SHORT_007fb240 * (int)param_2 + (int)SHORT_007fb246 * (int)param_3 + (int)param_1].
      objects[param_4 & 0xff] == (STWorldObject *)0x0) {
    g_worldCells
    [(int)SHORT_007fb240 * (int)param_2 + (int)SHORT_007fb246 * (int)param_3 + (int)param_1].objects
    [param_4 & 0xff] = (STWorldObject *)param_5;
    param_5->field_005F = param_3;
    param_5->field_005D = param_2;
    param_5->field_005B = param_1;
    return 0;
  }
  iVar2 = ReportDebugMessage(s_E____titans_wlad_To_dump_cpp_007abdd4,0x84,0,0,&DAT_007a4ccc,
                             s_DumpClassC__WritePtr_cell_is_bus_007abe14);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0xffffffff;
}

