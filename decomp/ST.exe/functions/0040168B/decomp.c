
void thunk_FUN_004f37c0(byte param_1,int param_2,byte param_3,char *param_4,uint param_5)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int *piVar4;
  LPSTR pCVar5;
  int iVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar7;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  int *piStack_10;
  ushort *puStack_c;
  int iStack_8;
  
  piStack_10 = *(int **)(param_2 + 0x18);
  puStack_c = (ushort *)0x0;
  uStack_54 = DAT_00858df8;
  DAT_00858df8 = &uStack_54;
  piVar4 = (int *)__setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  if (piVar4 != (int *)0x0) {
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cp_sup_cpp_007c1a4c,0x1de,0,(int)piVar4,&DAT_007a4ccc)
    ;
    if (iVar7 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40((int)piVar4,0,0x7c1a4c,0x1de);
    return;
  }
  iVar7 = 1;
  pCVar5 = FUN_006f2c00(param_4,1,param_5 & 0xff);
  puStack_c = FUN_006f1ce0(param_3,pCVar5,piVar4,iVar7);
  uVar3 = (uint)param_1;
  iVar7 = piStack_10[1];
  iVar6 = DAT_00806734;
  switch(uVar3) {
  case 1:
    if (*(int *)(iStack_8 + 0x134) != 0) {
      iVar6 = *(int *)(iStack_8 + 0x94 + uVar3 * 4);
      break;
    }
    goto LAB_004f38ad;
  default:
    if (*(int *)(iStack_8 + 0x130) != 0) {
      iVar6 = *(int *)(iStack_8 + 0x94 + uVar3 * 4);
    }
    break;
  case 3:
    if (*(int *)(iStack_8 + 0x134) != 0) {
      iVar6 = *(int *)(iStack_8 + 0x94 + uVar3 * 4);
    }
    break;
  case 5:
    if (*(int *)(iStack_8 + 0x138) != 0) {
      iVar6 = *(int *)(iStack_8 + 0x94 + uVar3 * 4);
    }
    break;
  case 7:
    if (*(int *)(iStack_8 + 0x138) != 0) {
      iVar6 = *(int *)(iStack_8 + 0x94 + uVar3 * 4);
      break;
    }
LAB_004f38ad:
    iVar7 = iVar7 - *(int *)(iStack_8 + 0xc0);
  }
  thunk_FUN_00540760(*(undefined4 **)(iStack_8 + 0x180 + uVar3 * 4),
                     *piStack_10 - *(int *)(iStack_8 + 0x3c + uVar3 * 4),iVar7 - iVar6,param_3,
                     (byte *)puStack_c);
  FUN_006f20e0((uint *)&puStack_c);
  if ((param_1 < 0xb) && (uVar1 = *(uint *)(iStack_8 + 0x148 + uVar3 * 4), -1 < (int)uVar1)) {
    FUN_006b3640(DAT_008075a8,uVar1,0xffffffff,*(uint *)(iStack_8 + 0x3c + uVar3 * 4),
                 *(uint *)(iStack_8 + 0x94 + uVar3 * 4));
  }
  DAT_00858df8 = (undefined4 *)uStack_54;
  return;
}

