
void __thiscall FUN_006042d0(void *this,STMessageId param_1)

{
  int iVar1;
  int iVar2;
  STMessage *pSVar3;
  undefined4 *puVar4;
  STMessage local_24;

  iVar2 = 0;
  pSVar3 = &local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    pSVar3->unknown_00 = 0;
    pSVar3 = (STMessage *)&pSVar3->unknown_04;
  }
  local_24.id = param_1;
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

