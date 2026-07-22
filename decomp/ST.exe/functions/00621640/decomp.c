
uint __thiscall FUN_00621640(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;

  uVar3 = 0xffffffff;
  *param_2 = 0;
  iVar1 = *(int *)((int)this + 0x10a);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc);
    if (0 < (int)uVar2) {
      bVar6 = uVar2 != 0;
      uVar4 = uVar3;
      uVar3 = 0;
      while ((((!bVar6 || (iVar5 = *(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c), iVar5 == 0)
               ) || (*(int *)(iVar5 + 9) != param_1)) ||
             (uVar4 = uVar3, g_playSystem_00802A38->field_00E4 - *(int *)(iVar5 + 1) < 0x2ef))) {
        uVar3 = uVar3 + 1;
        bVar6 = uVar3 < uVar2;
        if ((int)uVar2 <= (int)uVar3) {
          return uVar4;
        }
      }
      *param_2 = 1;
    }
  }
  return uVar3;
}

