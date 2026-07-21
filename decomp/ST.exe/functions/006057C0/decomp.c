
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006057c0(STExplosionC *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;

  pVVar4 = g_visibleClass_00802A88;
  if (param_1->field_02AF != (STT3DSprC *)0x0) {
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar6 = *(int *)&param_1->field_0x292;
      sVar3 = (short)(iVar6 >> 0x1f);
      if (iVar6 < 0) {
        local_8 = (short)(((short)(iVar6 / 200) + sVar3) -
                         (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_8 = (int)(short)(((short)(iVar6 / 200) + sVar3) -
                              (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
      }
      iVar6 = *(int *)&param_1->field_0x28e;
      sVar3 = (short)(iVar6 >> 0x1f);
      if (iVar6 < 0) {
        iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar3) -
                       (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar3) -
                            (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
      }
      iVar5 = *(int *)&param_1->field_0x28a;
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
        if (*(int *)&param_1->field_0x286 == 0) {
          thunk_FUN_004ad460(param_1->field_02AF,0);
          *(undefined4 *)&param_1->field_0x286 = 1;
        }
      }
      else if (*(int *)&param_1->field_0x286 != 0) {
        thunk_FUN_004ad430((int)param_1->field_02AF);
        *(undefined4 *)&param_1->field_0x286 = 0;
      }
    }
    if (*(int *)&param_1->field_0x286 == 1) {
      uVar2 = *(uint *)&param_1->field_0x296;
      puVar1 = &param_1->field_0x282;
      if ((int)uVar2 < (int)(&DAT_007cee44)[*(int *)&param_1->field_0x282]) {
        STT3DSprC::SetCurFase(param_1->field_02AF,'\r',uVar2);
        STT3DSprC::ShowCurFase(param_1->field_02AF,'\r');
        thunk_FUN_004ad3c0(param_1->field_02AF,
                           (float)*(int *)&param_1->field_0x28a * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)&param_1->field_0x28e * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)&param_1->field_0x292 * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc);
      }
      else if (uVar2 == (&DAT_007cee44)[*(int *)&param_1->field_0x282]) {
        STT3DSprC::StopShow(param_1->field_02AF,0xd);
      }
      iVar6 = *(int *)&param_1->field_0x296 + 1;
      *(int *)&param_1->field_0x296 = iVar6;
      if (*(int *)(&DAT_007cedf4 + *(int *)puVar1 * 4) <= iVar6) {
        if ((iVar6 == *(int *)(&DAT_007cedf4 + *(int *)puVar1 * 4)) &&
           (iVar6 = STExplosionC::LoadImagSpr(param_1,puVar1,0,'\x01'), iVar6 == 0)) {
          param_1->field_0x29e = 1;
        }
        if (param_1->field_0x29e != '\0') {
          STT3DSprC::SetCurFase(param_1->field_02AF,'\x0f',param_1->field_029F);
          STT3DSprC::ShowCurFase(param_1->field_02AF,'\x0f');
          if ((*(byte *)&PTR_00802a38->field_00E4 & 1) != 0) {
            param_1->field_029F = param_1->field_029F + 1;
          }
          if ((int)param_1->field_02A3 <= (int)param_1->field_029F) {
            param_1->field_029F = 0;
            param_1->field_0x29e = 0;
            STT3DSprC::StopShow(param_1->field_02AF,0xf);
          }
        }
      }
      if (*(int *)(&DAT_007cee1c + *(int *)puVar1 * 4) <= *(int *)&param_1->field_0x296) {
        thunk_FUN_00605780((int)param_1);
      }
    }
    return;
  }
  return;
}

