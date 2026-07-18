
void FUN_0051f8f0(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    iVar2 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e;
    FUN_006b5f80(DAT_008075a8,iVar2,DAT_00806734 + -0x1a,(DAT_00806730 - iVar2) + -0x87,0x12);
    iVar2 = *(int *)(local_8 + 0x12a);
    uVar6 = *(uint *)(iVar2 + 0x14);
    if (uVar6 == 0) {
      uVar6 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar3 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    if (*(char *)(local_8 + 0x18) != '\0') {
      FUN_00710a90(*(int *)(local_8 + 0x12a),0,0,0,0,0);
      FUN_007119c0((uint *)(local_8 + 0x18),0,-1,(uint)*(byte *)(local_8 + 0x11d));
    }
    thunk_FUN_005403c0((-(uint)(DAT_0080874e != '\x03') & 0xfffffff6) + 0x1e,DAT_00806734 + -0x1a,
                       '\x01',*(BITMAPINFO **)(local_8 + 0x12a));
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E____titans_Andrey_helpstr_cpp_007c3e4c,0x1b,0,iVar2,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c3e4c,0x1b);
  return;
}

