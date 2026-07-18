
undefined4 __thiscall
PanelTy::CreateBut(PanelTy *this,undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
                  int param_6,byte param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
                  ,short param_11,undefined2 param_12,undefined4 param_13,char *param_14,
                  undefined4 param_15)

{
  code *pcVar1;
  PanelTy *pPVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar6;
  undefined4 *puStack_1d0;
  undefined4 auStack_1cc [16];
  int aiStack_18c [4];
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_15c;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_13c;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined2 uStack_100;
  short sStack_fe;
  undefined4 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  short sStack_da;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_68;
  int iStack_64;
  PanelTy *pPStack_10;
  ushort *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = (ushort *)0x0;
  uStack_8 = 0;
  puStack_1d0 = DAT_00858df8;
  DAT_00858df8 = &puStack_1d0;
  pPStack_10 = this;
  iVar3 = __setjmp3(auStack_1cc,0,unaff_EDI,unaff_ESI);
  pPVar2 = pPStack_10;
  if (iVar3 == 0) {
    piVar6 = aiStack_18c;
    for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    aiStack_18c[1] = param_1;
    aiStack_18c[0] = param_2;
    wsprintfA((LPSTR)(pPVar2 + 0x6c),&DAT_007c181c,param_8);
    puStack_c = FUN_006f1ce0(param_7,(char *)(pPVar2 + 0x6c),(int *)0x0,1);
    uStack_17c = *(undefined4 *)(puStack_c + 2);
    uStack_178 = *(undefined4 *)(puStack_c + 4);
    if ((param_5 == 0) || (aiStack_18c[2] = DAT_00806730, *(int *)(pPVar2 + 0x5c) != 0)) {
      aiStack_18c[2] = *(int *)(pPVar2 + 0x3c);
    }
    aiStack_18c[2] = aiStack_18c[2] + param_3;
    if ((param_6 == 0) || (aiStack_18c[3] = DAT_00806734, *(int *)(pPVar2 + 0x5c) != 0)) {
      aiStack_18c[3] = *(int *)(pPVar2 + 0x44);
    }
    aiStack_18c[3] = aiStack_18c[3] + param_4;
    cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_c);
    uStack_16c = *(undefined4 *)(pPVar2 + 8);
    uStack_144 = param_9;
    uStack_164 = param_9;
    uStack_148 = 2;
    uStack_168 = 2;
    uStack_15c = 0;
    uStack_13c = 1;
    uStack_128 = 2;
    uStack_124 = param_10;
    uStack_84 = 1;
    uStack_80 = 1;
    if (param_11 != 0) {
      uStack_d0 = param_15;
      uStack_10c = 0x101;
      uStack_108 = 3;
      uStack_104 = 0x4201;
      uStack_100 = param_12;
      sStack_fe = param_11;
      uStack_fc = param_13;
      uStack_f4 = 0;
      uStack_e8 = 0x101;
      uStack_e4 = 3;
      uStack_e0 = 0x4202;
      uStack_dc = param_12;
      sStack_da = param_11;
      uStack_d8 = param_13;
    }
    uStack_14c = uStack_16c;
    uStack_12c = uStack_16c;
    if (param_14 != (char *)0x0) {
      uStack_68 = FUN_0070aa70(DAT_00806790,param_14,0,1);
      iStack_64 = FUN_0070a6f0(DAT_00806790,0x12,param_14,1);
    }
    (**(code **)(**(int **)(pPVar2 + 0xc) + 8))(2,&uStack_8,0,aiStack_18c,0);
    DAT_00858df8 = puStack_1d0;
    return uStack_8;
  }
  DAT_00858df8 = puStack_1d0;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_panel_cpp_007c7390,0x97,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar3,0,0x7c7390,0x97);
  return 0;
}

