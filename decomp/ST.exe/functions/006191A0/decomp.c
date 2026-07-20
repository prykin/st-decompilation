
uint __thiscall FUN_006191a0(void *this,uint param_1,int param_2)

{
  VisibleClassTy *pVVar1;
  uint in_EAX;
  int iVar2;
  void *local_8;
  
  if ((((*(int *)(DAT_00807598 + 0x48) <= (int)param_1) &&
       ((int)param_1 <= *(int *)(DAT_00807598 + 0x58))) &&
      (in_EAX = param_2, *(int *)(DAT_00807598 + 0x44) <= param_2)) &&
     (param_2 <= *(int *)(DAT_00807598 + 0x54))) {
    local_8 = this;
    param_1 = FUN_006ddbd0();
    pVVar1 = g_visibleClass_00802A88;
    in_EAX = param_1;
    if ((param_1 == 0) || (g_visibleClass_00802A88 == (VisibleClassTy *)0x0))
    goto cf_common_exit_00619287;
    in_EAX = CONCAT31((int3)(param_1 >> 8),DAT_0080874d);
    iVar2 = (int)*(short *)((int)this + 0xcd);
    if ((DAT_0080874d == -1) || (in_EAX = 0, g_visibleClass_00802A88->field_00F8 == 0))
    goto cf_common_exit_00619287;
    in_EAX = thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                (int)*(short *)((int)this + 0xc9),(int)*(short *)((int)this + 0xcb),
                                &param_2,(int *)&local_8);
    if ((((iVar2 < 0) || (4 < iVar2)) || (param_2 < 0)) ||
       (((((int)pVVar1->field_0030 <= param_2 ||
          (in_EAX = (&DAT_0079aed0)[iVar2] + (int)local_8, (int)in_EAX < 0)) ||
         ((int)pVVar1->field_0034 <= (int)in_EAX)) ||
        ((pVVar1->field_004C == 0 ||
         (in_EAX = (uint)*(byte *)(in_EAX * pVVar1->field_0030 + pVVar1->field_004C + param_2),
         in_EAX != 0)))))) goto cf_common_exit_00619287;
  }
  param_1 = 0;
cf_common_exit_00619287:
  return CONCAT31((int3)(in_EAX >> 8),(undefined1)param_1);
}

