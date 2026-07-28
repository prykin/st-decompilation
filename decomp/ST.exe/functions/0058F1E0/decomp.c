
/* [STPrototypeApplier] Propagated return.
   Evidence: 0058F1E0 returns stored into /STSharkC+0x257 @ 0058EBA1 | 0058F1E0 returns stored into
   /STSharkC+0x257 @ 0058EBEB */

STSharkC_field_0257State __thiscall FUN_0058f1e0(void *this,int param_1)

{
  short sVar1;
  STSharkC_field_0257State SVar2;
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
        SVar2 = thunk_FUN_0058f680(this,(undefined2 *)((int)this + 0x231),
                                   (undefined2 *)((int)this + 0x233),
                                   (undefined2 *)((int)this + 0x235),(short *)((int)this + 0x237));
        if (SVar2 == CASE_2) {
          *(undefined4 *)((int)this + 0x253) = 0;
        }
      }
      else {
        SVar2 = CASE_2;
      }
      goto LAB_0058f34a;
    }
  }
  iVar6 = *(int *)((int)this + 0x287) - *(int *)((int)this + 0x27f);
  uVar7 = (int)(iVar6 - 1U) >> 0x1f;
  uVar3 = (*(int *)((int)this + 0x28b) - *(int *)((int)this + 0x283)) - 1;
  uVar8 = (int)uVar3 >> 0x1f;
  if (iVar6 < 1) {
    sVar5 = -(ushort)(iVar6 != 0);
  }
  else {
    sVar5 = 1;
  }
  uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar4;
  *(short *)((int)this + 0x231) =
       (short)((uVar4 >> 0x10) % (((iVar6 - 1U ^ uVar7) - uVar7) + 1)) * sVar5 +
       *(short *)((int)this + 0x27f);
  if (*(int *)((int)this + 0x28b) - *(int *)((int)this + 0x283) < 1) {
    iVar6 = -(uint)(*(int *)((int)this + 0x28b) != *(int *)((int)this + 0x283));
  }
  else {
    iVar6 = 1;
  }
  SVar2 = CASE_3;
  uVar7 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar7;
  *(undefined2 *)((int)this + 0x235) = *(undefined2 *)((int)this + 0x4b);
  *(short *)((int)this + 0x233) =
       (short)(((uVar7 >> 0x10) % (((uVar3 ^ uVar8) - uVar8) + 1)) * iVar6) +
       *(short *)((int)this + 0x283);
LAB_0058f34a:
  switch(SVar2) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
    iVar6 = thunk_FUN_0058f030(this);
    if (iVar6 == 0) {
      return CASE_0;
    }
    break;
  case CASE_6:
    iVar6 = thunk_FUN_00417740(this,*(short *)((int)this + 0x6c),*(short *)((int)this + 0x237));
    if (iVar6 != 0) {
      SVar2 = CASE_0;
    }
  }
  return SVar2;
}

