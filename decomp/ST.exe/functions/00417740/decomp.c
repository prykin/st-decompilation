
undefined4 __thiscall FUN_00417740(void *this,short param_1,short param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;

  uVar1 = *(ushort *)((int)this + 0x86);
  iVar5 = (int)param_1;
  if (((int)(param_1 / (short)uVar1) * (int)(short)uVar1 - iVar5 != 0) ||
     (iVar4 = (int)param_2, (int)(param_2 / (short)uVar1) * (int)(short)uVar1 - iVar4 != 0)) {
    return 0xffffffff;
  }
  *(short *)((int)this + 0x82) = param_1;
  *(short *)((int)this + 0x84) = param_2;
  uVar2 = (short)uVar1 >> 0xf;
  if (param_2 < param_1) {
    if (0xb3 < iVar5 - iVar4) {
      sVar3 = (uVar1 ^ uVar2) - uVar2;
      goto cf_common_exit_004177BE;
    }
  }
  else if (iVar4 - iVar5 < 0xb4) {
    sVar3 = (uVar1 ^ uVar2) - uVar2;
    goto cf_common_exit_004177BE;
  }
  sVar3 = -((uVar1 ^ uVar2) - uVar2);
cf_common_exit_004177BE:
  *(short *)((int)this + 0x86) = sVar3;
  *(undefined4 *)((int)this + 0x88) = 1;
  *(undefined4 *)((int)this + 0xe8) = 1;
  *(undefined4 *)((int)this + 0xf0) = 0;
  return 0;
}

