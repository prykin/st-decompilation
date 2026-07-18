
void __thiscall FUN_0062af90(void *this,int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  void *this_00;
  undefined4 *puVar8;
  undefined4 local_38 [5];
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  void *local_8;
  
  iVar5 = 1;
  sVar6 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar7 = (short)(((short)(param_1 / 0xc9) + sVar6) -
                   (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(param_1 / 0xc9) + sVar6) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar6 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar4 = (short)(((short)(param_2 / 0xc9) + sVar6) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_2 / 0xc9) + sVar6) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar6 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar2 = (short)(((short)(param_3 / 200) + sVar6) -
                   (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar2 = (int)(short)(((short)(param_3 / 200) + sVar6) -
                        (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if ((((-1 < iVar7) && (iVar7 < DAT_007fb240)) && (-1 < iVar4)) &&
     (((iVar4 < DAT_007fb242 && (-1 < iVar2)) && (iVar2 < DAT_007fb244)))) {
    sVar6 = (short)iVar7;
    if (((sVar6 < 0) || (DAT_007fb240 <= sVar6)) ||
       ((sVar3 = (short)iVar4, sVar3 < 0 ||
        (((DAT_007fb242 <= sVar3 || (sVar1 = (short)iVar2, sVar1 < 0)) || (DAT_007fb244 <= sVar1))))
       )) {
      this_00 = (void *)0x0;
    }
    else {
      this_00 = *(void **)(DAT_007fb248 + 4 +
                          ((int)DAT_007fb246 * (int)sVar1 + (int)sVar3 * (int)DAT_007fb240 +
                          (int)sVar6) * 8);
    }
    puVar8 = local_38;
    local_8 = this;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    local_1c = param_3;
    local_24 = param_1;
    local_c = *(undefined4 *)((int)local_8 + 0x18);
    local_20 = param_2;
    local_14 = *(undefined4 *)((int)local_8 + 4);
    local_18 = 1000;
    switch(*(undefined1 *)((int)local_8 + 0x15)) {
    case 1:
      if (*(int *)((int)local_8 + 0x1c) == 1) {
        iVar5 = 1;
      }
      else if (*(int *)((int)local_8 + 0x1c) == 2) {
        iVar5 = 2;
      }
      break;
    case 2:
      iVar5 = 5;
      break;
    case 8:
      iVar5 = 4;
      break;
    case 0x10:
    case 0x20:
    case 0x80:
      iVar5 = 3;
      break;
    case 0x40:
      iVar5 = 6;
    }
    local_10 = iVar5 << 0x10 | (uint)*(byte *)((int)local_8 + 0x14);
    local_38[0] = 0xbe;
    local_38[1] = 0xff;
    local_38[2] = 0;
    local_38[3] = 1;
    if ((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 0x20) == 0xbe)) {
      thunk_FUN_006301b0(this_00,(int)local_38);
      return;
    }
    (**(code **)(*DAT_00802a38 + 8))(0x132,0,0,local_38,0);
  }
  return;
}

