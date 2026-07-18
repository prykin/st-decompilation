
void FUN_005d9250(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *local_4c;
  undefined4 local_48 [16];
  int local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    FUN_006b4170(*(int *)(local_8 + 0x1cb8),0,0,0x7d,*(int *)(*(int *)(local_8 + 0x1cc0) + 4),
                 *(int *)(*(int *)(local_8 + 0x1cc0) + 8),0xff);
    iVar2 = *(int *)(local_8 + 0x1cc0);
    uVar7 = *(uint *)(iVar2 + 0x14);
    if (uVar7 == 0) {
      uVar7 = ((uint)*(ushort *)(iVar2 + 0xe) * *(int *)(iVar2 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar2 + 8);
    }
    puVar3 = (undefined4 *)FUN_006b4fa0(iVar2);
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    FUN_00710a90(*(int *)(local_8 + 0x1cc0),0,0,0,0,0);
    if (*(char *)(local_8 + 0x1a5f) == '\0') {
      iVar10 = -1;
      iVar9 = -1;
      uVar4 = 0;
      iVar8 = -1;
      iVar2 = -2;
      puVar5 = (uint *)FUN_006b0140(0x2521,DAT_00807618);
    }
    else {
      puVar3 = &DAT_00807ddd;
      puVar5 = (uint *)(local_8 + 0x1cd4);
      uVar4 = FUN_006b0140(0x2520,DAT_00807618);
      wsprintfA((LPSTR)puVar5,s__0_s__5_s_0__007cd6c4,uVar4,puVar3);
      iVar10 = -1;
      iVar9 = -1;
      uVar4 = 0;
      iVar8 = -1;
      iVar2 = -2;
    }
    FUN_00711b70(puVar5,iVar2,iVar8,uVar4,iVar9,iVar10);
    FUN_006b5440(*(int *)(local_8 + 0x1cb8),0,0,0x7d,*(int *)(local_8 + 0x1cc0),0,0xff);
    DAT_00858df8 = local_4c;
    return;
  }
  DAT_00858df8 = local_4c;
  iVar8 = FUN_006ad4d0(s_E____titans_Start_sid_obj_cpp_007cd5c4,0x17b,0,iVar2,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd5c4,0x17b);
  return;
}

