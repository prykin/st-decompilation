
void __fastcall FUN_00491600(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  uVar1 = (**(code **)(*param_1 + 0x100))(*(uint *)((int)param_1 + 0x1d1) | 0xd);
  thunk_FUN_00495ff0(*(short *)((int)param_1 + 0x5b),*(short *)((int)param_1 + 0x5d),
                     *(short *)((int)param_1 + 0x5f),
                     CONCAT31((int3)((uint)uVar1 >> 8),*(undefined1 *)((int)param_1 + 0x8e)),
                     (int)param_1);
  param_1[0x170] = 3;
  if (DAT_008117bc != (undefined4 *)0x0) {
    local_10 = (undefined2)param_1[9];
    local_e = *(undefined2 *)((int)param_1 + 0x32);
    local_14 = 0x5dd2;
    if (*(int *)((int)param_1 + 0x5a6) == 0) {
      iVar2 = FUN_006e62d0(DAT_00802a38,*(int *)((int)param_1 + 0x5a2),(int *)((int)param_1 + 0x5a6)
                          );
      if (iVar2 == -4) {
        RaiseInternalException(-4,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,0x5008);
      }
    }
    iVar2 = *(int *)((int)param_1 + 0x5a6);
    local_c = *(undefined2 *)(iVar2 + 0x24);
    local_a = *(undefined2 *)(iVar2 + 0x32);
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

