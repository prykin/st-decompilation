
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepAsses */

void __thiscall OptPanelTy::PrepAsses(OptPanelTy *this,void *param_1)

{
  OptPanelTy *pOVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  cMf32 *this_00;
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  uint uVar10;
  uint uVar11;
  OptPanelTy *pOVar12;
  undefined4 unaff_ESI;
  byte *pbVar13;
  void *unaff_EDI;
  char *pcVar14;
  byte *pbVar15;
  bool bVar16;
  char local_12c [108];
  undefined4 local_c0;
  undefined4 **local_94;
  undefined4 local_90 [16];
  undefined4 **local_50;
  undefined4 local_4c [16];
  uint local_c;
  OptPanelTy *local_8;
  
  *(undefined4 *)(this + 0x28) = 0x20;
  *(undefined4 *)(this + 0x2c) = 0;
  local_8 = this;
  FUN_006e6080(this,2,*(undefined4 *)(this + 0x1b5),(undefined4 *)(this + 0x18));
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar5 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  pOVar12 = local_8;
  if (iVar5 != 0) {
    DAT_00858df8 = local_50;
    iVar9 = FUN_006ad4d0(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x3ad,0,iVar5,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7c70a0,0x3ad);
    return;
  }
  if (*(byte **)(local_8 + 0x2fd) != (byte *)0x0) {
    FUN_006ae110(*(byte **)(local_8 + 0x2fd));
  }
  *(undefined4 *)(pOVar12 + 0x2fd) = 0;
  local_94 = DAT_00858df8;
  DAT_00858df8 = &local_94;
  iVar5 = __setjmp3(local_90,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    DAT_00858df8 = local_94;
    puVar7 = FUN_006ae290((uint *)0x0,1,0x98,1);
    *(uint **)(local_8 + 0x2fd) = puVar7;
    pOVar12 = local_8;
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
  puVar6 = FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  pOVar12 = local_8;
  this_00 = (cMf32 *)(_DAT_008087a0 & 0xff);
  switch(this_00) {
  case (cMf32 *)0x1:
  case (cMf32 *)0x4:
  case (cMf32 *)0x6:
  case (cMf32 *)0x7:
  case (cMf32 *)0xd:
  case (cMf32 *)0xe:
  case (cMf32 *)0x13:
    puVar7 = thunk_FUN_0067dec0((int)puVar6,(uint)DAT_0080874e,DAT_0080995c);
    this_00 = extraout_ECX;
    break;
  case (cMf32 *)0x2:
  case (cMf32 *)0x3:
  case (cMf32 *)0x5:
  case (cMf32 *)0x8:
  case (cMf32 *)0xf:
    puVar7 = thunk_FUN_0067e0e0((int)puVar6,(uint)DAT_0080874d,0xffffffff);
    this_00 = extraout_ECX_00;
    break;
  default:
    goto switchD_005326e6_caseD_9;
  }
  *(uint **)(pOVar12 + 0x2fd) = puVar7;
switchD_005326e6_caseD_9:
  cMf32::delete(this_00,puVar6);
  DAT_00858df8 = local_94;
LAB_00532758:
  if ((&stack0x00000000 != (undefined1 *)0x12c) &&
     (iVar5 = FUN_006b0140(0x2711,DAT_00807618), iVar5 != 0)) {
    pcVar8 = (char *)FUN_006b0140(0x2711,DAT_00807618);
    uVar10 = 0xffffffff;
    do {
      pcVar14 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar14;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar8 = pcVar14 + -uVar10;
    pcVar14 = local_12c;
    for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *(undefined4 *)pcVar14 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar14 = pcVar14 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar14 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar14 = pcVar14 + 1;
    }
  }
  local_c0 = 1;
  FUN_006b11d0(*(uint **)(pOVar12 + 0x2fd),0,(undefined4 *)local_12c);
  *(undefined4 *)(pOVar12 + 0x28) = 0x28;
  pOVar1 = pOVar12 + 0x18;
  *(undefined4 *)(pOVar12 + 0x2c) = *(undefined4 *)(*(int *)(pOVar12 + 0x2fd) + 0xc);
  FUN_006e6080(pOVar12,2,*(undefined4 *)(pOVar12 + 0x1b5),(undefined4 *)pOVar1);
  *(undefined4 *)(pOVar12 + 0x28) = 0x20;
  *(undefined4 *)(pOVar12 + 0x2c) = 1;
  FUN_006e6080(pOVar12,2,*(undefined4 *)(pOVar12 + 0x1b5),(undefined4 *)pOVar1);
  iVar5 = thunk_FUN_00648a30((uint)DAT_0080874d,(char *)&DAT_0080f33a);
  if (iVar5 == 0) {
    *(undefined4 *)(pOVar12 + 0x28) = 0x22;
    *(undefined4 *)(pOVar12 + 0x2c) = 0;
    FUN_006e6080(pOVar12,2,*(undefined4 *)(pOVar12 + 0x1b5),(undefined4 *)pOVar1);
  }
  else {
    iVar5 = *(int *)(pOVar12 + 0x2fd);
    local_c = 0;
    if (*(int *)(iVar5 + 0xc) != 0) {
      if (*(int *)(iVar5 + 0xc) == 0) {
        pbVar13 = (byte *)0x0;
        goto LAB_00532855;
      }
      do {
        pbVar13 = (byte *)(*(int *)(iVar5 + 8) * local_c + *(int *)(iVar5 + 0x1c));
LAB_00532855:
        pbVar15 = (byte *)&DAT_0080f33a;
        do {
          bVar3 = *pbVar13;
          bVar16 = bVar3 < *pbVar15;
          if (bVar3 != *pbVar15) {
LAB_0053287e:
            iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_00532883;
          }
          if (bVar3 == 0) break;
          bVar3 = pbVar13[1];
          bVar16 = bVar3 < pbVar15[1];
          if (bVar3 != pbVar15[1]) goto LAB_0053287e;
          pbVar13 = pbVar13 + 2;
          pbVar15 = pbVar15 + 2;
        } while (bVar3 != 0);
        iVar5 = 0;
LAB_00532883:
        if (iVar5 == 0) {
          *(uint *)(pOVar12 + 0x2c) = local_c;
          *(undefined4 *)(pOVar12 + 0x28) = 0x22;
          FUN_006e6080(pOVar12,2,*(undefined4 *)(pOVar12 + 0x1b5),(undefined4 *)(pOVar12 + 0x18));
        }
        iVar5 = *(int *)(pOVar12 + 0x2fd);
        local_c = local_c + 1;
        if (*(uint *)(iVar5 + 0xc) <= local_c) {
          DAT_00858df8 = local_50;
          return;
        }
      } while( true );
    }
  }
  DAT_00858df8 = local_50;
  return;
}

