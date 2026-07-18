
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetControlBoatSI */

void __thiscall CPanelTy::SetControlBoatSI(CPanelTy *this)

{
  CPanelTy CVar1;
  code *pcVar2;
  CPanelTy *this_00;
  byte bVar3;
  char *pcVar4;
  LPSTR pCVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  CPanelTy *pCVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  short sVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  int iVar18;
  char *pcVar19;
  undefined4 uVar20;
  undefined4 local_c28 [140];
  undefined4 local_9f8 [68];
  undefined4 auStack_8e8 [5];
  undefined4 auStack_8d4 [497];
  undefined4 local_110 [22];
  undefined4 local_b8;
  undefined4 local_b4 [16];
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_2c;
  undefined4 *local_28;
  CPanelTy *local_24;
  int local_20;
  LPSTR local_1c;
  int local_18;
  CPanelTy *local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  puVar11 = local_110;
  local_24 = this;
  for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  puVar11 = local_c28;
  for (iVar7 = 0x8c; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_b8 = DAT_00858df8;
  DAT_00858df8 = &local_b8;
  iVar7 = __setjmp3(local_b4,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    DAT_00858df8 = (undefined4 *)local_b8;
    iVar8 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x29d,0,iVar7,&DAT_007a4ccc);
    if (iVar8 == 0) {
      FUN_006a5e40(iVar7,0,0x7c2524,0x29d);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  thunk_FUN_0054a8d0(DAT_00802a30);
  this_00 = local_24;
  if (*(uint *)(local_24 + 0x2fe) != 0) {
    FUN_006e56b0(*(void **)(local_24 + 0xc),*(uint *)(local_24 + 0x2fe));
  }
  *(undefined4 *)(this_00 + 0x2fe) = 0;
  pCVar10 = this_00 + 0x960;
  iVar7 = 4;
  do {
    if (*(uint *)pCVar10 != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar10);
      *(uint *)pCVar10 = 0;
    }
    pCVar10 = pCVar10 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (*(uint *)(this_00 + 0x970) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x970));
  }
  iVar7 = local_10;
  CVar1 = this_00[0xb9e];
  *(undefined4 *)(this_00 + 0x970) = 0;
  if (((CVar1 == (CPanelTy)0x0) || (CVar1 == (CPanelTy)0x4)) || (CVar1 == (CPanelTy)0x3)) {
    iVar7 = *(int *)(this_00 + 0x9c0);
    if (iVar7 == 0) goto LAB_00503776;
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    *(undefined4 *)(this_00 + 0x2c) = 0;
  }
  else {
    puVar11 = local_74;
    for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_c = local_c & 0xffffff00;
    do {
      uVar12 = local_c & 0xff;
      if (this_00[uVar12 + 0xba2] == (CPanelTy)0x0) goto LAB_005036ae;
      switch(uVar12) {
      case 0:
        iVar7 = 0x10;
        local_8 = 0x4c;
        local_10 = 0x10;
        break;
      case 1:
        iVar7 = 0x4d;
        local_8 = 0x4c;
        local_10 = 0x4d;
        break;
      case 2:
        iVar7 = 0x82;
        local_8 = 0x4c;
        local_10 = 0x82;
        break;
      case 3:
        iVar7 = 0x10;
        goto LAB_005035b5;
      case 4:
        iVar7 = 0x82;
        goto LAB_005035b5;
      case 5:
        iVar7 = 0x4d;
LAB_005035b5:
        local_8 = 0x66;
        local_10 = iVar7;
      }
      thunk_FUN_004f17d0(this_00,1,(byte)local_c);
      if (this_00[0xba0] == (CPanelTy)0x0) {
        local_14 = (CPanelTy *)0x0;
      }
      else {
        local_14 = (CPanelTy *)(uint)(byte)this_00[uVar12 + 0xba8];
      }
      pcVar19 = (char *)0x0;
      pCVar10 = this_00 + uVar12 * 0x27 + 0x780;
      uVar16 = 0;
      uVar15 = 1;
      iVar8 = 0;
      pcVar4 = thunk_FUN_00529590(this_00[uVar12 + 0xba2],*(int *)(this_00 + 0xb99));
      pCVar5 = thunk_FUN_00571240(pcVar4,iVar8);
      SetButStruct(this_00,local_9f8 + local_2c * 0x5f,3,local_14,iVar7,local_8,6,pCVar5,uVar15,
                   uVar16,pCVar10,pcVar19);
      iVar8 = local_2c;
      auStack_8e8[local_2c * 0x5f] = 1;
      if ((byte)local_c == 0) {
LAB_00503678:
        iVar9 = 0;
LAB_0050367a:
        uVar6 = FUN_0070b3a0(*(int *)(this_00 + 0x2de),iVar9);
        auStack_8d4[iVar8 * 0x5f] = uVar6;
        auStack_8d4[iVar8 * 0x5f + 1] = 0x3c;
        iVar8 = local_2c;
      }
      else if ((1 < (byte)local_c) && ((byte)local_c < 5)) {
        if ((byte)local_c == 0) goto LAB_00503678;
        iVar9 = uVar12 - 1;
        goto LAB_0050367a;
      }
      local_2c = iVar8 + 1;
LAB_005036ae:
      bVar3 = (byte)local_c + 1;
      local_c = CONCAT31(local_c._1_3_,bVar3);
    } while (bVar3 < 6);
    local_28 = local_9f8;
    local_64 = *(undefined4 *)(this_00 + 8);
    local_74[0] = 1;
    local_74[1] = 0xffffffff;
    local_60 = 2;
    local_5c = 0xb20d;
    local_40 = 2;
    local_3c = 0xb20e;
    local_44 = local_64;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(9,this_00 + 0x2fe,0,local_74,0);
    thunk_FUN_004f1610(this_00,'\x01');
    iVar7 = *(int *)(this_00 + 0x9c0);
    if (iVar7 == 0) goto LAB_00503776;
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    if (this_00[0xba0] == (CPanelTy)0x0) {
      *(undefined4 *)(this_00 + 0x2c) = 0;
    }
    else {
      *(uint *)(this_00 + 0x2c) = (uint)(byte)this_00[0xbae];
    }
  }
  FUN_006e6080(this_00,2,iVar7,(undefined4 *)(this_00 + 0x18));
LAB_00503776:
  if (((this_00[0xb9e] == (CPanelTy)0x1) || (this_00[0xb9e] == (CPanelTy)0x3)) &&
     ((iVar7 = *(int *)(this_00 + 0xb99), iVar7 != 9 &&
      ((((iVar7 != 0x15 && (iVar7 != 0xbd)) && (iVar7 != 0xa7)) &&
       ((iVar7 != 0xa6 && (iVar7 != 0xaf)))))))) {
    uVar20 = 0;
    uVar17 = 0;
    iVar8 = 0;
    pcVar4 = s_BUT_SHOWUPDMSK_007c2670;
    iVar7 = 0x3b04;
    uVar15 = 0;
    sVar14 = 2;
    uVar13 = 0xb118;
    uVar6 = 0xb117;
    pCVar5 = thunk_FUN_00571240(s_BUT_SHOWUPD_007c23a4,0);
    uVar6 = CreateBut(this_00,3,0,(uint)(this_00[0xba0] != (CPanelTy)0x0),0x40,0x2f,6,(int)pCVar5,
                      uVar6,uVar13,sVar14,uVar15,iVar7,pcVar4,iVar8,uVar17,uVar20);
    *(undefined4 *)(this_00 + 0x970) = uVar6;
  }
  if (this_00[0xb9e] == (CPanelTy)0x2) {
    uVar20 = 0;
    uVar17 = 0;
    iVar8 = 0;
    pcVar4 = s_BUT_SHOWUPDMSK_007c2670;
    iVar7 = 0x3b05;
    uVar15 = 0;
    sVar14 = 2;
    uVar13 = 0xb11a;
    uVar6 = 0xb119;
    pCVar5 = thunk_FUN_00571240(s_BUT_SHOWFRM_007c2394,0);
    uVar6 = CreateBut(this_00,3,0,(uint)(this_00[0xba0] != (CPanelTy)0x0),0x40,0x2f,6,(int)pCVar5,
                      uVar6,uVar13,sVar14,uVar15,iVar7,pcVar4,iVar8,uVar17,uVar20);
    *(undefined4 *)(this_00 + 0x970) = uVar6;
  }
  if (((this_00[0xb9e] == (CPanelTy)0x1) && (*(int *)(this_00 + 0xb99) != 0xbd)) ||
     (this_00[0xb9e] == (CPanelTy)0x2)) {
    local_14 = this_00 + 0x960;
    local_c = local_c & 0xffffff00;
    local_8 = 0;
    iVar7 = local_20;
    iVar8 = local_18;
    do {
      switch(local_8) {
      case 0:
        iVar8 = 0x6a;
        iVar7 = 0xf;
        local_18 = 0x6a;
        local_20 = 0xf;
        pcVar4 = s_BUT_BEHREPAIR0_007c2350;
        break;
      case 1:
        iVar8 = 0x7a;
        iVar7 = 0x14;
        local_18 = 0x7a;
        local_20 = 0x14;
        pcVar4 = s_BUT_BEHREPAIR20_007c233c;
        break;
      case 2:
        iVar8 = 0x98;
        iVar7 = 0x14;
        local_18 = 0x98;
        local_20 = 0x14;
        pcVar4 = s_BUT_BEHREPAIR50_007c2328;
        break;
      case 3:
        iVar8 = 0x98;
        iVar7 = 0xf;
        local_18 = 0x98;
        local_20 = 0xf;
        pcVar4 = s_BUT_BEHREPAIR80_007c2314;
        break;
      default:
        goto switchD_0050389f_default;
      }
      local_1c = thunk_FUN_00571240(pcVar4,0);
switchD_0050389f_default:
      iVar18 = 1;
      iVar9 = local_8;
      pCVar5 = thunk_FUN_00571240(s_BUT_BEHRMSK_007c2660,0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar18,iVar9);
      if (this_00[0xba0] == (CPanelTy)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (uint)(byte)this_00[local_8 + 0xbcf];
      }
      uVar6 = CreateBut(this_00,3,0,uVar12,iVar8,iVar7,6,(int)local_1c,local_8 + 0xb220,
                        local_8 + 0xb230,2,0,0x4e36 - (uint)((byte)local_c != '\0'),pCVar5,0,0,0);
      *(undefined4 *)local_14 = uVar6;
      bVar3 = (byte)local_c + 1;
      local_8 = local_8 + 1;
      local_14 = local_14 + 4;
      local_c = CONCAT31(local_c._1_3_,bVar3);
    } while (bVar3 < 4);
  }
  DAT_00858df8 = (undefined4 *)local_b8;
  return;
}

