
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\grig\traks.cpp
   TraksClassTy::TraksCreate */

uint __thiscall
TraksClassTy::TraksCreate
          (TraksClassTy *this,short param_1,short param_2,uint param_3,int param_4,int param_5,
          int param_6,short param_7,short param_8,short param_9,short param_10,short param_11,
          short param_12,int param_13,short param_14,byte param_15)

{
  code *pcVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  char *text;
  ushort *puVar4;
  short sVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  void *unaff_EDI;
  int iVar7;
  short *psVar8;
  bool bVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  undefined4 *puVar13;
  InternalExceptionFrame local_a8;
  uint local_64;
  TraksClassTy *local_60;
  int local_5c;
  short local_58;
  short local_56;
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  int local_42;
  short local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 local_30;
  short local_2c;
  short local_2a;
  short local_28;
  uint local_26;
  ushort local_22;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_c = 0xffffffff;
  local_1c = 1;
  if (((param_15 & 1) == 0) && (DAT_0080731e == 0)) {
    return 0;
  }
  if (this->field_0024 == (DArrayTy *)0x0) {
    return 0;
  }
  if (param_4 < 0) {
    local_10 = param_4 / 0xc9 + -1;
  }
  else {
    local_10 = param_4 / 0xc9;
  }
  if (param_5 < 0) {
    local_18 = param_5 / 0xc9 + -1;
  }
  else {
    local_18 = param_5 / 0xc9;
  }
  if (param_6 < 0) {
    iVar7 = param_6 / 200 + -1;
  }
  else {
    iVar7 = param_6 / 200;
  }
  local_60 = this;
  local_14 = iVar7;
  if ((param_15 & 2) != 0) goto LAB_0055693a;
  sVar5 = (short)local_18;
  if (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0) {
    if (((((int)(short)local_10 < PTR_00807598->field_0048) ||
         (PTR_00807598->field_0058 < (int)(short)local_10)) ||
        ((int)sVar5 < PTR_00807598->field_0044)) || (PTR_00807598->field_0054 < (int)sVar5)) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_006ddbd0();
    }
    if (iVar3 == 0) {
      return 0;
    }
  }
  pVVar2 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) goto LAB_0055693a;
  iVar7 = (int)(short)iVar7;
  if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
LAB_00556926:
    bVar9 = true;
  }
  else {
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                       (int)(short)local_10,(int)sVar5,&local_5c,&local_8);
    if ((iVar7 < 0) || (4 < iVar7)) goto LAB_00556926;
    if (((local_5c < 0) || ((int)pVVar2->field_0030 <= local_5c)) ||
       (((&DAT_0079aed0)[iVar7] + local_8 < 0 ||
        ((int)pVVar2->field_0034 <= (&DAT_0079aed0)[iVar7] + local_8)))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((bVar9) && (pVVar2->field_004C != 0)) {
      bVar9 = *(char *)(((&DAT_0079aed0)[iVar7] + local_8) * pVVar2->field_0030 + pVVar2->field_004C
                       + local_5c) != '\0';
    }
    else {
      bVar9 = true;
    }
  }
  if (!bVar9) {
    return 0;
  }
LAB_0055693a:
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  iVar7 = Library::MSVCRT::__setjmp3(local_a8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar3 = ReportDebugMessage(s_E____titans_grig_traks_cpp_007c9104,0x1bc,0,iVar7,&DAT_007a4ccc,
                               s_TraksClassTy__TraksCreate_error_007c9234);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      uVar10 = (*pcVar1)();
      return uVar10;
    }
    RaiseInternalException(iVar7,0,s_E____titans_grig_traks_cpp_007c9104,0x1bd);
    return 0xffffffff;
  }
  psVar8 = &local_58;
  for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
    psVar8[0] = 0;
    psVar8[1] = 0;
    psVar8 = psVar8 + 2;
  }
  local_4c = param_9;
  local_4a = param_10;
  local_48 = param_11;
  local_46 = param_12;
  local_44 = param_2;
  local_42 = param_13;
  local_3e = param_14;
  local_3c = (short)local_10;
  local_3a = (undefined2)local_18;
  local_58 = param_1;
  local_38 = (undefined2)local_14;
  local_56 = (short)param_4;
  local_54 = (short)param_5;
  local_52 = (short)param_6;
  local_50 = param_7;
  local_4e = param_8;
  local_36 = 0xffff;
  local_30 = PTR_00802a38->field_00E4;
  if (((((param_7 == 0) && (param_8 == 0)) && (param_9 == 0)) &&
      ((param_10 == 0 && (param_11 == 0)))) && (param_12 == 0)) {
    local_1c = 0;
  }
  iVar7 = local_1c;
  piVar6 = DAT_00806764;
  if (*(int *)(&DAT_007c900c + param_1 * 0x18) != 1) {
    piVar6 = DAT_00806774;
  }
  puVar13 = (undefined4 *)0x0;
  iVar12 = 0;
  iVar3 = 1;
  bVar11 = 0;
  uVar10 = 0xffffffff;
  local_2c = local_56;
  local_2a = local_54;
  local_28 = local_52;
  text = thunk_FUN_00555840((int)param_1);
  puVar4 = Library::Ourlib::MFRLOAD::mfRLoad(piVar6,CASE_1D,text,uVar10,bVar11,iVar3,iVar12,puVar13)
  ;
  local_22 = *puVar4;
  iVar3 = local_58 * 0x18;
  FUN_006e8660(PTR_00807598,(int *)&local_c,1,0,*(uint *)(&DAT_007c9000 + iVar3),
               *(uint *)(&DAT_007c9004 + iVar3),*(uint *)(&DAT_007c8ff8 + iVar3),
               *(uint *)(&DAT_007c8ffc + iVar3),0);
  local_26 = local_c;
  FUN_006e98e0(PTR_00807598,local_c,0,(int)(short)local_22,*(int *)((int)puVar4 + 0x21),1);
  if (iVar7 == 0) {
    FUN_006ea050(PTR_00807598,local_26,(int)local_44,0xffffffff,0);
  }
  FUN_006ea270(PTR_00807598,local_26,0,param_3);
  if (-1 < local_42) {
    if (local_3e == -1) {
      FUN_006ea3e0(PTR_00807598,local_26,local_42);
    }
    else if (local_3e == 1) {
      FUN_006ea460(PTR_00807598,local_26,local_42);
    }
  }
  FUN_006ea4e0(PTR_00807598,local_26,1,*(int *)(&DAT_007c9000 + local_58 * 0x18) / 2,
               *(int *)(&DAT_007c9004 + local_58 * 0x18) / 2);
  local_8 = (int)local_56;
  FUN_006ea960(PTR_00807598,local_26,(float)local_8 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)local_54 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)local_52 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  FUN_006eaaa0(PTR_00807598,local_26,0);
  local_36 = (undefined2)param_3;
  local_34 = local_60->field_0020;
  if (iVar7 != 0) {
    uVar10 = thunk_FUN_00555d90(local_60,(undefined4 *)&local_58);
    g_currentExceptionFrame = local_a8.previous;
    return uVar10;
  }
  g_currentExceptionFrame = local_a8.previous;
  return local_64;
}

