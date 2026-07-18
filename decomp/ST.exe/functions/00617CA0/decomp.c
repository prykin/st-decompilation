
int __thiscall
FUN_00617ca0(void *this,int *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5,
            int *param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_14;
  int local_10;
  
  uVar4 = *(uint *)((int)this + 0x30);
  local_14 = 0;
  if (uVar4 == 0) {
    return 0;
  }
  uVar5 = param_7 % uVar4;
  local_10 = 0;
  if (0 < (int)uVar4) {
    do {
      uVar1 = uVar5;
      if ((int)uVar4 < (int)uVar5) {
        uVar1 = uVar5 - uVar4;
      }
      iVar2 = (int)(uVar1 * 0x168) / (int)uVar4;
      iVar3 = FUN_006aff50(iVar2);
      iVar2 = FUN_006aff5b(iVar2);
      iVar6 = (iVar3 * 0x28) / 10000 + *(int *)((int)this + 0x40);
      iVar7 = (iVar2 * 0x28) / 10000 + *(int *)((int)this + 0x44);
      if ((((-1 < iVar6) && (iVar6 <= DAT_007fb240 * 0xc9)) && (-1 < iVar7)) &&
         ((iVar7 <= DAT_007fb242 * 0xc9 &&
          (local_14 = thunk_FUN_00617c30(this,iVar6,iVar7), local_14 == 1)))) break;
      local_10 = local_10 + 1;
      uVar5 = uVar5 + 1;
      uVar4 = *(uint *)((int)this + 0x30);
    } while (local_10 < (int)uVar4);
    if (local_14 != 0) {
      *param_1 = iVar6;
      *param_2 = iVar7;
      *param_3 = *(undefined4 *)((int)this + 0x48);
      *param_4 = (iVar3 * 0x96) / 10000 + param_7 % 0x28 + *(int *)((int)this + 0x40);
      *param_5 = (iVar2 * 0x96) / 10000 + *(int *)((int)this + 0x44) + param_7 % 0x28;
      *param_6 = *(int *)((int)this + 0x48) + -0x32;
    }
  }
  return local_14;
}

