
void __thiscall StartSystemTy::AddToChat(StartSystemTy *this,int param_1)

{
  code *pcVar1;
  StartSystemTy *pSVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  undefined4 *puStack_78;
  undefined4 auStack_74 [16];
  undefined4 auStack_34 [4];
  undefined4 uStack_24;
  undefined2 uStack_20;
  ushort uStack_1e;
  uint uStack_14;
  uint *puStack_10;
  StartSystemTy *pSStack_c;
  char cStack_5;
  
  puVar8 = auStack_34;
  pSStack_c = this;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puStack_78 = DAT_00858df8;
  DAT_00858df8 = &puStack_78;
  iVar7 = __setjmp3(auStack_74,0,unaff_EDI,unaff_ESI);
  if (iVar7 == 0) {
    if ((param_1 != 0) &&
       (puVar3 = FUN_006b54f0((uint *)0x0,2,1), pSVar2 = pSStack_c, puVar3 != (uint *)0x0)) {
      cStack_5 = '\0';
      uStack_24 = 0x26;
      puStack_10 = puVar3;
      FUN_006e5970(2,*(int *)(pSStack_c + 0x550),(int)auStack_34);
      uStack_14 = (uint)uStack_1e;
      if (*(int *)(DAT_0080c4fa + 8) + -5 <= (int)uStack_14) {
        cStack_5 = '\x01';
      }
      wsprintfA((LPSTR)&DAT_0080f33a,s__0_s__007cd8b4,param_1);
      FUN_006b5aa0((int)puVar3,(char *)&DAT_0080f33a);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007cd8ac,param_1 + 0x40);
      FUN_006b5aa0((int)puVar3,(char *)&DAT_0080f33a);
      puVar4 = ccFntTy::FormSarr(*(ccFntTy **)(pSVar2 + 0x34),(int)puVar3,
                                 (uint *)s________________007c21d8,
                                 *(int *)(*(int *)(pSVar2 + 0x67e) + 4),0,0xffffffff,1);
      if (puVar4 != (uint *)0x0) {
        if (puVar4[2] != 0) {
          ccFntTy::SepColorStrInSarr(*(ccFntTy **)(pSVar2 + 0x34),puVar4,puVar4);
        }
        iVar7 = 0;
        if (0 < (int)puVar4[2]) {
          if ((int)puVar4[2] < 1) {
            pcVar5 = (char *)0x0;
            goto LAB_005dd982;
          }
          do {
            pcVar5 = *(char **)(puVar4[5] + iVar7 * 4);
LAB_005dd982:
            FUN_006b5aa0(DAT_0080c4fa,pcVar5);
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)puVar4[2]);
        }
        FUN_006b5570((byte *)puVar4);
        puVar3 = puStack_10;
      }
      FUN_006b5570((byte *)puVar3);
      uStack_24 = 0x28;
      uStack_20 = 1;
      uStack_1e = *(undefined2 *)(DAT_0080c4fa + 8);
      FUN_006e5970(2,*(int *)(pSVar2 + 0x550),(int)auStack_34);
      uStack_24 = 0x22;
      uStack_20 = 0;
      if (cStack_5 == '\0') {
        uStack_1e = (short)uStack_14;
      }
      else if (*(int *)(DAT_0080c4fa + 8) < 6) {
        uStack_1e = 0;
      }
      else {
        uStack_1e = (short)*(int *)(DAT_0080c4fa + 8) + -5;
      }
      FUN_006e5970(2,*(int *)(pSVar2 + 0x550),(int)auStack_34);
      uStack_24 = 0x20;
      uStack_20 = 1;
      uStack_1e = 0;
      FUN_006e5970(2,*(int *)(pSVar2 + 0x550),(int)auStack_34);
    }
    DAT_00858df8 = puStack_78;
    return;
  }
  DAT_00858df8 = puStack_78;
  iVar6 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0x372,0,iVar7,&DAT_007a4ccc);
  if (iVar6 == 0) {
    FUN_006a5e40(iVar7,0,0x7cd718,0x372);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

