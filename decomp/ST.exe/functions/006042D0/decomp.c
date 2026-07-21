
void __thiscall FUN_006042d0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  AnonShape_00627EB0_4C14C976 *pAVar3;
  undefined4 *puVar4;
  AnonShape_00627EB0_4C14C976 local_24;

  iVar2 = 0;
  pAVar3 = &local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = 0;
    pAVar3 = (AnonShape_00627EB0_4C14C976 *)&pAVar3->field_0x4;
  }
  local_24.field_0010 = param_1;
  if (0 < *(int *)((int)this + 0x269)) {
    puVar4 = (undefined4 *)((int)this + 0x219);
    do {
      if ((STParticleC *)*puVar4 != (STParticleC *)0x0) {
        STParticleC::GetMessage((STParticleC *)*puVar4,&local_24);
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 < *(int *)((int)this + 0x269));
  }
  return;
}

