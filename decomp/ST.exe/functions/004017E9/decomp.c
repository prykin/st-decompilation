
undefined4 __thiscall
CPanelTy::CreateBut(CPanelTy *this,byte param_1,undefined4 param_2,int param_3,int param_4,
                   int param_5,byte param_6,int param_7,undefined4 param_8,undefined4 param_9,
                   short param_10,undefined2 param_11,int param_12,char *param_13,int param_14,
                   undefined4 param_15,undefined4 param_16)

{
  code *pcVar1;
  uint uVar2;
  CPanelTy *pCVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar7;
  undefined4 *puStack_1d0;
  undefined4 auStack_1cc [16];
  int aiStack_18c [4];
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined2 uStack_100;
  short sStack_fe;
  int iStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  short sStack_da;
  int iStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  CPanelTy *pCStack_10;
  undefined4 uStack_c;
  ushort *puStack_8;
  
  puStack_8 = (ushort *)0x0;
  uStack_c = 0;
  puStack_1d0 = DAT_00858df8;
  DAT_00858df8 = &puStack_1d0;
  pCStack_10 = this;
  iVar4 = __setjmp3(auStack_1cc,0,unaff_EDI,unaff_ESI);
  pCVar3 = pCStack_10;
  if (iVar4 == 0) {
    piVar7 = aiStack_18c;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = 0;
      piVar7 = piVar7 + 1;
    }
    aiStack_18c[1] = param_2;
    aiStack_18c[0] = param_3;
    if (param_7 != 0) {
      wsprintfA((LPSTR)(pCVar3 + 0x1e1),&DAT_007c181c,param_7);
      puStack_8 = FUN_006f1ce0(param_6,(char *)(pCVar3 + 0x1e1),(int *)0x0,1);
    }
    if (param_6 == 1) {
      iStack_17c = *(int *)(puStack_8 + 2);
      uStack_178 = *(undefined4 *)(puStack_8 + 4);
    }
    else {
      iStack_17c = param_14;
      uStack_178 = param_15;
      if (param_6 == 6) {
        iStack_17c = *(int *)(puStack_8 + 2);
        uStack_178 = *(undefined4 *)(puStack_8 + 4);
      }
    }
    if (param_4 < 0) {
      param_4 = (*(int *)(pCVar3 + (uint)param_1 * 4 + 0x68) - iStack_17c) / 2;
    }
    uVar2 = (uint)param_1;
    aiStack_18c[2] = *(int *)(pCVar3 + uVar2 * 4 + 0x3c) + param_4;
    iVar4 = *(int *)(pCVar3 + 0x130);
    switch(uVar2) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar4 = *(int *)(pCVar3 + 0x134);
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      iVar4 = *(int *)(pCVar3 + 0x138);
    }
    if (iVar4 == 0) {
      if ((param_1 == 1) || (param_1 == 7)) {
        aiStack_18c[3] = *(int *)(pCVar3 + 0xc0);
      }
      else {
        aiStack_18c[3] = 0;
      }
      aiStack_18c[3] = aiStack_18c[3] + DAT_00806734;
    }
    else {
      aiStack_18c[3] = *(int *)(pCVar3 + uVar2 * 4 + 0x94);
    }
    aiStack_18c[3] = aiStack_18c[3] + param_5;
    if (puStack_8 != (ushort *)0x0) {
      cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_8);
    }
    uStack_16c = *(undefined4 *)(pCVar3 + 8);
    uStack_124 = param_9;
    uStack_164 = param_8;
    uStack_168 = 2;
    uStack_148 = 2;
    uStack_128 = 2;
    uStack_144 = param_16;
    uStack_84 = 1;
    uStack_80 = 1;
    if (param_10 != 0) {
      uStack_10c = 0x101;
      uStack_108 = 3;
      uStack_104 = 0x4201;
      uStack_100 = param_11;
      sStack_fe = param_10;
      iStack_fc = param_12;
      uStack_f4 = 0;
      uStack_d0 = 1;
      uStack_e8 = 0x101;
      uStack_e4 = 3;
      uStack_e0 = 0x4202;
      uStack_dc = param_11;
      sStack_da = param_10;
      iStack_d8 = param_12;
    }
    if ((param_10 == 1) && (-1 < *(int *)(param_12 + 9))) {
      uStack_5c = *(undefined4 *)(&DAT_00807e66 + *(int *)(param_12 + 9) * 4);
      uStack_60 = 8;
    }
    uStack_14c = uStack_16c;
    uStack_12c = uStack_16c;
    if (param_13 != (char *)0x0) {
      uStack_68 = FUN_0070aa70(DAT_00806790,param_13,0,1);
      iStack_64 = FUN_0070a6f0(DAT_00806790,0x12,param_13,1);
    }
    (**(code **)(**(int **)(pCVar3 + 0xc) + 8))(2,&uStack_c,0,aiStack_18c,0);
    DAT_00858df8 = puStack_1d0;
    return uStack_c;
  }
  DAT_00858df8 = puStack_1d0;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1b3,0,iVar4,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  FUN_006a5e40(iVar4,0,0x7c1a4c,0x1b3);
  return 0;
}

