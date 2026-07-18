
void thunk_FUN_005381b0(void)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar3 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = 1;
    puVar5 = (undefined4 *)(DAT_0080679c + 0x28);
    uVar4 = FUN_006b4fe0(DAT_0080679c);
    iVar3 = FUN_006b50c0(*(int *)((int)pvStack_8 + 0x40),*(int *)((int)pvStack_8 + 0x48),
                         (uint)*(ushort *)(DAT_0080679c + 0xe),uVar4,puVar5,iVar3);
    *(int *)((int)pvStack_8 + 0x68) = iVar3;
    uVar4 = *(uint *)(iVar3 + 0x14);
    if (uVar4 == 0) {
      uVar4 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar3 + 8);
    }
    puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
    for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)((int)pvStack_8 + 0x4c));
    puVar1 = (uint *)((int)pvStack_8 + 0x60);
    FUN_006b2330((uint)DAT_008075a8,puVar1,*(uint *)((int)pvStack_8 + 100),0x4057ea,
                 *(uint *)((int)pvStack_8 + 0x40),*(uint *)((int)pvStack_8 + 0x48),
                 *(uint *)((int)pvStack_8 + 0x68));
    FUN_006b1b10((int)DAT_008075a8,*puVar1,3);
    FUN_006b3640(DAT_008075a8,*puVar1,0xffffffff,*(uint *)((int)pvStack_8 + 0x3c),
                 *(uint *)((int)pvStack_8 + 0x44));
    puVar5 = (undefined4 *)((int)pvStack_8 + 0x18);
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)((int)pvStack_8 + 0x2c) = *(undefined4 *)((int)pvStack_8 + 8);
    *(undefined4 *)((int)pvStack_8 + 0x28) = 0x13;
    FUN_006e6000(pvStack_8,3,1,(undefined4 *)((int)pvStack_8 + 0x18));
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_panel_cpp_007c7390,0x2a,0,iVar3,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7c7390,0x2a);
  return;
}

