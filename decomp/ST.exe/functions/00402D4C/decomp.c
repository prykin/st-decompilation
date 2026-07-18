
void __thiscall
SettMapMTy::ChgPlList
          (SettMapMTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar7;
  char *pcVar8;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  char acStack_14c [260];
  undefined4 uStack_48;
  undefined4 auStack_44 [16];
  
  uStack_48 = DAT_00858df8;
  DAT_00858df8 = &uStack_48;
  iVar3 = __setjmp3(auStack_44,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_48;
    iVar4 = FUN_006ad4d0(s_E____titans_Start_settmobj_cpp_007cd258,0x1dd,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cd258,0x1dd);
    return;
  }
  uStack_15c = param_1;
  uStack_158 = param_2;
  uStack_150 = param_4;
  uStack_154 = param_3;
  pcVar7 = &DAT_00807e1d;
  if (DAT_008067a0 == '\0') {
    pcVar7 = (char *)&DAT_00807ddd;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  pcVar8 = acStack_14c;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_006b6500((int)DAT_00811764,1);
  FUN_00715360(DAT_00811764,1,'$',(char *)&uStack_15c,0x114,1,0xffffffff);
  FUN_006b6500((int)DAT_00811764,DAT_0080733c);
  DAT_00858df8 = (undefined4 *)uStack_48;
  return;
}

