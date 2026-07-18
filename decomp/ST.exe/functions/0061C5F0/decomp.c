
undefined4 __thiscall FUN_0061c5f0(void *this,undefined4 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int *this_00;
  int iVar3;
  int iVar4;
  undefined2 extraout_var;
  int iVar5;
  short local_18;
  undefined2 local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  *param_1 = 0;
  if ((*(char *)((int)this + 0x14b) != '\0') && (*(short *)((int)this + 0x149) != -1)) {
    uVar2 = thunk_FUN_00601db0(*(undefined4 *)((int)this + 0x123));
    this_00 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)uVar2 >> 8),
                                                 *(undefined1 *)((int)this + 0x11f)),
                                        CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x149)),
                                        uVar2);
    if (this_00 != (int *)0x0) {
      *(int **)((int)this + 0x139) = this_00;
      thunk_FUN_004162b0(this_00,&local_a,&local_e,&local_10);
      iVar4 = *(int *)((int)this + 0x127);
      sVar1 = (short)(iVar4 >> 0x1f);
      if (iVar4 < 0) {
        iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar1) -
                       (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar1) -
                            (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
      }
      iVar5 = *(int *)((int)this + 299);
      sVar1 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar1) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar1) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      iVar3 = *(int *)((int)this + 0x12f);
      sVar1 = (short)(iVar3 >> 0x1f);
      if (iVar3 < 0) {
        local_18 = (((short)(iVar3 / 200) + sVar1) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f))
                   + -1;
      }
      else {
        local_18 = ((short)(iVar3 / 200) + sVar1) - (short)((longlong)iVar3 * 0x51eb851f >> 0x3f);
      }
      iVar3 = (-(uint)(*(int *)((int)this + 0x7d) != 0) & 4) + 1;
      if ((((local_a - iVar3 <= iVar4) && (iVar4 < local_a + iVar3)) && (local_e - iVar3 <= iVar5))
         && (iVar5 < local_e + iVar3)) {
        thunk_FUN_00416270(this_00,&local_8,&local_6,&local_c);
        FUN_006aced8(*(int *)((int)this + 0x9f),*(int *)((int)this + 0xa3),(int)local_8,(int)local_6
                    );
        *(int *)((int)this + 0x127) = (int)local_8;
        *(int *)((int)this + 0x12f) = (int)local_c;
        *(int *)((int)this + 299) = (int)local_6;
        if ((iVar4 != *(short *)((int)this + 0x133)) || (iVar5 != *(short *)((int)this + 0x135))) {
          *param_1 = 1;
        }
        *(short *)((int)this + 0x133) = (short)iVar4;
        *(short *)((int)this + 0x135) = (short)iVar5;
        *(short *)((int)this + 0x137) = local_18;
        *(int *)((int)this + 0x145) = this_00[6];
        *(undefined2 *)((int)this + 0x149) = *(undefined2 *)((int)this_00 + 0x32);
        uVar2 = (**(code **)(*this_00 + 0x2c))();
        *(undefined4 *)((int)this + 0x123) = uVar2;
        uVar2 = FUN_006acf0d(*(int *)((int)this + 0x9f),*(int *)((int)this + 0xa3),
                             *(int *)((int)this + 0xa7),(int)local_8,(int)local_6,(int)local_c);
        *(undefined4 *)((int)this + 0x13d) = uVar2;
        uVar2 = FUN_006aced8(*(int *)((int)this + 0x9f),*(int *)((int)this + 0xa3),(int)local_8,
                             (int)local_6);
        *(undefined4 *)((int)this + 0x141) = uVar2;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

