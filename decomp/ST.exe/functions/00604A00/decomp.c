
undefined4 __thiscall FUN_00604a00(void *this,int param_1)

{
  STParticleC *this_00;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_24 [4];
  undefined4 local_14;
  
  uVar1 = 0;
  if (((-1 < param_1) && (param_1 <= *(int *)((int)this + 0x269))) &&
     (this_00 = *(STParticleC **)((int)this + param_1 * 4 + 0x219), this_00 != (STParticleC *)0x0))
  {
    puVar3 = local_24;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_14 = 3;
    STParticleC::GetMessage(this_00,(int)local_24);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00);
    uVar1 = 1;
    *(undefined4 *)((int)this + param_1 * 4 + 0x219) = 0;
  }
  return uVar1;
}

