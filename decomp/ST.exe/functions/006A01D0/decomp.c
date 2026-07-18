
undefined4 FUN_006a01d0(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  void *unaff_EDI;
  char *pcVar10;
  undefined4 local_64;
  undefined4 local_60 [16];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_c = 1;
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  iVar3 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_64;
    iVar3 = FUN_006ad4d0(s_E____titans_Maps_generate_cpp_007d864c,0x72,0,iVar3,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
    return 0;
  }
  *(undefined4 *)(local_10 + 0x53eb) = *(undefined4 *)(local_10 + 0x228);
  *(undefined4 *)(local_10 + 0x53ef) = *(undefined4 *)(local_10 + 0x22c);
  uVar7 = 0xffffffff;
  pcVar9 = (char *)(local_10 + 0x124);
  do {
    pcVar10 = pcVar9;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar10 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar9 = pcVar10 + -uVar7;
  pcVar10 = (char *)(local_10 + 0x53f3);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar10 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar10 = pcVar10 + 1;
  }
  local_8 = (undefined4 *)0x0;
  FUN_006f1ce0(0xc,s_TEXTURE_DSCR_007cd130,(int *)&local_8,1);
  thunk_FUN_00693710(*local_8);
  FUN_006f20e0((uint *)&local_8);
  puVar4 = FUN_006f0ec0(0x345,(byte *)(local_10 + 0x20),1,0,0);
  *(undefined4 **)(local_10 + 0x18) = puVar4;
  thunk_FUN_0069ff90(local_10);
  puVar4 = FUN_006efc50(*(int *)(local_10 + 0x228),*(int *)(local_10 + 0x22c),
                        *(int *)(local_10 + 0x234),*(int *)(local_10 + 0x239),0x20);
  *(undefined4 **)(local_10 + 0xc) = puVar4;
  thunk_FUN_0069ff90(local_10);
  piVar5 = FUN_006f0620(*(short **)(local_10 + 0xc));
  *(int **)(local_10 + 8) = piVar5;
  thunk_FUN_0069ff90(local_10);
  thunk_FUN_006a2d80(1,*(int **)(local_10 + 8));
  thunk_FUN_0069ff90(local_10);
  iVar3 = FUN_006f0c00(*(short **)(local_10 + 0xc),*(int **)(local_10 + 8));
  if (iVar3 != 0) {
    local_c = 0;
  }
  thunk_FUN_0069ff90(local_10);
  iVar3 = thunk_FUN_00693ad0((void *)(local_10 + 0x24e),(undefined2 *)(local_10 + 0x53eb));
  if (iVar3 == 0) {
    local_c = 0;
  }
  thunk_FUN_0069ff90(local_10);
  local_20 = *(int *)(local_10 + 0x228);
  local_1c = *(undefined4 *)(local_10 + 0x22c);
  local_18 = 6;
  thunk_FUN_0069ff90(local_10);
  thunk_FUN_006945c0((void *)(local_10 + 0x1bef),&local_20);
  thunk_FUN_0069ff90(local_10);
  thunk_FUN_00691690((void *)(local_10 + 0x1c03),*(undefined4 *)(local_10 + 0x239),0,0,
                     *(undefined **)(local_10 + 0x24a));
  thunk_FUN_0069ff90(local_10);
  DAT_00858df8 = (undefined4 *)local_64;
  return local_c;
}

