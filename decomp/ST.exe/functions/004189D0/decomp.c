
undefined4 __fastcall FUN_004189d0(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 extraout_EDX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1[0x3a] == 1) {
    thunk_FUN_00417830((int)param_1);
    return 0;
  }
  iVar5 = thunk_FUN_00416400(param_1);
  if (iVar5 == 1) {
    return 0;
  }
  if (iVar5 == 2) {
    thunk_FUN_00416840(param_1,(undefined2 *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8
                      );
    iVar5 = (**(code **)(*param_1 + 0x18))(local_10,local_c,local_8);
    if (iVar5 != 1) {
      *(short *)((int)param_1 + 0xfa) = *(short *)((int)param_1 + 0xfa) + 1;
      if (*(short *)((int)param_1 + 0xfa) <= (short)param_1[0x3e]) {
        return 0;
      }
      *(int *)((int)param_1 + 0xd7) = (int)(short)local_10;
      *(int *)((int)param_1 + 0xdb) = (int)(short)local_c;
      *(int *)((int)param_1 + 0xdf) = (int)(short)local_8;
      *(undefined2 *)((int)param_1 + 0xfa) = 0;
      thunk_FUN_004167a0((int)param_1);
      return 2;
    }
    uVar6 = thunk_FUN_0041c5a0(param_1);
    *(undefined2 *)((int)param_1 + 0xfa) = 0;
    iVar5 = thunk_FUN_00495ff0(*(short *)((int)param_1 + 0x5b),*(short *)((int)param_1 + 0x5d),
                               *(short *)((int)param_1 + 0x5f),
                               CONCAT31((int3)((uint)uVar6 >> 8),
                                        *(undefined1 *)((int)param_1 + 0x8e)),(int)param_1);
    if ((iVar5 == 0) &&
       (iVar5 = DumpClassC::WritePtr
                          ((short)local_10,(short)local_c,(short)local_8,
                           CONCAT31((int3)((uint)extraout_EDX >> 8),
                                    *(undefined1 *)((int)param_1 + 0x8e)),(int)param_1), iVar5 == 0)
       ) {
      thunk_FUN_0041c3f0(param_1,*(undefined **)((int)param_1 + 0x101));
      thunk_FUN_004168b0((int)param_1);
      return 0;
    }
  }
  else if (iVar5 == 3) {
    thunk_FUN_00416840(param_1,(undefined2 *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8
                      );
    uVar7 = thunk_FUN_00418d20(*(short *)((int)param_1 + 0x47),*(short *)((int)param_1 + 0x49),
                               *(short *)((int)param_1 + 0x4b),(short)local_10,(short)local_c,
                               (short)local_8);
    if (uVar7 != 0xffffffff) {
      if (uVar7 == 1) {
        iVar2 = *(int *)((int)param_1 + 0x9b);
        iVar3 = *(int *)((int)param_1 + 0x97);
        iVar5 = iVar3 + iVar2 * 8;
        local_10 = CONCAT22((short)((uint)iVar2 >> 0x10),*(undefined2 *)(iVar3 + -8 + iVar2 * 8));
        local_c = CONCAT22((short)((uint)iVar3 >> 0x10),*(undefined2 *)(iVar5 + -6));
        local_8 = CONCAT22((short)((uint)iVar5 >> 0x10),*(undefined2 *)(iVar5 + -4));
        param_1[0x39] = 0;
        *(undefined1 *)((int)param_1 + 0xe3) = 0;
        thunk_FUN_004167a0((int)param_1);
        iVar5 = thunk_FUN_00418030(param_1,(short)local_10,(short)local_c,(short)local_8);
        if (iVar5 == -1) {
          return 0xffffffff;
        }
        if (iVar5 == 0) {
          return 0;
        }
        if (iVar5 == 2) {
          return 2;
        }
      }
      uVar1 = *(ushort *)(*(int *)((int)param_1 + 0x97) + 6 + *(int *)((int)param_1 + 0xd3) * 8);
      if (((uVar1 & 0xfff) != 0xffe) && (uVar1 != *(ushort *)(param_1 + 0x1b))) {
        thunk_FUN_00417740(param_1,*(ushort *)(param_1 + 0x1b),uVar1);
      }
      thunk_FUN_004168b0((int)param_1);
      return 0;
    }
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x33f,0,0,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return uVar6;
    }
  }
  else if (iVar5 == 0) {
    thunk_FUN_004167a0((int)param_1);
    return 1;
  }
  return 0xffffffff;
}

