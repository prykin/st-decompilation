
void thunk_FUN_00504e60(void)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  void *unaff_ESI;
  UINT UVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar9 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar9);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined1 *)uVar9;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0xa0,0,iVar2,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7c2700,0xa0);
    return;
  }
  if (DAT_0080874e == '\x03') {
    thunk_FUN_00540760(*(undefined4 **)(iStack_8 + 0x194),0xf,0x8d,'\x01',
                       *(byte **)(iStack_8 + 0x9f1));
    if (*(int *)(iStack_8 + 0xc4d) == 0) goto LAB_00504f81;
    FUN_00710a90(*(int *)(iStack_8 + 0x194),0,0x10,0x8e,*(int *)(*(int *)(iStack_8 + 0x9f1) + 4),0xb
                );
    UVar5 = *(UINT *)(iStack_8 + 0xc4d);
  }
  else {
    thunk_FUN_00540760(*(undefined4 **)(iStack_8 + 0x194),4,0x89,'\x01',*(byte **)(iStack_8 + 0x9f1)
                      );
    if (*(int *)(iStack_8 + 0xc4d) == 0) goto LAB_00504f81;
    FUN_00710a90(*(int *)(iStack_8 + 0x194),0,6,0x8b,200,0xb);
    UVar5 = *(UINT *)(iStack_8 + 0xc4d);
  }
  iVar8 = -1;
  iVar7 = -1;
  uVar6 = 0;
  iVar4 = -1;
  iVar2 = -2;
  puVar3 = (uint *)FUN_006b0140(UVar5,DAT_00807618);
  FUN_00711b70(puVar3,iVar2,iVar4,uVar6,iVar7,iVar8);
LAB_00504f81:
  if (-1 < (int)*(uint *)(iStack_8 + 0x15c)) {
    FUN_006b3640(DAT_008075a8,*(uint *)(iStack_8 + 0x15c),0xffffffff,*(uint *)(iStack_8 + 0x50),
                 *(uint *)(iStack_8 + 0xa8));
  }
  DAT_00858df8 = (undefined1 *)uVar9;
  return;
}

