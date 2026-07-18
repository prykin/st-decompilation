
undefined4 __fastcall FUN_0045fd30(void *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  code *pcVar4;
  undefined4 in_EAX;
  void *this;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  
  this = (void *)thunk_FUN_0042b760(CONCAT31((int3)((uint)param_1 >> 8),
                                             *(undefined1 *)((int)param_1 + 0x24)),
                                    CONCAT22((short)((uint)in_EAX >> 0x10),
                                             *(undefined2 *)((int)param_1 + 0x30)));
  if (this == (void *)0x0) {
    return 0xffffffff;
  }
  if (*(int *)((int)param_1 + 0xe8) == 1) {
    if (*(char *)((int)param_1 + 0x4d) == '\x01') {
      iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1498,0,0,&DAT_007a4ccc);
      if (iVar5 != 0) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return uVar6;
      }
    }
    *(undefined4 *)((int)param_1 + 0xe8) = 0;
    thunk_FUN_004167a0((int)param_1);
    *(undefined4 *)((int)param_1 + 0xfd) = 1;
    thunk_FUN_0040cdb0(this,(uint)*(ushort *)((int)param_1 + 0x32));
    return 1;
  }
  if ((*(char *)((int)param_1 + 0x40) == '\0') && (*(char *)((int)param_1 + 0x4d) == '\0')) {
    sVar1 = *(short *)((int)param_1 + 0x47);
    sVar2 = *(short *)((int)param_1 + 0x4b);
    sVar3 = *(short *)((int)param_1 + 0x49);
    if (((sVar1 < 0) || (((DAT_007fb240 <= sVar1 || (sVar3 < 0)) || (DAT_007fb242 <= sVar3)))) ||
       ((sVar2 < 0 || (DAT_007fb244 <= sVar2)))) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = *(void **)(DAT_007fb248 +
                         ((uint)*(byte *)((int)param_1 + 0x8e) +
                         ((int)DAT_007fb246 * (int)sVar2 + (int)DAT_007fb240 * (int)sVar3 +
                         (int)sVar1) * 2) * 4);
    }
    if (pvVar7 == param_1) {
      thunk_FUN_004167a0((int)param_1);
      *(undefined4 *)((int)param_1 + 0xfd) = 1;
      thunk_FUN_0040cdb0(this,(uint)*(ushort *)((int)param_1 + 0x32));
      return 1;
    }
  }
  iVar5 = thunk_FUN_00416400(param_1);
  if (iVar5 == -1) {
    return 0xffffffff;
  }
  if (iVar5 == 2) {
    thunk_FUN_004168b0((int)param_1);
  }
  return 0;
}

