
undefined4 __thiscall FUN_00604a00(void *this,int param_1)

{
  STParticleC *this_00;
  undefined4 uVar1;
  int iVar2;
  STMessage *pSVar3;
  STMessage local_24;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((-1 < param_1) && (param_1 <= *(int *)((int)this + 0x269))) &&
     (this_00 = *(STParticleC **)((int)this + param_1 * 4 + 0x219), this_00 != (STParticleC *)0x0))
  {
    pSVar3 = &local_24;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      pSVar3->unknown_00 = 0;
      pSVar3 = (STMessage *)&pSVar3->unknown_04;
    }
    local_24.id = MESS_SHARED_0003;
    STParticleC::GetMessage(this_00,&local_24);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00);
    uVar1 = 1;
    *(undefined4 *)((int)this + param_1 * 4 + 0x219) = 0;
  }
  return uVar1;
}

