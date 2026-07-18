
void __thiscall FUN_006042d0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_24 [4];
  undefined4 local_14;
  
  iVar2 = 0;
  puVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_14 = param_1;
  if (0 < *(int *)((int)this + 0x269)) {
    puVar3 = (undefined4 *)((int)this + 0x219);
    do {
      if ((STParticleC *)*puVar3 != (STParticleC *)0x0) {
        STParticleC::GetMessage((STParticleC *)*puVar3,(int)local_24);
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)((int)this + 0x269));
  }
  return;
}

