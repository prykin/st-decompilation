
int __thiscall FUN_006028a0(void *this,int param_1,int param_2,int param_3)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  int iVar3;
  void *local_8;

  iVar3 = param_2;
  iVar2 = *(int *)((int)this + 0x211);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((*(int *)(iVar2 + 0x48) <= param_1) && (param_1 <= *(int *)(iVar2 + 0x58))) &&
      (*(int *)(iVar2 + 0x44) <= param_2)) && (param_2 <= *(int *)(iVar2 + 0x54))) {
    local_8 = this;
    iVar2 = FUN_006ddbd0();
    pVVar1 = g_visibleClass_00802A88;
    if (iVar2 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return iVar2;
    }
    if (DAT_0080874d == -1) {
      return iVar2;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return iVar2;
    }
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_1,iVar3,
                       &param_2,(int *)&local_8);
    if (param_3 < 0) {
      return iVar2;
    }
    if (4 < param_3) {
      return iVar2;
    }
    if (param_2 < 0) {
      return iVar2;
    }
    if (pVVar1->field_0030 <= param_2) {
      return iVar2;
    }
    iVar3 = (&DAT_0079aed0)[param_3] + (int)local_8;
    if (iVar3 < 0) {
      return iVar2;
    }
    if (pVVar1->field_0034 <= iVar3) {
      return iVar2;
    }
    if (pVVar1->field_004C == 0) {
      return iVar2;
    }
    if (*(char *)(iVar3 * pVVar1->field_0030 + pVVar1->field_004C + param_2) != '\0') {
      return iVar2;
    }
  }
  return 0;
}

