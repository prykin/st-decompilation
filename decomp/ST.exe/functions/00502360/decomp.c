
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::SetControlBoat */

void __thiscall CPanelTy::SetControlBoat(CPanelTy *this)

{
  CPanelTy CVar1;
  code *pcVar2;
  CPanelTy *this_00;
  char *pcVar3;
  LPSTR pCVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  CPanelTy *pCVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  short sVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  int iVar17;
  undefined4 uVar18;
  char *pcVar19;
  undefined4 uVar20;
  undefined4 local_bb0 [68];
  undefined4 auStack_aa0 [502];
  undefined4 local_2c8 [112];
  undefined4 local_108 [22];
  InternalExceptionFrame local_b0;
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_24;
  undefined4 *local_20;
  CPanelTy *local_1c;
  int local_18;
  CPanelTy *local_14;
  uint local_10;
  CPanelTy *local_c;
  CPanelTy *local_8;
  
  puVar10 = local_108;
  local_1c = this;
  for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  puVar10 = local_2c8;
  for (iVar6 = 0x70; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar6 = __setjmp3(local_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x1a0,0,iVar6,&DAT_007a4ccc
                               ,s_CPanelTy__SetControlBoat_007c25e0);
    if (iVar8 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Andrey_cpanel2_cpp_007c2524,0x1a0);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  thunk_FUN_0054a8d0(DAT_00802a30);
  this_00 = local_1c;
  if (*(uint *)(local_1c + 0x2fe) != 0) {
    FUN_006e56b0(*(void **)(local_1c + 0xc),*(uint *)(local_1c + 0x2fe));
  }
  *(undefined4 *)(this_00 + 0x2fe) = 0;
  pCVar9 = this_00 + 0x960;
  iVar6 = 4;
  do {
    if (*(uint *)pCVar9 != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)pCVar9);
      *(uint *)pCVar9 = 0;
    }
    pCVar9 = pCVar9 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (*(uint *)(this_00 + 0x970) != 0) {
    FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x970));
  }
  CVar1 = this_00[0xb9e];
  *(undefined4 *)(this_00 + 0x970) = 0;
  if (((CVar1 == (CPanelTy)0x0) || (CVar1 == (CPanelTy)0x4)) || (CVar1 == (CPanelTy)0x3)) {
    iVar6 = *(int *)(this_00 + 0x9c0);
    if (iVar6 == 0) goto LAB_00502622;
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    *(undefined4 *)(this_00 + 0x2c) = 0;
  }
  else {
    local_c = (CPanelTy *)((uint)local_c & 0xffffff00);
    puVar10 = local_6c;
    for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    local_8 = this_00 + 0x780;
    local_14 = this_00 + 0xba2;
    iVar6 = -0xba3 - (int)this_00;
    local_18 = iVar6;
    do {
      if (*local_14 == (CPanelTy)0x0) goto LAB_0050254c;
      iVar11 = 2;
      iVar8 = 5;
      switch(local_14 + iVar6) {
      case (CPanelTy *)0x0:
        iVar11 = 0x3f;
        break;
      case (CPanelTy *)0x1:
        iVar11 = 0x7c;
        break;
      case (CPanelTy *)0x2:
        goto switchD_0050248c_caseD_2;
      case (CPanelTy *)0x3:
        iVar11 = 0x7c;
        goto switchD_0050248c_caseD_2;
      case (CPanelTy *)0x4:
        iVar11 = 0x3f;
switchD_0050248c_caseD_2:
        iVar8 = 0x29;
      }
      thunk_FUN_004f17d0(this_00,1,(byte)local_c);
      if (this_00[0xba0] == (CPanelTy)0x0) {
        local_10 = 0;
      }
      else {
        local_10 = (uint)(byte)local_14[6];
      }
      pcVar19 = (char *)0x0;
      uVar16 = 0;
      uVar15 = 1;
      iVar6 = 0;
      pCVar9 = local_8;
      pcVar3 = thunk_FUN_00529590(*local_14,*(int *)(this_00 + 0xb99));
      pCVar4 = thunk_FUN_00571240(pcVar3,iVar6);
      SetButStruct(this_00,local_bb0 + local_24 * 0x5f,3,local_10,iVar11,iVar8,1,pCVar4,uVar15,
                   uVar16,pCVar9,pcVar19);
      iVar6 = local_24 * 0x5f;
      local_24 = local_24 + 1;
      auStack_aa0[iVar6] = 1;
      iVar6 = local_18;
LAB_0050254c:
      bVar7 = (char)local_c + 1;
      local_8 = local_8 + 0x27;
      local_14 = local_14 + 1;
      local_c = (CPanelTy *)CONCAT31(local_c._1_3_,bVar7);
    } while (bVar7 < 6);
    local_5c = *(undefined4 *)(this_00 + 8);
    local_20 = local_bb0;
    local_6c[0] = 1;
    local_6c[1] = 0xffffffff;
    local_58 = 2;
    local_54 = 0xb1ff;
    local_38 = 2;
    local_34 = 0xb200;
    local_3c = local_5c;
    (**(code **)(**(int **)(this_00 + 0xc) + 8))(9,this_00 + 0x2fe,0,local_6c,0);
    thunk_FUN_004f1610(this_00,'\x01');
    iVar6 = *(int *)(this_00 + 0x9c0);
    if (iVar6 == 0) goto LAB_00502622;
    *(undefined4 *)(this_00 + 0x28) = 0x20;
    if (this_00[0xba0] == (CPanelTy)0x0) {
      *(undefined4 *)(this_00 + 0x2c) = 0;
    }
    else {
      *(uint *)(this_00 + 0x2c) = (uint)(byte)this_00[0xbae];
    }
  }
  FUN_006e6080(this_00,2,iVar6,(undefined4 *)(this_00 + 0x18));
LAB_00502622:
  if (((((this_00[0xb9e] == (CPanelTy)0x1) || (this_00[0xb9e] == (CPanelTy)0x3)) &&
       ((iVar6 = *(int *)(this_00 + 0xb99), iVar6 != 9 && ((iVar6 != 0x15 && (iVar6 != 0xbd)))))) &&
      (iVar6 != 0xa7)) && ((iVar6 != 0xa6 && (iVar6 != 0xaf)))) {
    uVar20 = 0;
    uVar18 = 0;
    iVar8 = 0;
    pcVar3 = (char *)0x0;
    iVar6 = 0x3b04;
    uVar15 = 0;
    sVar14 = 2;
    uVar13 = 0xb118;
    uVar12 = 0xb117;
    pCVar4 = thunk_FUN_00571240(s_BUT_SHOWUPD_007c23a4,0);
    uVar12 = CreateBut(this_00,3,0,(uint)(this_00[0xba0] != (CPanelTy)0x0),0x4a,100,1,(int)pCVar4,
                       uVar12,uVar13,sVar14,uVar15,iVar6,pcVar3,iVar8,uVar18,uVar20);
    *(undefined4 *)(this_00 + 0x970) = uVar12;
  }
  if (this_00[0xb9e] == (CPanelTy)0x2) {
    uVar20 = 0;
    uVar18 = 0;
    iVar8 = 0;
    pcVar3 = (char *)0x0;
    iVar6 = 0x3b05;
    uVar15 = 0;
    sVar14 = 2;
    uVar13 = 0xb11a;
    uVar12 = 0xb119;
    pCVar4 = thunk_FUN_00571240(s_BUT_SHOWFRM_007c2394,0);
    uVar12 = CreateBut(this_00,3,0,(uint)(this_00[0xba0] != (CPanelTy)0x0),0x4a,100,1,(int)pCVar4,
                       uVar12,uVar13,sVar14,uVar15,iVar6,pcVar3,iVar8,uVar18,uVar20);
    *(undefined4 *)(this_00 + 0x970) = uVar12;
  }
  if ((((this_00[0xb9e] == (CPanelTy)0x1) && (*(int *)(this_00 + 0xb99) != 9)) &&
      (*(int *)(this_00 + 0xb99) != 0x15)) ||
     (((this_00[0xb9e] == (CPanelTy)0x2 && (*(int *)(this_00 + 0xb99) != 9)) &&
      (*(int *)(this_00 + 0xb99) != 0x15)))) {
    local_c = this_00 + 0x960;
    bVar7 = 0;
    iVar6 = 0xb230;
    local_8 = (CPanelTy *)0xf;
    do {
      if (this_00[0xba0] == (CPanelTy)0x0) {
        local_10 = 0;
      }
      else {
        local_10 = (uint)(byte)this_00[iVar6 + -0xa661];
      }
      uVar13 = 0;
      uVar12 = 0;
      iVar17 = 0;
      iVar5 = 0x4e36 - (uint)(bVar7 != 0);
      pcVar3 = (char *)0x0;
      uVar15 = 0;
      sVar14 = 2;
      iVar8 = iVar6 + -0x10;
      iVar11 = iVar6;
      pCVar4 = thunk_FUN_00571240(s_BUT_BEHREPAIR0_007c2350,0);
      uVar12 = CreateBut(this_00,3,0,local_10,(int)local_8,0x80,1,(int)pCVar4,iVar8,iVar11,sVar14,
                         uVar15,iVar5,pcVar3,iVar17,uVar12,uVar13);
      bVar7 = bVar7 + 1;
      *(undefined4 *)local_c = uVar12;
      local_c = local_c + 4;
      iVar6 = iVar6 + 1;
      local_8 = (CPanelTy *)((int)local_8 + 0x35);
    } while (bVar7 < 3);
  }
  g_currentExceptionFrame = local_b0.previous;
  return;
}

