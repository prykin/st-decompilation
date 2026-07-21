
int __thiscall FUN_0058f1e0(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;

  sVar5 = *(short *)((int)this + 0x47);
  if ((*(int *)((int)this + 0x27f) <= (int)sVar5) && ((int)sVar5 <= *(int *)((int)this + 0x287))) {
    sVar1 = *(short *)((int)this + 0x49);
    if ((*(int *)((int)this + 0x283) <= (int)sVar1) && ((int)sVar1 <= *(int *)((int)this + 0x28b)))
    {
      if ((((sVar5 == *(short *)((int)this + 0x231)) && (sVar1 == *(short *)((int)this + 0x233))) &&
          (*(short *)((int)this + 0x4b) == *(short *)((int)this + 0x235))) || (param_1 != 0)) {
        iVar2 = thunk_FUN_0058f680(this,(undefined2 *)((int)this + 0x231),
                                   (undefined2 *)((int)this + 0x233),
                                   (undefined2 *)((int)this + 0x235),(short *)((int)this + 0x237));
        if (iVar2 == 2) {
          *(undefined4 *)((int)this + 0x253) = 0;
        }
      }
      else {
        iVar2 = 2;
      }
      goto LAB_0058f34a;
    }
  }
  iVar2 = *(int *)((int)this + 0x287) - *(int *)((int)this + 0x27f);
  uVar7 = (int)(iVar2 - 1U) >> 0x1f;
  uVar3 = (*(int *)((int)this + 0x28b) - *(int *)((int)this + 0x283)) - 1;
  uVar8 = (int)uVar3 >> 0x1f;
  if (iVar2 < 1) {
    sVar5 = -(ushort)(iVar2 != 0);
  }
  else {
    sVar5 = 1;
  }
  uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar4;
  *(short *)((int)this + 0x231) =
       (short)((uVar4 >> 0x10) % (((iVar2 - 1U ^ uVar7) - uVar7) + 1)) * sVar5 +
       *(short *)((int)this + 0x27f);
  if (*(int *)((int)this + 0x28b) - *(int *)((int)this + 0x283) < 1) {
    iVar6 = -(uint)(*(int *)((int)this + 0x28b) != *(int *)((int)this + 0x283));
  }
  else {
    iVar6 = 1;
  }
  iVar2 = 3;
  uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar7;
  *(undefined2 *)((int)this + 0x235) = *(undefined2 *)((int)this + 0x4b);
  *(short *)((int)this + 0x233) =
       (short)(((uVar7 >> 0x10) % (((uVar3 ^ uVar8) - uVar8) + 1)) * iVar6) +
       *(short *)((int)this + 0x283);
LAB_0058f34a:
  switch(iVar2) {
  case 1:
  case 2:
  case 3:
    iVar6 = thunk_FUN_0058f030(this);
    if (iVar6 == 0) {
      return 0;
    }
    break;
  case 6:
    iVar6 = thunk_FUN_00417740(this,*(short *)((int)this + 0x6c),*(short *)((int)this + 0x237));
    if (iVar6 != 0) {
      iVar2 = 0;
    }
  }
  return iVar2;
}

