
int __thiscall FUN_00679e70(void *this,short param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;

  uVar4 = 0;
  iVar3 = *(int *)((int)this + 0x695);
  uVar1 = *(uint *)(iVar3 + 0xc);
  if (0 < (int)uVar1) {
    do {
      if (((iVar3 != 0) && (-1 < (int)uVar4)) && ((int)uVar4 < (int)uVar1)) {
        if (uVar4 < uVar1) {
          puVar2 = (undefined4 *)(*(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c));
        }
        else {
          puVar2 = (undefined4 *)0x0;
        }
        if (((puVar2[1] != 0) && ((AiTactClassTy *)*puVar2 != (AiTactClassTy *)0x0)) &&
           (iVar3 = AiTactClassTy::sub_0068E290((AiTactClassTy *)*puVar2,param_1), iVar3 != 0)) {
          return iVar3;
        }
      }
      iVar3 = *(int *)((int)this + 0x695);
      uVar4 = uVar4 + 1;
      uVar1 = *(uint *)(iVar3 + 0xc);
    } while ((int)uVar4 < (int)uVar1);
  }
  return 0;
}

