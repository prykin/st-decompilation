
undefined4 __thiscall FUN_0058af70(void *this,short param_1,short param_2,short param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(short *)((int)this + 0x4e) = param_1;
  *(short *)((int)this + 0x50) = param_2;
  iVar1 = (int)param_1 - (int)*(short *)((int)this + 0x41);
  *(short *)((int)this + 0x52) = param_3;
  iVar3 = (int)param_2 - (int)*(short *)((int)this + 0x43);
  *(int *)((int)this + 0x269) = iVar1;
  iVar4 = (int)param_3 - (int)*(short *)((int)this + 0x45);
  *(int *)((int)this + 0x26d) = iVar3;
  *(int *)((int)this + 0x271) = iVar4;
  uVar2 = FUN_006acf0d(0,0,0,iVar1,iVar3,iVar4);
  *(undefined4 *)((int)this + 0x239) = uVar2;
  uVar2 = FUN_006acf0d(0,0,0,*(int *)((int)this + 0x269),*(int *)((int)this + 0x26d),0);
  iVar1 = *(int *)((int)this + 0x2a5);
  *(undefined4 *)((int)this + 0x23d) = uVar2;
  if ((iVar1 == 0xf8) || (iVar1 == 0xf9)) {
    iVar3 = *(int *)((int)this + 0x239);
    *(int *)((int)this + 0x251) = (*(int *)((int)this + 0x269) << 8) / iVar3;
    *(int *)((int)this + 0x255) = (*(int *)((int)this + 0x26d) << 8) / iVar3;
    iVar4 = *(int *)((int)this + 0x271) << 8;
  }
  else {
    iVar3 = *(int *)((int)this + 0x239);
    *(int *)((int)this + 0x251) = (*(int *)((int)this + 0x269) << 9) / iVar3;
    *(int *)((int)this + 0x255) = (*(int *)((int)this + 0x26d) << 9) / iVar3;
    iVar4 = *(int *)((int)this + 0x271) << 9;
  }
  *(int *)((int)this + 0x275) = (int)*(short *)((int)this + 0x41);
  *(undefined4 *)((int)this + 0x265) = 0;
  *(undefined4 *)((int)this + 0x261) = 0;
  *(undefined4 *)((int)this + 0x25d) = 0;
  *(int *)((int)this + 0x27d) = (int)*(short *)((int)this + 0x45);
  *(int *)((int)this + 0x259) = iVar4 / iVar3;
  *(int *)((int)this + 0x279) = (int)*(short *)((int)this + 0x43);
  if ((*(int *)((int)this + 0x281) == 0) && ((iVar1 == 0xf8 || (iVar1 == 0xf9)))) {
    iVar1 = *(int *)((int)this + 0x251);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (iVar1 < *(int *)((int)this + 0x259)) {
      iVar1 = *(int *)((int)this + 0x255);
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if (iVar1 < *(int *)((int)this + 0x259)) {
        *(undefined4 *)((int)this + 0x281) = 1;
        return 1;
      }
    }
  }
  return 1;
}

