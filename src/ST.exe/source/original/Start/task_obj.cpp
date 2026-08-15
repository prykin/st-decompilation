#include "st/generated.hpp"
// Generated translation unit: source/original/Start/task_obj.cpp

// 005DF530 MTaskTy::OutGlassBmpProc
#line 4 "decomp/ST.exe/functions/005DF530/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::OutGlassBmpProc */

void __thiscall
st::fn_005DF530
          (MTaskTy *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
          undefined4 param_6,undefined4 param_7,int *param_8)

{
  AnonPointee_MReportTy_0073 *pAVar1;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  int *local_8;

  if (((param_8 != nullptr) && (local_8 = param_8, *param_8 != 0)) && (param_8[1] != 0)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      pAVar1 = (AnonPointee_MReportTy_0073 *)*local_8;
      st::fn_006B48E0
                (param_1,param_4,param_5,pAVar1,0,0,0,pAVar1->field_0004,pAVar1->field_0008,
                 (ushort *)local_8[1],0,0x10000ff);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x27,0,errorCode,
                               st::mutable_c_string("%s"),"MTaskTy::OutGlassBmpProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x27);
  }
  return;
}

// 005DF640 MTaskTy::OutGlassTxtProc
#line 4 "decomp/ST.exe/functions/005DF640/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::OutGlassTxtProc

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall
st::fn_005DF640
          (MTaskTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
          undefined4 param_6,undefined4 param_7,DArrayTy *param_8)

{
  uint uVar1;
  AnonPointee_MReportTy_0073 *pAVar2;
  int errorCode;
  int iVar4;
  uint uVar5;
  InternalExceptionFrame local_4c;
  int *local_8;

  if (param_8 != nullptr) {
    uVar1 = param_8->count;
    uVar5 = 0;
    if (uVar1 != 0) {
      if (uVar1 == 0) {
        local_8 = nullptr;
        goto LAB_005df673;
      }
      do {
        local_8 = DArrayAt<int>(param_8, uVar5);
LAB_005df673:
      } while ((*local_8 != param_2) && (uVar5 = uVar5 + 1, uVar5 < uVar1));
    }
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      if ((ushort *)local_8[0xb] != nullptr) {
        pAVar2 = (AnonPointee_MReportTy_0073 *)local_8[local_8[4] + 1];
        st::fn_006B48E0
                  ((int)param_1,param_4,param_5,pAVar2,0,0,0,pAVar2->field_0004,pAVar2->field_0008,
                   (ushort *)local_8[0xb],0,0x10000ff);
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      st::fn_006B48A0(param_1,param_4,param_5,(BITMAPINFO *)local_8[local_8[4] + 1],nullptr,
                   0x10000ff);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x3a,0,errorCode,
                               st::mutable_c_string("%s"),"MTaskTy::OutGlassTxtProc");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x3a);
  }
  return;
}

// 005DF7C0 MTaskTy::OutGlassATxtProc
#line 4 "decomp/ST.exe/functions/005DF7C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::OutGlassATxtProc

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall
st::fn_005DF7C0
          (MTaskTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
          undefined4 param_6,undefined4 param_7,DArrayTy *param_8)

{
  uint uVar1;
  AnonPointee_MReportTy_0073 *pAVar2;
  int errorCode;
  int iVar4;
  uint uVar5;
  InternalExceptionFrame local_4c;
  int *local_8;

  if (param_8 != nullptr) {
    uVar1 = param_8->count;
    uVar5 = 0;
    if (uVar1 != 0) {
      if (uVar1 == 0) {
        local_8 = nullptr;
        goto LAB_005df7f3;
      }
      do {
        local_8 = DArrayAt<int>(param_8, uVar5);
LAB_005df7f3:
      } while ((*local_8 != param_2) && (uVar5 = uVar5 + 1, uVar5 < uVar1));
    }
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      if ((ushort *)local_8[0xb] != nullptr) {
        pAVar2 = (AnonPointee_MReportTy_0073 *)local_8[1];
        st::fn_006B48E0
                  ((int)param_1,param_4,param_5,pAVar2,0,0,0,pAVar2->field_0004,pAVar2->field_0008,
                   (ushort *)local_8[0xb],0,0x10000ff);
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      st::fn_006B48A0(param_1,param_4,param_5,(BITMAPINFO *)local_8[1],nullptr,0x10000ff);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x4d,0,errorCode,
                               st::mutable_c_string("%s"),"MTaskTy::OutGlassATxtProc");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x4d);
  }
  return;
}

// 005DFA30 MTaskTy::InitMTask
#line 4 "decomp/ST.exe/functions/005DFA30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::InitMTask

   [STSwitchEnumApplier] Switch target field_006D uses
   /SubmarineTitans/Recovered/Enums/MTaskTy_field_006DState. Cases: CASE_1=1;CASE_3=3;CASE_5=5 */

void __thiscall st::fn_005DFA30(MTaskTy *this,char param_1,undefined1 param_2)

{
  int iVar1;
  CursorClassTy *this_00;
  MTaskTy *pMVar3;
  int local_EAX_46;
  cMf32 *pcVar4;
  ushort *puVar5;
  MTaskTy_field_0074DArray *pMVar6;
  LPSTR text;
  ccFntTy *pcVar7;
  DArrayTy *pDVar8;
  int iVar4;
  int iVar9;
  uint uVar10;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  uint *puVar16;
  byte bVar17;
  undefined4 local_5a8 [256];
  byte local_1a8 [260];
  undefined4 local_a4 [20];
  InternalExceptionFrame local_54;
  MTaskTy *local_10;
  ushort *local_c;
  char *local_8;
  char *pcVar17_mg1;

  this->field_0061 = this->field_0069;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  local_EAX_46 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pMVar3 = local_10;
  if (local_EAX_46 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0xdd,0,local_EAX_46,
                               st::mutable_c_string("%s"),"MTaskTy::InitMTask");
    pMVar3 = local_10;
    if (iVar4 == 0) {
      st::fn_00404DB8(local_10);
      pMVar3->field_0045 = 0x200;
      pMVar3->field_0049 = 0;
      pMVar3->field_004D = 0x6102;
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_10->field_006E = param_1;
  if (param_1 == '\0') {
    local_10->field_006F = param_2;
  }
  else {
    local_10->field_006F = 0;
  }
  if (local_10->field_006E == '\x01') {
    st::fn_0040590C(g_startSystem_0081176C);
    DAT_0080877e = 1;
    DAT_0080877f = 0;
  }
  if (pMVar3->field_006E == '\0') {
    pcVar4 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&CHAR_00h_0080ed16,0,0,0);
  }
  else {
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s"),&CHAR_00h_00807680,&CHAR_00h_0080c52e);
    pcVar4 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  }
  pMVar3->field_0070 = pcVar4;
  if (DAT_0080fb6e != 0) {
    if (g_dArray_0080C4C7 != nullptr) {
      st::fn_006B5570(g_dArray_0080C4C7);
    }
    g_dArray_0080C4C7 =
         (DArrayTy *)
         st::fn_0071AA10(pMVar3->field_0070,PTR_s_DESCRIPTION_0079c21c,0);
    if (g_dArray_0080C4C7 == nullptr) {
      g_dArray_0080C4C7 = st::fn_006B54F0(nullptr,10,10);
    }
    if (g_dArray_0080C4CB != nullptr) {
      st::fn_006B5570(g_dArray_0080C4CB);
    }
    g_dArray_0080C4CB =
         (DArrayTy *)
         st::fn_0071AA10(pMVar3->field_0070,PTR_s_OBJECTIVES_0079c220,0);
    if (g_dArray_0080C4CB == nullptr) {
      g_dArray_0080C4CB = st::fn_006B54F0(nullptr,10,10);
    }
    pcVar13 = &CHAR_00h_0080c3c3;
    for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      pcVar13[2] = '\0';
      pcVar13[3] = '\0';
      pcVar13 = pcVar13 + 4;
    }
    local_8 = &CHAR_00h_0080c3c3;
    puVar5 = st::fn_006F1CE0(pMVar3->field_0070,0xc,PTR_s_TITLE_MISSION_0079c218,(int *)&local_8,0);
    if ((puVar5 == nullptr) || (CHAR_00h_0080c3c3 == '\0')) {
      st::fn_0072E730
                ((byte *)&CHAR_00h_0080ed16,nullptr,nullptr,local_1a8,nullptr);
      uVar10 = 0xffffffff;
      pbVar12 = local_1a8;
      do {
        pbVar14 = pbVar12;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pbVar14 = pbVar12 + 1;
        bVar17 = *pbVar12;
        pbVar12 = pbVar14;
      } while (bVar17 != 0);
      uVar10 = ~uVar10;
      pbVar12 = pbVar14 + -uVar10;
      pbVar14 = (byte *)&CHAR_00h_0080c3c3;
      memmove(pbVar14, pbVar12, uVar10); /* compiler REP MOVS byte copy */
    }
  }
  if (pMVar3->field_006E == '\0') {
    pcVar4 = pMVar3->field_0070;
    pcVar17_mg1 = PTR_s_TASKPLAY_0079c214;
  }
  else {
    pcVar4 = pMVar3->field_0070;
    pcVar17_mg1 = (char *)&DAT_0080e303;
  }
  pMVar6 = (MTaskTy_field_0074DArray *)st::fn_00715050(pcVar4,pcVar17_mg1,0);
  pMVar3->field_0074 = pMVar6;
  if (pMVar6 == nullptr) {
    pMVar6 = (MTaskTy_field_0074DArray *)st::fn_006AE290(nullptr,1,0x50,1);
    memset(local_a4, 0, 0x50); /* compiler bulk-zero initialization */
    pMVar3->field_0074 = pMVar6;
    STPiece<0,1>(local_a4[0]) = 8;
    st::fn_006AE1C0((DArrayTy *)pMVar6,local_a4);
  }
  st::fn_006AFE40((int *)&pMVar3->field_0078,st::pointer_boundary_cast<uint *>(&pMVar3->field_0074->flags));
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  iVar9 = 1;
  bVar17 = 0;
  text = st::fn_006F2C00(st::mutable_c_string("TASK_BKG"),1,(uint)DAT_0080874e);
  puVar5 = st::fn_0070A9F0(g_cMf32_00806780,text,bVar17,iVar9);
  pMVar3->field_005D = puVar5;
  pMVar3->field_0080 = 1;
  puVar5 = st::fn_00709AF0
                     (PTR_00806784,CASE_B,st::mutable_c_string("MT_CHECK"),0xffffffff,0,1,0,nullptr);
  pMVar3->field_0081 = puVar5;
  st::fn_0040329C(&g_sound,0);
  st::fn_006BC360(pMVar3->field_005D,local_5a8,nullptr);
  st::fn_00718780
            ((int)local_5a8,0,0x100,0x1a,0x10,(undefined4 *)&pMVar3->field_0x91);
  st::fn_00718780
            ((int)local_5a8,0,0x100,0x2e,0x10,(undefined4 *)&pMVar3->field_0x191);
  pcVar7 = (ccFntTy *)st::fn_004042A5((int)pMVar3->field_005D,nullptr,DAT_00807dd9);
  pMVar3->field_0089 = pcVar7;
  pcVar7->field_0058 = 1;
  pcVar7->field_005C = 0;
  pcVar7 = (ccFntTy *)st::fn_00402306((int)pMVar3->field_005D,nullptr,DAT_00807dd9);
  local_c = (ushort *)&pMVar3->field_0653;
  pMVar3->field_008D = pcVar7;
  puVar16 = pMVar3->field_02A5;
  local_8 = (char *)0x5;
  do {
    st::fn_006B2330(g_ddxContext_008075A8,puVar16,0x31,0x402f63,0,0,local_c);
    st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar16,0xffffffff,0,0);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar16);
    local_c = local_c + 6;
    puVar16 = puVar16 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != nullptr);
  local_c = (ushort *)&pMVar3->field_068F;
  puVar16 = st::pointer_boundary_cast<uint *>(&pMVar3->field_02BD);
  local_8 = (char *)0x5;
  do {
    st::fn_006B2330(g_ddxContext_008075A8,puVar16,0x31,0x402f63,0,0,local_c);
    st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar16,0xffffffff,0,0);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar16);
    local_c = local_c + 6;
    puVar16 = puVar16 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != nullptr);
  st::fn_007158A0
            ((SpriteClassTy *)&pMVar3->field_02D1,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(pMVar3->field_02D1 + 4))(PTR_00806784,7,0,"MT_SLDUP",0xffffffff);
  pMVar3->field_02ED = 0;
  pMVar3->field_02F1 = 0;
  pMVar3->field_02D9 = 0;
  if (pMVar3->field_02D5 != 0xffffffff) {
    st::fn_006B3AF0((int *)pMVar3->field_0319,pMVar3->field_02D5);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&pMVar3->field_0362,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(pMVar3->field_0362 + 4))(PTR_00806784,7,0,"MT_SLDDN",0xffffffff);
  pMVar3->field_037E = 0;
  pMVar3->field_0382 = 0;
  pMVar3->field_036A = 0;
  if (pMVar3->field_0366 != 0xffffffff) {
    st::fn_006B3AF0((int *)pMVar3->field_03AA,pMVar3->field_0366);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&pMVar3->field_03F3,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(pMVar3->field_03F3 + 4))(PTR_00806784,7,0,"MT_SLDT",0xffffffff);
  pMVar3->field_040F = 0;
  pMVar3->field_0413 = 0;
  pMVar3->field_03FB = 0;
  if (pMVar3->field_03F7 != 0xffffffff) {
    st::fn_006B3AF0((int *)pMVar3->field_043B,pMVar3->field_03F7);
  }
  puVar15 = &pMVar3->field_0484;
  st::fn_006B2330(g_ddxContext_008075A8,st::pointer_boundary_cast<uint *>(puVar15),0x32,0x402f63,0,0,(ushort *)&pMVar3->field_06BF);
  st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0,0);
  st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar15);
  st::fn_007158A0
            ((SpriteClassTy *)&pMVar3->field_048C,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(pMVar3->field_048C + 4))(PTR_00806784,7,0,"MT_SLDUP",0xffffffff);
  pMVar3->field_04A8 = 0;
  pMVar3->field_04AC = 0;
  pMVar3->field_0494 = 0;
  if (pMVar3->field_0490 != 0xffffffff) {
    st::fn_006B3AF0((int *)pMVar3->field_04D4,pMVar3->field_0490);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&pMVar3->field_051D,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(pMVar3->field_051D + 4))(PTR_00806784,7,0,"MT_SLDDN",0xffffffff);
  pMVar3->field_0539 = 0;
  pMVar3->field_053D = 0;
  pMVar3->field_0525 = 0;
  if (pMVar3->field_0521 != 0xffffffff) {
    st::fn_006B3AF0((int *)pMVar3->field_0565,pMVar3->field_0521);
  }
  st::fn_007158A0
            ((SpriteClassTy *)&pMVar3->field_05AE,(int *)g_ddxContext_008075A8,0x31,'\a',
             nullptr,0,0);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(pMVar3->field_05AE + 4))(PTR_00806784,7,0,"MT_SLDT",0xffffffff);
  pMVar3->field_05CA = 0;
  pMVar3->field_05CE = 0;
  pMVar3->field_05B6 = 0;
  if (pMVar3->field_05B2 != 0xffffffff) {
    st::fn_006B3AF0((int *)pMVar3->field_05F6,pMVar3->field_05B2);
  }
  puVar15 = &pMVar3->field_063F;
  st::fn_006B2330(g_ddxContext_008075A8,st::pointer_boundary_cast<uint *>(puVar15),0x32,0x402f63,0,0,(ushort *)&pMVar3->field_06CB);
  st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0,0);
  st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar15);
  pDVar8 = (DArrayTy *)st::fn_006AE310(nullptr,10,0x9e,10,0x405de4);
  pMVar3->field_064B = pDVar8;
  pDVar8 = (DArrayTy *)st::fn_006AE310(nullptr,10,0x3e,10,0x40365c);
  pMVar3->field_0647 = pDVar8;
  pDVar8 = (DArrayTy *)st::fn_006AE310(nullptr,10,0x3e,10,0x40365c);
  pMVar3->field_064F = pDVar8;
  if (g_startSystem_0081176C->field_02E6 != nullptr) {
    st::fn_00401FA5(g_startSystem_0081176C->field_02E6,0,0,1);
  }
  st::fn_00401D43(g_dDXContext_0080759C,1,0);
  this_00 = g_cursorClass_00802A30;
  if (g_cursorClass_00802A30 != nullptr) {
    iVar9 = g_cursorClass_00802A30->field_00C9;
    iVar1 = g_cursorClass_00802A30->field_00C5;
    g_cursorClass_00802A30->field_0493 = CASE_3;
    this_00->field_0494 = 0xffff;
    st::fn_0040507E(this_00,CASE_0,iVar1,iVar9);
    st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
    this_00->field_00D2 = 0;
    this_00->field_04DF = -1;
  }
  st::fn_00402DBF(1,pMVar3->field_0008,2,100,2,1,0,0,0,0,0,0);
  st::fn_00402DBF(1,pMVar3->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
  pMVar3->field_006D = CASE_3;
  st::fn_00405C18(pMVar3);
  st::fn_00403670(pMVar3);
  st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                     pMVar3->field_005D,10,2);
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 005E0470 MTaskTy::DoneMTask
#line 4 "decomp/ST.exe/functions/005E0470/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::DoneMTask */

void __thiscall st::fn_005E0470(MTaskTy *this)

{
  MTaskTy *this_00;
  int iVar2;
  DArrayTy *pDVar2;
  AnonShape_005E10A0_819783CC *pAVar3;
  int iVar6;
  cMf32 *this_01;
  uint *puVar4;
  uint uVar5;
  int *slotStorage;
  int iVar7;
  SpriteClassTy *this_02;
  InternalExceptionFrame local_4c;
  MTaskTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),299,0,iVar2,st::mutable_c_string("%s"),
                               "MTaskTy::DoneMTask");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),299);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00401D43(g_dDXContext_0080759C,10,2);
  this_00 = local_8;
  st::fn_00402DBF(0,local_8->field_0008,2,100,2,1,0,0,0,0,0,0);
  st::fn_00402DBF(0,this_00->field_0008,2,0x62,2,0x1c,0,0,0,0,0,0);
  if (this_00->field_0488 != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_0488);
    this_00->field_0488 = 0;
  }
  if (-1 < (int)this_00->field_063F) {
    st::fn_006B3BB0((int *)g_ddxContext_008075A8,this_00->field_063F);
    this_00->field_063F = 0xffffffff;
  }
  st::fn_00715AB0((SpriteClassTy *)&this_00->field_048C);
  st::fn_00715AB0((SpriteClassTy *)&this_00->field_051D);
  st::fn_00715AB0((SpriteClassTy *)&this_00->field_05AE);
  if (this_00->field_0643 != nullptr) {
    st::fn_006B5570(this_00->field_0643);
  }
  this_00->field_0643 = nullptr;
  if (this_00->field_02CD != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_02CD);
    this_00->field_02CD = 0;
  }
  if (-1 < (int)this_00->field_0484) {
    st::fn_006B3BB0((int *)g_ddxContext_008075A8,this_00->field_0484);
    this_00->field_0484 = 0xffffffff;
  }
  st::fn_00715AB0((SpriteClassTy *)&this_00->field_02D1);
  st::fn_00715AB0((SpriteClassTy *)&this_00->field_0362);
  st::fn_00715AB0((SpriteClassTy *)&this_00->field_03F3);
  puVar4 = st::pointer_boundary_cast<uint *>(&this_00->field_02BD);
  iVar7 = 4;
  do {
    if (-1 < (int)*puVar4) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,*puVar4);
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (this_00->field_02B9 != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_02B9);
    this_00->field_02B9 = 0;
  }
  puVar4 = this_00->field_02A5;
  iVar7 = 5;
  do {
    if (-1 < (int)*puVar4) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,*puVar4);
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar4 = this_00->field_0291;
  iVar7 = 5;
  do {
    if (*puVar4 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar4);
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  pDVar2 = this_00->field_064B;
  if (pDVar2 != nullptr) {
    uVar5 = 0;
    if (pDVar2->count != 0) {
      if (pDVar2->count == 0) {
        this_02 = nullptr;
        goto LAB_005e0672;
      }
      do {
        this_02 = DArrayAt<SpriteClassTy>(pDVar2, uVar5);
LAB_005e0672:
        st::fn_00715AB0(this_02);
        if (*(int *)((int)&this_02[1].field_0008 + 1) != 0) {
          st::fn_006AB060((void *)((int)&this_02[1].field_0008 + 1));
        }
        pDVar2 = this_00->field_064B;
        uVar5 = uVar5 + 1;
      } while (uVar5 < pDVar2->count);
    }
    st::fn_006AE110(this_00->field_064B);
    this_00->field_064B = nullptr;
  }
  pDVar2 = this_00->field_0647;
  if (pDVar2 != nullptr) {
    uVar5 = 0;
    if (pDVar2->count != 0) {
      if (pDVar2->count == 0) {
        pAVar3 = nullptr;
        goto LAB_005e06d9;
      }
      do {
        pAVar3 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar2, uVar5);
LAB_005e06d9:
        st::fn_0040555B(this_00,pAVar3);
        pDVar2 = this_00->field_0647;
        uVar5 = uVar5 + 1;
      } while (uVar5 < pDVar2->count);
    }
    st::fn_006AE110(this_00->field_0647);
    this_00->field_0647 = nullptr;
  }
  pDVar2 = this_00->field_064F;
  if (pDVar2 != nullptr) {
    uVar5 = 0;
    if (pDVar2->count != 0) {
      if (pDVar2->count == 0) {
        pAVar3 = nullptr;
        goto LAB_005e072b;
      }
      do {
        pAVar3 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar2, uVar5);
LAB_005e072b:
        st::fn_0040555B(this_00,pAVar3);
        pDVar2 = this_00->field_064F;
        uVar5 = uVar5 + 1;
      } while (uVar5 < pDVar2->count);
    }
    st::fn_006AE110(this_00->field_064F);
    this_00->field_064F = nullptr;
  }
  slotStorage = st::pointer_boundary_cast<int *>(&this_00->field_0653);
  iVar7 = 0xb;
  do {
    if (*slotStorage != 0) {
      st::fn_006AB060(slotStorage);
    }
    slotStorage = slotStorage + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (this_00->field_0089 != nullptr) {
    st::fn_00710560((uint *)this_00->field_0089);
    this_00->field_0089 = nullptr;
  }
  if (this_00->field_008D != nullptr) {
    st::fn_00710560((uint *)this_00->field_008D);
    this_00->field_008D = nullptr;
  }
  this_00->field_0081 = nullptr;
  if (this_00->field_005D != nullptr) {
    this_01 = g_cMf32_00806780;
    if ((this_00->field_0080 != '\x01') &&
       (this_01 = g_cMf32_00806798, this_00->field_0080 != '\x02')) {
      this_01 = this_00->field_0070;
    }
    st::fn_006F20E0(this_01,(uint *)&this_00->field_005D);
  }
  if (DAT_008085e3 != 0) {
    st::fn_006C1E20();
    memset(&DAT_00808463, 0, 0x180); /* compiler bulk-zero initialization */
  }
  if (this_00->field_0074 != nullptr) {
    st::fn_006AE110((DArrayTy *)this_00->field_0074);
  }
  this_00->field_0074 = nullptr;
  if (this_00->field_0078 != nullptr) {
    st::fn_006AE110(this_00->field_0078);
  }
  this_00->field_0078 = nullptr;
  if (this_00->field_0070 != nullptr) {
    st::fn_006F1170(this_00->field_0070);
  }
  this_00->field_0070 = nullptr;
  if (this_00->field_004D != 0) {
    st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&this_00->field_0x3d);
  }
  DAT_00807654 = 0x21;
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 005E09E0 MTaskTy::PaintMTask
#line 4 "decomp/ST.exe/functions/005E09E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PaintMTask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005E09E0(MTaskTy *this)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  MTaskTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    st::fn_00403738(0,0,'\x01',(BITMAPINFO *)local_8->field_005D);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x136,0,errorCode,
                             st::mutable_c_string("%s"),"MTaskTy::PaintMTask");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x136);
  return;
}

// 005E0AC0 MTaskTy::NoneMTask
#line 4 "decomp/ST.exe/functions/005E0AC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::NoneMTask

   [STSwitchEnumApplier] Switch target field_006D uses
   /SubmarineTitans/Recovered/Enums/MTaskTy_field_006DState. Cases: CASE_1=1;CASE_3=3;CASE_5=5 */

void __thiscall st::fn_005E0AC0(MTaskTy *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  MTaskTy *this_00;
  int iVar4;
  tagBITMAPINFO *ptVar5;
  DArrayTy *pDVar6;
  uint uVar7;
  int iVar8;
  uint uVar8;
  uint uVar9;
  int iVar10;
  AnonShape_005E10A0_819783CC *pAVar11;
  SpriteClassTy *this_01;
  uint *puVar12;
  uint uVar13;
  InternalExceptionFrame local_50;
  MTaskTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x19c,0,iVar4,st::mutable_c_string("%s")
                               ,"MTaskTy::NoneMTask");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x19c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((local_c->field_006D == CASE_3) || (local_c->field_006D == CASE_5)) {
    st::fn_00405C18(local_c);
  }
  pDVar6 = this_00->field_0647;
  if (pDVar6 != nullptr) {
    uVar9 = 0;
    if (pDVar6->count != 0) {
      if (pDVar6->count == 0) {
        pAVar11 = nullptr;
        goto LAB_005e0b38;
      }
      do {
        pAVar11 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar6, uVar9);
LAB_005e0b38:
        if (((-1 < *(int *)pAVar11) && (pAVar11->field_003A != 0)) && (pAVar11->field_0031 != 0)) {
          if ((*(uint *)&pAVar11->field_0x1c - 3 < *(uint *)&pAVar11->field_0x10) &&
             (*(uint *)&pAVar11->field_0x28 <
              (uint)(this_00->field_0069 - *(int *)&pAVar11->field_0x24))) {
            if (*(uint *)&pAVar11->field_0x10 < *(uint *)&pAVar11->field_0x1c) {
              st::fn_00405A51(this_00,*(AnonShape_005E11D0_D0F8BE03 **)&pAVar11->field_0x4,
                           pAVar11->field_0x35,pAVar11->field_0x38);
              st::fn_00714B30((void *)pAVar11->field_0031,*(int *)&pAVar11->field_0x10 + -1);
              ptVar5 = (tagBITMAPINFO *)st::fn_007140E0((void *)pAVar11->field_0031,1,'\0');
              if (ptVar5 != nullptr) {
                st::fn_006B5440(*(ushort **)&pAVar11->field_0x4,0,*(int *)&pAVar11->field_0x14,
                             *(int *)&pAVar11->field_0x18,ptVar5,0,0xff);
              }
              st::fn_006B35D0((int *)g_ddxContext_008075A8,*(uint *)pAVar11);
              *(int *)&pAVar11->field_0x10 = *(int *)&pAVar11->field_0x10 + 1;
              *(undefined4 *)&pAVar11->field_0x24 = this_00->field_0069;
            }
            else {
              st::fn_0040555B(this_00,pAVar11);
            }
          }
          if (*(uint *)&pAVar11->field_0x10 < *(int *)&pAVar11->field_0x1c - 3U) {
            st::fn_00405A51(this_00,*(AnonShape_005E11D0_D0F8BE03 **)&pAVar11->field_0x4,
                         pAVar11->field_0x35,pAVar11->field_0x38);
            ptVar5 = (tagBITMAPINFO *)st::fn_007140E0((void *)pAVar11->field_0031,1,'\0');
            if (ptVar5 != nullptr) {
              st::fn_006B5440(*(ushort **)&pAVar11->field_0x4,0,*(int *)&pAVar11->field_0x14,
                           *(int *)&pAVar11->field_0x18,ptVar5,0,0xff);
            }
            st::fn_006B35D0((int *)g_ddxContext_008075A8,*(uint *)pAVar11);
            uVar8 = *(int *)&pAVar11->field_0x10 + 1;
            *(uint *)&pAVar11->field_0x10 = uVar8;
            if ((pAVar11->field_0x30 != '\0') && (uVar8 % 3 != 0)) {
              st::fn_00404BF1(this_00,0x1e,'\x01',-1);
            }
          }
        }
        pDVar6 = this_00->field_0647;
        uVar9 = uVar9 + 1;
      } while (uVar9 < pDVar6->count);
    }
  }
  pDVar6 = this_00->field_064F;
  if (pDVar6 != nullptr) {
    uVar9 = 0;
    if (pDVar6->count != 0) {
      if (pDVar6->count == 0) {
        pAVar11 = nullptr;
        goto LAB_005e0ca3;
      }
      do {
        pAVar11 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar6, uVar9);
LAB_005e0ca3:
        if (((-1 < (int)*(uint *)pAVar11) && (*(int *)&pAVar11->field_0x10 != 0)) &&
           (*(uint *)&pAVar11->field_0x28 <
            (uint)(this_00->field_0069 - *(int *)&pAVar11->field_0x24))) {
          uVar8 = *(int *)&pAVar11->field_0x10 + 1;
          *(uint *)&pAVar11->field_0x10 = uVar8;
          *(undefined4 *)&pAVar11->field_0x24 = this_00->field_0069;
          if (uVar8 < 3) {
            st::fn_006B35D0((int *)g_ddxContext_008075A8,*(uint *)pAVar11);
          }
          else {
            st::fn_0040555B(this_00,pAVar11);
          }
        }
        pDVar6 = this_00->field_064F;
        uVar9 = uVar9 + 1;
      } while (uVar9 < pDVar6->count);
    }
  }
  pDVar6 = this_00->field_064B;
  if (pDVar6 != nullptr) {
    local_8 = 0;
    if (pDVar6->count != 0) {
      if (pDVar6->count == 0) {
        this_01 = nullptr;
        goto LAB_005e0d20;
      }
      do {
        this_01 = DArrayAt<SpriteClassTy>(pDVar6, local_8);
LAB_005e0d20:
        uVar8 = local_8;
        uVar9 = this_01->field_0004;
        if (uVar9 != 0xffffffff) {
          switch(*(undefined1 *)&this_01[1].vtable) {
          case 1:
            if ((uint)this_01->field_0040 <= (uint)(this_00->field_0069 - this_01->field_0044)) {
              uVar7 = st::machine_word_boundary_cast<uint>(this_01->field_0008 + 1);
              this_01->field_0008 = uVar7;
              this_01->field_0044 = this_00->field_0069;
              if (uVar7 == this_01->field_000C) {
                st::fn_00715AB0(this_01);
              }
              else {
                st::fn_006B3730
                          ((uint *)this_01->field_0048,uVar9,uVar7,this_01->field_001C,
                           this_01->field_0020);
              }
            }
            break;
          case 2:
            if ((uint)this_01->field_0040 <= (uint)(this_00->field_0069 - this_01->field_0044)) {
              iVar10 = st::machine_word_boundary_cast<int>(this_01->field_0008 + 1);
              this_01->field_0008 = iVar10;
              if (iVar10 == this_01->field_000C) {
                this_01->field_0008 = 0;
              }
              this_01->field_0044 = this_00->field_0069;
              st::fn_006B3730
                        ((uint *)this_01->field_0048,uVar9,this_01->field_0008,this_01->field_001C,
                         this_01->field_0020);
            }
            break;
          case 3:
            iVar10 = *(int *)((int)&this_01[1].vtable + 1);
            if (iVar10 != *(int *)((int)&this_01[1].field_0004 + 1)) {
              iVar2 = *(int *)((int)&this_01[1].field_0008 + 1);
              this_01->field_001C = *(undefined4 *)(iVar2 + iVar10 * 8);
              iVar1 = this_01->field_0044;
              this_01->field_0020 = *(undefined4 *)(iVar2 + iVar10 * 8 + 4);
              uVar8 = this_01->field_0040;
              *(int *)((int)&this_01[1].vtable + 1) = iVar10 + 1;
              if (uVar8 <= (uint)(this_00->field_0069 - iVar1)) {
                iVar10 = st::machine_word_boundary_cast<int>(this_01->field_0008 + 1);
                this_01->field_0008 = iVar10;
                if (iVar10 == this_01->field_000C) {
                  this_01->field_0008 = 0;
                }
                this_01->field_0044 = this_00->field_0069;
              }
              uVar8 = this_01->field_0020;
              uVar7 = this_01->field_001C;
              uVar13 = this_01->field_0008;
              puVar12 = (uint *)this_01->field_0048;
              goto LAB_005e0edd;
            }
            st::fn_00715AB0(this_01);
            if (*(int *)((int)&this_01[1].field_0008 + 1) != 0) {
              st::fn_006AB060((void *)((int)&this_01[1].field_0008 + 1));
            }
            break;
          case 4:
            iVar10 = *(int *)((int)&this_01[1].vtable + 1);
            iVar2 = *(int *)((int)&this_01[1].field_0008 + 1);
            this_01->field_001C = *(undefined4 *)(iVar2 + iVar10 * 8);
            uVar3 = *(undefined4 *)(iVar2 + iVar10 * 8 + 4);
            *(int *)((int)&this_01[1].vtable + 1) = iVar10 + 1;
            this_01->field_0020 = uVar3;
            if (iVar10 + 1 == *(int *)((int)&this_01[1].field_0004 + 1)) {
              *(undefined4 *)((int)&this_01[1].vtable + 1) = 0;
            }
            if ((uint)this_01->field_0040 <= (uint)(this_00->field_0069 - this_01->field_0044)) {
              iVar10 = st::machine_word_boundary_cast<int>(this_01->field_0008 + 1);
              this_01->field_0008 = iVar10;
              if (iVar10 == this_01->field_000C) {
                this_01->field_0008 = 0;
              }
              this_01->field_0044 = this_00->field_0069;
            }
            uVar8 = this_01->field_0020;
            uVar7 = this_01->field_001C;
            uVar13 = this_01->field_0008;
            puVar12 = (uint *)this_01->field_0048;
LAB_005e0edd:
            st::fn_006B3730(puVar12,uVar9,uVar13,uVar7,uVar8);
            uVar8 = local_8;
          }
        }
        pDVar6 = this_00->field_064B;
        local_8 = uVar8 + 1;
      } while (local_8 < pDVar6->count);
    }
  }
  this_00->field_0069 = st::machine_word_boundary_cast<undefined4>(this_00->field_0069 + 1);
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005E10A0 MTaskTy::TTaskItemClose
#line 4 "decomp/ST.exe/functions/005E10A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::TTaskItemClose

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005E10A0(MTaskTy *this,AnonShape_005E10A0_819783CC *param_1)

{
  int iVar2;
  int iVar3;
  int iVar4;
  AnonShape_005E10A0_819783CC *slotStorage;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    if (param_1 != nullptr) {
      if (-1 < (int)*(uint *)param_1) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,*(uint *)param_1);
      }
      *(undefined4 *)param_1 = 0xffffffff;
      iVar4 = 3;
      slotStorage = param_1;
      do {
        slotStorage = (AnonShape_005E10A0_819783CC *)&slotStorage->field_0x4;
        if (*(int *)slotStorage != 0) {
          st::fn_006AB060(slotStorage);
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if ((int *)param_1->field_0031 != nullptr) {
        st::fn_00714060((int *)param_1->field_0031);
        st::fn_0072E2B0((HoloTy *)param_1->field_0031);
        param_1->field_0031 = 0;
      }
      if (param_1->field_003A != 0) {
        st::fn_006AB060(&param_1->field_003A);
      }
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x1ab,0,iVar2,st::mutable_c_string("%s"),
                             "MTaskTy::TTaskItemClose");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x1ab);
  return;
}

// 005E11D0 MTaskTy::PrepareTSurf
#line 4 "decomp/ST.exe/functions/005E11D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PrepareTSurf

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_005E11D0(MTaskTy *this,AnonShape_005E11D0_D0F8BE03 *param_1,char param_2,char param_3)

{
  int errorCode;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    uVar5 = param_1->field_0014;
    if (uVar5 == 0) {
      uVar5 = ((uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
              param_1->field_0008;
    }
    puVar2 = (undefined4 *)st::fn_006B4FA0((int *)param_1);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0xffffffff;
      puVar2 = puVar2 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar2 = 0xff;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    if (param_2 != '\0') {
      st::fn_006C7610((RecoveredSourceFamily_dibcopy *)param_1,0,0,0,param_1->field_0004,
                   param_1->field_0008,2,0);
      st::fn_006C7570((RecoveredSourceFamily_dibcopy *)param_1,0,0,0,(undefined4 *)param_1->field_0004,
                   param_1->field_0008,2,(-(param_3 != '\x01') & 0xecU) + 0x2c);
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x1b9,0,errorCode,
                             st::mutable_c_string("%s"),"MTaskTy::PrepareTSurf");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x1b9);
  return;
}

// 005E1330 MTaskTy::PlayScript
#line 4 "decomp/ST.exe/functions/005E1330/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PlayScript

   [STSwitchEnumApplier] Switch target field_006D uses
   /SubmarineTitans/Recovered/Enums/MTaskTy_field_006DState. Cases: CASE_1=1;CASE_3=3;CASE_5=5 */

void __thiscall st::fn_005E1330(MTaskTy *this)

{
  ushort **ppuVar1;
  char cVar2;
  MTaskTy_field_0074DArray *pMVar3;
  ushort *puVar4;
  UINT resourceId;
  byte bVar6;
  int local_EAX_54;
  ushort *local_EAX_241;
  ushort *puVar11;
  LPSTR text;
  ushort *local_EAX_2012;
  ccFntTy *pcVar7;
  uint *puVar8;
  int local_EAX_2647;
  int local_EAX_2671;
  char *pcVar15_mg29;
  int iVar20;
  int local_EAX_3423;
  int local_EAX_3448;
  DArrayTy *local_EAX_3982;
  DArrayTy *local_EAX_4163;
  char *pcVar9_mg27;
  char *pcVar9_mg28;
  char *pcVar9;
  int uVar20;
  AnonPointee_MTaskTy_06BF *pAVar10;
  AnonShape_005E10A0_819783CC *pAVar11;
  int local_EAX_6030;
  DArrayTy *local_EAX_6198;
  int local_EAX_6428;
  int uVar30;
  DArrayTy *pDVar17;
  int iVar10;
  DArrayTy *pDVar12;
  int local_EAX_8751;
  dword dVar13;
  cMf32 *this_00;
  uint uVar14;
  MTaskTy *this_01;
  AnonShape_005E1330_47BFB53C *pAVar15;
  MTaskTy_field_0074Element *element_0074;
  byte *puVar16;
  undefined1 *puVar17;
  int iVar18;
  SpriteClassTy *pSVar19;
  byte *pbVar20;
  char *pcVar21;
  void *slotStorage;
  uint *puVar22;
  int *piVar23;
  int *piVar24;
  byte *puVar25;
  uint uVar26;
  bool bVar27;
  ushort *puVar28;
  int iVar29;
  undefined4 local_1268 [256];
  int local_e68 [140];
  CHAR local_c38 [260];
  uint local_b34 [4];
  int local_b24;
  int local_b20;
  undefined4 local_b1c;
  int local_b18;
  int local_b14;
  int local_b10;
  undefined4 local_afc;
  undefined4 local_af8;
  undefined4 local_af4;
  undefined4 local_a84;
  undefined4 local_a80;
  undefined4 local_a7c;
  int local_a78 [4];
  undefined4 local_a68;
  int local_a64;
  undefined4 local_a18;
  undefined4 local_a14;
  undefined4 local_a10;
  undefined4 local_968;
  undefined4 local_964;
  undefined4 local_8fc;
  int local_8f8 [4];
  int local_8e8;
  int local_8e4;
  undefined4 local_890;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 local_770;
  int local_76c;
  int local_768;
  int local_764;
  int local_760;
  undefined4 local_75c;
  undefined4 local_728;
  undefined4 local_724;
  undefined4 local_720;
  InternalExceptionFrame local_2bc;
  InternalExceptionFrame local_278;
  undefined4 local_234 [4];
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  int *local_1ec;
  int local_1e8;
  SpriteClassTy local_1dc;
  char local_14b;
  undefined4 local_14a;
  int local_146;
  int *local_142;
  uint local_13c;
  int *local_138 [4];
  int local_128;
  int local_124;
  int local_120;
  undefined1 *local_110;
  undefined1 local_10c;
  cTypingTy *local_10b;
  char local_107;
  undefined4 local_106;
  uint *local_102;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  uint local_ec;
  int local_e8;
  undefined4 local_e4 [2];
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined1 local_d8;
  undefined1 local_d7;
  undefined4 local_d6;
  undefined4 uStack_d2;
  int iStack_ce;
  undefined4 uStack_ca;
  uint uStack_c6;
  undefined4 local_c2;
  undefined4 local_be;
  int local_94;
  undefined4 local_90;
  MTaskTy *local_8c;
  undefined4 *local_88;
  uint local_84;
  DArrayTy *local_80;
  uint local_7c;
  undefined1 local_78 [5];
  undefined4 local_73;
  undefined1 local_6f;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined4 local_6a;
  char local_66 [32];
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_32;
  undefined1 local_2a;
  undefined1 local_29;
  DArrayTy *local_28;
  uint local_24;
  DArrayTy *local_20;
  UINT local_1c;
  int **local_18;
  AnonShape_005E1330_47BFB53C *local_14;
  byte local_d;
  SpriteClassTy *local_c;
  AnonShape_005E1330_1AE0EB1C *local_8;

  local_8 = (AnonShape_005E1330_1AE0EB1C *)0x5e133d;
  local_278.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_278;
  local_8c = this;
  local_EAX_54 = st::fn_0072D7F0(local_278.jumpBuffer,0);
  if (local_EAX_54 != 0) {
    g_currentExceptionFrame = local_278.previous;
    local_EAX_8751 =
         st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x45f,0,local_EAX_54,
                            st::mutable_c_string("%s"),"MTaskTy::PlayScript");
    if (local_EAX_8751 == 0) {
      st::fn_006A5E40(local_EAX_54,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x45f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  dVar13 = local_8c->field_0074->count;
  this_01 = local_8c;
  if ((int)local_8c->field_007C < (int)dVar13) {
    do {
      uVar26 = this_01->field_007C;
      if (uVar26 < dVar13) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pAVar15 = (AnonShape_005E1330_47BFB53C *)
                  ((int)&this_01->field_0074->data->field_0000 +
                  this_01->field_0074->elementSize * uVar26);
      }
      else {
        pAVar15 = nullptr;
      }
      local_14 = pAVar15;
      if (((uint)(this_01->field_0069 - this_01->field_0061) <
           *(uint *)((int)&pAVar15->field_0x0 + 1)) && (this_01->field_006D != CASE_5)) break;
      switch((char)*(int *)&pAVar15->field_0x0) {
      case '\x01':
        if ((this_01->field_006E != '\x01') ||
           ((pAVar15->field_0xd != '\0' && (pAVar15->field_0xd != '\x01')))) {
          switch(pAVar15->field_0xd) {
          case 0:
            local_24 = (uint)STPiece<1,3>(local_24) << 8;
            break;
          case 1:
            local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(1));
            break;
          case 2:
            local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(2));
            break;
          case 3:
            local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(3));
            break;
          case 4:
            local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(4));
          }
          uVar26 = local_24 & 0xff;
          if (this_01->field_0291[uVar26] != 0) {
            st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_01->field_02A5[uVar26]);
            st::fn_006E56B0(this_01->field_000C,this_01->field_0291[uVar26]);
            this_01->field_0291[uVar26] = 0;
          }
          local_8 = (AnonShape_005E1330_1AE0EB1C *)(&this_01->field_0000 + uVar26 * 3);
          st::fn_006AB060(&local_8->field_0653);
          if (pAVar15->field_0xe == '\x01') {
            local_18 = *(int ***)&pAVar15->field_0x17;
            local_84 = *(uint *)((int)&pAVar15->field_001A + 1);
            if ((int)local_18 < 0x91) {
              local_18 = (int **)0x91;
            }
            if ((int)local_84 < 0x28) {
              local_84 = 0x28;
            }
            iVar18 = 1;
            puVar28 = this_01->field_005D + 0x14;
            local_EAX_2647 = st::fn_006B4FE0((int)this_01->field_005D);
            local_EAX_2671 =
                 st::fn_006B50C0((int)local_18,local_84,(uint)this_01->field_005D[7],local_EAX_2647,
                              (undefined4 *)puVar28,iVar18);
            local_8->field_0653 = local_EAX_2671;
            local_8->field_0657 =
                 &this_01->field_0x91 + (uint)(pAVar15->field_000A == '\x01') * 0x100;
            local_8->field_065B = *(undefined4 *)&pAVar15->field_0x9;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            uVar14 = st::fn_00405D1C(this_01,1,1,*(uint *)&pAVar15->field_0xf,
                               *(undefined4 *)((int)&pAVar15->field_0012 + 1),st::machine_word_boundary_cast<undefined4>(local_18),local_84,
                               uVar26 + 0x6200,uVar26 + 0x6212);
            this_01->field_0291[uVar26] = uVar14;
            puVar8 = this_01->field_02A5 + uVar26;
            st::fn_006B3640
                      ((int *)g_ddxContext_008075A8,this_01->field_02A5[uVar26],0xffffffff,
                       *(uint *)&pAVar15->field_0xf,*(uint *)((int)&pAVar15->field_0012 + 1));
            st::fn_006B2800(g_ddxContext_008075A8,*puVar8,(uint)local_18,local_84);
            st::fn_006B3020((int)g_ddxContext_008075A8,*puVar8,pAVar15->field_0005);
            st::fn_006B3430((int *)g_ddxContext_008075A8,*puVar8);
          }
        }
        break;
      case '\x02':
        if (this_01->field_006E != '\x01') {
          if (this_01->field_02B9 != 0) {
            puVar8 = st::pointer_boundary_cast<uint *>(&this_01->field_02BD);
            local_8 = (AnonShape_005E1330_1AE0EB1C *)0x4;
            do {
              st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar8);
              puVar8 = puVar8 + 1;
              local_8 = (AnonShape_005E1330_1AE0EB1C *)((int)&local_8[-1].field_065B + 3);
            } while (local_8 != nullptr);
            st::fn_006E56B0(this_01->field_000C,this_01->field_02B9);
            this_01->field_02B9 = 0;
          }
          slotStorage = &this_01->field_068F;
          local_8 = (AnonShape_005E1330_1AE0EB1C *)0x4;
          do {
            st::fn_006AB060(slotStorage);
            slotStorage = (void *)((int)slotStorage + 0xc);
            local_8 = (AnonShape_005E1330_1AE0EB1C *)((int)&local_8[-1].field_065B + 3);
          } while (local_8 != nullptr);
          local_8 = nullptr;
          if (pAVar15->field_0xd == '\x01') {
            local_8 = nullptr;
            memset(local_234, 0, 0x58); /* compiler bulk-zero initialization */
            iVar18 = 0;
            memset(local_e68, 0, 0x230); /* compiler bulk-zero initialization */
            bVar6 = 2;
            piVar24 = (int *)&pAVar15->field_0x16;
            iVar18 = 2;
            do {
              if (-1 < *piVar24) {
                bVar6 = bVar6 + 1;
              }
              piVar24 = piVar24 + 1;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
            local_90 = STReplaceLowByte((uint32_t)(local_90), (uint8_t)(bVar6));
            local_80 = (DArrayTy *)(uint)bVar6;
            if (local_80 == (DArrayTy *)0x2) {
              if ((DAT_00807340 == 1) || (DAT_00807340 == 3)) {
                _DAT_00807340 = (uint)_DAT_00807341 << 8;
              }
            }
            else if ((local_80 == (DArrayTy *)0x3) && (DAT_00807340 == 3)) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _DAT_00807340 = CONCAT31(_DAT_00807341,1);
            }
            local_d = 0;
            if (bVar6 != 0) {
              local_88 = (undefined4 *)&pAVar15->field_0x9;
              local_c = nullptr;
              piVar24 = local_e68;
              pAVar15 = pAVar15 + 1;
              local_8 = (AnonShape_005E1330_1AE0EB1C *)&this_01->field_0x693;
              do {
                local_1c = 0x1f52;
                if (local_80 == (DArrayTy *)0x2) {
                  if (local_c == nullptr) {
                    local_1c = 0x1f47;
                    *piVar24 = 1;
                  }
                  else if (local_c == (SpriteClassTy *)0x1) {
                    local_1c = 0x1f49;
                    *piVar24 = 3;
                  }
                }
                else if (local_80 == (DArrayTy *)0x3) {
                  if (local_c == nullptr) {
                    local_1c = 0x1f47;
LAB_005e200a:
                    *piVar24 = (int)((int)&local_c->vtable + 1);
                  }
                  else if (local_c == (SpriteClassTy *)0x1) {
                    local_1c = 0x1f48;
                    *piVar24 = 2;
                  }
                  else {
                    if (local_c != (SpriteClassTy *)0x2) goto LAB_005e200a;
                    local_1c = 0x1f49;
                    *piVar24 = 3;
                  }
                }
                else {
                  switch(local_c) {
                  case nullptr:
                    local_1c = 0x1f47;
                    *piVar24 = (int)((int)&local_c->vtable + 1);
                    break;
                  case (SpriteClassTy *)0x1:
                    local_1c = 0x1f48;
                    *piVar24 = (int)((int)&local_c->vtable + 1);
                    break;
                  case (SpriteClassTy *)0x2:
                    local_1c = 0x1f49;
                    *piVar24 = (int)((int)&local_c->vtable + 1);
                    break;
                  case (SpriteClassTy *)0x3:
                  default:
                    local_1c = 0x1f52;
                    *piVar24 = (int)((int)&local_c->vtable + 1);
                  }
                }
                resourceId = local_1c;
                piVar24[1] = (uint)(local_d == DAT_00807340);
                piVar24[3] = *(int *)&((MTaskTy_field_0074Element *)(pAVar15 + -1))->field_000E;
                pcVar15_mg29 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
                iVar20 = st::fn_00711110(this_01->field_008D,pcVar15_mg29);
                iVar18 = 1;
                piVar24[5] = iVar20 + 0x1b;
                puVar4 = this_01->field_005D;
                piVar24[4] = *(uint *)pAVar15;
                piVar24[6] = 0x14;
                local_e8 = piVar24[5];
                puVar28 = puVar4 + 0x14;
                local_EAX_3423 = st::fn_006B4FE0((int)puVar4);
                local_EAX_3448 =
                     st::fn_006B50C0(local_e8,0x14,(uint)this_01->field_005D[7],local_EAX_3423,
                                  (undefined4 *)puVar28,iVar18);
                local_8[-1].field_065B = local_EAX_3448;
                puVar17 = st::pointer_boundary_cast<undefined1 *>(&local_8->field_0xc);
                pAVar15 = (AnonShape_005E1330_47BFB53C *)&pAVar15->field_0x4;
                *(undefined1 **)local_8 =
                     &this_01->field_0x91 + (uint)(local_14->field_000A != '\0') * 0x100;
                piVar24 = piVar24 + 0x1c;
                *(undefined4 *)&local_8->field_0x4 = *local_88;
                local_d = local_d + 1;
                local_c = (SpriteClassTy *)((int)&local_c->vtable + 1);
                local_8 = (AnonShape_005E1330_1AE0EB1C *)puVar17;
              } while (local_d < (byte)local_90);
            }
            local_234[0] = 1;
            local_1ec = local_e68;
            local_234[1] = 1;
            local_224 = this_01->field_0008;
            local_220 = 2;
            local_200 = 2;
            local_1e8 = (_DAT_00807340 & 0xff) + 1;
            local_21c = 0x6205;
            local_1fc = 0x6217;
            local_204 = local_224;
            (*this_01->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_01->field_000C,5,&this_01->field_02B9,nullptr,
                       st::machine_word_boundary_cast<undefined4>(local_234),0);
            puVar8 = (uint *)(local_e68 + 3);
            puVar22 = st::pointer_boundary_cast<uint *>(&this_01->field_02BD);
            local_8 = (AnonShape_005E1330_1AE0EB1C *)0x4;
            do {
              st::fn_006B3640
                        ((int *)g_ddxContext_008075A8,*puVar22,0xffffffff,*puVar8,puVar8[1]);
              st::fn_006B2800(g_ddxContext_008075A8,*puVar22,puVar8[2],puVar8[3]);
              st::fn_006B3020((int)g_ddxContext_008075A8,*puVar22,local_14->field_0005);
              st::fn_006B3430((int *)g_ddxContext_008075A8,*puVar22);
              puVar8 = puVar8 + 0x1c;
              puVar22 = puVar22 + 1;
              local_8 = (AnonShape_005E1330_1AE0EB1C *)((int)&local_8[-1].field_065B + 3);
            } while (local_8 != nullptr);
          }
        }
        break;
      case '\x03':
        if (this_01->field_006E != '\x01') {
          if (this_01->field_02CD != 0) {
            st::fn_006E56B0(this_01->field_000C,this_01->field_02CD);
            this_01->field_02CD = 0;
            st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_01->field_0484);
            if (this_01->field_02D5 != 0xffffffff) {
              st::fn_006B3AF0((int *)this_01->field_0319,this_01->field_02D5);
            }
            if (this_01->field_0366 != 0xffffffff) {
              st::fn_006B3AF0((int *)this_01->field_03AA,this_01->field_0366);
            }
            if (this_01->field_03F7 != 0xffffffff) {
              st::fn_006B3AF0((int *)this_01->field_043B,this_01->field_03F7);
            }
          }
          st::fn_006AB060(&this_01->field_06BF);
          if (pAVar15->field_0xd == '\x01') {
            memset(local_b34, 0, 0x878); /* compiler bulk-zero initialization */
            if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
              st::fn_006B5570((DArrayTy *)g_startSystem_0081176C->field_0548);
            }
            local_EAX_3982 = st::fn_006B54F0(nullptr,10,10);
            g_startSystem_0081176C->field_0548 = st::pointer_boundary_cast<uint *>(&local_EAX_3982->flags);
            dVar13 = g_dArray_0080C4CB->elementSize;
            if (dVar13 != 0) {
              iVar18 = 0;
              if (0 < (int)dVar13) {
                if ((int)dVar13 < 1) {
                  pcVar9 = nullptr;
                  goto LAB_005e22f4;
                }
                do {
                  pcVar9 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar18 * 4);
LAB_005e22f4:
                  st::fn_004015A0((DArrayTy *)g_startSystem_0081176C->field_0548,pcVar9,
                                     st::mutable_c_string("@ - %s"));
                  iVar18 = iVar18 + 1;
                } while (iVar18 < (int)g_dArray_0080C4CB->elementSize);
              }
              local_20 = (DArrayTy *)
                         st::fn_007126E0
                                   (this_01->field_008D,
                                    (DArrayTy *)g_startSystem_0081176C->field_0548,
                                    st::mutable_c_string(" ,.;:!?/\\()[]{}"),(uint *)&DAT_007c21ec,
                                    (*(int *)&pAVar15->field_0x16 - *(int *)&this_01->field_0x2f5) +
                                    -0x2d,0,0xffffffff,nullptr,1);
              if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
                st::fn_006B5570((DArrayTy *)g_startSystem_0081176C->field_0548);
              }
              local_EAX_4163 = st::fn_006B54F0(nullptr,10,10);
              g_startSystem_0081176C->field_0548 = st::pointer_boundary_cast<uint *>(&local_EAX_4163->flags);
              bVar6 = (this_01->field_06C7 != '\x01') - 1;
              local_ec = STReplaceLowByte((uint32_t)(local_ec), (uint8_t)(bVar6)) & 0xffffff02;
              uVar26 = bVar6 & 2;
              pcVar9_mg27 = st::fn_006B0140(0x2347,g_hINSTANCE_00807618);
              st::external_00000080(local_c38,st::mutable_c_string("&%1d %s:"),uVar26,pcVar9_mg27);
              st::fn_006B5AA0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,local_c38);
              st::external_00000080(local_c38,st::mutable_c_string("&%1d %s"),2 - uVar26,&CHAR_00h_0080c3c3);
              st::fn_006B5AA0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,local_c38);
              st::fn_006B5AA0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,&st_global_007C3B5C);
              pcVar9_mg28 = st::fn_006B0140(0x2346,g_hINSTANCE_00807618);
              st::external_00000080(local_c38,st::mutable_c_string("&%1d %s:"),uVar26,pcVar9_mg28);
              st::fn_006B5AA0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,local_c38);
              st::fn_006B5AA0
                        ((DArrayTy *)g_startSystem_0081176C->field_0548,&st_global_007C3B5C);
              if (local_20 != nullptr) {
                if (local_20->elementSize != 0) {
                  st::fn_007129D0(this_01->field_008D,st::pointer_boundary_cast<uint *>(&local_20->flags),st::pointer_boundary_cast<uint *>(&local_20->flags));
                }
                iVar18 = 0;
                if (0 < (int)local_20->elementSize) {
                  if ((int)local_20->elementSize < 1) {
                    pcVar9 = nullptr;
                    goto LAB_005e24c5;
                  }
                  do {
                    pcVar9 = *(char **)(local_20->growCapacity + iVar18 * 4);
LAB_005e24c5:
                    st::fn_006B5AA0
                              ((DArrayTy *)g_startSystem_0081176C->field_0548,pcVar9);
                    iVar18 = iVar18 + 1;
                  } while (iVar18 < (int)local_20->elementSize);
                }
                st::fn_006B5570(local_20);
              }
              local_f0 = *(int *)&pAVar15->field_0x16;
              uVar26 = pAVar15->field_001A;
              iVar18 = 1;
              puVar28 = this_01->field_005D + 0x14;
              uVar20 = st::fn_006B4FE0((int)this_01->field_005D);
              pAVar10 = (AnonPointee_MTaskTy_06BF *)
                        st::fn_006B50C0(local_f0,uVar26,(uint)this_01->field_005D[7],uVar20,
                                     (undefined4 *)puVar28,iVar18);
              this_01->field_06BF = pAVar10;
              *(undefined1 **)&this_01->field_0x6c3 =
                   &this_01->field_0x91 + (uint)(pAVar15->field_000A != '\0') * 0x100;
              *(undefined4 *)&this_01->field_06C7 = *(undefined4 *)&pAVar15->field_0x9;
              local_b34[0] = 0;
              local_b34[1] = 2;
              local_b14 = *(int *)&pAVar15->field_0xe + 0xf;
              local_b34[2] = 1;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_b10 = *(int *)((int)&pAVar15->field_0xf + 3) + 0xf;
              pcVar7 = this_01->field_008D;
              local_b34[3] = g_startSystem_0081176C->field_0548[2];
              local_b24 = (*(int *)&pAVar15->field_0x16 - *(int *)&this_01->field_0x2f5) + -0x2d;
              if (pcVar7->field_00A0 != 0) {
                st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar7);
              }
              local_b20 = *(int *)&pcVar7->field_0x8a;
              local_b1c = 1;
              local_af4 = 0x6332;
              local_a84 = 4;
              local_a80 = 0;
              local_a78[0] = 0;
              local_afc = this_01->field_0008;
              local_b18 = (int)(local_14->field_001A - 0x1e) / *(int *)&pcVar7->field_0x8a;
              local_af8 = 2;
              local_a7c = 2;
              local_a78[1] = 2;
              local_a78[2] = local_b24 + 0xf + local_b14;
              this_01->field_037E = local_a78[2];
              local_a18 = this_01->field_0008;
              local_a78[3] = (local_14->field_0012 - *(int *)&this_01->field_0x38a) + -0x10 +
                             local_14->field_001A;
              this_01->field_0382 = local_a78[3];
              local_a68 = *(undefined4 *)&this_01->field_0x386;
              local_a64 = *(int *)&this_01->field_0x38a;
              local_968 = 500;
              local_964 = 0x32;
              local_a14 = 2;
              local_a10 = 0x6334;
              local_8fc = 2;
              piVar24 = local_a78;
              piVar23 = local_8f8;
              for (iVar18 = 0x5f; pAVar15 = local_14, iVar18 != 0; iVar18 = iVar18 + -1) {
                *piVar23 = *piVar24;
                piVar24 = piVar24 + 1;
                piVar23 = piVar23 + 1;
              }
              local_764 = *(int *)&this_01->field_0x417;
              local_8f8[2] = local_b24 + 0xf + local_b14;
              local_8e4 = *(int *)&this_01->field_0x2f9;
              this_01->field_02ED = local_8f8[2];
              local_8f8[3] = st::machine_word_boundary_cast<int>(local_14->field_0012 + 0xf);
              local_890 = 0x6333;
              this_01->field_02F1 = local_8f8[3];
              local_8e8 = *(int *)&this_01->field_0x2f5;
              local_77c = 3;
              local_778 = 1;
              local_770 = 0;
              local_76c = (local_8e8 - local_764) / 2 + local_b24 + 0xf + local_b14;
              this_01->field_040F = local_76c;
              local_768 = st::machine_word_boundary_cast<int>(local_14->field_0012 + 0x1e + local_8e4);
              this_01->field_0413 = local_768;
              local_728 = this_01->field_0008;
              local_760 = ((local_14->field_001A - local_8e4) - *(int *)&this_01->field_0x38a) +
                          -0x3c;
              local_75c = 0xe;
              local_724 = 2;
              local_720 = 0x6335;
              (*this_01->field_000C->vtable->CreateObject)
                        ((SystemClassTy *)this_01->field_000C,8,&this_01->field_02CD,nullptr,
                         st::machine_word_boundary_cast<undefined4>(local_b34),0);
              this_01->field_002D = 0x20;
              this_01->field_0031 = 1;
              st::fn_006E6080(this_01,2,this_01->field_02CD,(undefined4 *)&this_01->field_0x1d);
              st::fn_006B3640
                        ((int *)g_ddxContext_008075A8,this_01->field_0484,0xffffffff,
                         *(uint *)&pAVar15->field_0xe,pAVar15->field_0012);
              st::fn_006B2800(g_ddxContext_008075A8,this_01->field_0484,*(uint *)&pAVar15->field_0x16,
                           pAVar15->field_001A);
              st::fn_006B3020((int)g_ddxContext_008075A8,this_01->field_0484,pAVar15->field_0005);
              st::fn_006B3430((int *)g_ddxContext_008075A8,this_01->field_0484);
              if ((int)pAVar15->field_0005 < 1) {
                uVar26 = 0;
              }
              else {
                uVar26 = st::machine_word_boundary_cast<uint>(pAVar15->field_0005 - 1);
              }
              if (this_01->field_02D5 != 0xffffffff) {
                st::fn_006B3020(this_01->field_0319,this_01->field_02D5,uVar26);
              }
              pAVar15 = local_14;
              *(uint *)&this_01->field_0x32e = uVar26;
              if ((int)local_14->field_0005 < 1) {
                uVar26 = 0;
              }
              else {
                uVar26 = st::machine_word_boundary_cast<uint>(local_14->field_0005 - 1);
              }
              if (this_01->field_0366 != 0xffffffff) {
                st::fn_006B3020(this_01->field_03AA,this_01->field_0366,uVar26);
              }
              *(uint *)&this_01->field_0x3bf = uVar26;
              if ((int)pAVar15->field_0005 < 1) {
                uVar26 = 0;
              }
              else {
                uVar26 = st::machine_word_boundary_cast<uint>(pAVar15->field_0005 - 1);
              }
              if (this_01->field_03F7 != 0xffffffff) {
                st::fn_006B3020(this_01->field_043B,this_01->field_03F7,uVar26);
              }
              *(uint *)&this_01->field_0x450 = uVar26;
              this_01->field_03FB = (uint)(this_01->field_06CA == '\x01');
              if (this_01->field_02D5 != 0xffffffff) {
                st::fn_006B34D0
                          ((uint *)this_01->field_0319,this_01->field_02D5,0xfffffffe,
                           this_01->field_02ED,this_01->field_02F1);
              }
              if (this_01->field_0366 != 0xffffffff) {
                st::fn_006B34D0
                          ((uint *)this_01->field_03AA,this_01->field_0366,0xfffffffe,
                           this_01->field_037E,this_01->field_0382);
              }
              if (this_01->field_03F7 != 0xffffffff) {
                st::fn_006B34D0
                          ((uint *)this_01->field_043B,this_01->field_03F7,0xfffffffe,
                           this_01->field_040F,this_01->field_0413);
              }
              if (this_01->field_03F7 != 0xffffffff) {
                st::fn_006B3730
                          ((uint *)this_01->field_043B,this_01->field_03F7,this_01->field_03FB,
                           this_01->field_040F,this_01->field_0413);
              }
            }
          }
        }
        break;
      case '\x05':
        cVar2 = pAVar15->field_0xe;
        if (cVar2 == '\0') {
          pDVar12 = this_01->field_064F;
        }
        else {
          pDVar12 = this_01->field_0647;
        }
        uVar26 = *(uint *)&pAVar15->field_0xf;
        if (uVar26 < pDVar12->count) {
          if (cVar2 == '\0') {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pAVar11 = (AnonShape_005E10A0_819783CC *)
                      (this_01->field_064F->elementSize * uVar26 + (int)this_01->field_064F->data);
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pAVar11 = (AnonShape_005E10A0_819783CC *)
                      (this_01->field_0647->elementSize * uVar26 + (int)this_01->field_0647->data);
          }
        }
        else {
          pAVar11 = nullptr;
        }
        if (pAVar15->field_0xd == '\x01') {
          if (((pAVar11 == nullptr) || ((int)*(uint *)pAVar11 < 0)) ||
             (*(int *)&pAVar11->field_0x20 != *(int *)((int)&pAVar15->field_0012 + 2))) {
            st::fn_0040555B(this_01,pAVar11);
            iVar18 = *(int *)((int)&pAVar15->field_0012 + 2);
            if (iVar18 < (int)g_dArray_0080C4C7->elementSize) {
              local_8 = *(AnonShape_005E1330_1AE0EB1C **)
                         (g_dArray_0080C4C7->growCapacity + iVar18 * 4);
            }
            else {
              local_8 = nullptr;
            }
            if (local_8 != nullptr) {
              memset(&local_13c, 0, 0x3e); /* compiler bulk-zero initialization */
              if (pAVar15->field_0xe == '\0') {
                local_7c = local_7c & 0xffffff00;
                local_88 = (undefined4 *)((-(uint)(pAVar15->field_0x9 != '\x01') & 0xfffffffe) + 2);
                do {
                  local_fc = *(int *)&pAVar15[1].field_0x4;
                  iVar18 = *(undefined4 *)((int)&pAVar15[1].field_0005 + 3);
                  iVar29 = 1;
                  puVar28 = this_01->field_005D + 0x14;
                  uVar30 = st::fn_006B4FE0((int)this_01->field_005D);
                  piVar24 = (int *)st::fn_006B50C0(local_fc,iVar18,(uint)this_01->field_005D[7],uVar30,
                                                (undefined4 *)puVar28,iVar29);
                  local_18 = local_138 + (local_7c & 0xff);
                  *local_18 = piVar24;
                  local_28 = (DArrayTy *)piVar24[5];
                  if (local_28 == nullptr) {
                    local_28 = (DArrayTy *)
                               (((uint)STField<ushort>(piVar24,0xe) * piVar24[1] + 0x1f >> 3 &
                                0x1ffffffc) * piVar24[2]);
                  }
                  puVar16 = (byte *)st::fn_006B4FA0(piVar24);
                  for (uVar26 = (uint)local_28 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
                    *puVar16 = 0xffffffff;
                    puVar16 = (byte *)(puVar16 + 1);
                  }
                  for (uVar26 = (uint)local_28 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                    *(undefined1 *)puVar16 = 0xff;
                    puVar16 = (byte *)((int)puVar16 + 1);
                  }
                  st::fn_00405A51(this_01,(AnonShape_005E11D0_D0F8BE03 *)*local_18,pAVar15->field_0x19,
                               pAVar15->field_0xb);
                  if (pAVar15->field_0x19 != '\0') {
                    local_110 = &this_01->field_0x91 + (uint)(pAVar15->field_000A == '\x01') * 0x100
                    ;
                  }
                  st::fn_00710A90(this_01->field_0089,(int)*local_18,0,0,0,0,0);
                  pDVar17 = st::fn_006B54F0(nullptr,1,1);
                  st::fn_006B5AA0(pDVar17,(char *)local_8);
                  local_80 = (DArrayTy *)
                             st::fn_007126E0
                                       (this_01->field_0089,pDVar17,st::mutable_c_string(" ,.;:!?/\\()[]{}"),
                                        (uint *)&DAT_007c21ec,
                                        *(int *)&pAVar15[1].field_0x4 +
                                        *(int *)&pAVar15[1].field_0xc * -2,0,0xffffffff,nullptr,
                                        1);
                  st::fn_006B5570(pDVar17);
                  pDVar12 = local_80;
                  if (local_80 != nullptr) {
                    puVar16 = (byte *)(local_88);
                    if ((char)local_7c != '\0') {
                      if ((char)local_7c == '\x01') {
                        puVar16 = (byte *)((int)local_88 + 1);
                      }
                      else {
                        puVar16 = (byte *)0x4;
                      }
                    }
                    st::fn_00711F70(this_01->field_0089,(int)local_80,0,-1,
                                    *(int *)&pAVar15[1].field_0xc,*(int *)&pAVar15[1].field_0x10,
                                    st::machine_word_boundary_cast<undefined4>(puVar16));
                    st::fn_006B5570(pDVar12);
                  }
                  bVar6 = (char)local_7c + 1;
                  local_7c = STReplaceLowByte((uint32_t)(local_7c), (uint8_t)(bVar6));
                } while (bVar6 < 3);
                st::fn_006B2330(g_ddxContext_008075A8,&local_13c,pAVar15->field_0005,0x403db4,
                             *(uint *)&pAVar15[1].field_0x4,
                             *(undefined4 *)((int)&pAVar15[1].field_0005 + 3),
                             (ushort *)this_01->field_064F);
                uVar26 = *(uint *)&pAVar15->field_0xf;
                pDVar12 = this_01->field_064F;
              }
              else {
                local_106 = *(undefined4 *)&pAVar15->field_0x9;
                iVar29 = 1;
                local_107 = pAVar15->field_0x19;
                local_10c = pAVar15->field_0x18;
                local_f8 = *(int *)&pAVar15[1].field_0x4;
                iVar18 = *(undefined4 *)((int)&pAVar15[1].field_0005 + 3);
                puVar28 = this_01->field_005D + 0x14;
                local_f4 = (-(uint)(pAVar15->field_0x9 != '\x01') & 0xfffffffe) + 2;
                local_EAX_6030 = st::fn_006B4FE0((int)this_01->field_005D);
                local_138[0] = (int *)st::fn_006B50C0(local_f8,iVar18,(uint)this_01->field_005D[7],
                                                   local_EAX_6030,(undefined4 *)puVar28,iVar29);
                local_18 = (int **)local_138[0][5];
                if (local_18 == nullptr) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  local_18 = (int **)(((uint)*(ushort *)((int)local_138[0] + 0xe) * local_138[0][1]
                                       + 0x1f >> 3 & 0x1ffffffc) * local_138[0][2]);
                }
                puVar16 = (byte *)st::fn_006B4FA0(local_138[0]);
                for (uVar26 = (uint)local_18 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
                  *puVar16 = 0xffffffff;
                  puVar16 = (byte *)(puVar16 + 1);
                }
                for (uVar26 = (uint)local_18 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                  *(undefined1 *)puVar16 = 0xff;
                  puVar16 = (byte *)((int)puVar16 + 1);
                }
                if (pAVar15->field_0x19 != '\0') {
                  local_110 = &this_01->field_0x91 + (uint)(STPiece<1,1>(local_106) == '\x01') * 0x100;
                }
                st::fn_00710A90(this_01->field_0089,(int)local_138[0],0,0,0,0,0);
                local_EAX_6198 = st::fn_006B54F0(nullptr,1,1);
                st::fn_006B5AA0(local_EAX_6198,(char *)local_8);
                local_28 = (DArrayTy *)
                           st::fn_007126E0
                                     (this_01->field_0089,local_EAX_6198,st::mutable_c_string(" ,.;:!?/\\()[]{}"),
                                      (uint *)&DAT_007c21ec,
                                      *(int *)&pAVar15[1].field_0x4 +
                                      *(int *)&pAVar15[1].field_0xc * -2,0,0xffffffff,nullptr,1);
                st::fn_006B5570(local_EAX_6198);
                pDVar12 = local_28;
                if (local_28 != nullptr) {
                  local_102 = (uint *)st::fn_00713080(this_01->field_0089,nullptr,
                                                          (int)local_28);
                  if (local_102 != nullptr) {
                    local_10b = (cTypingTy *)st::fn_0072E530(0xb4);
                    if (local_10b == nullptr) {
                      local_10b = nullptr;
                    }
                    else {
                      local_10b->field_0058 = 0;
                      local_10b->field_0088 = 0;
                    }
                    local_128 = *(int *)&pAVar15[1].field_0xc;
                    local_124 = *(int *)&pAVar15[1].field_0x10;
                    local_EAX_6428 =
                         st::fn_00713B00
                                   (local_10b,local_102,this_01->field_0089,0,0,0,
                                    *(int *)&pAVar15[1].field_0x4 +
                                    *(int *)&pAVar15[1].field_0xc * -2,
                                    *(undefined4 *)((int)&pAVar15[1].field_0005 + 3) +
                                    *(int *)&pAVar15[1].field_0x10 * -2,0,0,local_f4,local_f4 + 1,4,
                                    0xff);
                    local_120 = local_EAX_6428 + 1;
                  }
                  st::fn_006B5570(pDVar12);
                }
                st::fn_006B2330(g_ddxContext_008075A8,&local_13c,pAVar15->field_0005,0x4041b0,
                             *(uint *)&pAVar15[1].field_0x4,
                             *(undefined4 *)((int)&pAVar15[1].field_0005 + 3),
                             (ushort *)this_01->field_0647);
                uVar26 = *(uint *)&pAVar15->field_0xf;
                pDVar12 = this_01->field_0647;
              }
              st::fn_006AE140(pDVar12,uVar26,&local_13c);
              st::fn_006B3640
                        ((int *)g_ddxContext_008075A8,local_13c,0,pAVar15->field_001A,
                         *(uint *)(pAVar15 + 1));
            }
          }
          else {
            if (cVar2 == '\0') {
              uVar26 = *(uint *)&pAVar11->field_0x10;
            }
            else {
              uVar26 = 0;
            }
            st::fn_006B3730
                      ((uint *)g_ddxContext_008075A8,*(uint *)pAVar11,uVar26,pAVar15->field_001A,
                       *(uint *)(pAVar15 + 1));
          }
        }
        else if ((pAVar11 != nullptr) && (-1 < *(int *)pAVar11)) {
          if (this_01->field_006D == CASE_5) {
            st::fn_0040555B(this_01,pAVar11);
          }
          else {
            if (cVar2 == '\0') {
              iVar18 = 1;
            }
            else {
              iVar18 = *(int *)&pAVar11->field_0x1c + -2;
            }
            *(int *)&pAVar11->field_0x10 = iVar18;
            *(undefined4 *)&pAVar11->field_0x28 = 2;
            *(undefined4 *)&pAVar11->field_0x24 = this_01->field_0069;
            st::fn_006B35D0((int *)g_ddxContext_008075A8,*(uint *)pAVar11);
          }
        }
        break;
      case '\x06':
        if (this_01->field_006D != CASE_5) {
          puVar8 = (uint *)st::fn_00719D00
                                     (this_01->field_0070,st::pointer_boundary_cast<char *>(&pAVar15->field_0xd),0,nullptr);
          if ((puVar8 != nullptr) ||
             (puVar8 = (uint *)st::fn_00719D00
                                         (g_cMf32_00806798,st::pointer_boundary_cast<char *>(&pAVar15->field_0xd),0,nullptr),
             puVar8 != nullptr)) {
            st::fn_00402FD1(&g_sound,0,'\x03',-1,puVar8);
          }
        }
        break;
      case '\a':
        pDVar12 = this_01->field_064B;
        if (*(uint *)&pAVar15->field_0xe < pDVar12->count) {
          pSVar19 = DArrayAt<SpriteClassTy>(pDVar12, *(uint *)&pAVar15->field_0xe);
        }
        else {
          pSVar19 = nullptr;
        }
        local_c = pSVar19;
        if (pAVar15->field_0xd == '\x01') {
          st::fn_00715820(&local_1dc);
          local_142 = nullptr;
          local_94 = 1;
          local_2bc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2bc;
          iVar10 = st::fn_0072D7F0(local_2bc.jumpBuffer,0);
          pSVar19 = local_c;
          pAVar15 = local_14;
          if (iVar10 == 0) {
            if (local_c != nullptr) {
              pbVar20 = st::pointer_boundary_cast<byte *>(&local_c->field_0065);
              if (pbVar20 != nullptr) {
                piVar24 = &local_14->field_0012;
                do {
                  bVar6 = *pbVar20;
                  bVar27 = bVar6 < (byte)*piVar24;
                  if (bVar6 != (byte)*piVar24) {
LAB_005e2ffb:
                    iVar18 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                    goto LAB_005e3000;
                  }
                  if (bVar6 == 0) break;
                  bVar6 = pbVar20[1];
                  bVar27 = bVar6 < STField<byte>(piVar24,1);
                  if (bVar6 != STField<byte>(piVar24,1)) goto LAB_005e2ffb;
                  pbVar20 = pbVar20 + 2;
                  piVar24 = (int *)((int)piVar24 + 2);
                } while (bVar6 != 0);
                iVar18 = 0;
LAB_005e3000:
                if (iVar18 != 0) {
                  st::fn_00715AB0(local_c);
                  if (*(int *)((int)&pSVar19[1].field_0008 + 1) != 0) {
                    st::fn_006AB060((void *)((int)&pSVar19[1].field_0008 + 1));
                  }
                  goto LAB_005e3030;
                }
              }
              local_94 = 0;
            }
LAB_005e3030:
            pSVar19 = local_c;
            this_01 = local_8c;
            if (local_94 == 0) {
              if (local_c == nullptr) {
                puVar16 = nullptr;
              }
              else {
                puVar16 = (byte *)(&local_c->field_0004);
              }
              puVar25 = (byte *)(&local_1dc.field_0004);
              memmove(puVar25, puVar16, 0x44); /* compiler REP MOVS byte copy */
              local_1dc.field_0048 = st::machine_word_boundary_cast<undefined4>((uint *)pSVar19->field_0048);
              local_1dc.field_004C = pSVar19->field_004C;
              local_1dc.field_004D = pSVar19->field_004D;
              local_1dc.field_0051 = pSVar19->field_0051;
              local_1dc.field_0055 = pSVar19->field_0055;
              local_1dc.field_0059 = pSVar19->field_0059;
              local_1dc.field_005D = pSVar19->field_005D;
              local_1dc.field_0061 = pSVar19->field_0061;
              puVar17 = &local_1dc.field_0065;
              iVar18 = 0x20;
              do {
                *puVar17 = puVar17[(int)pSVar19 - (int)&local_1dc];
                puVar17 = puVar17 + 1;
                iVar18 = iVar18 + -1;
              } while (iVar18 != 0);
              local_1dc.field_0085 = pSVar19->field_0085;
              local_1dc.field_0089 = pSVar19->field_0089;
              local_1dc.field_008D = pSVar19->field_008D;
              pAVar15 = local_14;
            }
            else {
              st::fn_007158A0
                        (&local_1dc,(int *)g_ddxContext_008075A8,pAVar15->field_0005,'\x1e',
                         nullptr,0,0);
              iVar18 = st::fn_00716040
                                 (&local_1dc,this_01->field_0070,CASE_1E,0,
                                  (char *)&pAVar15->field_0012,0xffffffff,0);
              if (iVar18 != 0) {
                st::fn_00716040
                          (&local_1dc,g_cMf32_00806798,CASE_1E,0,(char *)&pAVar15->field_0012,
                           0xffffffff,1);
              }
            }
            local_1dc.field_001C = *(uint *)((int)&pAVar15[1].field_0012 + 2);
            local_1dc.field_0020 = *(uint *)&pAVar15[1].field_0x18;
            cVar2 = *(char *)((int)&pAVar15[2].field_0012 + 1);
            if (cVar2 == '\0') {
              local_14b = '\0';
              local_1dc.field_0008 = *(int *)&pAVar15[2].field_0xe;
            }
            else if (cVar2 == '\x01') {
              local_1dc.field_0044 = this_01->field_0069;
              local_14b = ((char)pAVar15[2].field_0012 != '\0') + '\x01';
              local_1dc.field_0008 = *(int *)&pAVar15[2].field_0xe;
              local_1dc.field_0040 = *(undefined4 *)&pAVar15[2].field_000A;
            }
            else if (cVar2 == '\x02') {
              local_1dc.field_0044 = this_01->field_0069;
              local_14b = ((char)pAVar15[2].field_0012 != '\0') + '\x03';
              local_1dc.field_0008 = *(int *)&pAVar15[2].field_0xe;
              local_1dc.field_0040 = *(undefined4 *)&pAVar15[2].field_000A;
              local_14a = 0;
              local_146 = *(int *)((int)&pAVar15[2].field_0005 + 1);
              local_142 = st::fn_006C81C0(*(int *)((int)&pAVar15[1].field_0012 + 2),
                                       *(int *)&pAVar15[1].field_0x18,
                                       *(int *)((int)&pAVar15[1].field_001A + 2),
                                       *(int *)&pAVar15[2].field_0x2,local_146);
              if (local_142 == nullptr) {
                local_14b = ((char)pAVar15[2].field_0012 != '\0') + '\x01';
              }
            }
            if (local_1dc.field_0004 != 0xffffffff) {
              st::fn_006B3730
                        (st::pointer_boundary_cast<uint *>(local_1dc.field_0048),local_1dc.field_0004,local_1dc.field_0008,
                         local_1dc.field_001C,local_1dc.field_0020);
            }
            st::fn_006AE140
                      (this_01->field_064B,*(uint *)&pAVar15->field_0xe,&local_1dc);
            g_currentExceptionFrame = local_2bc.previous;
          }
          else {
            g_currentExceptionFrame = local_2bc.previous;
            st::fn_00715AB0(&local_1dc);
            this_01 = local_8c;
            if (local_142 != nullptr) {
              st::fn_006AB060(&local_142);
              this_01 = local_8c;
            }
          }
        }
        else if (pSVar19 != nullptr) {
          st::fn_00715AB0(pSVar19);
          if (*(int *)((int)&pSVar19[1].field_0008 + 1) != 0) {
            st::fn_006AB060((void *)((int)&pSVar19[1].field_0008 + 1));
          }
        }
        break;
      case '\b':
        memset(local_e4, 0, 0x50); /* compiler bulk-zero initialization */
        local_da = 0;
        local_d9 = 1;
        local_d8 = 1;
        local_db = 1;
        STPiece<0,1>(local_e4[0]) = 1;
        local_d7 = 2;
        local_d6 = 0x26201;
        uStack_d2 = 0x22600;
        STPiece<1,3>(iStack_ce) = 0x91;
        STPiece<0,1>(iStack_ce) = 0;
        uStack_ca = 0x2800;
        uStack_c6 = uStack_c6 & 0xffffff00;
        st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&this_01->field_0074->flags),uVar26 + 1,local_e4);
        local_d7 = 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_d6 = CONCAT31(0x2d,(undefined1)local_d6);
        uStack_d2 = 0x22600;
        STPiece<0,1>(iStack_ce) = 0;
        st::fn_006B11D0
                  (st::pointer_boundary_cast<uint *>(&this_01->field_0074->flags),st::machine_word_boundary_cast<uint>(this_01->field_007C + 1),local_e4);
        local_d7 = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_d6 = CONCAT31(0x23,(undefined1)local_d6);
        uStack_d2 = 0x1f400;
        iStack_ce = (uint)STPiece<1,3>(iStack_ce) << 8;
        st::fn_006B11D0
                  (st::pointer_boundary_cast<uint *>(&this_01->field_0074->flags),st::machine_word_boundary_cast<uint>(this_01->field_007C + 1),local_e4);
        local_d9 = 0;
        local_d8 = 0;
        local_db = 0;
        local_da = 0;
        STPiece<0,1>(local_e4[0]) = 2;
        local_d7 = 1;
        local_d6 = 0x104;
        uStack_c6 = 0x226;
        uStack_d2 = 0x122;
        local_c2 = 0x23f;
        iStack_ce = 0x1a4;
        local_be = 0x226;
        st::fn_006B11D0
                  (st::pointer_boundary_cast<uint *>(&this_01->field_0074->flags),st::machine_word_boundary_cast<uint>(this_01->field_007C + 1),local_e4);
        uStack_d2 = 200;
        uStack_ca = 200;
        local_d9 = 0;
        local_d8 = 0;
        local_db = 0;
        local_da = 0;
        STPiece<0,1>(local_e4[0]) = 3;
        local_d7 = 1;
        local_d6 = 0x96;
        iStack_ce = 500;
        st::fn_006B11D0
                  (st::pointer_boundary_cast<uint *>(&this_01->field_0074->flags),st::machine_word_boundary_cast<uint>(this_01->field_007C + 1),local_e4);
        break;
      case '\t':
        ppuVar1 = &this_01->field_005D;
        if (this_01->field_005D != nullptr) {
          this_00 = g_cMf32_00806780;
          if ((this_01->field_0080 != '\x01') &&
             (this_00 = g_cMf32_00806798, this_01->field_0080 != '\x02')) {
            this_00 = this_01->field_0070;
          }
          st::fn_006F20E0(this_00,(uint *)ppuVar1);
        }
        local_c = (SpriteClassTy *)&pAVar15->field_0xd;
        this_01->field_0080 = 0;
        local_EAX_241 = st::fn_0070A9F0(this_01->field_0070,(char *)local_c,0,0);
        *ppuVar1 = local_EAX_241;
        if (local_EAX_241 == nullptr) {
          puVar11 = st::fn_0070A9F0(g_cMf32_00806798,(char *)local_c,0,0);
          *ppuVar1 = puVar11;
          if (puVar11 == nullptr) {
            iVar18 = 1;
            bVar6 = 0;
            text = st::fn_006F2C00(st::mutable_c_string("TASK_BKG"),1,(uint)DAT_0080874e);
            local_EAX_2012 = st::fn_0070A9F0(g_cMf32_00806780,text,bVar6,iVar18);
            *ppuVar1 = local_EAX_2012;
            this_01->field_0080 = 1;
          }
          else {
            memset((void *)local_78, 0, 0x50); /* compiler bulk-zero initialization */
            local_6d = 1;
            local_6c = 1;
            local_6f = 1;
            STPiece<1,4>(local_78) = *(undefined4 *)((int)&pAVar15->field_0x0 + 1);
            local_73 = 0x7ffffff0;
            local_78[0] = 7;
            local_6b = 1;
            local_32 = 2;
            local_2a = 1;
            local_29 = 1;
            pSVar19 = local_c;
            pbVar20 = (byte *)PTR_s_DEFAULT_WS_ANIMATED_0079c224;
            do {
              bVar6 = *(byte *)&pSVar19->vtable;
              bVar27 = bVar6 < *pbVar20;
              if (bVar6 != *pbVar20) {
LAB_005e14be:
                iVar18 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_005e14c3;
              }
              if (bVar6 == 0) break;
              bVar6 = *(byte *)((int)&pSVar19->vtable + 1);
              bVar27 = bVar6 < pbVar20[1];
              if (bVar6 != pbVar20[1]) goto LAB_005e14be;
              pSVar19 = (SpriteClassTy *)((int)&pSVar19->vtable + 2);
              pbVar20 = pbVar20 + 2;
            } while (bVar6 != 0);
            iVar18 = 0;
LAB_005e14c3:
            pSVar19 = local_c;
            pbVar20 = (byte *)PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            if (iVar18 == 0) {
              uVar26 = 0xffffffff;
              pcVar9 = &CHAR_D_007cdc48;
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf0;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              iVar18 = this_01->field_007C;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0;
              local_42 = 0;
              st::fn_006B11D0
                        (st::pointer_boundary_cast<uint *>(&this_01->field_0074->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_WS_ANI2";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf1;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0;
              local_42 = 0x9c;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_WS_ANI3";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf2;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x40;
              local_42 = 0x9c;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar26 = 0xffffffff;
              pcVar9 = &CHAR_D_007cdc18;
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x208;
              local_42 = 0;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = &CHAR_D_007cdc08;
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf4;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x208;
              local_42 = 0x9c;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = &CHAR_D_007cdbf8;
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf5;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x2df;
              local_42 = 0x9c;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              pSVar19 = local_c;
              pbVar20 = (byte *)PTR_s_DEFAULT_BO_ANIMATED_0079c228;
            }
            do {
              bVar6 = *(byte *)&pSVar19->vtable;
              bVar27 = bVar6 < *pbVar20;
              if (bVar6 != *pbVar20) {
LAB_005e16bc:
                iVar18 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_005e16c1;
              }
              if (bVar6 == 0) break;
              bVar6 = *(byte *)((int)&pSVar19->vtable + 1);
              bVar27 = bVar6 < pbVar20[1];
              if (bVar6 != pbVar20[1]) goto LAB_005e16bc;
              pSVar19 = (SpriteClassTy *)((int)&pSVar19->vtable + 2);
              pbVar20 = pbVar20 + 2;
            } while (bVar6 != 0);
            iVar18 = 0;
LAB_005e16c1:
            pSVar19 = local_c;
            pbVar20 = (byte *)PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            if (iVar18 == 0) {
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_BO_ANI1";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf0;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              iVar18 = this_01->field_007C;
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0xb0;
              local_42 = 0;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_BO_ANI2";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf1;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0;
              local_42 = 0x2d;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_BO_ANI3";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf2;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0xb0;
              local_42 = 0x6c;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_BO_ANI4";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0xdc;
              local_42 = 0x6c;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = &CHAR_D_007cdba8;
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf4;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x1ce;
              local_42 = 0x6c;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = &CHAR_D_007cdb98;
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf5;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x2a9;
              local_42 = 0x6c;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              local_6a = 0xf6;
              pcVar9 = &CHAR_D_007cdb88;
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x78;
              local_42 = 0x154;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_BO_ANI8";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf7;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x78;
              local_42 = 0x1cb;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              pSVar19 = local_c;
              pbVar20 = (byte *)PTR_s_DEFAULT_SI_ANIMATED_0079c22c;
            }
            do {
              bVar6 = *(byte *)&pSVar19->vtable;
              bVar27 = bVar6 < *pbVar20;
              if (bVar6 != *pbVar20) {
LAB_005e1958:
                iVar18 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                goto LAB_005e195d;
              }
              if (bVar6 == 0) break;
              bVar6 = *(byte *)((int)&pSVar19->vtable + 1);
              bVar27 = bVar6 < pbVar20[1];
              if (bVar6 != pbVar20[1]) goto LAB_005e1958;
              pSVar19 = (SpriteClassTy *)((int)&pSVar19->vtable + 2);
              pbVar20 = pbVar20 + 2;
            } while (bVar6 != 0);
            iVar18 = 0;
LAB_005e195d:
            if (iVar18 == 0) {
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_SI_ANI1";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf0;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              iVar18 = this_01->field_007C;
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x8e;
              local_42 = 0x125;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_SI_ANI2";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf1;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x103;
              local_42 = 0x10f;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_SI_ANI3";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf2;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x103;
              local_42 = 0x15f;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              local_6a = 0xf3;
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_SI_ANI4";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0xd7;
              local_42 = 0x1a4;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
              uVar26 = 0xffffffff;
              pcVar9 = "DEF_SI_ANI5";
              do {
                pcVar21 = pcVar9;
                if (uVar26 == 0) break;
                uVar26 = uVar26 - 1;
                pcVar21 = pcVar9 + 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar21;
              } while (cVar2 != '\0');
              uVar26 = ~uVar26;
              local_6a = 0xf4;
              iVar18 = this_01->field_007C;
              pcVar9 = pcVar21 + -uVar26;
              pcVar21 = local_66;
              for (uVar14 = uVar26 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                *(undefined4 *)pcVar21 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar21 = pcVar21 + 4;
              }
              pMVar3 = this_01->field_0074;
              for (uVar26 = uVar26 & 3; uVar26 != 0; uVar26 = uVar26 - 1) {
                *pcVar21 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar21 = pcVar21 + 1;
              }
              local_46 = 0x27c;
              local_42 = 0x126;
              st::fn_006B11D0(st::pointer_boundary_cast<uint *>(&pMVar3->flags),iVar18 + 1,(undefined4 *)local_78);
            }
            this_01->field_0080 = 2;
          }
        }
        pMVar3 = this_01->field_0074;
        if ((uint)this_01->field_007C < pMVar3->count) {
          element_0074 = DArrayAt<MTaskTy_field_0074Element>(pMVar3, this_01->field_007C);
        }
        else {
          element_0074 = nullptr;
        }
        local_14 = element_0074;
        st::fn_006BC360(this_01->field_005D,local_1268,nullptr);
        st::fn_00718780
                  ((int)local_1268,0,0x100,0x1a,0x10,(undefined4 *)&this_01->field_0x91);
        st::fn_00718780
                  ((int)local_1268,0,0x100,0x2e,0x10,(undefined4 *)&this_01->field_0x191);
        if (this_01->field_007C != 0) {
          st::fn_00401D43(g_dDXContext_0080759C,1,0);
          st::fn_00403670(this_01);
          st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                             this_01->field_005D,10,2);
        }
        if (this_01->field_0089 != nullptr) {
          st::fn_00710560((uint *)this_01->field_0089);
        }
        pcVar7 = (ccFntTy *)
                 st::fn_004042A5((int)this_01->field_005D,nullptr,DAT_00807dd9);
        this_01->field_0089 = pcVar7;
        pcVar7->field_0058 = 1;
        pcVar7->field_005C = 0;
        if (this_01->field_008D != nullptr) {
          st::fn_00710560((uint *)this_01->field_008D);
        }
        pcVar7 = (ccFntTy *)
                 st::fn_00402306((int)this_01->field_005D,nullptr,DAT_00807dd9);
        this_01->field_008D = pcVar7;
        st::fn_0040329C(&g_sound,0);
        if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
          puVar8 = (uint *)st::fn_00719D00
                                     (this_01->field_0070,st::pointer_boundary_cast<char *>(&element_0074[1].field_000F),0,nullptr);
          this_01->field_0085 = st::machine_word_boundary_cast<undefined4>(puVar8);
          if (puVar8 == nullptr) {
            puVar8 = (uint *)st::fn_00719D00
                                       (g_cMf32_00806798,st::pointer_boundary_cast<char *>(&element_0074[1].field_000F),0,nullptr);
            this_01->field_0085 = st::machine_word_boundary_cast<undefined4>(puVar8);
            if (puVar8 == nullptr) {
              st::fn_00402FD1(&g_sound,0x14,'\x02',0,nullptr);
              break;
            }
          }
          st::fn_00402FD1(&g_sound,0,'\x02',0,puVar8);
        }
      }
      iVar18 = st::machine_word_boundary_cast<int>(this_01->field_007C + 1);
      this_01->field_007C = iVar18;
      dVar13 = this_01->field_0074->count;
    } while (iVar18 < (int)dVar13);
  }
  if (this_01->field_007C == this_01->field_0074->count) {
    if ((this_01->field_006D == CASE_5) &&
       (pDVar12 = this_01->field_064B, pDVar12 != nullptr)) {
      uVar26 = 0;
      if (pDVar12->count != 0) {
        if (pDVar12->count == 0) {
          pSVar19 = nullptr;
          goto LAB_005e34e0;
        }
        do {
          pSVar19 = DArrayAt<SpriteClassTy>(pDVar12, uVar26);
LAB_005e34e0:
          if ((pSVar19->field_0004 != -1) &&
             ((*(char *)&pSVar19[1].vtable == '\x01' || (*(char *)&pSVar19[1].vtable == '\x03')))) {
            st::fn_00715AB0(pSVar19);
            if (*(int *)((int)&pSVar19[1].field_0008 + 1) != 0) {
              st::fn_006AB060((void *)((int)&pSVar19[1].field_0008 + 1));
            }
          }
          pDVar12 = this_01->field_064B;
          uVar26 = uVar26 + 1;
        } while (uVar26 < pDVar12->count);
      }
    }
    this_01->field_006D = CASE_1;
  }
  g_currentExceptionFrame = local_278.previous;
  return;
}

// 005E3E80 MTaskTy::CreateTextSSpr
#line 4 "decomp/ST.exe/functions/005E3E80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::CreateTextSSpr */

undefined4 * __thiscall
st::fn_005E3E80
          (MTaskTy *this,uint *param_1,int param_2,int param_3,uint param_4,uint param_5,
          ccFntTy *param_6,int param_7,int param_8,int param_9)

{
  int iVar2;
  uint uVar3;
  int local_EAX_61;
  int iVar3;
  int iVar4;
  AnonShape_006B4B20_3D4F4412 *pAVar5;
  undefined4 *puVar6;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  AnonShape_005E3E80_D5AAB6C7 *local_8;

  local_18 = param_2;
  local_c = param_5;
  local_14 = param_3;
  local_10 = param_4;
  local_8 = nullptr;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_EAX_61 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (local_EAX_61 == 0) {
    if (((param_1 == nullptr) || ((char)*param_1 == '\0')) || (param_6 == nullptr)) {
      st::fn_006A5E40
                (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x46c);
    }
    if (param_8 < 0) {
      param_8 = param_7 + 1;
    }
    if (param_9 < 0) {
      if (param_7 < 1) {
        param_9 = 0;
      }
      else {
        param_9 = param_7 + -1;
      }
    }
    iVar3 = st::fn_00711370(param_6,param_1);
    iVar4 = st::fn_007113E0(param_6,param_1);
    if ((param_2 < 1) || (param_3 < 1)) {
      local_18 = (((int)param_4 < 1) - 1 & param_4) + iVar3;
      local_14 = (((int)param_5 < 1) - 1 & param_5) + iVar4;
    }
    iVar2 = local_14;
    if ((int)param_5 < 0) {
      local_c = (local_14 - iVar4) / 2;
    }
    if ((int)local_c < 0) {
      local_c = 0;
    }
    uVar3 = local_c;
    local_8 = st::pointer_boundary_cast<AnonShape_005E3E80_D5AAB6C7 *>(st::fn_006AAC10(0x3d));
    local_8->field_0023 = 3;
    local_8->field_0029 = (undefined2)local_18;
    local_8->field_002B = (short)iVar2;
    pAVar5 = (AnonShape_006B4B20_3D4F4412 *)
             st::fn_00710BA0(param_6,0,0,0,0,(int)(short)local_8->field_0029,
                                 (int)local_8->field_002B,1);
    st::fn_00710A90(param_6,(int)pAVar5,0,0,0,0,0);
    st::fn_00711B70(param_6,(char *)param_1,local_10,uVar3,param_7,-1,-1);
    st::fn_006B4B20((int *)&local_8->field_0x2d,pAVar5,0,0);
    st::fn_00711B70(param_6,(char *)param_1,local_10,uVar3,param_8,-1,-1);
    st::fn_006B4B20((int *)&local_8[1].field_0x1,pAVar5,0,0);
    st::fn_00711B70(param_6,(char *)param_1,local_10,uVar3,param_9,-1,-1);
    st::fn_006B4B20((int *)&local_8[1].field_0x5,pAVar5,0,0);
    st::fn_00710F00(param_6);
    g_currentExceptionFrame = local_5c.previous;
    return (undefined4 *)local_8;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x485,0,local_EAX_61,
                             st::mutable_c_string("%s"),"MTaskTy::CreateTextSSpr");
  if (iVar4 == 0) {
    if (param_6 != nullptr) {
      st::fn_00710F00(param_6);
    }
    st::fn_00725E30((int *)&local_8);
    st::fn_006A5E40(local_EAX_61,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x488);
    return nullptr;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005E4180 MTaskTy::CreateBut
#line 4 "decomp/ST.exe/functions/005E4180/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::CreateBut */

undefined4 __thiscall
st::fn_005E4180(MTaskTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
                  undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
                  undefined4 param_8)

{
  int iVar4;
  int iVar3;
  undefined4 uVar2;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_1cc [4];
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  InternalExceptionFrame local_50;
  MTaskTy *local_c;
  undefined4 local_8;

  puVar6 = local_1cc;
  local_c = this;
  for (iVar5 = 0x5f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar4 == 0) {
    local_1cc[0] = param_2;
    local_1cc[1] = param_1;
    local_1bc = param_5;
    local_1cc[2] = param_3;
    local_1cc[3] = param_4;
    local_1ac = local_c->field_0008;
    local_1a4 = param_7;
    local_1b8 = param_6;
    local_1a8 = 2;
    local_168 = 2;
    local_164 = param_8;
    local_16c = local_1ac;
    (*local_c->field_000C->vtable->CreateObject)
              ((SystemClassTy *)local_c->field_000C,2,&local_8,nullptr,st::machine_word_boundary_cast<undefined4>(local_1cc),0);
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x4a0,0,iVar4,st::mutable_c_string("%s"),
                             "MTaskTy::CreateBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x4a0);
  return 0;
}

// 005E4300 MTaskTy::PaintBut
#line 4 "decomp/ST.exe/functions/005E4300/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::PaintBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_005E4300(MTaskTy *this,int *param_1,UINT param_2,int param_3,int param_4,short param_5)

{
  int *piVar1;
  MTaskTy *pMVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar5;
  char *resourceString;
  int iVar9;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_5c;
  MTaskTy *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  char local_8;
  undefined3 uStack_7;

  if (param_1 != nullptr) {
    local_c = *(undefined4 **)(*param_1 + 4);
    local_14 = *(undefined4 **)(*param_1 + 8);
    puVar4 = local_14;
    if ((int)local_c < (int)local_14) {
      puVar4 = local_c;
    }
    local_10 = (int)puVar4 / 2;
    if (param_3 <= local_10) {
      local_10 = param_3;
    }
    if (STField<char>(param_1,10) == '\x01') {
      cVar6 = ((param_5 != 3) - 1U & 0xfe) + 0x2c;
    }
    else {
      cVar6 = ((param_5 != 3) - 1U & 0xfe) + 0x18;
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    auto _local_8 = CONCAT31(uStack_7,cVar6);
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_18 = this;
    iVar5 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
    if (iVar5 == 0) {
      piVar1 = (int *)*param_1;
      uVar8 = piVar1[5];
      if (uVar8 == 0) {
        uVar8 = ((uint)STField<ushort>(piVar1,0xe) * piVar1[1] + 0x1f >> 3 & 0x1ffffffc) *
                piVar1[2];
      }
      puVar5 = (undefined4 *)st::fn_006B4FA0(piVar1);
      iVar10 = local_10;
      puVar4 = local_14;
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar5 = 0xff;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      st::fn_006C7610((RecoveredSourceFamily_dibcopy *)*param_1,0,0,0,(uint)local_c,(uint)local_14,
                   local_10,0);
      if (param_4 != 0) {
        st::fn_006C7570((RecoveredSourceFamily_dibcopy *)*param_1,0,2,2,local_c + -1,(int)(puVar4 + -1)
                     ,iVar10,(byte)_local_8);
      }
      st::fn_006C7570((RecoveredSourceFamily_dibcopy *)*param_1,0,0,0,local_c,(int)puVar4,iVar10,
                   (byte)_local_8);
      pMVar3 = local_18;
      if (param_2 != 0) {
        st::fn_00710A90(local_18->field_0089,*param_1,0,0,0,0,0);
        if (param_5 == 3) {
          uVar8 = (-(uint)((char)param_1[2] != '\x01') & 0xfffffffe) + 3;
        }
        else {
          uVar8 = (-(uint)((char)param_1[2] != '\x01') & 0xfffffffe) + 2;
        }
        iVar11 = -1;
        iVar10 = -1;
        resourceString = st::fn_006B0140(param_2,g_hINSTANCE_00807618);
        st::fn_007119C0(pMVar3->field_0089,resourceString,iVar10,iVar11,uVar8);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x4b9,0,iVar5,st::mutable_c_string("%s")
                               ,"MTaskTy::PaintBut");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x4b9);
  }
  return;
}

// 005E4570 MTaskTy::GetMessage
#line 4 "decomp/ST.exe/functions/005E4570/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\task_obj.cpp
   MTaskTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005E4570; family_names=MTaskTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:15,18:3,1c:5} */

int __thiscall st::fn_005E4570(MTaskTy *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  RecoveredSourceFamily_dibcopy *pRVar3;
  ccFntTy *pcVar4;
  AnonPointee_MTaskTy_06BF *pAVar5;
  MTaskTy *this_00;
  byte bVar7;
  DWORD DVar8;
  int local_EAX_49;
  DArrayTy *pDVar9;
  undefined4 *puVar10;
  BITMAPINFO *pBVar11;
  char *pcVar12;
  undefined4 *puVar12;
  int iVar9;
  int iVar22;
  uint uVar13;
  AnonShape_005E10A0_819783CC *pAVar14;
  UINT UVar15;
  uint uVar16;
  uint *puVar17;
  char *pcVar18;
  SpriteClassTy *this_01;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  int iVar23;
  uint uVar24;
  InternalExceptionFrame local_68;
  undefined4 *local_24;
  int local_20;
  AnonShape_005E4570_1DAE8C90 *local_1c;
  MTaskTy *local_18;
  char *local_14;
  uint local_10;
  int *local_c;
  AnonShape_005E4570_F1672769 *local_8;

  local_18 = this;
  DVar8 = st::fn_006E51B0(this->field_0010);
  this->field_0065 = DVar8;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_EAX_49 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_49 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar22 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x5b5,0,local_EAX_49,
                                st::mutable_c_string("%s"),"MTaskTy::GetMessage");
    if (iVar22 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_49,0,st::mutable_c_string("E:\\__titans\\Start\\task_obj.cpp"),0x5b5);
    return 0xffff;
  }
  SVar2 = message->id;
  if (SVar2 < MESS_MREPORTTY_6214) {
    if (SVar2 == MESS_MTASKTY_6213) {
      st::fn_00401A5A(local_18,(int *)&local_18->field_0x65f,0x24bc,4,1,(message->arg0).words.low);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_02A5[1]);
      goto cf_common_exit_005E525B;
    }
    if (SVar2 < MESS_PLAYPANELTY_6201) {
      if (SVar2 == MESS_SHARED_6200) {
        st::fn_00404BF1(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {
          st::fn_00404DB8(this_00);
          this_00->field_0045 = 0x200;
          this_00->field_0049 = 0;
          this_00->field_004D = 0x6102;
        }
        else {
          this_00->field_004D = 0x7102;
          this_00->field_0049 = 1;
          st::fn_006E6020(this_00,(undefined4 *)&this_00->field_0x3d);
        }
        goto cf_common_exit_005E525B;
      }
      switch(SVar2) {
      case MESS_ID_NONE:
        st::fn_0040100F(local_18);
        break;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      case MESS_ID_CREATE:
        st::fn_00402F5E(local_18,*(char *)((message->arg0).u32 + 0x14),
                  *(undefined1 *)((message->arg0).u32 + 0x18));
        break;
      case MESS_SHARED_0003:
        st::fn_00402329(local_18);
        break;
      case MESS_SHARED_0005:
        st::fn_00403670(local_18);
        break;
      case MESS_TRACKBARCLASSTY_0062:
        if (DAT_0080fb6e == 0) {
          if (local_18->field_006D == CASE_1) {
            st::fn_00404DB8(local_18);
            uVar16 = 0xffffffff;
            pcVar18 = &CHAR_00h_0080ed16;
            do {
              pcVar19 = pcVar18;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar19 = pcVar18 + 1;
              cVar1 = *pcVar18;
              pcVar18 = pcVar19;
            } while (cVar1 != '\0');
            uVar16 = ~uVar16;
            pcVar18 = pcVar19 + -uVar16;
            pcVar19 = (char *)&DAT_0080ee1a;
            memmove(pcVar19, pcVar18, uVar16); /* compiler REP MOVS byte copy */
            uVar13 = 0;
            this_00->field_004D = 0x60ff;
            this_00->field_0049 = 1;
          }
        }
        else {
          local_18->field_004D = 0x7102;
          local_18->field_0049 = 1;
          st::fn_006E6020(local_18,(undefined4 *)&local_18->field_0x3d);
        }
        break;
      case MESS_SHARED_0064:
        iVar20 = 1;
        if (local_18->field_006D != CASE_1) {
          local_18->field_006D = CASE_5;
          st::fn_00405C18(local_18);
          iVar23 = 0x1f;
          do {
            st::fn_0040329C(&g_sound,iVar20);
            iVar20 = iVar20 + 1;
            iVar23 = iVar23 + -1;
          } while (iVar23 != 0);
          break;
        }
        if (DAT_0080fb6e != 0) {
          local_18->field_004D = 0x7102;
          local_18->field_0049 = 1;
          st::fn_006E6020(local_18,(undefined4 *)&local_18->field_0x3d);
          break;
        }
        st::fn_00404DB8(local_18);
        this_00->field_0045 = 0x200;
        this_00->field_0049 = 0;
        this_00->field_004D = (-(uint)(this_00->field_006F != '\x02') & 0x1f) + 0x6103;
        bVar7 = this_00->field_006F;
        if (bVar7 == 2) {
          this_00->field_0051 = 1;
          break;
        }
        goto LAB_005e470e;
      }
    }
    else {
      switch(SVar2) {
      case MESS_PLAYPANELTY_6201:
        st::fn_00404BF1(local_18,4,'\x01',-1);
        if (DAT_0080fb6e != 0) {
          this_00->field_004D = 0x7102;
          this_00->field_0049 = 1;
          st::fn_006E6020(this_00,(undefined4 *)&this_00->field_0x3d);
          break;
        }
        st::fn_00404DB8(this_00);
        this_00->field_0045 = 0x200;
        this_00->field_0049 = 0;
        this_00->field_004D = (-(uint)(this_00->field_006F != '\x02') & 0x1f) + 0x6103;
        bVar7 = this_00->field_006F;
        if (bVar7 == 2) {
          this_00->field_0051 = 1;
          break;
        }
LAB_005e470e:
        this_00->field_0051 = (uint)bVar7;
        break;
      case MESS_PLAYPANELTY_6202:
        st::fn_00404BF1(local_18,4,'\x01',-1);
        if (DAT_0080fb6e == 0) {
          this_00->field_0049 = 1;
          if (this_00->field_006E == '\x01') {
            this_00->field_004D = 0x6108;
            st::fn_00404DB8(this_00);
          }
          else {
            uVar16 = 0xffffffff;
            pcVar18 = &CHAR_00h_0080ed16;
            do {
              pcVar19 = pcVar18;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar19 = pcVar18 + 1;
              cVar1 = *pcVar18;
              pcVar18 = pcVar19;
            } while (cVar1 != '\0');
            uVar16 = ~uVar16;
            pcVar18 = pcVar19 + -uVar16;
            pcVar19 = (char *)&DAT_0080ee1a;
            memmove(pcVar19, pcVar18, uVar16); /* compiler REP MOVS byte copy */
            this_00->field_004D = 0x60ff;
            st::fn_00404DB8(this_00);
          }
        }
        else {
          this_00->field_004D = 0x7102;
          this_00->field_0049 = 1;
          st::fn_006E6020(this_00,(undefined4 *)&this_00->field_0x3d);
        }
        break;
      case MESS_SETTMAPTY_6203:
        st::fn_00404BF1(local_18,4,'\x01',-1);
        this_00->field_007C = 0;
        this_00->field_0061 = this_00->field_0069;
        st::fn_00401D43(g_dDXContext_0080759C,1,0);
        pDVar9 = this_00->field_064F;
        if (pDVar9 != nullptr) {
          uVar16 = 0;
          if (pDVar9->count != 0) {
            if (pDVar9->count == 0) {
              pAVar14 = nullptr;
              goto LAB_005e48f3;
            }
            do {
              pAVar14 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar9, uVar16);
LAB_005e48f3:
              st::fn_0040555B(this_00,pAVar14);
              pDVar9 = this_00->field_064F;
              uVar16 = uVar16 + 1;
            } while (uVar16 < pDVar9->count);
          }
        }
        pDVar9 = this_00->field_0647;
        if (pDVar9 != nullptr) {
          uVar16 = 0;
          if (pDVar9->count != 0) {
            if (pDVar9->count == 0) {
              pAVar14 = nullptr;
              goto LAB_005e492f;
            }
            do {
              pAVar14 = DArrayAt<AnonShape_005E10A0_819783CC>(pDVar9, uVar16);
LAB_005e492f:
              st::fn_0040555B(this_00,pAVar14);
              pDVar9 = this_00->field_0647;
              uVar16 = uVar16 + 1;
            } while (uVar16 < pDVar9->count);
          }
        }
        pDVar9 = this_00->field_064B;
        if (pDVar9 != nullptr) {
          uVar16 = 0;
          if (pDVar9->count != 0) {
            if (pDVar9->count == 0) {
              this_01 = nullptr;
              goto LAB_005e496b;
            }
            do {
              this_01 = DArrayAt<SpriteClassTy>(pDVar9, uVar16);
LAB_005e496b:
              st::fn_00715AB0(this_01);
              if (*(int *)((int)&this_01[1].field_0008 + 1) != 0) {
                st::fn_006AB060((void *)((int)&this_01[1].field_0008 + 1));
              }
              pDVar9 = this_00->field_064B;
              uVar16 = uVar16 + 1;
            } while (uVar16 < pDVar9->count);
          }
        }
        if (this_00->field_02CD != 0) {
          st::fn_006E56B0(this_00->field_000C,this_00->field_02CD);
          this_00->field_02CD = 0;
        }
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_0484);
        if (this_00->field_02D5 != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_0319,this_00->field_02D5);
        }
        if (this_00->field_0366 != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_03AA,this_00->field_0366);
        }
        if (this_00->field_03F7 != 0xffffffff) {
          st::fn_006B3AF0((int *)this_00->field_043B,this_00->field_03F7);
        }
        puVar17 = st::pointer_boundary_cast<uint *>(&this_00->field_02BD);
        iVar20 = 4;
        do {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar17);
          puVar17 = puVar17 + 1;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        if (this_00->field_02B9 != 0) {
          st::fn_006E56B0(this_00->field_000C,this_00->field_02B9);
          this_00->field_02B9 = 0;
        }
        puVar17 = this_00->field_0291;
        iVar20 = 5;
        do {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,puVar17[5]);
          if (*puVar17 != 0) {
            st::fn_006E56B0(this_00->field_000C,*puVar17);
            *puVar17 = 0;
          }
          puVar17 = puVar17 + 1;
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
        st::fn_00403670(this_00);
        this_00->field_006D = CASE_3;
        st::fn_006AFE40((int *)&this_00->field_0074,st::pointer_boundary_cast<uint *>(&this_00->field_0078->flags));
        st::fn_00405C18(this_00);
        st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                           this_00->field_005D,10,2);
        break;
      case 0x6204:
        if (local_18->field_006D != CASE_1) {
          local_18->field_006D = CASE_5;
          st::fn_00405C18(local_18);
          iVar20 = 1;
          iVar23 = 0x1f;
          do {
            st::fn_0040329C(&g_sound,iVar20);
            iVar20 = iVar20 + 1;
            iVar23 = iVar23 + -1;
          } while (iVar23 != 0);
        }
        break;
      case MESS_SHARED_6200|MESS_SHARED_0005:
        pcVar18 = st::pointer_boundary_cast<char *>((message->arg0).ptr);
        st::fn_00404BF1(local_18,4,'\x01',-1);
        DAT_00807340 = *pcVar18 + -1;
        DAT_00807341 = DAT_00807340 == '\x03';
        break;
      case MESS_MTASKTY_6212:
        st::fn_00401A5A(local_18,st::pointer_boundary_cast<int *>(&local_18->field_0653),0x26ac,4,1,(message->arg0).words.low);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_02A5[0]);
      }
    }
    goto cf_common_exit_005E525B;
  }
  if (SVar2 < MESS_WAITTY_6335) {
    if (SVar2 == MESS_SHARED_6334) {
      st::fn_004031D4
                ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_0362,
                 (int)message,local_18->field_06CA == '\x01');
    }
    else if (SVar2 < 0x6218) {
      if (SVar2 == MESS_MTASKTY_6217) {
        local_c = st::pointer_boundary_cast<int *>((message->arg0).ptr);
        local_24 = (undefined4 *)0x1f52;
        local_1c = (AnonShape_005E4570_1DAE8C90 *)(&local_18->field_0x683 + *local_c * 0xc);
        pRVar3 = *(RecoveredSourceFamily_dibcopy **)local_1c;
        local_8 = (AnonShape_005E4570_F1672769 *)pRVar3->field_0008;
        local_20 = STReplaceLowByte((uint32_t)(local_20), (uint8_t)((-(local_1c->field_000A != '\x01') & 0xecU) + 0x2c));
        if (local_c[1] == 3) {
          local_14 = (char *)STReplaceLowByte((uint32_t)(local_14), (uint8_t)((-(local_1c->field_0x8 != '\x01') & 0xfeU) + 3));
        }
        else {
          local_14 = (char *)(STReplaceLowByte((uint32_t)(local_14), (uint8_t)((local_1c->field_0x8 != '\x01') + -1)) &
                             0xffffff02);
        }
        local_10 = pRVar3[1].field_0004;
        if (local_10 == 0) {
          local_10 = ((uint)pRVar3->field_000E * pRVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
                     (int)local_8;
        }
        puVar10 = (undefined4 *)st::fn_006B4FA0((int *)pRVar3);
        for (uVar16 = local_10 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar10 = 0xffffffff;
          puVar10 = puVar10 + 1;
        }
        for (uVar16 = local_10 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined1 *)puVar10 = 0xff;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        st::fn_006C7610(pRVar3,0,0,0,0x16,(uint)local_8,2,0);
        if ((local_c[1] == 1) || ((local_c[1] == 3 && (local_c[2] != 0)))) {
          pBVar11 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0081,
                                 (uint)(local_1c->field_000B == '\x01'));
          st::fn_00403229(pRVar3,2,(int)&local_8[-1].field_0x1d4 / 2,'\x06',(byte *)pBVar11);
        }
        st::fn_006C7570(pRVar3,0,0,0,(undefined4 *)0x16,(int)local_8,2,(byte)local_20);
        iVar20 = *local_c;
        if (iVar20 == 1) {
          puVar10 = (undefined4 *)0x1f47;
        }
        else if (iVar20 == 2) {
          puVar10 = (undefined4 *)0x1f48;
        }
        else {
          puVar10 = local_24;
          if (iVar20 == 3) {
            puVar10 = (undefined4 *)0x1f49;
          }
        }
        st::fn_00710A90(this_00->field_008D,(int)pRVar3,0,0x1b,0,st::machine_word_boundary_cast<int>(pRVar3->field_0004 + -0x1b),
                         (int)local_8);
        uVar16 = (uint)local_14 & 0xff;
        iVar23 = -1;
        iVar20 = 0;
        pcVar12 = st::fn_006B0140((UINT)puVar10,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_008D,pcVar12,iVar20,iVar23,uVar16);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_02A5[*local_c + 5]);
      }
      else if (SVar2 == MESS_MREPORTTY_6214) {
        if (local_18->field_006E == '\0') {
          UVar15 = 0x2343;
        }
        else {
          UVar15 = (-(uint)(DAT_0080c632 != '\0') & 0x2b) + 0x232c;
        }
        st::fn_00401A5A(local_18,(int *)&local_18->field_0x66b,UVar15,4,1,(message->arg0).words.low);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_02A5[2]);
      }
      else if (SVar2 == MESS_MREPORTTY_6215) {
        st::fn_00401A5A(local_18,(int *)&local_18->field_0x677,0x2358,4,1,(message->arg0).words.low);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_02A5[3]);
      }
      else if (SVar2 == MESS_MTASKTY_6216) {
        st::fn_00401A5A(local_18,(int *)&local_18->field_0x683,0x235e,4,1,(message->arg0).words.low);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_02A5[4]);
      }
    }
    else if (SVar2 == MESS_SHARED_6332) {
      if (((-1 < (int)local_18->field_0484) && (message != nullptr)) &&
         (local_8 = st::pointer_boundary_cast<AnonShape_005E4570_F1672769 *>((message->arg2).ptr), local_8 != nullptr)) {
        pcVar4 = local_18->field_008D;
        if (pcVar4->field_00A0 != 0) {
          st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar4);
        }
        local_20 = *(int *)&pcVar4->field_0x8a;
        pAVar5 = this_00->field_06BF;
        if (pAVar5 != nullptr) {
          local_14 = (char *)pAVar5->field_0014;
          local_24 = (undefined4 *)pAVar5->field_0004;
          local_10 = pAVar5->field_0008;
          if (local_14 == nullptr) {
            local_14 = (char *)(((uint)(ushort)pAVar5->field_000E * (int)local_24 + 0x1f >> 3 &
                                0x1ffffffc) * local_10);
          }
          puVar12 = (undefined4 *)st::fn_006B4FA0((int *)pAVar5);
          puVar10 = local_24;
          for (uVar16 = (uint)local_14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 1;
          }
          for (uVar16 = (uint)local_14 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
            *(undefined1 *)puVar12 = 0xff;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          st::fn_006C7610((RecoveredSourceFamily_dibcopy *)pAVar5,0,0,0,(uint)local_24,local_10,2,0);
          st::fn_006C7570((RecoveredSourceFamily_dibcopy *)pAVar5,0,0,0,puVar10,local_10,2,
                       (-(this_00->field_06C9 != '\x01') & 0xecU) + 0x2c);
          uVar13 = (uint)(message->arg0).words.high;
          uVar16 = uVar13;
          if ((int)uVar13 < (int)(uVar13 + local_8->field_01E0)) {
            do {
              if ((int)uVar16 < (int)g_startSystem_0081176C->field_0548[2]) {
                local_14 = *(char **)(g_startSystem_0081176C->field_0548[5] + uVar16 * 4);
              }
              else {
                local_14 = nullptr;
              }
              if (local_14 != nullptr) {
                st::fn_00710A90(this_00->field_008D,(int)pAVar5,0,0xf,
                                 (uVar16 - uVar13) * local_20 + 0xf,local_8->field_002C,local_20);
                st::fn_007119C0(this_00->field_008D,local_14,0,-1,
                               (-(uint)(this_00->field_06C7 != '\x01') & 0xfffffffe) + 2);
              }
              uVar16 = uVar16 + 1;
              uVar13 = (uint)(message->arg0).words.high;
            } while ((int)uVar16 < (int)(uVar13 + local_8->field_01E0));
          }
          st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_0484);
        }
      }
    }
    else if (SVar2 == MESS_WAITTY_6333) {
      st::fn_004031D4
                ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_02D1,
                 (int)message,local_18->field_06CA == '\x01');
    }
    goto cf_common_exit_005E525B;
  }
  switch(SVar2) {
  case MESS_WAITTY_6335:
    local_18->field_0413 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
    uVar16 = local_18->field_03F7;
    if (uVar16 == 0xffffffff) break;
    uVar13 = local_18->field_0413;
    uVar24 = local_18->field_040F;
    uVar21 = local_18->field_03FB;
    puVar17 = (uint *)local_18->field_043B;
    goto LAB_005e5255;
  case MESS_SHARED_6334|MESS_ID_CREATE:
    if (((-1 < (int)local_18->field_0484) && (message != nullptr)) &&
       ((local_8 = st::pointer_boundary_cast<AnonShape_005E4570_F1672769 *>((message->arg2).ptr), local_8 != nullptr &&
        (pRVar3 = (RecoveredSourceFamily_dibcopy *)local_18->field_06CB,
        pRVar3 != nullptr)))) {
      local_24 = (undefined4 *)pRVar3->field_0004;
      pcVar4 = local_18->field_008D;
      local_10 = pRVar3->field_0008;
      if (pcVar4->field_00A0 != 0) {
        st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar4);
      }
      local_14 = (char *)pRVar3[1].field_0004;
      local_20 = *(int *)&pcVar4->field_0x8a;
      if (local_14 == nullptr) {
        local_14 = (char *)(((uint)pRVar3->field_000E * pRVar3->field_0004 + 0x1f >> 3 & 0x1ffffffc)
                           * pRVar3->field_0008);
      }
      puVar12 = (undefined4 *)st::fn_006B4FA0((int *)pRVar3);
      puVar10 = local_24;
      for (uVar16 = (uint)local_14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar12 = 0xffffffff;
        puVar12 = puVar12 + 1;
      }
      for (uVar16 = (uint)local_14 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)puVar12 = 0xff;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      st::fn_006C7610(pRVar3,0,0,0,(uint)local_24,local_10,2,0);
      st::fn_006C7570(pRVar3,0,0,0,puVar10,local_10,2,(-(this_00->field_06D5 != '\x01') & 0xecU) + 0x2c
                  );
      uVar13 = (uint)(message->arg0).words.high;
      uVar16 = uVar13;
      if ((int)uVar13 < (int)(uVar13 + local_8->field_01E0)) {
        do {
          if ((int)uVar16 < (int)this_00->field_0643->elementSize) {
            local_14 = *(char **)(this_00->field_0643->growCapacity + uVar16 * 4);
          }
          else {
            local_14 = nullptr;
          }
          if (local_14 != nullptr) {
            st::fn_00710A90(this_00->field_0089,(int)pRVar3,0,0xf,
                             (uVar16 - uVar13) * local_20 + 0xf,local_8->field_002C,local_20);
            st::fn_007119C0(this_00->field_0089,local_14,0,-1,
                           (-(uint)(this_00->field_06D3 != '\x01') & 0xfffffffe) + 2);
          }
          uVar16 = uVar16 + 1;
          uVar13 = (uint)(message->arg0).words.high;
        } while ((int)uVar16 < (int)(uVar13 + local_8->field_01E0));
      }
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_063F);
    }
    break;
  case MESS_SHARED_6334|MESS_SHARED_0003:
    st::fn_004031D4
              ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_048C,
               (int)message,local_18->field_06D6 == '\x01');
    break;
  case 0x6338:
    st::fn_004031D4
              ((MMMObjTy *)local_18,(RecoveredRecord_MMMObjTy_005B6560 *)&local_18->field_051D,
               (int)message,local_18->field_06D6 == '\x01');
    break;
  case MESS_MTASKTY_6339:
    local_18->field_05CE = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
    uVar16 = local_18->field_05B2;
    if (uVar16 == 0xffffffff) break;
    uVar13 = local_18->field_05CE;
    uVar24 = local_18->field_05CA;
    uVar21 = local_18->field_05B6;
    puVar17 = (uint *)local_18->field_05F6;
LAB_005e5255:
    st::fn_006B3730(puVar17,uVar16,uVar21,uVar24,uVar13);
  }
cf_common_exit_005E525B:
  g_currentExceptionFrame = local_68.previous;
  iVar9 = st::fn_006E5FD0(this_00,message);
  return iVar9;
}

