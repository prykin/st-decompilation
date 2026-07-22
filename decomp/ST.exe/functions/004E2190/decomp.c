
undefined4 __thiscall FUN_004e2190(void *this,int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)((int)this + param_1 * 0x28 + 0x4d0);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar1 != 0) && (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    iVar1 = FUN_006e62d0(g_playSystem_00802A38,iVar1,&param_1);
    if (iVar1 == 0) {
      thunk_FUN_00490ca0((STBoatC *)param_1);
    }
  }
  return 0;
}

