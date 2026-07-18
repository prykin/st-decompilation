
void __thiscall
CPanelTy::SetButStruct
          (CPanelTy *this,undefined4 *param_1,byte param_2,undefined4 param_3,int param_4,
          int param_5,byte param_6,undefined4 param_7,undefined2 param_8,undefined2 param_9,
          undefined4 param_10,char *param_11)

{
  CPanelTy *pCVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar7;
  undefined4 *puStack_50;
  undefined4 auStack_4c [16];
  CPanelTy *pCStack_c;
  ushort *puStack_8;
  
  puStack_8 = (ushort *)0x0;
  puStack_50 = DAT_00858df8;
  DAT_00858df8 = &puStack_50;
  pCStack_c = this;
  iVar4 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    puVar7 = param_1;
    for (iVar4 = 0x5f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *param_1 = param_3;
    uVar3 = (uint)param_2;
    param_1[2] = *(int *)(pCStack_c + uVar3 * 4 + 0x3c) + param_4;
    iVar4 = *(int *)(pCStack_c + 0x130);
    switch(uVar3) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar4 = *(int *)(pCStack_c + 0x134);
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      iVar4 = *(int *)(pCStack_c + 0x138);
    }
    if (iVar4 == 0) {
      if ((param_2 == 1) || (param_2 == 7)) {
        iVar4 = *(int *)(pCStack_c + 0xc0);
      }
      else {
        iVar4 = 0;
      }
      iVar4 = iVar4 + DAT_00806734;
    }
    else {
      iVar4 = *(int *)(pCStack_c + uVar3 * 4 + 0x94);
    }
    pCVar1 = pCStack_c + 0x1e1;
    param_1[3] = iVar4 + param_5;
    param_1[0x42] = 1;
    param_1[0x43] = 1;
    wsprintfA((LPSTR)pCVar1,&DAT_007c181c,param_7);
    puStack_8 = FUN_006f1ce0(param_6,(char *)pCVar1,(int *)0x0,1);
    param_1[4] = *(undefined4 *)(puStack_8 + 2);
    param_1[5] = *(undefined4 *)(puStack_8 + 4);
    cMf32::RecMemFree(DAT_00806790,(uint *)&puStack_8);
    param_1[0x21] = 3;
    param_1[0x2a] = 3;
    param_1[0x20] = 0x101;
    param_1[0x22] = 0x4201;
    *(undefined2 *)(param_1 + 0x23) = param_9;
    *(undefined2 *)((int)param_1 + 0x8e) = param_8;
    param_1[0x24] = param_10;
    param_1[0x26] = 0;
    param_1[0x2f] = 1;
    param_1[0x29] = 0x101;
    param_1[0x2b] = 0x4202;
    *(undefined2 *)(param_1 + 0x2c) = param_9;
    *(undefined2 *)((int)param_1 + 0xb2) = param_8;
    param_1[0x2d] = param_10;
    if (param_11 != (char *)0x0) {
      uVar5 = FUN_0070aa70(DAT_00806790,param_11,0,1);
      param_1[0x49] = uVar5;
      iVar4 = FUN_0070a6f0(DAT_00806790,0x12,param_11,1);
      param_1[0x4a] = iVar4;
    }
    DAT_00858df8 = puStack_50;
    return;
  }
  DAT_00858df8 = puStack_50;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x171,0,iVar4,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7c1a4c,0x171);
  return;
}

