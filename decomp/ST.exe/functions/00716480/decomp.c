
undefined4 __thiscall FUN_00716480(void *this,short *param_1,undefined1 param_2,uint param_3)

{
  char cVar1;
  short *psVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  char *pcVar10;
  void *unaff_EDI;
  char *pcVar11;
  undefined4 local_4c;
  undefined4 local_48 [16];
  void *local_8;
  
  if (*(int *)((int)this + 4) == -1) {
    return 0;
  }
  if (*(char *)((int)this + 0x4c) == -0x80) {
    return 0;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar5 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pvVar4 = local_8;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar7 = FUN_006ad4d0(s_E__Ourlib_Sprite_cpp_007f0454,0x161,0,iVar5,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    FUN_006a5e40(iVar5,0,0x7f0454,0x163);
    return 0xfffffc18;
  }
  *(undefined4 *)((int)local_8 + 0x4d) = 0;
  if (*(int *)((int)local_8 + 0x61) == 0) {
    switch(*(undefined1 *)((int)local_8 + 0x4c)) {
    case 7:
    case 0x81:
      if (*(int *)((int)local_8 + 0x51) != 0) {
        FUN_00725e30((int *)((int)local_8 + 0x51));
      }
      break;
    case 8:
      if (*(int *)((int)local_8 + 0x59) != 0) {
        FUN_00726260((undefined4 *)((int)local_8 + 0x59));
      }
      break;
    case 0x1e:
      if (*(int *)((int)local_8 + 0x55) != 0) {
        FUN_00726bd0((int *)((int)local_8 + 0x55));
      }
    }
  }
  switch(param_2) {
  case 7:
  case 0x81:
    *(short **)((int)pvVar4 + 0x51) = param_1;
    FUN_006b2930(*(int **)((int)pvVar4 + 0x48),*(uint *)((int)pvVar4 + 4),0,
                 (undefined4 *)(int)*(short *)((int)param_1 + 0x23),(int *)((int)param_1 + 0x2d),
                 0x8000000,(int)*(short *)((int)param_1 + 0x29),(int)*(short *)((int)param_1 + 0x2b)
                );
    iVar5 = *(int *)((int)pvVar4 + 0x51);
    *(int *)((int)pvVar4 + 0xc) = (int)*(short *)(iVar5 + 0x23);
    *(int *)((int)pvVar4 + 0x24) = (int)*(short *)(iVar5 + 0x29);
    *(int *)((int)pvVar4 + 0x28) = (int)*(short *)(iVar5 + 0x2b);
    break;
  case 8:
    *(short **)((int)pvVar4 + 0x59) = param_1;
    FUN_006b2930(*(int **)((int)pvVar4 + 0x48),*(uint *)((int)pvVar4 + 4),(int)*param_1,
                 (undefined4 *)(int)param_1[1],(int *)(param_1 + 6),0x4000000,(int)param_1[2],
                 (int)param_1[3]);
    psVar2 = *(short **)((int)pvVar4 + 0x59);
    *(int *)((int)pvVar4 + 0xc) = (int)psVar2[1];
    *(int *)((int)pvVar4 + 0x18) = (int)*psVar2;
    *(int *)((int)pvVar4 + 0x24) = (int)psVar2[2];
    *(int *)((int)pvVar4 + 0x28) = (int)psVar2[3];
    *(undefined4 *)((int)pvVar4 + 0x4d) = 0xffffffff;
    break;
  case 0x1e:
    *(short **)((int)pvVar4 + 0x55) = param_1;
    FUN_006b2930(*(int **)((int)pvVar4 + 0x48),*(uint *)((int)pvVar4 + 4),0,
                 (undefined4 *)(int)*param_1,(int *)(param_1 + 5),0x8000000,(int)param_1[3],
                 (int)param_1[4]);
    psVar2 = *(short **)((int)pvVar4 + 0x55);
    *(int *)((int)pvVar4 + 0xc) = (int)*psVar2;
    *(int *)((int)pvVar4 + 0x24) = (int)psVar2[3];
    *(int *)((int)pvVar4 + 0x28) = (int)psVar2[4];
  }
  *(undefined1 *)((int)pvVar4 + 0x4c) = param_2;
  iVar5 = *(int *)((int)pvVar4 + 0xc);
  if (iVar5 < 1) {
    iVar7 = iVar5 + -1;
  }
  else {
    iVar7 = 0;
  }
  *(int *)((int)pvVar4 + 0x10) = iVar7;
  *(int *)((int)pvVar4 + 0x14) = iVar5 + -1;
  uVar8 = 0xffffffff;
  pcVar10 = &DAT_008016a0;
  do {
    pcVar11 = pcVar10;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar11 = pcVar10 + 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar11;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pcVar10 = pcVar11 + -uVar8;
  pcVar11 = (char *)((int)pvVar4 + 0x65);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar11 = pcVar11 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar11 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
  }
  if (param_3 != 0xffffffff) {
    FUN_006b3020(*(int *)((int)pvVar4 + 0x48),*(uint *)((int)pvVar4 + 4),param_3);
    *(uint *)((int)pvVar4 + 0x5d) = param_3;
  }
  *(undefined4 *)((int)pvVar4 + 0x61) = 0;
  DAT_00858df8 = (undefined4 *)local_4c;
  return 0;
}

