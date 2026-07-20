
undefined4 __fastcall FUN_00643e20(AnonShape_00643E20_B7FEAA75 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  undefined4 in_EAX;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int *local_8;
  
  pVVar3 = g_visibleClass_00802A88;
  uVar8 = (undefined2)((uint)param_2 >> 0x10);
  local_8 = (int *)0x0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    sVar2 = param_1->field_0045;
    if (sVar2 < 0) {
      iVar9 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                     (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar9 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                          (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f));
    }
    sVar2 = param_1->field_0043;
    if (sVar2 < 0) {
      iVar7 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                     (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar7 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                          (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
    }
    sVar2 = param_1->field_0041;
    if (sVar2 < 0) {
      uVar4 = (int)(sVar2 / 0xc9) - 1;
    }
    else {
      uVar4 = (uint)(sVar2 / 0xc9);
    }
    uVar11 = CONCAT44((int)sVar2 / 0xc9,uVar4);
    if ((DAT_0080874d == -1) ||
       (uVar11 = (ulonglong)uVar4, g_visibleClass_00802A88->field_00F8 == 0)) {
LAB_00643f4a:
      if (param_1->field_01E7 == '\x01') {
        uVar11 = thunk_FUN_004ad460(&param_1->field_0x1d5,0);
      }
    }
    else {
      uVar10 = thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,uVar4,
                                  iVar7,(int *)&local_1c,&local_20);
      uVar11 = uVar10;
      if ((iVar9 < 0) ||
         (((4 < iVar9 || (uVar11 = CONCAT44(local_1c,(int)uVar10), (int)local_1c < 0)) ||
          (uVar11 = CONCAT44(local_1c,(int)uVar10), (int)pVVar3->field_0030 <= (int)local_1c))))
      goto LAB_00643f4a;
      local_20 = (&DAT_0079aed0)[iVar9] + local_20;
      uVar11 = CONCAT44(local_1c,local_20);
      if ((((local_20 < 0) ||
           (uVar11 = CONCAT44(local_1c,local_20), (int)pVVar3->field_0034 <= local_20)) ||
          (uVar11 = CONCAT44(local_1c,local_20), pVVar3->field_004C == 0)) ||
         (uVar4 = (uint)*(byte *)(local_20 * pVVar3->field_0030 + pVVar3->field_004C + local_1c),
         uVar11 = CONCAT44(local_1c,uVar4), uVar4 != 0)) goto LAB_00643f4a;
      uVar11 = (ulonglong)local_1c << 0x20;
      if (param_1->field_01E7 == '\0') {
        uVar11 = thunk_FUN_004ad430((int)&param_1->field_0x1d5);
      }
    }
    in_EAX = (undefined4)uVar11;
    uVar8 = (undefined2)(uVar11 >> 0x30);
  }
  if (param_1->field_023D == 1) {
    if ((byte)param_1->field_027D < 8) {
      local_c = STAllPlayersC::GetObjPtr
                          (g_sTAllPlayers_007FA174,
                           CONCAT31((int3)((uint)in_EAX >> 8),param_1->field_0024),
                           CONCAT22(uVar8,param_1->field_0262),CASE_1);
    }
    uVar4 = local_c;
    if (((param_1->field_027D == '\0') && (param_1->field_0259 != 10)) &&
       ((local_c != 0 && (*(int *)(local_c + 0x18) == param_1->field_025E)))) {
      FUN_006ea3e0(param_1->field_0211,param_1->field_01ED,*(int *)(local_c + 0x1ed));
    }
    bVar6 = param_1->field_027D + 1;
    param_1->field_027D = bVar6;
    if (bVar6 < 8) {
      if ((uVar4 == 0) || (*(int *)(uVar4 + 0x18) != param_1->field_025E)) {
        FUN_006ea2f0(param_1->field_0211,param_1->field_01ED);
      }
      bVar6 = param_1->field_027D;
    }
    if (bVar6 == 8) {
      FUN_006ea2f0(param_1->field_0211,param_1->field_01ED);
      uVar5 = thunk_FUN_0041da30((AnonShape_0041DA30_EF7DF530 *)param_1);
      return uVar5;
    }
  }
  else {
    if (param_1->field_0270 == 0) {
      puVar1 = &param_1->field_0x1d5;
      iVar9 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      iVar9 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\0');
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      bVar6 = param_1->field_027C;
      iVar9 = thunk_FUN_004acd30(puVar1,'\x01');
      if ((int)(uint)bVar6 < iVar9) {
        iVar9 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',(uint)bVar6);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        iVar9 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
        if (iVar9 != 0) {
          return 0xffffffff;
        }
      }
      iVar9 = thunk_FUN_004acd30(puVar1,'\x01');
      if (iVar9 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    else {
      bVar6 = param_1->field_027C;
      if (bVar6 < 0xf) {
        iVar9 = FUN_006e62d0(PTR_00802a38,param_1->field_0274,(int *)&local_8);
        if (iVar9 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        iVar9 = (**(code **)(*local_8 + 0xe0))
                          (param_1->field_0278,&local_10,&local_14,&local_18,&local_24);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        param_1->field_0041 = (undefined2)local_10;
        param_1->field_0045 = (undefined2)local_18;
        param_1->field_0043 = (undefined2)local_14;
        if (local_24 == 0) {
          FUN_006ea460(param_1->field_0211,param_1->field_01ED,*(int *)((int)local_8 + 0x1ed));
        }
        else {
          FUN_006ea3e0(param_1->field_0211,param_1->field_01ED,*(int *)((int)local_8 + 0x1ed));
        }
        bVar6 = param_1->field_027C;
      }
      if (bVar6 == 0xf) {
        iVar9 = FUN_006e62d0(PTR_00802a38,param_1->field_0274,(int *)&local_8);
        if (iVar9 == -4) {
          param_1->field_027C = 0xfa;
          return 0;
        }
        (**(code **)(*local_8 + 0xe4))(param_1->field_0278);
      }
      puVar1 = &param_1->field_0x1d5;
      iVar9 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\0',(uint)(byte)param_1->field_027C);
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      iVar9 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\0');
      if (iVar9 != 0) {
        return 0xffffffff;
      }
      bVar6 = param_1->field_027C;
      iVar9 = thunk_FUN_004acd30(puVar1,'\x01');
      if ((int)(uint)bVar6 < iVar9) {
        iVar9 = STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x01',(uint)bVar6);
        if (iVar9 != 0) {
          return 0xffffffff;
        }
        iVar9 = STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x01');
        if (iVar9 != 0) {
          return 0xffffffff;
        }
      }
      iVar9 = thunk_FUN_004acd30(puVar1,'\x01');
      if (iVar9 != (byte)param_1->field_027C - 1) goto cf_common_exit_0064428F;
    }
    STT3DSprC::StopShow((STT3DSprC *)&param_1->field_0x1d5,1);
  }
cf_common_exit_0064428F:
  uVar5 = thunk_FUN_0041da30((AnonShape_0041DA30_EF7DF530 *)param_1);
  return uVar5;
}

