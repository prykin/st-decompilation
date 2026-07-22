
undefined4 __thiscall FUN_005f1d80(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;

  if ((DAT_0080874d != -1) && (*(int *)((int)this + 0xf8) != 0)) {
    VisibleClassTy::sub_00558C00
              (this,*(VisibleClassTy_sub_00558C00_param_1Enum *)((int)this + 0x10c),param_1,param_2,
               &param_2,&param_1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((-1 < param_3) &&
         (((param_3 < 5 && (-1 < param_2)) && (param_2 < *(int *)((int)this + 0x30))))) &&
        (((iVar1 = g_centeredOffsets5[param_3] + param_1, -1 < iVar1 &&
          (iVar1 < *(int *)((int)this + 0x34))) && (*(int *)((int)this + 0x4c) != 0)))) &&
       (*(char *)(iVar1 * *(int *)((int)this + 0x30) + *(int *)((int)this + 0x4c) + param_2) == '\0'
       )) {
      return 0;
    }
  }
  return 1;
}

