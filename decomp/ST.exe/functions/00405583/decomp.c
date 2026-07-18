
void thunk_FUN_005219e0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  void *unaff_ESI;
  int *piVar10;
  ushort *puVar11;
  undefined4 uVar12;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uVar12 = DAT_00858df8;
  DAT_00858df8 = &stack0xffffffb4;
  iVar2 = __setjmp3(auStack_48,0,unaff_ESI,uVar12);
  if (iVar2 == 0) {
    DAT_0080169c = iStack_8;
    puVar3 = FUN_0070df00(0x19d,*(int *)(DAT_00802a28 + 0x30));
    *(undefined4 **)(iStack_8 + 0x180) = puVar3;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    iVar2 = 1;
    piVar10 = (int *)0x0;
    pCVar4 = thunk_FUN_00571240(s_BKG_EDITCHAT_007c40a0,0);
    puVar5 = FUN_006f1ce0(1,pCVar4,piVar10,iVar2);
    puVar11 = puVar5 + 0x14;
    iVar2 = 1;
    *(ushort **)(iStack_8 + 0x184) = puVar5;
    uVar6 = FUN_006b4fe0((int)puVar5);
    uVar7 = FUN_006b50c0((-(uint)(DAT_0080874e != '\x03') & 0x32) + 700,0x14,
                         (uint)*(ushort *)(*(int *)(iStack_8 + 0x184) + 0xe),uVar6,
                         (undefined4 *)puVar11,iVar2);
    *(undefined4 *)(iStack_8 + 0x19c) = uVar7;
    thunk_FUN_00540760(*(undefined4 **)(iStack_8 + 0x68),0,0,'\x01',*(byte **)(iStack_8 + 0x184));
    puVar8 = FUN_006b54f0((uint *)0x0,1,1);
    *(uint **)(iStack_8 + 0x198) = puVar8;
    FUN_006b6020((int)puVar8,0,&DAT_008016a0);
    DAT_00858df8 = (undefined1 *)uVar12;
    return;
  }
  DAT_00858df8 = (undefined1 *)uVar12;
  iVar9 = FUN_006ad4d0(s_E____titans_Andrey_intercom_cpp_007c401c,0x34,0,iVar2,&DAT_007a4ccc);
  if (iVar9 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c401c,0x34);
  return;
}

