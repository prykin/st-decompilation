
undefined4 __thiscall FUN_0062f6c0(void *this,int param_1)

{
  void **value;
  int iVar1;
  STT3DSprC *pSVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if ((-1 < param_1) && (param_1 < 5)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x1e5);
    value = (void **)((int)this + param_1 * 4 + 0x1e5);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 4);
      if ((iVar1 == 3) || (iVar1 == 6)) {
        STRubbishC::sub_00630260(this,param_1,0);
      }
      pSVar2 = *(STT3DSprC **)((int)*value + 0x10);
      if (pSVar2 != (STT3DSprC *)0x0) {
        thunk_FUN_004ad310(pSVar2);
        Library::MSVCRT::FUN_0072e2b0((HoloTy *)pSVar2);
        *(undefined4 *)((int)*value + 0x10) = 0;
      }
      uVar3 = 1;
      *(int *)((int)this + 0x1e1) = *(int *)((int)this + 0x1e1) + -1;
      FreeAndNull(value);
      *value = (void *)0x0;
    }
    if (*(int *)((int)this + 0x1e1) == 0) {
      *(undefined4 *)((int)this + 0x1fa) = 2;
    }
    return uVar3;
  }
  return 0;
}

