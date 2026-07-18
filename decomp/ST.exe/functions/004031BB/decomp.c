
int __thiscall thunk_FUN_00604ee0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 auStack_2c [4];
  undefined4 uStack_1c;
  int *piStack_18;
  void *pvStack_c;
  int iStack_8;
  
  piVar4 = param_1;
  puVar1 = auStack_2c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  iVar2 = 0;
  iStack_8 = 0;
  uStack_1c = 2;
  param_1 = (int *)0x0;
  if (0 < *(int *)((int)this + 0x269)) {
    piVar3 = (int *)((int)this + 0x219);
    pvStack_c = this;
    do {
      if (*piVar3 != 0) {
        puVar1 = thunk_FUN_00629010();
        *piVar3 = (int)puVar1;
        *(void **)((int)puVar1 + 0xce) = this;
        *(int **)(*piVar3 + 0xd2) = param_1;
        iVar2 = *piVar4;
        iStack_8 = iStack_8 + 4 + iVar2;
        piStack_18 = piVar4 + 1;
        STParticleC::GetMessage((STParticleC *)*piVar3,(int)auStack_2c);
        piVar4 = (int *)((int)(piVar4 + 1) + iVar2);
        iVar2 = iStack_8;
        this = pvStack_c;
      }
      param_1 = (int *)((int)param_1 + 1);
      piVar3 = piVar3 + 1;
    } while ((int)param_1 < *(int *)((int)this + 0x269));
    return iVar2;
  }
  return 0;
}

