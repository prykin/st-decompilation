
int __fastcall FUN_00604970(void *param_1)

{
  int iVar1;
  int iVar2;
  AnonShape_00627EB0_4C14C976 *pAVar3;
  undefined4 *puVar4;
  AnonShape_00627EB0_4C14C976 local_28;
  int local_8;

  iVar2 = 0;
  pAVar3 = &local_28;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pAVar3 = 0;
    pAVar3 = (AnonShape_00627EB0_4C14C976 *)&pAVar3->field_0x4;
  }
  local_28.field_0010 = 3;
  local_8 = 0;
  iVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)((int)param_1 + 0x269)) {
    puVar4 = (undefined4 *)((int)param_1 + 0x219);
    do {
      if ((STParticleC *)*puVar4 != (STParticleC *)0x0) {
        STParticleC::GetMessage((STParticleC *)*puVar4,&local_28);
        iVar1 = thunk_FUN_00604a00(param_1,iVar2);
        if (iVar1 != 0) {
          local_8 = local_8 + 1;
        }
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
      iVar1 = local_8;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar2 < *(int *)((int)param_1 + 0x269));
  }
  return iVar1;
}

