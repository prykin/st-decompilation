
int __thiscall FUN_0062fea0(void *this,int param_1,int param_2)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  int iVar3;
  void *local_8;
  
  if ((((PTR_00807598->field_0048 <= param_1) && (param_1 <= PTR_00807598->field_0058)) &&
      (PTR_00807598->field_0044 <= param_2)) && (param_2 <= PTR_00807598->field_0054)) {
    local_8 = this;
    iVar2 = FUN_006ddbd0();
    pVVar1 = g_visibleClass_00802A88;
    if (iVar2 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return iVar2;
    }
    iVar3 = *(int *)((int)this + 0x1dd);
    if (DAT_0080874d == -1) {
      return iVar2;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return iVar2;
    }
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                       *(int *)((int)this + 0x1d5),*(int *)((int)this + 0x1d9),&param_2,
                       (int *)&local_8);
    if (iVar3 < 0) {
      return iVar2;
    }
    if (4 < iVar3) {
      return iVar2;
    }
    if (param_2 < 0) {
      return iVar2;
    }
    if ((int)pVVar1->field_0030 <= param_2) {
      return iVar2;
    }
    iVar3 = (&DAT_0079aed0)[iVar3] + (int)local_8;
    if (iVar3 < 0) {
      return iVar2;
    }
    if ((int)pVVar1->field_0034 <= iVar3) {
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

