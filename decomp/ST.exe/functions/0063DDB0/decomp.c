
void __thiscall FUN_0063ddb0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;

  if (*(int *)((int)this + 0x336) != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0x336) + 0xc);
    uVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)((int)this + 0x336);
        if ((uVar3 < *(uint *)(iVar2 + 0xc)) &&
           (*(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c) != 0)) {
          STTmMineC::LoadImagSpr(this,uVar3,param_1);
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < iVar1);
    }
  }
  return;
}

