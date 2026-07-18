
void thunk_FUN_005040a0(void)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  void *unaff_ESI;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar8 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar8);
  if (iVar2 == 0) {
    thunk_FUN_00540760(*(undefined4 **)(iStack_8 + 400),0,0,'\x01',*(byte **)(iStack_8 + 0x994));
    FUN_00710a90(*(int *)(iStack_8 + 400),0,5,6,0x2a,10);
    iVar7 = -1;
    iVar6 = -1;
    iVar2 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5;
    iVar5 = -1;
    iVar4 = -2;
    puVar3 = (uint *)FUN_006b0140(0x2712,DAT_00807618);
    FUN_00711b70(puVar3,iVar4,iVar5,iVar2,iVar6,iVar7);
    if (-1 < (int)*(uint *)(iStack_8 + 0x158)) {
      FUN_006b3640(DAT_008075a8,*(uint *)(iStack_8 + 0x158),0xffffffff,*(uint *)(iStack_8 + 0x4c),
                   *(uint *)(iStack_8 + 0xa4));
    }
    DAT_00858df8 = (undefined1 *)uVar8;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar8;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_cpanel3_cpp_007c26a0,0x13,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c26a0,0x13);
  return;
}

