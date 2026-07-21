
undefined4 __thiscall
FUN_0062ab10(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_8;

  local_8 = 0;
  uVar5 = FUN_006c8334(param_4 * param_4 + param_5 * param_5 + param_6 * param_6);
  if (uVar5 == 0) {
    local_8 = 0xffffffff;
  }
  else {
    iVar6 = (param_1 * param_4 + param_2 * param_5 + param_3 * param_6) * 2;
    iVar7 = (int)(iVar6 + (iVar6 >> 0x1f & 0x7fU)) >> 7;
    iVar2 = (param_4 * 10000 + ((iVar7 * param_1) / 10000) * -0x80) / 100;
    iVar4 = (param_5 * 10000 + ((iVar7 * param_2) / 10000) * -0x80) / 100;
    iVar6 = (param_6 * 10000 + ((iVar7 * param_3) / 10000) * -0x80) / 100;
    uVar5 = FUN_006c8334(iVar6 * iVar6 + iVar2 * iVar2 + iVar4 * iVar4);
    if ((int)uVar5 / 100 != 0) {
      if (0 < iVar7) {
        return 2;
      }
      *(int *)((int)this + 0x9a) = (int)uVar5 / 100;
      *(undefined4 *)((int)this + 0x7a) = *(undefined4 *)((int)this + 0x46);
      *(undefined4 *)((int)this + 0x7e) = *(undefined4 *)((int)this + 0x4a);
      *(undefined4 *)((int)this + 0x82) = *(undefined4 *)((int)this + 0x4e);
      *(undefined4 *)((int)this + 0x86) = 0;
      uVar5 = FUN_006c8334(iVar2 * iVar2 + iVar4 * iVar4);
      iVar7 = (int)uVar5 / 100;
      if (iVar7 != 0) {
        iVar1 = *(int *)((int)this + 0x9a);
        if (iVar6 < 1) {
          iVar3 = iVar6 * -5;
        }
        else {
          iVar3 = iVar6 * 5;
        }
        *(int *)((int)this + 0x8e) = (iVar3 * 2000) / iVar1;
        if (iVar6 < 1) {
          iVar6 = iVar7 * -5;
        }
        else {
          iVar6 = iVar7 * 5;
        }
        *(int *)((int)this + 0x8a) = (iVar6 * 2000) / iVar1;
        *(int *)((int)this + 0x92) = (iVar4 * 10000) / iVar7;
        *(int *)((int)this + 0x96) = (iVar2 * 10000) / iVar7;
        *(int *)((int)this + 0x9a) = (int)(iVar1 + (iVar1 >> 0x1f & 0x7fU)) >> 7;
        *(uint *)((int)this + 0xae) = PTR_00802a38->field_00E4;
        return 1;
      }
      iVar2 = *(int *)((int)this + 0x9a);
      if (iVar6 < 1) {
        iVar6 = iVar6 * -0x19;
      }
      else {
        iVar6 = iVar6 * 0x19;
      }
      *(undefined4 *)((int)this + 0x8a) = 0;
      *(int *)((int)this + 0x96) = param_1;
      *(int *)((int)this + 0x8e) = (iVar6 * 400) / iVar2;
      *(int *)((int)this + 0x92) = param_2;
      *(int *)((int)this + 0x9a) = (int)(iVar2 + (iVar2 >> 0x1f & 0x7fU)) >> 7;
      return 1;
    }
  }
  return local_8;
}

