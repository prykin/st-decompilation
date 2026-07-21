
int __thiscall FUN_00604ee0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  AnonShape_00627EB0_4C14C976 *pAVar4;
  int *piVar5;
  AnonShape_00627EB0_4C14C976 local_2c;
  void *local_c;
  int local_8;

  piVar5 = param_1;
  pAVar4 = &local_2c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pAVar4 = 0;
    pAVar4 = (AnonShape_00627EB0_4C14C976 *)&pAVar4->field_0x4;
  }
  iVar2 = 0;
  local_8 = 0;
  local_2c.field_0010 = 2;
  param_1 = (int *)0x0;
  if (0 < *(int *)((int)this + 0x269)) {
    piVar3 = (int *)((int)this + 0x219);
    local_c = this;
    do {
      if (*piVar3 != 0) {
        puVar1 = thunk_FUN_00629010();
        *piVar3 = (int)puVar1;
        *(void **)((int)puVar1 + 0xce) = this;
        *(int **)(*piVar3 + 0xd2) = param_1;
        iVar2 = *piVar5;
        local_8 = local_8 + 4 + iVar2;
        local_2c.field_0014 = (AnonNested_00627EB0_0014_B8FBF6AA *)(piVar5 + 1);
        STParticleC::GetMessage((STParticleC *)*piVar3,&local_2c);
        piVar5 = (int *)((int)&((AnonNested_00627EB0_0014_B8FBF6AA *)(piVar5 + 1))->field_0000 +
                        iVar2);
        iVar2 = local_8;
        this = local_c;
      }
      param_1 = (int *)((int)param_1 + 1);
      piVar3 = piVar3 + 1;
    } while ((int)param_1 < *(int *)((int)this + 0x269));
    return iVar2;
  }
  return 0;
}

