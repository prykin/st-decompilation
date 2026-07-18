
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005325b0(void *param_1)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  undefined4 unaff_ESI;
  byte *pbVar12;
  void *unaff_EDI;
  char *pcVar13;
  byte *pbVar14;
  bool bVar15;
  char local_12c [108];
  undefined4 local_c0;
  undefined4 **local_94;
  undefined4 local_90 [16];
  undefined4 **local_50;
  undefined4 local_4c [16];
  uint local_c;
  void *local_8;
  
  *(undefined4 *)((int)param_1 + 0x28) = 0x20;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  local_8 = param_1;
  FUN_006e6080(param_1,2,*(undefined4 *)((int)param_1 + 0x1b5),(undefined4 *)((int)param_1 + 0x18));
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar4 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pvVar11 = local_8;
  if (iVar4 != 0) {
    DAT_00858df8 = local_50;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x3ad,0,iVar4,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar4,0,0x7c70a0,0x3ad);
    return;
  }
  if (*(byte **)((int)local_8 + 0x2fd) != (byte *)0x0) {
    FUN_006ae110(*(byte **)((int)local_8 + 0x2fd));
  }
  *(undefined4 *)((int)pvVar11 + 0x2fd) = 0;
  local_94 = DAT_00858df8;
  DAT_00858df8 = &local_94;
  iVar4 = __setjmp3(local_90,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = local_94;
    puVar6 = FUN_006ae290((uint *)0x0,1,0x98,1);
    *(uint **)((int)local_8 + 0x2fd) = puVar6;
    pvVar11 = local_8;
    goto LAB_00532758;
  }
  switch(_DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_SYSTEM__0079acf0,
              PTR_s_STRATEGS_0079acfc);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,&DAT_0080ef1e);
  }
  puVar5 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  pvVar11 = local_8;
  switch(_DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    puVar6 = thunk_FUN_0067dec0((int)puVar5,(uint)DAT_0080874e,DAT_0080995c);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    puVar6 = thunk_FUN_0067e0e0((int)puVar5,(uint)DAT_0080874d,0xffffffff);
    break;
  default:
    goto switchD_005326e6_caseD_9;
  }
  *(uint **)((int)pvVar11 + 0x2fd) = puVar6;
switchD_005326e6_caseD_9:
  FUN_006f1170(puVar5);
  DAT_00858df8 = local_94;
LAB_00532758:
  if ((&stack0x00000000 != (undefined1 *)0x12c) &&
     (iVar4 = FUN_006b0140(0x2711,DAT_00807618), iVar4 != 0)) {
    pcVar7 = (char *)FUN_006b0140(0x2711,DAT_00807618);
    uVar9 = 0xffffffff;
    do {
      pcVar13 = pcVar7;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar13 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar13;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar7 = pcVar13 + -uVar9;
    pcVar13 = local_12c;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar13 = pcVar13 + 1;
    }
  }
  local_c0 = 1;
  FUN_006b11d0(*(uint **)((int)pvVar11 + 0x2fd),0,(undefined4 *)local_12c);
  *(undefined4 *)((int)pvVar11 + 0x28) = 0x28;
  puVar5 = (undefined4 *)((int)pvVar11 + 0x18);
  *(undefined4 *)((int)pvVar11 + 0x2c) = *(undefined4 *)(*(int *)((int)pvVar11 + 0x2fd) + 0xc);
  FUN_006e6080(pvVar11,2,*(undefined4 *)((int)pvVar11 + 0x1b5),puVar5);
  *(undefined4 *)((int)pvVar11 + 0x28) = 0x20;
  *(undefined4 *)((int)pvVar11 + 0x2c) = 1;
  FUN_006e6080(pvVar11,2,*(undefined4 *)((int)pvVar11 + 0x1b5),puVar5);
  iVar4 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)&DAT_0080f33a);
  if (iVar4 == 0) {
    *(undefined4 *)((int)pvVar11 + 0x28) = 0x22;
    *(undefined4 *)((int)pvVar11 + 0x2c) = 0;
    FUN_006e6080(pvVar11,2,*(undefined4 *)((int)pvVar11 + 0x1b5),puVar5);
  }
  else {
    iVar4 = *(int *)((int)pvVar11 + 0x2fd);
    local_c = 0;
    if (*(int *)(iVar4 + 0xc) != 0) {
      if (*(int *)(iVar4 + 0xc) == 0) {
        pbVar12 = (byte *)0x0;
        goto LAB_00532855;
      }
      do {
        pbVar12 = (byte *)(*(int *)(iVar4 + 8) * local_c + *(int *)(iVar4 + 0x1c));
LAB_00532855:
        pbVar14 = (byte *)&DAT_0080f33a;
        do {
          bVar2 = *pbVar12;
          bVar15 = bVar2 < *pbVar14;
          if (bVar2 != *pbVar14) {
LAB_0053287e:
            iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00532883;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar12[1];
          bVar15 = bVar2 < pbVar14[1];
          if (bVar2 != pbVar14[1]) goto LAB_0053287e;
          pbVar12 = pbVar12 + 2;
          pbVar14 = pbVar14 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_00532883:
        if (iVar4 == 0) {
          *(uint *)((int)pvVar11 + 0x2c) = local_c;
          *(undefined4 *)((int)pvVar11 + 0x28) = 0x22;
          FUN_006e6080(pvVar11,2,*(undefined4 *)((int)pvVar11 + 0x1b5),
                       (undefined4 *)((int)pvVar11 + 0x18));
        }
        iVar4 = *(int *)((int)pvVar11 + 0x2fd);
        local_c = local_c + 1;
        if (*(uint *)(iVar4 + 0xc) <= local_c) {
          DAT_00858df8 = local_50;
          return;
        }
      } while( true );
    }
  }
  DAT_00858df8 = local_50;
  return;
}

