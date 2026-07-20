
undefined4 __fastcall FUN_0045f980(int *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  STGroupBoatC *this;
  undefined4 extraout_EDX;
  undefined2 extraout_var;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1[0x3a] == 1) {
    thunk_FUN_00417830((int)param_1);
    return 0;
  }
  iVar2 = thunk_FUN_00416400(param_1);
  if (iVar2 == 1) {
    return 0;
  }
  if (iVar2 == 2) {
    thunk_FUN_00416840(param_1,(undefined2 *)&local_8,(undefined2 *)&local_c,(undefined2 *)&local_10
                      );
    iVar2 = (**(code **)(*param_1 + 0x18))(local_8,local_c,local_10);
    if (iVar2 != 1) {
      if (*(int *)((int)param_1 + 0x8f) == -1) {
        *(undefined4 *)((int)param_1 + 0x8f) = 0;
      }
      *(short *)((int)param_1 + 0xfa) = *(short *)((int)param_1 + 0xfa) + 1;
      if (*(short *)((int)param_1 + 0xfa) <= (short)param_1[0x3e]) {
        return 0;
      }
      *(int *)((int)param_1 + 0xd7) = (int)(short)local_8;
      *(int *)((int)param_1 + 0xdb) = (int)(short)local_c;
      *(int *)((int)param_1 + 0xdf) = (int)(short)local_10;
      thunk_FUN_004167a0((int)param_1);
      *(char *)(param_1 + 0x3f) = (char)param_1[0x3f] + '\x01';
      return 2;
    }
    uVar3 = thunk_FUN_0041c5a0(param_1);
    *(undefined2 *)((int)param_1 + 0xfa) = 0;
    *(undefined1 *)(param_1 + 0x3f) = 0;
    iVar2 = thunk_FUN_00495ff0(*(short *)((int)param_1 + 0x5b),*(short *)((int)param_1 + 0x5d),
                               *(short *)((int)param_1 + 0x5f),
                               CONCAT31((int3)((uint)uVar3 >> 8),
                                        *(undefined1 *)((int)param_1 + 0x8e)),(int)param_1);
    if ((iVar2 == 0) &&
       (iVar2 = DumpClassC::WritePtr
                          ((short)local_8,(short)local_c,(short)local_10,
                           CONCAT31((int3)((uint)extraout_EDX >> 8),
                                    *(undefined1 *)((int)param_1 + 0x8e)),(int)param_1), iVar2 == 0)
       ) {
      thunk_FUN_0041c3f0(param_1,*(undefined **)((int)param_1 + 0x70a));
      thunk_FUN_004168b0((int)param_1);
      return 0;
    }
  }
  else {
    if (iVar2 == 3) {
      uVar1 = *(ushort *)(*(int *)((int)param_1 + 0x97) + 6 + *(int *)((int)param_1 + 0xd3) * 8);
      if (((uVar1 & 0xfff) != 0xffe) && (uVar1 != *(ushort *)(param_1 + 0x1b))) {
        thunk_FUN_00417740(param_1,*(ushort *)(param_1 + 0x1b),uVar1);
      }
      if (*(int *)((int)param_1 + 0x8f) == -1) {
        *(undefined4 *)((int)param_1 + 0x8f) = 0;
      }
      thunk_FUN_004168b0((int)param_1);
      return 0;
    }
    if (iVar2 == 0) {
      uVar3 = thunk_FUN_004167a0((int)param_1);
      this = thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar3 >> 8),(char)param_1[9]),
                                CONCAT22(extraout_var,(short)param_1[0xc]));
      if (this != (STGroupBoatC *)0x0) {
        iVar2 = thunk_FUN_0040d540(this,(uint)*(ushort *)((int)param_1 + 0x32));
        switch(iVar2) {
        case 0:
          if (*(int *)((int)param_1 + 0x8f) == -1) {
            *(undefined4 *)((int)param_1 + 0x8f) = 0;
          }
          *(undefined4 *)((int)param_1 + 0xfd) = 1;
          thunk_FUN_0040cdb0(this,(uint)*(ushort *)((int)param_1 + 0x32));
          return 1;
        case 1:
          *(undefined2 *)((int)param_1 + 0xfa) = 0;
          STBoatC::sub_0045F6C0((STBoatC *)param_1);
          break;
        case -6:
        case 2:
          if (*(int *)((int)param_1 + 0x8f) == -1) {
            *(undefined4 *)((int)param_1 + 0x8f) = 0;
          }
          *(short *)((int)param_1 + 0xfa) = *(short *)((int)param_1 + 0xfa) + 1;
          if ((short)param_1[0x3e] < *(short *)((int)param_1 + 0xfa)) {
            *(char *)(param_1 + 0x3f) = (char)param_1[0x3f] + '\x01';
            *(undefined2 *)((int)param_1 + 0xfa) = 0;
            *(undefined4 *)((int)param_1 + 0xfd) = 1;
            thunk_FUN_0040cdb0(this,(uint)*(ushort *)((int)param_1 + 0x32));
            return 2;
          }
          break;
        default:
          goto switchD_0045fb89_caseD_fffffffb;
        }
        return 0;
      }
    }
  }
switchD_0045fb89_caseD_fffffffb:
  return 0xffffffff;
}

