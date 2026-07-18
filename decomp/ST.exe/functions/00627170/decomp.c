
void __fastcall FUN_00627170(void *param_1)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 0x35a) == 0x15) && ((*(byte *)((int)param_1 + 0x355) & 1) != 0)) {
    if ((ushort)*(byte *)((int)param_1 + 0x35e) != *(ushort *)((int)param_1 + 0x4b)) {
      iVar1 = thunk_FUN_00624570(param_1,3,(int)*(short *)((int)param_1 + 0x3a),
                                 (int)*(short *)((int)param_1 + 0x3c),
                                 (short)((ushort)*(byte *)((int)param_1 + 0x35e) * 200 + 100) +
                                 -0x32);
      if (iVar1 != 0) {
        *(undefined4 *)((int)param_1 + 0x2ee) = 3;
        *(undefined4 *)((int)param_1 + 0x2ae) = 1;
      }
    }
    *(undefined1 *)((int)param_1 + 0x359) = 0;
  }
  return;
}

