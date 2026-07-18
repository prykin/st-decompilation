
int __fastcall FUN_005fa180(int *param_1)

{
  undefined4 *this;
  void *this_00;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar2 = *(int *)((int)param_1 + 0x2d1);
  if (*(uint *)(DAT_00802a38 + 0xe4) % 5 != 0) {
    return iVar2;
  }
  if (*(char *)((int)param_1 + 699) == '\x02') {
    this = (undefined4 *)((int)param_1 + 0x1d5);
    thunk_FUN_004ace30(this,*(uint *)(DAT_00806724 + 0x30 + iVar2 * 4),
                       (int)*(short *)(DAT_00806724 + 0x2c));
    iVar2 = *(int *)((int)param_1 + 0x2d1) + -1;
    *(int *)((int)param_1 + 0x2d1) = iVar2;
    if (iVar2 == (int)*(short *)(DAT_00806724 + 0x23) / 2) {
      cVar1 = thunk_FUN_004ad610((int)this);
      if (cVar1 != '\0') {
        thunk_FUN_005fa0b0((int)param_1);
        (**(code **)*this)();
      }
    }
    iVar2 = *(int *)((int)param_1 + 0x2d1);
    if (iVar2 < 0) {
      *(undefined4 *)((int)param_1 + 0x2d1) = 0;
      thunk_FUN_004ace30(this,0,(int)*(short *)(DAT_00806724 + 0x2c));
    }
    return iVar2;
  }
  this_00 = (void *)((int)param_1 + 0x1d5);
  thunk_FUN_004ace30(this_00,*(uint *)(DAT_00806724 + 0x30 + iVar2 * 4),
                     (int)*(short *)(DAT_00806724 + 0x2c));
  iVar2 = *(int *)((int)param_1 + 0x2d1);
  iVar5 = iVar2 + 1;
  *(int *)((int)param_1 + 0x2d1) = iVar5;
  if (*(short *)(DAT_00806724 + 0x23) <= iVar5) {
    *(int *)((int)param_1 + 0x2d1) = iVar2;
    thunk_FUN_00495ff0((short)*(undefined4 *)((int)param_1 + 0x25d),
                       (short)*(undefined4 *)((int)param_1 + 0x261),
                       (short)*(undefined4 *)((int)param_1 + 0x265),0,(int)param_1);
    thunk_FUN_004ad430((int)this_00);
    *(undefined1 *)((int)param_1 + 699) = 0;
    thunk_FUN_0041c5a0(param_1);
    return iVar5;
  }
  if (iVar5 == (int)*(short *)(DAT_00806724 + 0x23) / 2) {
    thunk_FUN_004ad5e0((int)this_00);
    iVar4 = (int)*(short *)((int)param_1 + 0x45);
    iVar6 = (int)*(short *)((int)param_1 + 0x43);
    iVar2 = (int)*(short *)((int)param_1 + 0x41);
    uVar8 = 0;
    iVar7 = 0;
    uVar3 = thunk_FUN_004ad650((int)this_00);
    thunk_FUN_006377b0(uVar3,iVar7,iVar2,iVar6,iVar4,uVar8);
  }
  return iVar5;
}

