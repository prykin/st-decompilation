
undefined4 __thiscall FUN_0065f5c0(void *this,short *param_1)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar3 = 0;
  iVar2 = *(int *)((int)this + 0x223);
  if (0 < *(int *)(iVar2 + 0xc)) {
    bVar4 = *(int *)(iVar2 + 0xc) != 0;
    do {
      if (bVar4) {
        psVar1 = (short *)(*(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c));
      }
      else {
        psVar1 = (short *)0x0;
      }
      iVar2 = FUN_006acf90((int)*psVar1,(int)psVar1[1],(int)*param_1,(int)param_1[1]);
      if (iVar2 < 8) {
        return 0;
      }
      iVar2 = *(int *)((int)this + 0x223);
      uVar3 = uVar3 + 1;
      bVar4 = uVar3 < *(uint *)(iVar2 + 0xc);
    } while ((int)uVar3 < (int)*(uint *)(iVar2 + 0xc));
  }
  Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)this + 0x223),(undefined4 *)param_1);
  return 1;
}

