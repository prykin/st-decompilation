
void thunk_FUN_004fe370(int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  UINT UVar5;
  uint *puVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  HINSTANCE pHVar8;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    if (param_1 == 0) {
      iVar3 = *(int *)(iStack_8 + 0x19c);
    }
    else {
      iVar3 = *(int *)(iStack_8 + 0x184);
    }
    FUN_00710a90(iVar3,0,1,0,0x4e,0x24);
    if (param_1 == 0) {
      cVar2 = *(char *)(iStack_8 + 0xc5d);
    }
    else {
      cVar2 = *(char *)(iStack_8 + 0xb6f);
    }
    if (cVar2 == '\0') {
      if (param_1 == 0) {
        cVar2 = *(char *)(iStack_8 + 0xc58);
        uVar4 = *(undefined4 *)(iStack_8 + 0xc54);
      }
      else {
        cVar2 = *(char *)(iStack_8 + 0xb6a);
        uVar4 = *(undefined4 *)(iStack_8 + 0xb66);
      }
      pHVar8 = DAT_00807618;
      UVar5 = thunk_FUN_00523410(uVar4,cVar2,0);
      puVar6 = (uint *)FUN_006b0140(UVar5,pHVar8);
    }
    else if (param_1 == 0) {
      puVar6 = (uint *)(iStack_8 + 0xc5d);
    }
    else {
      puVar6 = (uint *)(iStack_8 + 0xb6f);
    }
    FUN_00711b70(puVar6,-2,-1,0,-1,-1);
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1e,0,iVar3,&DAT_007a4ccc);
  if (iVar7 == 0) {
    FUN_006a5e40(iVar3,0,0x7c23cc,0x1e);
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

