
int FUN_006a0740(void)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  byte *pbVar6;
  void *unaff_EDI;
  char *pcVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  char cVar10;
  uint *puVar11;
  undefined4 local_54;
  undefined4 local_50 [16];
  int local_10;
  byte *local_c;
  int local_8;
  
  local_8 = 1;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar2 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar2 = FUN_006ad4d0(s_E____titans_Maps_generate_cpp_007d864c,0xcd,0,iVar2,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    return 0;
  }
  *(undefined4 *)(local_10 + 0x570b) = 0x32;
  iVar2 = thunk_FUN_00693d00((void *)(local_10 + 0x24e),*(undefined4 *)(local_10 + 0x18),
                             DAT_00853de0);
  if (iVar2 == 0) {
    local_8 = 0;
  }
  pcVar3 = (char *)FUN_006b0140(0x232b,DAT_00807618);
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar3 + 1;
    cVar10 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar10 != '\0');
  uVar4 = ~uVar4;
  pbVar6 = (byte *)(pcVar7 + -uVar4);
  pbVar8 = (byte *)(local_10 + 0x55fb);
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
    pbVar6 = pbVar6 + 4;
    pbVar8 = pbVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar8 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar8 = pbVar8 + 1;
  }
  FUN_006f13f0(0,PTR_s_TITLE_MISSION_0079d838,(byte *)(local_10 + 0x55fb),0x104,(undefined4 *)0x0,
               '\0',(uint *)0x0);
  FUN_006f13f0(0,PTR_s_TEXTURE_0079d83c,(byte *)(local_10 + 0x53f3),0x104,(undefined4 *)0x0,'\0',
               (uint *)0x0);
  iVar2 = FUN_006f0c00(*(short **)(local_10 + 0xc),*(int **)(local_10 + 8));
  if (iVar2 != 0) {
    local_8 = 0;
  }
  *(undefined1 *)(*(int *)(local_10 + 0xc) + 4) = 0x20;
  iVar2 = FUN_006efdb0(*(undefined2 **)(local_10 + 0xc),*(int *)(local_10 + 0x18),s_3D_MAP_007ca1e4,
                       '\0');
  if (iVar2 != 0) {
    local_8 = 0;
  }
  if (local_8 != 0) {
    iVar2 = thunk_FUN_006a0960();
    if (iVar2 == 0) {
      local_8 = 0;
    }
  }
  local_c = (byte *)thunk_FUN_006a2ed0(*(short **)(local_10 + 0xc));
  puVar11 = (uint *)0x0;
  cVar10 = '\0';
  puVar9 = (undefined4 *)0x0;
  uVar4 = FUN_006b5050((int)local_c);
  FUN_006f13f0(0xc,PTR_s_SMALL_MAP_0079d840,local_c,uVar4,puVar9,cVar10,puVar11);
  if (local_c != (byte *)0x0) {
    FUN_006ab060(&local_c);
  }
  DAT_00858df8 = (undefined4 *)local_54;
  return local_8;
}

