
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005eeff0(void *this,int param_1)

{
  char cVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;

  pVVar3 = g_visibleClass_00802A88;
  if (param_1 == 0) {
    if (*(int *)((int)this + 0x2d6) < 0) {
      thunk_FUN_005ec9f0(0);
    }
    else {
      thunk_FUN_005ef5f0((int)this);
    }
    pVVar3 = g_visibleClass_00802A88;
    if (*(char *)((int)this + 0x2de) == '\0') {
      return;
    }
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return;
    }
    iVar5 = *(int *)((int)this + 0x27f);
    sVar2 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      param_1 = (short)(((short)(iVar5 / 200) + sVar2) -
                       (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      param_1 = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)((int)this + 0x27b);
    sVar2 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar4 = *(int *)((int)this + 0x277);
    sVar2 = (short)(iVar4 >> 0x1f);
    if (iVar4 < 0) {
      iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                          (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
    }
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5
                             ,&local_8,&local_c), param_1 < 0)) ||
        (((4 < param_1 || (local_8 < 0)) ||
         ((pVVar3->field_0030 <= local_8 ||
          ((local_c = g_centeredOffsets5[param_1] + local_c, local_c < 0 ||
           (pVVar3->field_0034 <= local_c)))))))) ||
       ((pVVar3->field_004C == (byte *)0x0 ||
        (pVVar3->field_004C[local_8 + local_c * pVVar3->field_0030] != 0)))) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0xd8))();
      STT3DSprC::sub_004AD3C0
                ((STT3DSprC *)((int)this + 0x1d5),
                 (float)*(int *)((int)this + 0x2be) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)((int)this + 0x2c2) * _DAT_007904f8 * _DAT_007904f0,
                 (float)*(int *)((int)this + 0x2c6) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc)
      ;
      cVar1 = *(char *)((int)this + 0x2b9);
joined_r0x005ef316:
      if (cVar1 != '\0') {
        return;
      }
      thunk_FUN_004ad460((void *)((int)this + 0x1d5),0);
      *(undefined1 *)((int)this + 0x2b9) = 1;
      *(undefined1 *)((int)this + 0x2de) = 0;
      return;
    }
    cVar1 = *(char *)((int)this + 0x2b9);
  }
  else {
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return;
    }
    if (*(int *)((int)this + 0x2d6) < 0) {
      return;
    }
    iVar5 = *(int *)((int)this + 0x27f);
    sVar2 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      param_1 = (short)(((short)(iVar5 / 200) + sVar2) -
                       (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      param_1 = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
    }
    iVar5 = *(int *)((int)this + 0x27b);
    sVar2 = (short)(iVar5 >> 0x1f);
    if (iVar5 < 0) {
      iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                          (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
    }
    iVar4 = *(int *)((int)this + 0x277);
    sVar2 = (short)(iVar4 >> 0x1f);
    if (iVar4 < 0) {
      iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                          (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
    }
    if (((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
           (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,
                               iVar5,&local_c,&local_8), param_1 < 0)) ||
          ((4 < param_1 || (local_c < 0)))) ||
         ((pVVar3->field_0030 <= local_c ||
          ((local_8 = g_centeredOffsets5[param_1] + local_8, local_8 < 0 ||
           (pVVar3->field_0034 <= local_8)))))) || (pVVar3->field_004C == (byte *)0x0)) ||
       (pVVar3->field_004C[local_c + local_8 * pVVar3->field_0030] != 0)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0xd8))();
      cVar1 = *(char *)((int)this + 0x2b9);
      goto joined_r0x005ef316;
    }
    cVar1 = *(char *)((int)this + 0x2b9);
  }
  if (cVar1 != '\0') {
    thunk_FUN_004ad430((int)this + 0x1d5);
    *(undefined1 *)((int)this + 0x2b9) = 0;
  }
  return;
}

