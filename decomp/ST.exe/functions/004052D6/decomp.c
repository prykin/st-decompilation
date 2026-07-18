
void thunk_FUN_00504cf0(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  UINT UVar5;
  uint *puVar6;
  void *unaff_ESI;
  HINSTANCE pHVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar12 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar12);
  if (iVar2 == 0) {
    uVar3 = thunk_FUN_005276e0(*(undefined1 *)(iStack_8 + 0xc31),*(byte *)(iStack_8 + 0xc32));
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(iStack_8 + 0x29a),uVar3);
    thunk_FUN_00540760(*(undefined4 **)(iStack_8 + 0x194),0x26,0x50,'\x01',pbVar4);
    FUN_00710a90(*(int *)(iStack_8 + 0x194),0,0x15,0x6c,0xc3,0xb);
    iVar11 = -1;
    iVar10 = -1;
    uVar9 = 5;
    iVar8 = -1;
    iVar2 = -2;
    pHVar7 = DAT_00807618;
    UVar5 = thunk_FUN_00528060(*(undefined1 *)(iStack_8 + 0xc31),*(char *)(iStack_8 + 0xc32));
    puVar6 = (uint *)FUN_006b0140(UVar5,pHVar7);
    FUN_00711b70(puVar6,iVar2,iVar8,uVar9,iVar10,iVar11);
    DAT_00858df8 = (undefined1 *)uVar12;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar12;
  iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x84,0,iVar2,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c2700,0x84);
  return;
}

