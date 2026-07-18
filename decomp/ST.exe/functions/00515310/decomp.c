
void FUN_00515310(UINT param_1,int param_2,UINT param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  UINT UVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 local_50;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  local_8 = 0x16;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar3 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_50;
    iVar4 = FUN_006ad4d0(s_E____titans_Andrey_helppan_cpp_007c383c,0x3d3,0,iVar3,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar3,0,0x7c383c,0x3d3);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(uint *)(local_c + 0x19c) != 0) {
    FUN_006e56b0(*(void **)(local_c + 0xc),*(uint *)(local_c + 0x19c));
  }
  *(undefined4 *)(*(int *)(local_c + 0x1d7) + 0xc) = 0;
  *(undefined1 *)(local_c + 0x1db) = 0;
  FUN_006b55f0(*(undefined4 **)(local_c + 0x68),0,0x21,0x16,*(int *)(local_c + 0x1dc),0,0x21,0x16,
               0x1b8,0x118);
  iVar3 = local_8;
  FUN_00710a90(*(int *)(local_c + 0x68),0,0x21,local_8,0x19c,0x14);
  if (DAT_0080874e == '\x03') {
    iVar4 = 5;
  }
  else {
    iVar4 = (-(uint)(DAT_0080874e != '\x01') & 6) + 1;
  }
  iVar13 = -1;
  iVar12 = -1;
  puVar5 = (uint *)FUN_006b0140(param_1,DAT_00807618);
  FUN_007119c0(puVar5,iVar12,iVar13,iVar4);
  local_8 = iVar3 + 0x14;
  if (param_2 != 0) {
    if (param_2 == 1) {
      UVar10 = 0x5604;
    }
    else if (param_2 == 2) {
      UVar10 = 0x5605;
    }
    else {
      UVar10 = 0x5606;
    }
    FUN_00710a90(*(int *)(local_c + 0x68),0,0x21,local_8,0x19c,0xf);
    uVar14 = 3;
    iVar12 = -1;
    iVar4 = -1;
    puVar5 = (uint *)FUN_006b0140(UVar10,DAT_00807618);
    FUN_007119c0(puVar5,iVar4,iVar12,uVar14);
    local_8 = iVar3 + 0x23;
  }
  if (param_3 != 0) {
    FUN_00710a90(*(int *)(local_c + 0x68),0,0x21,local_8,0x19c,0xf);
    pcVar6 = (char *)FUN_006b0140(param_3,DAT_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar11 = pcVar6;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar6 = pcVar11 + -uVar8;
    pcVar11 = (char *)&DAT_0080f33a;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar11 = pcVar11 + 1;
    }
    for (puVar5 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar5 != (uint *)0x0;
        puVar5 = FUN_0072e560(puVar5,'\n')) {
      *(undefined1 *)puVar5 = 0x20;
    }
    FUN_007119c0(&DAT_0080f33a,-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
    local_8 = local_8 + 0xf;
  }
  iVar3 = *(int *)(local_c + 0x218);
  uVar8 = *(uint *)(iVar3 + 0x14);
  if (uVar8 == 0) {
    uVar8 = ((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 & 0x1ffffffc) *
            *(int *)(iVar3 + 8);
  }
  puVar7 = (undefined4 *)FUN_006b4fa0(iVar3);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar7 = 0xffffffff;
    puVar7 = puVar7 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar7 = 0xff;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  DAT_00858df8 = (undefined4 *)local_50;
  return;
}

