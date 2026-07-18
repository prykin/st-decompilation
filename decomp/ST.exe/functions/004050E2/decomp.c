
void thunk_FUN_005a1160(void)

{
  char cVar1;
  void *this;
  code *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 *puStack_90;
  undefined4 auStack_8c [16];
  undefined4 auStack_4c [8];
  undefined4 auStack_2c [8];
  undefined4 *puStack_c;
  int iStack_8;
  
  puStack_90 = DAT_00858df8;
  DAT_00858df8 = &puStack_90;
  iVar3 = __setjmp3(auStack_8c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = puStack_90;
    iVar10 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x935,0,iVar3,&DAT_007a4ccc);
    if (iVar10 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7cbf70,0x935);
    return;
  }
  wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_UPDATES__0079c020,
            PTR_s_ST_INF_0079c024);
  pcVar4 = (char *)thunk_FUN_00649ff0(&DAT_0080f33a,&iStack_8,(undefined4 *)0x0,(int *)0x0);
  if (pcVar4 == (char *)0x0) {
    thunk_FUN_005a0ff0();
    DAT_00858df8 = puStack_90;
    return;
  }
  uVar7 = 0xffffffff;
  do {
    pcVar9 = pcVar4;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar4 = pcVar9 + -uVar7;
  pcVar9 = (char *)&DAT_0080f126;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar9 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar3 = puStack_c[0x6b0];
  uVar7 = *(uint *)(iVar3 + 0x14);
  if (uVar7 == 0) {
    uVar7 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
            *(int *)(iVar3 + 8);
  }
  puVar5 = (undefined4 *)FUN_006b4fa0(iVar3);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar5 = 0xff;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  FUN_00710a90(puStack_c[0x6b0],0,0,0x16,0x1b8,0xf0);
  iVar13 = -1;
  iVar12 = -1;
  uVar11 = 2;
  iVar10 = -1;
  iVar3 = -2;
  puVar6 = (uint *)FUN_006b0140(0x25bd,DAT_00807618);
  FUN_00711b70(puVar6,iVar3,iVar10,uVar11,iVar12,iVar13);
  FUN_006b35d0(DAT_008075a8,puStack_c[0x6af]);
  puVar5 = auStack_2c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = auStack_4c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  auStack_4c[2] = puStack_c[2];
  auStack_2c[3] = 2;
  auStack_2c[4] = 0x6957;
  auStack_4c[3] = 2;
  auStack_4c[4] = 0x6956;
  this = *(void **)(*(int *)((int)puStack_c + 0x1a5b) + 0x2e6);
  auStack_2c[2] = auStack_4c[2];
  if (this != (void *)0x0) {
    thunk_FUN_005b7ef0(this,0x25b7,'\x01',auStack_2c,auStack_4c,(undefined4 *)0x0,iStack_8,0x25b8);
    DAT_00858df8 = puStack_90;
    return;
  }
  (**(code **)*puStack_c)(auStack_2c);
  DAT_00858df8 = puStack_90;
  return;
}

