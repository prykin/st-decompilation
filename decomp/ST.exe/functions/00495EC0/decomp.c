
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_dump.cpp
   DumpClassC::WritePtr */

undefined4 DumpClassC::WritePtr(short param_1,short param_2,short param_3,uint param_4,int param_5)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((((param_1 < 0) || (SHORT_007fb240 <= param_1)) || (param_2 < 0)) ||
     (((SHORT_007fb242 <= param_2 || (param_3 < 0)) || (SHORT_007fb244 <= param_3)))) {
    iVar3 = ReportDebugMessage(s_E____titans_wlad_To_dump_cpp_007abdd4,0x7f,0,0,&DAT_007a4ccc,
                               s_DumpClassC__WritePtr_007abdf8);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    return 0;
  }
  piVar1 = (int *)(DAT_007fb248 +
                  ((param_4 & 0xff) +
                  ((int)SHORT_007fb240 * (int)param_2 + (int)SHORT_007fb246 * (int)param_3 +
                  (int)param_1) * 2) * 4);
  if (*piVar1 == 0) {
    *piVar1 = param_5;
    *(short *)(param_5 + 0x5f) = param_3;
    *(short *)(param_5 + 0x5d) = param_2;
    *(short *)(param_5 + 0x5b) = param_1;
    return 0;
  }
  iVar3 = ReportDebugMessage(s_E____titans_wlad_To_dump_cpp_007abdd4,0x84,0,0,&DAT_007a4ccc,
                             s_DumpClassC__WritePtr_cell_is_bus_007abe14);
  if (iVar3 != 0) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return 0xffffffff;
}

