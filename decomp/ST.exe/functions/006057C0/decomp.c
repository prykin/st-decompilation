
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006057c0(void *param_1)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;
  
  pVVar4 = g_visibleClass_00802A88;
  if (*(int *)((int)param_1 + 0x2af) != 0) {
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar6 = *(int *)((int)param_1 + 0x292);
      sVar3 = (short)(iVar6 >> 0x1f);
      if (iVar6 < 0) {
        local_8 = (short)(((short)(iVar6 / 200) + sVar3) -
                         (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_8 = (int)(short)(((short)(iVar6 / 200) + sVar3) -
                              (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
      }
      iVar6 = *(int *)((int)param_1 + 0x28e);
      sVar3 = (short)(iVar6 >> 0x1f);
      if (iVar6 < 0) {
        iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar3) -
                       (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar3) -
                            (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
      }
      iVar5 = *(int *)((int)param_1 + 0x28a);
      sVar3 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,
                                iVar6,&local_c,&local_10), local_8 < 0)) ||
           ((4 < local_8 || (local_c < 0)))) ||
          (((int)pVVar4->field_0030 <= local_c ||
           ((local_10 = (&DAT_0079aed0)[local_8] + local_10, local_10 < 0 ||
            ((int)pVVar4->field_0034 <= local_10)))))) ||
         ((pVVar4->field_004C == 0 ||
          (*(char *)(local_10 * pVVar4->field_0030 + pVVar4->field_004C + local_c) != '\0')))) {
        if (*(int *)((int)param_1 + 0x286) == 0) {
          thunk_FUN_004ad460(*(void **)((int)param_1 + 0x2af),0);
          *(undefined4 *)((int)param_1 + 0x286) = 1;
        }
      }
      else if (*(int *)((int)param_1 + 0x286) != 0) {
        thunk_FUN_004ad430(*(int *)((int)param_1 + 0x2af));
        *(undefined4 *)((int)param_1 + 0x286) = 0;
      }
    }
    if (*(int *)((int)param_1 + 0x286) == 1) {
      uVar2 = *(uint *)((int)param_1 + 0x296);
      piVar1 = (int *)((int)param_1 + 0x282);
      if ((int)uVar2 < (int)(&DAT_007cee44)[*(int *)((int)param_1 + 0x282)]) {
        STT3DSprC::SetCurFase(*(STT3DSprC **)((int)param_1 + 0x2af),'\r',uVar2);
        STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x2af),'\r');
        thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x2af),
                           (float)*(int *)((int)param_1 + 0x28a) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)((int)param_1 + 0x28e) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)((int)param_1 + 0x292) * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc);
      }
      else if (uVar2 == (&DAT_007cee44)[*(int *)((int)param_1 + 0x282)]) {
        STT3DSprC::StopShow(*(STT3DSprC **)((int)param_1 + 0x2af),0xd);
      }
      iVar6 = *(int *)((int)param_1 + 0x296) + 1;
      *(int *)((int)param_1 + 0x296) = iVar6;
      if (*(int *)(&DAT_007cedf4 + *piVar1 * 4) <= iVar6) {
        if ((iVar6 == *(int *)(&DAT_007cedf4 + *piVar1 * 4)) &&
           (iVar6 = STExplosionC::LoadImagSpr(param_1,piVar1,0,'\x01'), iVar6 == 0)) {
          *(undefined1 *)((int)param_1 + 0x29e) = 1;
        }
        if (*(char *)((int)param_1 + 0x29e) != '\0') {
          STT3DSprC::SetCurFase
                    (*(STT3DSprC **)((int)param_1 + 0x2af),'\x0f',*(uint *)((int)param_1 + 0x29f));
          STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x2af),'\x0f');
          if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) {
            *(int *)((int)param_1 + 0x29f) = *(int *)((int)param_1 + 0x29f) + 1;
          }
          if (*(int *)((int)param_1 + 0x2a3) <= *(int *)((int)param_1 + 0x29f)) {
            *(undefined4 *)((int)param_1 + 0x29f) = 0;
            *(undefined1 *)((int)param_1 + 0x29e) = 0;
            STT3DSprC::StopShow(*(STT3DSprC **)((int)param_1 + 0x2af),0xf);
          }
        }
      }
      if (*(int *)(&DAT_007cee1c + *piVar1 * 4) <= *(int *)((int)param_1 + 0x296)) {
        thunk_FUN_00605780((int)param_1);
      }
    }
    return;
  }
  return;
}

