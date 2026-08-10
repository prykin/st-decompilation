#include "st/generated.hpp"
// Generated translation unit: source/original/Start/load_obj.cpp

// 005AB1D0 ChooseMapTy::OutListProc
#line 4 "decomp/ST.exe/functions/005AB1D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::OutListProc */

void __thiscall
st::fn_005AB1D0
          (ChooseMapTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
          DWORD param_6,DWORD param_7,int param_8)

{
  byte bVar2;
  int errorCode;
  int iVar3;
  byte bVar4;
  InternalExceptionFrame local_50;
  AnonShape_005AB1D0_5E4FF544 *local_c;
  uint local_8;

  local_c = (AnonShape_005AB1D0_5E4FF544 *)param_8;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x1b,0,errorCode,
                               st::mutable_c_string("%s"),"ChooseMapTy::OutListProc");
    if (iVar3 == 0) {
      st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x1b);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((local_c != nullptr) && (local_c->field_1C7B != nullptr))
  {
    bVar2 = 0;
    local_8 = local_8 & 0xffffff00;
    do {
      bVar4 = bVar2;
      if (local_c->entries[local_8 & 0xff] == param_2) break;
      bVar2 = bVar2 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
      bVar4 = 0xff;
    } while (bVar2 < 0x16);
    if (bVar4 != 0xff) {
      st::fn_006B4680
                (param_1,param_4,param_5,local_c->field_1C7B,nullptr,0,param_5 + -0x3f,param_6,
                 param_7,0);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005AB300 ChooseMapTy::InitChooseMap
#line 4 "decomp/ST.exe/functions/005AB300/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::InitChooseMap

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_InitChooseMap_param_2Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_C=12;CASE_14=20 */

void __thiscall
st::fn_005AB300
          (ChooseMapTy *this,ChooseMapTy_field_1A5FState param_1,
          ChooseMapTy_InitChooseMap_param_2Enum param_2)

{
  ChooseMapTy_field_1A5FState CVar1;
  RecoveredSourceFamily_dibcopy *pRVar2;
  MMsgTy *this_00;
  StartSystemTy *pSVar3;
  CursorClassTy *this_01;
  ChooseMapTy *this_02;
  int iVar5;
  HANDLE pvVar5;
  ushort *local_EAX_619;
  ushort *puVar7;
  ushort *local_EAX_770;
  DArrayTy *pDVar6;
  int uVar14;
  AnonPointee_ChooseMapTy_1C7B *pAVar7;
  undefined4 *puVar8;
  HoloTy *pHVar9;
  uint uVar13;
  uint local_EAX_2254;
  uint local_EAX_2912;
  int local_EAX_3379;
  AnonPointee_ChooseMapTy_1C8B *pAVar10;
  int iVar20;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  uint *puVar14;
  char *pcVar15;
  char *pcVar18;
  int iVar19;
  byte bVar20;
  char cVar21;
  ushort *puVar22;
  int iVar23;
  undefined4 local_86c [256];
  char local_46c [32];
  undefined1 local_44c;
  undefined4 local_26c [7];
  InternalExceptionFrame local_250;
  undefined4 local_20c;
  undefined4 local_1ff;
  undefined4 local_1fb;
  undefined4 local_1f7;
  undefined4 local_1e5;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1be;
  undefined4 local_1b1;
  undefined4 local_1ad;
  undefined4 local_1a9;
  undefined4 local_149;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_122;
  undefined4 local_115;
  undefined4 local_111;
  undefined4 local_10d;
  undefined4 local_109;
  ChooseMapTy *local_10;
  uint local_c;
  uint local_8;
  char *pcVar16;
  char *pcVar17;
  char *temp_3f2c6d1691;
  char *temp_3ff82dc6a0;

  local_250.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_250;
  local_10 = this;
  iVar5 = st::fn_0072D7F0(local_250.jumpBuffer,0);
  this_02 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_250.previous;
    iVar20 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x15a,0,iVar5,
                                st::mutable_c_string("%s"),"ChooseMapTy::InitChooseMap");
    if (iVar20 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x15a);
    return;
  }
  local_10->field_1A5F = param_1;
  if (2 < g_startSystem_0081176C->field_02EB) {
    g_startSystem_0081176C->field_02EB = 2;
  }
  _DAT_0080f32e = 0;
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  uVar11 = 0xffffffff;
  pcVar13 = st::pointer_boundary_cast<char *>(&this_02->field_1CA3);
  pcVar18 = &CHAR_00h_00807680;
  do {
    pcVar15 = pcVar18;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar15 = pcVar18 + 1;
    cVar21 = *pcVar18;
    pcVar18 = pcVar15;
  } while (cVar21 != '\0');
  uVar11 = ~uVar11;
  pcVar18 = pcVar15 + -uVar11;
  pcVar15 = pcVar13;
  memmove(pcVar15, pcVar18, uVar11); /* compiler REP MOVS byte copy */
  uVar12 = 0;
  switch(this_02->field_1A5F) {
  case CASE_1:
  case CASE_2:
  case CASE_4:
  case CASE_5:
    local_c = 0xffffffff;
    temp_3f2c6d1691 = st_global_0079C050;
    do {
      pcVar18 = temp_3f2c6d1691;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar18 = temp_3f2c6d1691 + 1;
      cVar21 = *temp_3f2c6d1691;
      temp_3f2c6d1691 = pcVar18;
    } while (cVar21 != '\0');
    local_c = ~local_c;
    pcVar18 = pcVar18 + -local_c;
    iVar23 = -1;
    pcVar15 = pcVar13;
    do {
      pcVar13 = pcVar15;
      if (iVar23 == 0) break;
      iVar23 = iVar23 + -1;
      pcVar13 = pcVar15 + 1;
      cVar21 = *pcVar15;
      pcVar15 = pcVar13;
    } while (cVar21 != '\0');
    goto LAB_005ab4dc;
  case CASE_3:
    uVar11 = 0xffffffff;
    temp_3ff82dc6a0 = st_global_0079C054;
    do {
      pcVar18 = temp_3ff82dc6a0;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar18 = temp_3ff82dc6a0 + 1;
      cVar21 = *temp_3ff82dc6a0;
      temp_3ff82dc6a0 = pcVar18;
    } while (cVar21 != '\0');
    uVar11 = ~uVar11;
    iVar23 = -1;
    do {
      pcVar15 = pcVar13;
      if (iVar23 == 0) break;
      iVar23 = iVar23 + -1;
      pcVar15 = pcVar13 + 1;
      cVar21 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar21 != '\0');
    pcVar18 = pcVar18 + -uVar11;
    pcVar13 = pcVar15 + -1;
    for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar13 = pcVar13 + 4;
    }
    goto LAB_005ab4e5;
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
switchD_005ab3e3_caseD_9:
    uVar11 = 0xffffffff;
    pcVar16 = st_global_0079C04C;
    do {
      pcVar13 = pcVar16;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar13 = pcVar16 + 1;
      cVar21 = *pcVar16;
      pcVar16 = pcVar13;
    } while (cVar21 != '\0');
    uVar11 = ~uVar11;
    iVar23 = -1;
    pcVar18 = st::pointer_boundary_cast<char *>(&this_02->field_1CA3);
    do {
      pcVar15 = pcVar18;
      if (iVar23 == 0) break;
      iVar23 = iVar23 + -1;
      pcVar15 = pcVar18 + 1;
      cVar21 = *pcVar18;
      pcVar18 = pcVar15;
    } while (cVar21 != '\0');
    pcVar13 = pcVar13 + -uVar11;
    pcVar18 = pcVar15 + -1;
    memmove(pcVar18, pcVar13, uVar11); /* compiler REP MOVS byte copy */
    uVar12 = 0;
    uVar11 = 0xffffffff;
    pcVar13 = &CHAR_00h_00807ddd;
    do {
      pcVar18 = pcVar13;
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      pcVar18 = pcVar13 + 1;
      cVar21 = *pcVar13;
      pcVar13 = pcVar18;
    } while (cVar21 != '\0');
    uVar11 = ~uVar11;
    iVar23 = -1;
    pcVar13 = st::pointer_boundary_cast<char *>(&this_02->field_1CA3);
    do {
      pcVar15 = pcVar13;
      if (iVar23 == 0) break;
      iVar23 = iVar23 + -1;
      pcVar15 = pcVar13 + 1;
      cVar21 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar21 != '\0');
    pcVar13 = pcVar18 + -uVar11;
    pcVar18 = pcVar15 + -1;
    memmove(pcVar18, pcVar13, uVar11); /* compiler REP MOVS byte copy */
    pcVar13 = (char *)((byte *)pcVar13 + uVar11);
    uVar12 = 0;
    uVar11 = 0;
    st::fn_006B8280(st::pointer_boundary_cast<char *>(&this_02->field_1CA3),st::pointer_boundary_cast<char *>(&this_02->field_1CA3));
    break;
  case CASE_13:
    if (DAT_00803400 == 0xc) goto switchD_005ab3e3_caseD_9;
    local_c = 0xffffffff;
    pcVar17 = st_global_0079C050;
    do {
      pcVar18 = pcVar17;
      if (local_c == 0) break;
      local_c = local_c - 1;
      pcVar18 = pcVar17 + 1;
      cVar21 = *pcVar17;
      pcVar17 = pcVar18;
    } while (cVar21 != '\0');
    local_c = ~local_c;
    pcVar18 = pcVar18 + -local_c;
    iVar23 = -1;
    do {
      if (iVar23 == 0) break;
      iVar23 = iVar23 + -1;
      pcVar15 = pcVar13 + 1;
      cVar21 = *pcVar13;
      pcVar13 = pcVar15;
    } while (cVar21 != '\0');
LAB_005ab4dc:
    pcVar13 = pcVar13 + -1;
    for (uVar12 = local_c >> 2; uVar11 = local_c, uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar18;
      pcVar18 = pcVar18 + 4;
      pcVar13 = pcVar13 + 4;
    }
LAB_005ab4e5:
    for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
      *pcVar13 = *pcVar18;
      pcVar18 = pcVar18 + 1;
      pcVar13 = pcVar13 + 1;
    }
  }
  uVar11 = 0xffffffff;
  pcVar13 = &this_02->field_1DA7;
  pcVar18 = st::pointer_boundary_cast<char *>(&this_02->field_1CA3);
  do {
    pcVar15 = pcVar18;
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    pcVar15 = pcVar18 + 1;
    cVar21 = *pcVar18;
    pcVar18 = pcVar15;
  } while (cVar21 != '\0');
  uVar11 = ~uVar11;
  pcVar18 = pcVar15 + -uVar11;
  pcVar15 = pcVar13;
  memmove(pcVar15, pcVar18, uVar11); /* compiler REP MOVS byte copy */
  uVar12 = 0;
  st::fn_006B78C0(pcVar13,pcVar13);
  pvVar5 = st::external_00000074(st::pointer_boundary_cast<LPCSTR>(&this_02->field_1DA7),0,1);
  this_02->field_1C8F = pvVar5;
  if (pvVar5 == (HANDLE)0xffffffff) {
    this_02->field_1C8F = (HANDLE)0x0;
  }
  st::fn_006B8280(st::pointer_boundary_cast<char *>(&this_02->field_1CA3),st::pointer_boundary_cast<char *>(&this_02->field_1CA3));
  st::fn_006B8280(&this_02->field_1DA7,&this_02->field_1DA7);
  local_EAX_619 = st::fn_0070A9F0(g_cMf32_00806780,st::mutable_c_string("LOADSINGLE"),0,1);
  g_startSystem_0081176C->field_002C = local_EAX_619;
  this_02->field_005D = g_startSystem_0081176C->field_002C;
  st::fn_006BC360(g_startSystem_0081176C->field_002C,local_86c,nullptr);
  this_02->field_1A5B->field_0140 = 0x1f;
  st::fn_00718780
            ((int)local_86c,0,0x100,0x8b,0x15,(undefined4 *)&this_02->field_1A5B->field_0x144);
  puVar7 = st::fn_00709AF0
                     (PTR_00806784,CASE_B,st::mutable_c_string("FILE_LIST"),0xffffffff,0,1,0,nullptr);
  this_02->field_1C7F = puVar7;
  local_EAX_770 = st::fn_0070A5A0(g_cMf32_00806780,1,st::mutable_c_string("MM_MAPB"),0,1);
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_02F0,0,0,'\x01',
         (byte *)local_EAX_770);
  *(undefined4 *)&this_02->field_0x20b3 = 0x1010101;
  this_02->field_20B7 = 1;
  switch(this_02->field_1A5F) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
  case CASE_9:
  case CASE_A:
  case CASE_B:
switchD_005ab64d_caseD_1:
    this_02->field_20B7 = 0;
    goto switchD_005ab66b_caseD_6;
  default:
    switch(param_2) {
    case CASE_4:
    case CASE_5:
    case CASE_7:
    case CASE_C:
    case CASE_14:
      goto switchD_005ab64d_caseD_1;
    default:
switchD_005ab66b_caseD_6:
      switch(param_2) {
      case CASE_1:
      case CASE_2:
      case CASE_4:
      case CASE_5:
      case CASE_14:
        this_02->field_0x20b4 = 0;
      case CASE_6:
      case CASE_7:
        this_02->field_0x20b5 = 0;
      default:
        pRVar2 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
        local_c = param_2 - 1;
        st::fn_006B4170(pRVar2,0,0,0,pRVar2->field_0004,pRVar2->field_0008,0xff);
        if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
          st::fn_006B5570((DArrayTy *)g_startSystem_0081176C->field_0548);
        }
        pDVar6 = st::fn_006B54F0(nullptr,10,10);
        g_startSystem_0081176C->field_0548 = st::pointer_boundary_cast<uint *>(&pDVar6->flags);
        uVar11 = param_2 - 1;
        if (g_startSystem_0081176C->field_0389 != 0) {
          this_02->field_002D = 0x28;
          *(undefined2 *)&this_02->field_0x31 = 1;
          *(short *)&this_02->field_0x33 = (short)g_startSystem_0081176C->field_0548[2];
          st::fn_006E6080(this_02,2,g_startSystem_0081176C->field_0389,
                       (undefined4 *)&this_02->field_0x1d);
          this_02->field_002D = 0x22;
          *(undefined2 *)&this_02->field_0x31 = 0;
          *(undefined2 *)&this_02->field_0x33 = 0;
          st::fn_006E6080(this_02,2,g_startSystem_0081176C->field_0389,
                       (undefined4 *)&this_02->field_0x1d);
          uVar11 = local_c;
        }
        switch(uVar11) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0xb:
        case 0x10:
        case 0x13:
          break;
        default:
          st::fn_00401D43(g_dDXContext_0080759C,1,0);
        }
        this_00 = this_02->field_1A5B->field_02E6;
        if (this_00 != nullptr) {
          st::fn_00405191(this_00);
          this_02->field_1A5B->field_02E6->field_1CAB = this_02->field_0008;
        }
        st::fn_00402725(this_02,'\x01');
        st::fn_007158A0
                  ((SpriteClassTy *)&this_02->field_1A70,(int *)g_ddxContext_008075A8,0x31,'\a',
                   nullptr,0,0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(this_02->field_1A70 + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
        this_02->field_1A8C = 0x2f8;
        this_02->field_1A90 = 0x3c;
        this_02->field_1A78 = 0;
        st::fn_007158A0
                  ((SpriteClassTy *)&this_02->field_1B01,(int *)g_ddxContext_008075A8,0x31,'\a',
                   nullptr,0,0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(this_02->field_1B01 + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
        this_02->field_1B1D = 0x2f8;
        this_02->field_1B21 = 0x1b8;
        this_02->field_1B09 = 0;
        st::fn_007158A0
                  ((SpriteClassTy *)&this_02->field_1B92,(int *)g_ddxContext_008075A8,0x31,'\a',
                   nullptr,0,0);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(this_02->field_1B92 + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
        iVar23 = 1;
        this_02->field_1BAE = 0x2fe;
        this_02->field_1BB2 = 0x5c;
        puVar22 = this_02->field_005D + 0x14;
        this_02->field_1B9A = 0;
        uVar14 = st::fn_006B4FE0((int)this_02->field_005D);
        pAVar7 = (AnonPointee_ChooseMapTy_1C7B *)
                 st::fn_006B50C0(0x1e4,399,(uint)this_02->field_005D[7],uVar14,(undefined4 *)puVar22,
                              iVar23);
        this_02->field_1C7B = pAVar7;
        uVar11 = pAVar7[1].field_0008;
        if (uVar11 == 0) {
          uVar11 = ((uint)*(ushort *)&pAVar7[1].field_0x2 * pAVar7->field_0004 + 0x1f >> 3 &
                   0x1ffffffc) * pAVar7->field_0008;
        }
        puVar8 = (undefined4 *)st::fn_006B4FA0((int *)pAVar7);
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        puVar14 = &this_02->field_1C23;
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        uVar11 = 0x3f;
        do {
          st::fn_006B2330(g_ddxContext_008075A8,puVar14,0x31,0x40213a,this_02->field_1C7B->field_0004,
                       0x13,(ushort *)this_02);
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,*puVar14,0xffffffff,0x114,uVar11);
          uVar11 = uVar11 + 0x13;
          puVar14 = puVar14 + 1;
        } while ((int)uVar11 < 0x1e1);
        st::fn_0040175D(this_02,'\0');
        st::fn_00403B0C(this_02,this_02->field_1C93);
        st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0x204,0x19d,
                     (ushort *)&this_02->field_1A5B->field_0140);
        st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x38);
        pHVar9 = (HoloTy *)st::fn_0072E530(0x33);
        if (pHVar9 == nullptr) {
          pHVar9 = nullptr;
        }
        else {
          pHVar9->field_0002 = 1;
          pHVar9->field_0000 = 0;
          *(undefined4 *)&pHVar9->field_0x3 = 0xffffffff;
          pHVar9->field_0001 = CASE_2;
          pHVar9->field_0007 = nullptr;
          pHVar9->field_000B = nullptr;
          pHVar9->field_000F = 0;
          *(undefined4 *)&pHVar9->field_0x1b = 1;
          pHVar9->field_0013 = 1;
          pHVar9->field_0017 = -1;
          pHVar9->field_0027 = 0;
          pHVar9->field_0023 = 0;
          pHVar9->field_002F = 1;
          pHVar9->field_002B = 1;
        }
        this_02->field_20B8 = pHVar9;
        if (pHVar9 != nullptr) {
          uVar11 = 0;
          cVar21 = '\x01';
          bVar20 = 0x10;
          iVar19 = 1;
          iVar23 = st::fn_006BF9F0
                             ((int *)g_ddxContext_008075A8,0x112,0x38,0x204,0x19d);
          uVar13 = st::fn_0040459D(this_02->field_20B8,CASE_2,0x112,0x38,iVar23,iVar19,bVar20,cVar21,
                                uVar11);
          if (uVar13 != 0) {
            pHVar9 = this_02->field_20B8;
            pHVar9->field_0002 = 1;
            pHVar9->field_0017 = pHVar9->field_0013;
            uVar11 = *(uint *)&this_02->field_20B8->field_0x3;
            if (-1 < (int)uVar11) {
              st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar11);
            }
            if (this_02->field_1A74 != 0xffffffff) {
              st::fn_006B3AF0((int *)this_02->field_1AB8,this_02->field_1A74);
            }
            if (this_02->field_1B05 != 0xffffffff) {
              st::fn_006B3AF0((int *)this_02->field_1B49,this_02->field_1B05);
            }
            if (this_02->field_1B96 != 0xffffffff) {
              st::fn_006B3AF0((int *)this_02->field_1BDA,this_02->field_1B96);
            }
            puVar14 = &this_02->field_1C23;
            iVar23 = 0x16;
            do {
              st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar14);
              puVar14 = puVar14 + 1;
              iVar23 = iVar23 + -1;
            } while (iVar23 != 0);
          }
        }
        if (local_8 != 0xffffffff) {
          st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
          local_8 = 0xffffffff;
        }
        if (this_02->field_0x20b4 == '\0') {
          if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
            st::fn_006B34D0
                      ((uint *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391
                       ,0xfffffffe,g_startSystem_0081176C->field_03A9,
                       g_startSystem_0081176C->field_03AD);
          }
          if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
            st::fn_006B34D0
                      ((uint *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422
                       ,0xfffffffe,g_startSystem_0081176C->field_043A,
                       g_startSystem_0081176C->field_043E);
          }
          if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
            st::fn_006B34D0
                      ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3
                       ,0xfffffffe,g_startSystem_0081176C->field_04CB,
                       g_startSystem_0081176C->field_04CF);
          }
          st::fn_006B3430
                    ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
        }
        else {
          st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0xf9,0x121,
                       (ushort *)&this_02->field_1A5B->field_0140);
          st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
          pHVar9 = (HoloTy *)st::fn_0072E530(0x33);
          if (pHVar9 == nullptr) {
            pHVar9 = nullptr;
          }
          else {
            pHVar9->field_0002 = 1;
            pHVar9->field_0000 = 0;
            *(undefined4 *)&pHVar9->field_0x3 = 0xffffffff;
            pHVar9->field_0001 = CASE_2;
            pHVar9->field_0007 = nullptr;
            pHVar9->field_000B = nullptr;
            pHVar9->field_000F = 0;
            *(undefined4 *)&pHVar9->field_0x1b = 1;
            pHVar9->field_0013 = 1;
            pHVar9->field_0017 = -1;
            pHVar9->field_0027 = 0;
            pHVar9->field_0023 = 0;
            pHVar9->field_002F = 1;
            pHVar9->field_002B = 1;
          }
          this_02->field_20BC = pHVar9;
          if (pHVar9 != nullptr) {
            uVar11 = 0;
            cVar21 = '\x01';
            bVar20 = 0x10;
            iVar19 = 1;
            iVar23 = st::fn_006BF9F0
                               ((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
            local_EAX_2254 =
                 st::fn_0040459D(this_02->field_20BC,CASE_4,10,0xb4,iVar23,iVar19,bVar20,cVar21,uVar11);
            if (local_EAX_2254 != 0) {
              pHVar9 = this_02->field_20BC;
              pHVar9->field_0002 = 1;
              pHVar9->field_0017 = pHVar9->field_0013;
              uVar11 = *(uint *)&this_02->field_20BC->field_0x3;
              if (-1 < (int)uVar11) {
                st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar11);
              }
              if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
                st::fn_006B3AF0((int *)g_startSystem_0081176C->field_03D5,
                             g_startSystem_0081176C->field_0391);
              }
              if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
                st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0466,
                             g_startSystem_0081176C->field_0422);
              }
              if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
                st::fn_006B3AF0((int *)g_startSystem_0081176C->field_04F7,
                             g_startSystem_0081176C->field_04B3);
              }
              st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
            }
          }
          if (local_8 != 0xffffffff) {
            st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
            local_8 = 0xffffffff;
          }
        }
        if (this_02->field_20B7 == '\0') {
          CVar1 = this_02->field_1A5F;
          if ((((CVar1 == CASE_C) || (CVar1 == CASE_4)) || (CVar1 == CASE_5)) || (CVar1 == CASE_13))
          {
            if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
              st::fn_006B34D0
                        ((uint *)g_startSystem_0081176C->field_05A4,
                         g_startSystem_0081176C->field_0560,0xfffffffe,
                         g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C);
            }
            if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
              st::fn_006B34D0
                        ((uint *)g_startSystem_0081176C->field_0635,
                         g_startSystem_0081176C->field_05F1,0xfffffffe,
                         g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D);
            }
            st::fn_006B3430
                      ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
            st::fn_006B3430
                      ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
          }
          else {
            if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
              st::fn_006B3AF0((int *)g_startSystem_0081176C->field_05A4,
                           g_startSystem_0081176C->field_0560);
            }
            if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
              st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0635,
                           g_startSystem_0081176C->field_05F1);
            }
            st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
            st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
          }
        }
        else {
          st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x403b61,400,0x62,
                       (ushort *)&this_02->field_1A5B->field_0140);
          st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,200,0x1f1);
          if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
            st::fn_006B34D0
                      ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560
                       ,0xfffffffe,g_startSystem_0081176C->field_0578,
                       g_startSystem_0081176C->field_057C);
          }
          if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
            st::fn_006B34D0
                      ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1
                       ,0xfffffffe,g_startSystem_0081176C->field_0609,
                       g_startSystem_0081176C->field_060D);
          }
          pHVar9 = (HoloTy *)st::fn_0072E530(0x33);
          if (pHVar9 == nullptr) {
            pHVar9 = nullptr;
          }
          else {
            pHVar9->field_0002 = 1;
            pHVar9->field_0000 = 0;
            *(undefined4 *)&pHVar9->field_0x3 = 0xffffffff;
            pHVar9->field_0001 = CASE_2;
            pHVar9->field_0007 = nullptr;
            pHVar9->field_000B = nullptr;
            pHVar9->field_000F = 0;
            *(undefined4 *)&pHVar9->field_0x1b = 1;
            pHVar9->field_0013 = 1;
            pHVar9->field_0017 = -1;
            pHVar9->field_0027 = 0;
            pHVar9->field_0023 = 0;
            pHVar9->field_002F = 1;
            pHVar9->field_002B = 1;
          }
          this_02->field_20C0 = pHVar9;
          if (pHVar9 != nullptr) {
            uVar11 = 0;
            cVar21 = '\x01';
            bVar20 = 0x10;
            iVar19 = 1;
            iVar23 = st::fn_006BF9F0
                               ((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
            local_EAX_2912 =
                 st::fn_0040459D(this_02->field_20C0,CASE_1,200,0x1f1,iVar23,iVar19,bVar20,cVar21,
                              uVar11);
            if (local_EAX_2912 != 0) {
              pHVar9 = this_02->field_20C0;
              pHVar9->field_0002 = 1;
              pHVar9->field_0017 = pHVar9->field_0013;
              uVar11 = *(uint *)&this_02->field_20C0->field_0x3;
              if (-1 < (int)uVar11) {
                st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar11);
              }
              if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
                st::fn_006B3AF0((int *)g_startSystem_0081176C->field_05A4,
                             g_startSystem_0081176C->field_0560);
              }
              if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
                st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0635,
                             g_startSystem_0081176C->field_05F1);
              }
              st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
              st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
            }
          }
          if (local_8 != 0xffffffff) {
            st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
            local_8 = 0xffffffff;
          }
        }
        iVar23 = 1;
        puVar22 = this_02->field_005D + 0x14;
        local_EAX_3379 = st::fn_006B4FE0((int)this_02->field_005D);
        pAVar10 = (AnonPointee_ChooseMapTy_1C8B *)
                  st::fn_006B50C0(0x172,0x18,(uint)this_02->field_005D[7],local_EAX_3379,
                               (undefined4 *)puVar22,iVar23);
        this_02->field_1C8B = pAVar10;
        uVar11 = pAVar10[1].field_0008;
        if (uVar11 == 0) {
          uVar11 = ((uint)*(ushort *)&pAVar10[1].field_0x2 * pAVar10->field_0004 + 0x1f >> 3 &
                   0x1ffffffc) * pAVar10->field_0008;
        }
        puVar8 = (undefined4 *)st::fn_006B4FA0((int *)pAVar10);
        for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar8 = 0xff;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_02->field_1C8B,0,0,1,
                     ((AnonShape_006E6FB0_BC494FEA *)this_02->field_1C8B)->field_0004 + -1,1,
                     (byte)this_02->field_1A5B->field_0140,0xd);
        pAVar10 = this_02->field_1C8B;
        puVar14 = &this_02->field_1C87;
        st::fn_006B2330(g_ddxContext_008075A8,puVar14,0x31,0x404acf,pAVar10->field_0004,
                     pAVar10->field_0008,(ushort *)pAVar10);
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,*puVar14,0xffffffff,0x112,0x1d3);
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar14);
        switch(local_c) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 0xb:
        case 0x10:
        case 0x13:
          break;
        default:
          st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                             this_02->field_005D,10,2);
        }
        pHVar9 = this_02->field_20B8;
        if (((pHVar9 != nullptr) && (pHVar9->field_0000 != '\0')) &&
           (-1 < (int)*(uint *)&pHVar9->field_0x3)) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar9->field_0x3);
        }
        pHVar9 = this_02->field_20BC;
        if (((pHVar9 != nullptr) && (pHVar9->field_0000 != '\0')) &&
           (-1 < (int)*(uint *)&pHVar9->field_0x3)) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar9->field_0x3);
        }
        pHVar9 = this_02->field_20C0;
        if (((pHVar9 != nullptr) && (pHVar9->field_0000 != '\0')) &&
           (-1 < (int)*(uint *)&pHVar9->field_0x3)) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar9->field_0x3);
        }
        this_01 = g_cursorClass_00802A30;
        if (g_cursorClass_00802A30 != nullptr) {
          iVar23 = g_cursorClass_00802A30->field_00C9;
          iVar19 = g_cursorClass_00802A30->field_00C5;
          g_cursorClass_00802A30->field_0493 = CASE_1;
          this_01->field_0494 = 0xffff;
          st::fn_0040507E(this_01,CASE_0,iVar19,iVar23);
          st::fn_0040241E(this_01,this_01->field_00C5,this_01->field_00C9);
          this_01->field_00D2 = 0;
          this_01->field_04DF = -1;
        }
        puVar8 = &local_20c;
        memset(puVar8, 0, 0x1fb); /* compiler bulk-zero initialization */
        puVar8 = (undefined4 *)((byte *)puVar8 + 0x1f8);
        iVar23 = 0;
        CVar1 = this_02->field_1A5F;
        local_13c = this_02->field_0008;
        this_02->field_0065 = 3;
        local_149 = 0x2340;
        local_138 = 2;
        local_134 = 0x6943;
        local_122 = 0x24bc;
        local_111 = 2;
        switch(CVar1) {
        case CASE_4:
        case CASE_5:
        case CASE_C:
          local_10d = 0x694d;
          break;
        default:
          local_10d = 0x6943;
          local_109 = 1;
          break;
        case CASE_13:
          local_10d = 0x6951;
        }
      }
      switch(CVar1) {
      case CASE_1:
      case CASE_2:
        local_20c = 0x2348;
        local_1fb = 2;
        local_1f7 = 0x694b;
        local_1e5 = 0x2343;
        local_1d4 = 2;
        local_1d0 = 0x694a;
        local_1be = 0x2349;
        local_1ad = 2;
        local_1a9 = 0x694c;
        local_1ff = local_13c;
        local_1d8 = local_13c;
        local_1b1 = local_13c;
        break;
      case CASE_3:
        this_02->field_0x20b5 = 0;
        local_1e5 = 0x2343;
        local_1d4 = 2;
        local_1d0 = 0x6956;
        local_1d8 = local_13c;
        break;
      case CASE_4:
      case CASE_5:
        local_1e5 = 0x2357;
        local_1d4 = 2;
        local_1d0 = 0x694e;
        local_1be = 0x2349;
        local_1ad = 2;
        local_1a9 = 0x694c;
        local_1d8 = local_13c;
        local_1b1 = local_13c;
        break;
      case CASE_9:
      case CASE_A:
      case CASE_B:
        local_1e5 = 0x233e;
        local_1d4 = 2;
        local_1d0 = 0x6949;
        local_1d8 = local_13c;
        break;
      case CASE_13:
        if (DAT_00803400 != 0xc) {
          local_1e5 = 0x2357;
          local_1d4 = 2;
          local_1d0 = 0x694e;
          local_1d8 = local_13c;
          if ((3 < DAT_00803400) && (DAT_00803400 < 6)) {
            local_1be = 0x2349;
            local_1ad = 2;
            local_1a9 = 0x694c;
            local_1b1 = local_13c;
          }
          break;
        }
      case CASE_C:
        local_1e5 = 0x233e;
        local_1d4 = 2;
        local_1d0 = 0x694e;
        local_1d8 = local_13c;
      }
      pSVar3 = this_02->field_1A5B;
      local_115 = local_13c;
      if (pSVar3->field_02E6 != nullptr) {
        puVar8 = local_26c;
        for (iVar23 = 6; iVar23 != 0; iVar23 = iVar23 + -1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
        *(undefined2 *)puVar8 = 0xffff;
        st::fn_00401717(pSVar3->field_02E6,0,(int)&local_20c,0,0);
        st::fn_00404B51(this_02->field_1A5B->field_02E6,(int)local_26c);
      }
      if ((DAT_008067a0 != '\0') && (g_int_00811764 != nullptr)) {
        st::fn_006B6160(local_46c,(int)(g_int_00811764 + 6));
        local_44c = 0;
        st::external_0000010A((CFsgsConnection *)&DAT_00802a90,4,local_46c);
      }
      st::fn_0040329C(&g_sound,0);
      if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
        st::fn_00402FD1(&g_sound,0x14,'\x02',0,nullptr);
      }
      st::fn_00404BF1(this_02,0xb,'\0',-1);
      g_currentExceptionFrame = local_250.previous;
      return;
    }
  }
}

// 005ACB30 ChooseMapTy::DoneChooseMap
#line 4 "decomp/ST.exe/functions/005ACB30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::DoneChooseMap */

void __thiscall st::fn_005ACB30(ChooseMapTy *this)

{
  ChooseMapTy_field_1A5FState CVar1;
  MMsgTy *this_00;
  ChooseMapTy *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  InternalExceptionFrame local_4c;
  ChooseMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar3 = local_8;
  if (iVar4 == 0) {
    st::fn_0040458E((MMObjTy *)local_8);
    if (((pCVar3->field_004D != 0x6121) && (g_int_00811764 != nullptr)) && (DAT_0080877e != '\0')
       ) {
      st::fn_00715360(g_int_00811764,0,'\x10',nullptr,0,0,0xffffffff);
      st::fn_00404B83();
    }
    if (pCVar3->field_1C8F != (HANDLE)0x0) {
      st::external_00000060(pCVar3->field_1C8F);
      pCVar3->field_1C8F = (HANDLE)0x0;
    }
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    iVar6 = pCVar3->field_004D;
    if (((iVar6 != 0x6120) && (iVar6 != 0x6121)) && (iVar6 != 0x6105)) {
      st::fn_00401D43(g_dDXContext_0080759C,10,2);
    }
    if (g_startSystem_0081176C->field_002C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    if (pCVar3->field_20B8 != nullptr) {
      st::fn_0040128A(pCVar3->field_20B8);
      st::fn_0072E2B0(pCVar3->field_20B8);
      pCVar3->field_20B8 = nullptr;
    }
    st::fn_00715AB0((SpriteClassTy *)&pCVar3->field_1A70);
    st::fn_00715AB0((SpriteClassTy *)&pCVar3->field_1B01);
    st::fn_00715AB0((SpriteClassTy *)&pCVar3->field_1B92);
    puVar7 = &pCVar3->field_1C23;
    iVar6 = 0x16;
    do {
      if (*puVar7 != 0xffffffff) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,*puVar7);
        *puVar7 = 0xffffffff;
      }
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (pCVar3->field_1C87 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,pCVar3->field_1C87);
    }
    pCVar3->field_1C87 = 0xffffffff;
    if (pCVar3->field_20BC != nullptr) {
      st::fn_0040128A(pCVar3->field_20BC);
      st::fn_0072E2B0(pCVar3->field_20BC);
      pCVar3->field_20BC = nullptr;
    }
    if (pCVar3->field_0x20b4 != '\0') {
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391);
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422);
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3);
      }
      if (-1 < (int)g_startSystem_0081176C->field_0540) {
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      }
    }
    if (pCVar3->field_20C0 != nullptr) {
      st::fn_0040128A(pCVar3->field_20C0);
      st::fn_0072E2B0(pCVar3->field_20C0);
      pCVar3->field_20C0 = nullptr;
    }
    if ((pCVar3->field_20B7 != '\0') &&
       (((CVar1 = pCVar3->field_1A5F, CVar1 == CASE_C || (CVar1 == CASE_4)) ||
        ((CVar1 == CASE_5 || (CVar1 == CASE_13)))))) {
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1);
      }
      if (-1 < (int)g_startSystem_0081176C->field_0558) {
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
      }
      if (-1 < (int)g_startSystem_0081176C->field_0554) {
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
      }
    }
    if (pCVar3->field_1C7B != nullptr) {
      st::fn_006AB060(&pCVar3->field_1C7B);
    }
    pCVar3->field_1C7F = nullptr;
    if (pCVar3->field_1C8B != nullptr) {
      st::fn_006AB060(&pCVar3->field_1C8B);
    }
    if ((pCVar3->field_0x20b6 != '\0') &&
       (this_00 = pCVar3->field_1A5B->field_02E6, this_00 != nullptr)) {
      st::fn_0040462E(this_00);
      pCVar3->field_1A5B->field_02E6->field_1CAB = 0;
    }
    if (pCVar3->field_1C97 != nullptr) {
      st::fn_006B5570(pCVar3->field_1C97);
      pCVar3->field_1C97 = nullptr;
    }
    if (pCVar3->field_1C9B != nullptr) {
      st::fn_006AE110(pCVar3->field_1C9B);
      pCVar3->field_1C9B = nullptr;
    }
    if (pCVar3->field_1C9F != nullptr) {
      st::fn_006B5570(pCVar3->field_1C9F);
      pCVar3->field_1C9F = nullptr;
    }
    if (pCVar3->field_004D != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&pCVar3->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x191,0,iVar4,st::mutable_c_string("%s"),
                             "ChooseMapTy::DoneChooseMap");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x191);
  return;
}

// 005AD050 ChooseMapTy::PaintChooseMap
#line 4 "decomp/ST.exe/functions/005AD050/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::PaintChooseMap

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall st::fn_005AD050(ChooseMapTy *this,char param_1)

{
  ChooseMapTy_field_1A5FState CVar1;
  ChooseMapTy *pCVar3;
  int errorCode;
  UINT resourceId;
  char *resourceString;
  int iVar4;
  MMMObjTy *this_00;
  undefined4 *this_01;
  StartServTy *this_02;
  uint uVar5;
  uint uVar6;
  ccFntTy *pcVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  ChooseMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x1bb,0,errorCode,
                               st::mutable_c_string("%s"),"ChooseMapTy::PaintChooseMap");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x1bb);
    return;
  }
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  st::fn_00403738(0,0,'\x01',(BITMAPINFO *)g_startSystem_0081176C->field_002C);
  pCVar3 = local_8;
  if ((local_8->field_20B8 == nullptr) && (param_1 == '\0')) {
    st::fn_004042D2
              (this_00,g_dDXContext_0080759C,nullptr,nullptr,0x112,0x38,0x204,0x19d,
               &local_8->field_1A5B->field_0140);
  }
  if (((pCVar3->field_20BC == nullptr) && (param_1 == '\0')) ||
     ((param_1 != '\0' && (pCVar3->field_0x20b4 == '\0')))) {
    this_01 = &pCVar3->field_1A5B->field_0140;
    st::fn_004042D2
              ((MMMObjTy *)this_01,g_dDXContext_0080759C,nullptr,nullptr,10,0xb4,
               0xf9,0x121,this_01);
  }
  CVar1 = pCVar3->field_1A5F;
  if (((((CVar1 == CASE_C) || (CVar1 == CASE_4)) || (CVar1 == CASE_5)) || (CVar1 == CASE_13)) &&
     (((pCVar3->field_20C0 == nullptr && (param_1 == '\0')) ||
      ((param_1 != '\0' && (pCVar3->field_20B7 == '\0')))))) {
    st::fn_00403B61
              ((ChatGlassTy *)g_dDXContext_0080759C,
               (AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,0,0,200,0x1f1,400,0x62,
               &pCVar3->field_1A5B->field_0140);
  }
  switch(pCVar3->field_1A5F) {
  case CASE_1:
  case CASE_2:
  case CASE_4:
  case CASE_5:
    pcVar7 = g_startSystem_0081176C->field_0030;
    resourceId = 0x26ae;
    break;
  case CASE_3:
    pcVar7 = g_startSystem_0081176C->field_0030;
    resourceId = 0x26af;
    break;
  default:
    goto switchD_005ad1b8_caseD_6;
  case CASE_9:
  case CASE_A:
  case CASE_B:
  case CASE_C:
    pcVar7 = g_startSystem_0081176C->field_0030;
    resourceId = 0x26ad;
    break;
  case CASE_13:
    pcVar7 = g_startSystem_0081176C->field_0030;
    resourceId = (DAT_00803400 != '\f') + 0x26ad;
  }
  uVar8 = 0;
  uVar6 = 0xffffffff;
  uVar5 = 0xfffffffe;
  resourceString = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
  st::fn_00404C2D(this_02,0,0xe9,0x14,0x14c,0x18,resourceString,uVar5,uVar6,pcVar7,uVar8);
switchD_005ad1b8_caseD_6:
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 005AD390 ChooseMapTy::NoneChooseMap
#line 4 "decomp/ST.exe/functions/005AD390/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::NoneChooseMap

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneChooseMap(ChooseMapTy * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=005AD62C RET | 005AD9DB RET | 005ADC09 RET | 005ADC4F RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005AD390(ChooseMapTy *this)

{
  char cVar1;
  byte bVar2;
  ChooseMapTy_field_1A5FState CVar3;
  uint uVar4;
  ChooseMapTy *this_00;
  DWORD DVar6;
  int iVar7;
  int iVar9;
  int iVar8;
  uint *puVar10;
  STMessage *pSVar11;
  InternalExceptionFrame local_b0;
  STMessage local_6c;
  uint local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_45;
  uint local_41;
  undefined1 local_3d;
  undefined1 local_3b;
  undefined4 local_2a;
  undefined4 local_26;
  ChooseMapTy *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  AnonShape_005AD390_9AB360A8 *local_c;
  int local_8;

  local_8 = 1;
  local_20 = this;
  DVar6 = st::external_000000DA();
  this->field_0061 = DVar6;
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar7 = st::fn_0072D7F0(local_b0.jumpBuffer,0);
  this_00 = local_20;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x24e,0,iVar7,st::mutable_c_string("%s")
                               ,"ChooseMapTy::NoneChooseMap");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar7,0,st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x24e);
    return;
  }
  if (((local_20->field_0065 == '\x01') && (local_20->field_1C8F != (HANDLE)0x0)) &&
     (DVar6 = st::external_0000006D(local_20->field_1C8F,0), DVar6 == 0)) {
    st::external_0000006E(this_00->field_1C8F);
    st::fn_00403B0C(this_00,this_00->field_1C93);
    this_00->field_002D = 5;
    if (this_00->field_1A6C != 0) {
      st::fn_006E6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
    }
    if (g_startSystem_0081176C->field_0389 != 0) {
      st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_00->field_0x1d);
    }
  }
  if ((this_00->field_1A64 != 0) && (0xf9 < this_00->field_0061 - this_00->field_1A68)) {
    st::fn_004042B4(this_00,this_00->field_1C93);
    this_00->field_1A64 = 0;
  }
  cVar1 = this_00->field_0065;
  if (cVar1 == '\x01') {
    if (DAT_0080877e != '\0') {
      switch(this_00->field_1A5F) {
      case CASE_4:
      case CASE_5:
      case CASE_C:
      case CASE_13:
        local_c = nullptr;
        st::fn_006B7510(g_int_00811764,-1,&local_14,-1,0);
        if (DAT_008067a0 != '\0') {
          st::external_00000105((CFsgsConnection *)&DAT_00802a90);
        }
        local_10 = 0;
        if (0 < local_14) {
          do {
            iVar9 = st::fn_00715630
                              (g_int_00811764,-1,&local_18,&local_1c,st::pointer_boundary_cast<undefined4 *>(&local_c),&local_4c,-1,0);
            if (iVar9 == -0x4d) {
              pSVar11 = &local_6c;
              for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
                pSVar11->unknown_00 = 0;
                pSVar11 = (STMessage *)&pSVar11->unknown_04;
              }
              local_6c.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
              if (this_00->field_1A5B->field_02E6 == nullptr) {
                this_00->GetMessage(&local_6c);
              }
              else {
                local_6c.unknown_08 = this_00->field_0008;
                local_6c.unknown_0c = 2;
                st::fn_00403FA8(this_00->field_1A5B->field_02E6,0x2522,'\0',st::pointer_boundary_cast<undefined4 *>(&local_6c.unknown_00),
                                   nullptr,nullptr,0,0);
              }
            }
            else if (iVar9 == 1) {
              if (local_18 == 0x1a) {
                if (local_c->field_0002 == '\x04') {
                  local_46 = 3;
                  local_48 = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                  local_45 = DAT_008087be;
                  local_41 = (this_00->field_1A5F != CASE_C) - 1 & DAT_00808750;
                  local_3b = DAT_00807361;
                  switch(this_00->field_1A5F) {
                  case CASE_4:
switchD_005adb01_caseD_4:
                    local_3d = 2;
                    break;
                  case CASE_5:
switchD_005adb01_caseD_5:
                    local_3d = 3;
                    break;
                  default:
                    local_3d = 0xff;
                    break;
                  case CASE_C:
switchD_005adb01_caseD_c:
                    local_3d = 5;
                    break;
                  case CASE_13:
                    switch(DAT_00803400) {
                    case 4:
                      goto switchD_005adb01_caseD_4;
                    case 5:
                      goto switchD_005adb01_caseD_5;
                    case 0xc:
                      goto switchD_005adb01_caseD_c;
                    case 0x14:
                    case 0x15:
                      local_3d = 4;
                    }
                  }
                  local_26 = local_c->field_0022;
                  local_2a = local_c->field_001E;
                  st::fn_00715360(g_int_00811764,local_1c,'\x1a',(char *)&local_48,0x26,1,0xffffffff);
                }
              }
              else if (local_18 == 0x1b) {
                st::fn_00402BBC(this_00->field_1A5B,(int)local_c);
              }
              if (local_c != nullptr) {
                st::fn_006AB060(&local_c);
              }
            }
            local_10 = local_10 + 1;
          } while (local_10 < local_14);
        }
      }
    }
  }
  else if (cVar1 == '\x03') {
    if ((this_00->field_0x20b5 != '\0') &&
       (g_startSystem_0081176C->field_0300 < g_startSystem_0081176C->field_0304 + -1)) {
      g_startSystem_0081176C->field_0300 = st::machine_word_boundary_cast<int>(g_startSystem_0081176C->field_0300 + 1);
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_8 = 0;
    }
    if (((this_00->field_0x20b3 != '\0') && (this_00->field_20B8 != nullptr)) &&
       (iVar9 = st::fn_004055F1(this_00->field_20B8), iVar9 != 0)) {
      local_8 = 0;
    }
    if (((this_00->field_0x20b4 != '\0') && (this_00->field_20BC != nullptr)) &&
       (iVar9 = st::fn_004055F1(this_00->field_20BC), iVar9 != 0)) {
      local_8 = 0;
    }
    if (((this_00->field_20B7 != '\0') && (this_00->field_20C0 != nullptr)) &&
       (iVar9 = st::fn_004055F1(this_00->field_20C0), iVar9 != 0)) {
      local_8 = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if ((this_00->field_0x20b3 != '\0') && (this_00->field_20B8 != nullptr)) {
        st::fn_0040128A(this_00->field_20B8);
        st::fn_0072E2B0(this_00->field_20B8);
        this_00->field_20B8 = nullptr;
      }
      if ((this_00->field_0x20b4 != '\0') && (this_00->field_20BC != nullptr)) {
        st::fn_0040128A(this_00->field_20BC);
        st::fn_0072E2B0(this_00->field_20BC);
        this_00->field_20BC = nullptr;
      }
      if ((this_00->field_20B7 != '\0') && (this_00->field_20C0 != nullptr)) {
        st::fn_0040128A(this_00->field_20C0);
        st::fn_0072E2B0(this_00->field_20C0);
        this_00->field_20C0 = nullptr;
      }
      this_00->field_0065 = 1;
      if (this_00->field_0x20b5 != '\0') {
        st::fn_006B3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
        if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
          st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC);
        }
      }
      st::fn_0040175D(this_00,'\x01');
      if (this_00->field_1A74 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_00->field_1AB8,this_00->field_1A74,0xfffffffe,this_00->field_1A8C,
                   this_00->field_1A90);
      }
      if (this_00->field_1B05 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_00->field_1B49,this_00->field_1B05,0xfffffffe,this_00->field_1B1D,
                   this_00->field_1B21);
      }
      if (this_00->field_1B96 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_00->field_1BDA,this_00->field_1B96,0xfffffffe,this_00->field_1BAE,
                   this_00->field_1BB2);
      }
      puVar10 = &this_00->field_1C23;
      iVar9 = 0x16;
      do {
        st::fn_006B3430((int *)g_ddxContext_008075A8,*puVar10);
        puVar10 = puVar10 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391,
                   0xfffffffe,g_startSystem_0081176C->field_03A9,g_startSystem_0081176C->field_03AD);
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422,
                   0xfffffffe,g_startSystem_0081176C->field_043A,g_startSystem_0081176C->field_043E);
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3,
                   0xfffffffe,g_startSystem_0081176C->field_04CB,g_startSystem_0081176C->field_04CF);
      }
      st::fn_006B3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      CVar3 = this_00->field_1A5F;
      if ((((CVar3 == CASE_C) || (CVar3 == CASE_4)) || (CVar3 == CASE_5)) || (CVar3 == CASE_13)) {
        if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
          st::fn_006B34D0
                    ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                     0xfffffffe,g_startSystem_0081176C->field_0578,
                     g_startSystem_0081176C->field_057C);
        }
        if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
          st::fn_006B34D0
                    ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                     0xfffffffe,g_startSystem_0081176C->field_0609,
                     g_startSystem_0081176C->field_060D);
        }
        st::fn_006B3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
        st::fn_006B3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
      }
      st::fn_00402725(this_00,'\0');
      g_currentExceptionFrame = local_b0.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if ((this_00->field_0x20b5 != '\0') && (0 < g_startSystem_0081176C->field_0300)) {
      g_startSystem_0081176C->field_0300 = st::machine_word_boundary_cast<int>(g_startSystem_0081176C->field_0300 + -1);
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_8 = 0;
    }
    if ((this_00->field_0x20b3 != '\0') && (this_00->field_20B8 != nullptr)) {
      iVar9 = st::fn_004055F1(this_00->field_20B8);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_20B8->field_0x3;
        if (-1 < (int)uVar4) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((this_00->field_0x20b4 != '\0') && (this_00->field_20BC != nullptr)) {
      iVar9 = st::fn_004055F1(this_00->field_20BC);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_20BC->field_0x3;
        if (-1 < (int)uVar4) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((this_00->field_20B7 != '\0') && (this_00->field_20C0 != nullptr)) {
      iVar9 = st::fn_004055F1(this_00->field_20C0);
      if (iVar9 == 0) {
        uVar4 = *(uint *)&this_00->field_20C0->field_0x3;
        if (-1 < (int)uVar4) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      bVar2 = this_00->field_1A5A;
      this_00->field_0065 = 2;
      if ((bVar2 != 0xff) && (*(int *)(&this_00->field_0xd1 + (uint)bVar2 * 0x1fb) != 0)) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)bVar2 * 0x1fb));
        g_currentExceptionFrame = local_b0.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_b0.previous;
  return;
}

// 005ADF10 ChooseMapTy::CloseButtons
#line 4 "decomp/ST.exe/functions/005ADF10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::CloseButtons */

void __thiscall st::fn_005ADF10(ChooseMapTy *this)

{
  ChooseMapTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  ChooseMapTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    st::fn_00403459((MMObjTy *)local_8);
    if (this_00->field_0x20b5 != '\0') {
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   0xfffffffe,g_startSystem_0081176C->field_0314,g_startSystem_0081176C->field_0318);
      }
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
    }
    this_00->field_0065 = 4;
    st::fn_00404BF1(this_00,0xc,'\x01',-1);
    st::fn_0040149C(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x25b,0,errorCode,
                             st::mutable_c_string("%s"),"ChooseMapTy::CloseButtons");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x25b);
  return;
}

// 005AE050 ChooseMapTy::ShowDescription
#line 4 "decomp/ST.exe/functions/005AE050/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::ShowDescription

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall st::fn_005AE050(ChooseMapTy *this,uint param_1)

{
  char cVar1;
  ChooseMapTy_field_1A5FState CVar2;
  RecoveredSourceFamily_dibcopy *pRVar3;
  ccFntTy *pcVar4;
  StartSystemTy *pSVar5;
  int local_EAX_38;
  ushort *puVar7;
  DArrayTy *pDVar8;
  char *pcVar9;
  int iVar7;
  int local_EAX_816;
  cMf32 *pcVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int iVar16;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar17;
  ChooseMapTy *pCVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  short *psVar22;
  InternalExceptionFrame local_100;
  InternalExceptionFrame local_bc;
  InternalExceptionFrame local_78;
  short local_34 [14];
  char *local_18;
  cMf32 *local_14;
  ChooseMapTy *local_10;
  int local_c;
  char *local_8;
  char *pcVar19_mgB;

  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_10 = this;
  local_EAX_38 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  if (local_EAX_38 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar16 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x2c0,0,local_EAX_38,
                                st::mutable_c_string("%s"),"ChooseMapTy::ShowDescription");
    if (iVar16 == 0) {
      st::fn_006A5E40(local_EAX_38,0,st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x2c0);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar7 = st::fn_0070A5A0(g_cMf32_00806780,1,st::mutable_c_string("MM_MAPB"),0,1);
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_02F0,0,0,'\x01',
         (byte *)puVar7);
  pRVar3 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
  st::fn_006B4170(pRVar3,0,0,0,pRVar3->field_0004,pRVar3->field_0008,0xff);
  if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
    st::fn_006B5570((DArrayTy *)g_startSystem_0081176C->field_0548);
  }
  pDVar8 = st::fn_006B54F0(nullptr,10,10);
  pCVar18 = local_10;
  g_startSystem_0081176C->field_0548 = st::pointer_boundary_cast<uint *>(&pDVar8->flags);
  uVar13 = local_10->field_1C9F->elementSize;
  if ((0 < (int)(local_10->field_1C97->elementSize + uVar13)) && (uVar13 <= param_1)) {
    uVar13 = 0xffffffff;
    local_18 = &local_10->field_1FAF;
    pcVar9 = &local_10->field_1DA7;
    do {
      pcVar19 = pcVar9;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar19;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    pcVar9 = pcVar19 + -uVar13;
    pcVar19 = local_18;
    memmove(pcVar19, pcVar9, uVar13); /* compiler REP MOVS byte copy */
    uVar14 = 0;
    CVar2 = local_10->field_1A5F;
    if ((8 < CVar2) && ((CVar2 < CASE_D || ((CVar2 == CASE_13 && (DAT_00803400 == '\f')))))) {
      uVar13 = 0xffffffff;
      pcVar9 = st::pointer_boundary_cast<char *>(PTR_DAT_0079c06c);
      do {
        pcVar19 = pcVar9;
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        pcVar19 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar19;
      } while (cVar1 != '\0');
      uVar13 = ~uVar13;
      iVar15 = -1;
      pcVar9 = local_18;
      do {
        pcVar21 = pcVar9;
        if (iVar15 == 0) break;
        iVar15 = iVar15 + -1;
        pcVar21 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar21;
      } while (cVar1 != '\0');
      pcVar9 = pcVar19 + -uVar13;
      pcVar19 = pcVar21 + -1;
      memmove(pcVar19, pcVar9, uVar13); /* compiler REP MOVS byte copy */
      uVar14 = 0;
    }
    iVar15 = param_1 - local_10->field_1C9F->elementSize;
    if (iVar15 < (int)local_10->field_1C97->elementSize) {
      pcVar9 = *(char **)(local_10->field_1C97->growCapacity + iVar15 * 4);
    }
    else {
      pcVar9 = nullptr;
    }
    uVar13 = 0xffffffff;
    do {
      pcVar19 = pcVar9;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar19;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    iVar15 = -1;
    pcVar9 = local_18;
    do {
      pcVar21 = pcVar9;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pcVar21 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar21;
    } while (cVar1 != '\0');
    pcVar9 = pcVar19 + -uVar13;
    pcVar19 = pcVar21 + -1;
    memmove(pcVar19, pcVar9, uVar13); /* compiler REP MOVS byte copy */
    uVar14 = 0;
    local_bc.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_bc;
    iVar7 = st::fn_0072D7F0(local_bc.jumpBuffer,0);
    pCVar18 = local_10;
    if (iVar7 == 0) {
      local_14 = (cMf32 *)st::fn_006F0EC0
                                    (0x345,(byte *)&local_10->field_1FAF,0,0,0);
    }
    pcVar10 = local_14;
    g_currentExceptionFrame = local_bc.previous;
    if (local_14 != nullptr) {
      st::fn_00402716(g_startSystem_0081176C,local_14,pCVar18->field_1A5F);
      st::fn_006F1170(pcVar10);
    }
    goto LAB_005ae602;
  }
  uVar13 = 0xffffffff;
  DAT_008087be = 0xffffffff;
  if ((local_10->field_1A5F == CASE_3) &&
     (0 < (int)(local_10->field_1C97->elementSize + local_10->field_1C9F->elementSize))) {
    pcVar9 = &local_10->field_1DA7;
    do {
      pcVar19 = pcVar9;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar19;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    local_18 = &local_10->field_1FAF;
    pcVar9 = pcVar19 + -uVar13;
    pcVar19 = local_18;
    for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar19 = pcVar19 + 4;
    }
    local_c = 1;
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *pcVar19 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar19 = pcVar19 + 1;
    }
    st::fn_006B8280(local_18,local_18);
    pcVar9 = local_18;
    if ((int)param_1 < (int)pCVar18->field_1C9F->elementSize) {
      pcVar19 = *(char **)(pCVar18->field_1C9F->growCapacity + param_1 * 4);
    }
    else {
      pcVar19 = nullptr;
    }
    uVar13 = 0xffffffff;
    do {
      pcVar21 = pcVar19;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar21 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar21;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    iVar15 = -1;
    pcVar19 = local_18;
    do {
      pcVar20 = pcVar19;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pcVar20 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar20;
    } while (cVar1 != '\0');
    pcVar19 = pcVar21 + -uVar13;
    pcVar21 = pcVar20 + -1;
    memmove(pcVar21, pcVar19, uVar13); /* compiler REP MOVS byte copy */
    uVar14 = 0;
    st::fn_006B8280(local_18,local_18);
    uVar13 = 0xffffffff;
    pcVar19_mgB = PTR_s_ADDON_0079c060;
    do {
      pcVar19 = pcVar19_mgB;
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      pcVar19 = pcVar19_mgB + 1;
      cVar1 = *pcVar19_mgB;
      pcVar19_mgB = pcVar19;
    } while (cVar1 != '\0');
    uVar13 = ~uVar13;
    iVar15 = -1;
    do {
      pcVar21 = pcVar9;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pcVar21 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar21;
    } while (cVar1 != '\0');
    pcVar9 = pcVar19 + -uVar13;
    pcVar19 = pcVar21 + -1;
    memmove(pcVar19, pcVar9, uVar13); /* compiler REP MOVS byte copy */
    local_100.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_100;
    local_EAX_816 = st::fn_0072D7F0(local_100.jumpBuffer,0);
    pCVar18 = local_10;
    if (local_EAX_816 == 0) {
      pcVar10 = (cMf32 *)st::fn_006F0EC0
                                   (0x345,(byte *)&local_10->field_1FAF,0,0,0);
      local_14 = pcVar10;
      if (g_dArray_0080C4CB != nullptr) {
        st::fn_006B5570(g_dArray_0080C4CB);
      }
      g_dArray_0080C4CB =
           (DArrayTy *)st::fn_0071AA10(pcVar10,PTR_s_OBJECTIVES_0079c074,0);
      pcVar9 = &CHAR_00h_0080ed16;
      for (iVar15 = 0x41; iVar15 != 0; iVar15 = iVar15 + -1) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + 4;
      }
      local_8 = &CHAR_00h_0080ed16;
      puVar7 = st::fn_006F1CE0(pcVar10,0xc,PTR_s_MISSION_0079c064,(int *)&local_8,0);
      pcVar10 = local_14;
      if (puVar7 == nullptr) {
        local_c = 0;
      }
      iVar15 = local_c;
      local_8 = st::pointer_boundary_cast<char *>(&DAT_0080874e);
      st::fn_006F1CE0(local_14,0xc,st::pointer_boundary_cast<char *>(PTR_DAT_0079c068),(int *)&local_8,0);
      st::fn_006F1170(pcVar10);
      if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
        st::fn_006B5570((DArrayTy *)g_startSystem_0081176C->field_0548);
      }
      if (g_dArray_0080C4CB == nullptr) {
        g_dArray_0080C4CB = st::fn_006B54F0(nullptr,10,10);
        pDVar8 = st::fn_006B54F0(nullptr,10,10);
        g_startSystem_0081176C->field_0548 = st::pointer_boundary_cast<uint *>(&pDVar8->flags);
      }
      else {
        pcVar4 = g_startSystem_0081176C->field_0034;
        pcVar4->field_007E = 1;
        puVar11 = st::pointer_boundary_cast<undefined1 *>(&pcVar4->field_0x9e);
        *(undefined2 *)puVar11 = 0;
        *puVar11 = DAT_007cc854;
        puVar12 = st::fn_007126E0
                            (g_startSystem_0081176C->field_0034,g_dArray_0080C4CB,
                             st::mutable_c_string(" ,.;:!?/\\()[]{}"),(uint *)&DAT_007c21ec,
                             st::machine_word_boundary_cast<int>(g_startSystem_0081176C->field_0544->field_0004 + -0x14),0,0xffffffff,
                             nullptr,1);
        g_startSystem_0081176C->field_0548 = puVar12;
        if (g_startSystem_0081176C->field_0548 == nullptr) {
          pDVar8 = st::fn_006B54F0(nullptr,10,10);
          g_startSystem_0081176C->field_0548 = st::pointer_boundary_cast<uint *>(&pDVar8->flags);
          g_currentExceptionFrame = local_100.previous;
          goto LAB_005ae53a;
        }
      }
      g_currentExceptionFrame = local_100.previous;
    }
    else {
      iVar15 = 0;
      g_currentExceptionFrame = local_100.previous;
      local_c = 0;
    }
  }
  else {
    iVar15 = 0;
    local_c = 0;
  }
LAB_005ae53a:
  pCVar18->field_002D = 0x28;
  *(undefined2 *)&pCVar18->field_0x31 = 1;
  puVar11 = st::pointer_boundary_cast<undefined1 *>(&pCVar18->field_0x1d);
  *(short *)&pCVar18->field_0x33 = (short)g_startSystem_0081176C->field_0548[2];
  st::fn_006E6080(pCVar18,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar11);
  pCVar18->field_002D = 0x22;
  *(undefined2 *)&pCVar18->field_0x31 = 0;
  *(undefined2 *)&pCVar18->field_0x33 = 0;
  st::fn_006E6080(pCVar18,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar11);
  pCVar18->field_002D = 0x20;
  *(uint *)&pCVar18->field_0x31 = (uint)(iVar15 != 0);
  st::fn_006E6080(pCVar18,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar11);
  pSVar5 = pCVar18->field_1A5B;
  if (pSVar5->field_02E6 != nullptr) {
    psVar22 = local_34;
    for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
      psVar22[0] = 0;
      psVar22[1] = 0;
      psVar22 = psVar22 + 2;
    }
    *psVar22 = 0;
    local_34[0] = (-(ushort)(iVar15 != 0) & 2) - 1;
    local_34[1] = local_34[0];
    st::fn_00404B51(pSVar5->field_02E6,(int)local_34);
  }
LAB_005ae602:
  if ((pCVar18->field_1A5F != CASE_3) && (-1 < (int)g_startSystem_0081176C->field_02EC)) {
    st::fn_006B35D0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
  }
  if (-1 < (int)g_startSystem_0081176C->field_0540) {
    st::fn_006B35D0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
  }
  g_currentExceptionFrame = local_78.previous;
  return;
}

// 005AEAB0 ChooseMapTy::CreateCtrls
#line 4 "decomp/ST.exe/functions/005AEAB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::CreateCtrls

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005AEAB0(ChooseMapTy *this,char param_1)

{
  StartSystemTy *pSVar1;
  ChooseMapTy *this_00;
  int iVar4;
  int iVar3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  ccFntTy **ppcVar11;
  undefined4 *puVar12;
  ccFntTy *local_fe4 [6];
  undefined4 local_fcc;
  undefined4 local_fc8;
  DArrayTy *local_fc4;
  int local_f98;
  undefined4 local_f94;
  undefined4 local_f90;
  int local_f58;
  undefined4 local_f54;
  undefined4 local_f50;
  undefined4 local_780;
  int local_758 [112];
  undefined4 local_598 [10];
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  undefined4 local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_c8;
  InternalExceptionFrame local_c4;
  undefined4 local_80 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_38;
  uint local_34;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_1e;
  undefined2 local_1c;
  ChooseMapTy *local_c;
  uint local_8;

  puVar12 = local_598;
  local_c = this;
  for (iVar5 = 0x135; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  ppcVar11 = local_fe4;
  for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
    *ppcVar11 = nullptr;
    ppcVar11 = ppcVar11 + 1;
  }
  memset(local_80, 0, 0x58); /* compiler bulk-zero initialization */
  iVar5 = 0;
  memset(local_758, 0, 0x1c0); /* compiler bulk-zero initialization */
  iVar5 = 0;
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar4 = st::fn_0072D7F0(local_c4.jumpBuffer,0);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x39f,0,iVar4,st::mutable_c_string("%s")
                               ,"ChooseMapTy::CreateCtrls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x39f);
    return;
  }
  uVar8 = 0;
  switch(local_c->field_1A5F) {
  case CASE_1:
  case CASE_2:
    local_34 = (uint)g_startSystem_0081176C->field_02EB;
    uVar8 = 2;
    local_c->field_1A5F = (local_34 != 1) + CASE_1;
    goto LAB_005aebde;
  case CASE_4:
  case CASE_5:
    uVar8 = 2;
    local_34 = (uint)g_startSystem_0081176C->field_02EB;
    local_c->field_1A5F = (local_34 != 1) + CASE_4;
    break;
  case CASE_9:
  case CASE_A:
  case CASE_B:
    uVar8 = 3;
    local_34 = (uint)(byte)g_startSystem_0081176C->field_02EA;
    cVar9 = g_startSystem_0081176C->field_02EA;
    if (cVar9 == '\x01') {
      local_c->field_1A5F = CASE_9;
    }
    else if (cVar9 == '\x02') {
      local_c->field_1A5F = CASE_A;
    }
    else if (cVar9 == '\x03') {
      local_c->field_1A5F = CASE_B;
    }
  }
LAB_005aebde:
  if (uVar8 == 0) {
LAB_005aecc2:
    if (param_1 != '\0') goto LAB_005aef44;
  }
  else if (param_1 != '\0') {
    cVar9 = '\0';
    if (uVar8 != 0) {
      uVar6 = 0;
      do {
        local_758[uVar6 * 0x1c] = uVar6 + 1;
        cVar9 = cVar9 + '\x01';
        local_758[uVar6 * 0x1c + 1] = 0;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(cVar9));
        local_758[uVar6 * 0x1c + 3] = uVar6 * 0x7c + 0x112;
        uVar7 = local_8 & 0xff;
        local_758[uVar6 * 0x1c + 5] = 0x7a;
        local_758[uVar6 * 0x1c + 4] = 0x1d4;
        local_758[uVar6 * 0x1c + 6] = 0x18;
        uVar6 = uVar7;
      } while (uVar7 < uVar8);
    }
    local_70 = this_00->field_0008;
    local_38 = local_758;
    local_80[0] = 1;
    local_6c = 2;
    local_68 = 0x6326;
    local_4c = 2;
    local_48 = 0x6327;
    local_50 = local_70;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,5,&this_00->field_1C83,nullptr,st::machine_word_boundary_cast<undefined4>(local_80),0);
    st::fn_006B3430((int *)g_ddxContext_008075A8,this_00->field_1C87);
    goto LAB_005aecc2;
  }
  local_570 = this_00->field_0008;
  local_598[0] = 0;
  local_598[2] = 0x114;
  local_598[3] = 0x3f;
  local_598[4] = 0x1e4;
  local_598[5] = 399;
  local_598[6] = 0;
  local_598[7] = 0;
  local_56c = 2;
  local_568 = 0x8160;
  local_54c = 2;
  local_548 = 0x8161;
  local_52c = 2;
  local_528 = 0x8162;
  local_50c = 2;
  local_508 = 0x8163;
  if (DAT_0080734c != '\0') {
    local_c8 = 1;
  }
  local_460 = this_00->field_1A8C;
  local_45c = this_00->field_1A90;
  local_468 = 0;
  local_2e8 = 0;
  local_2e0 = this_00->field_1B1D;
  local_458 = this_00->field_1A94;
  local_2dc = this_00->field_1B21;
  local_454 = this_00->field_1A98;
  local_2d8 = this_00->field_1B25;
  local_358 = 500;
  local_1d8 = 500;
  local_15c = this_00->field_1BAE;
  local_2d4 = this_00->field_1B29;
  local_154 = this_00->field_1BB6;
  local_354 = 0x32;
  local_1d4 = 0x32;
  local_158 = this_00->field_1BB2;
  local_46c = 2;
  local_464 = 2;
  local_404 = 2;
  local_400 = 0x8164;
  local_2ec = 2;
  local_2e4 = 2;
  local_284 = 2;
  local_280 = 0x8165;
  local_16c = 3;
  local_168 = 1;
  local_160 = 0;
  local_150 = 0x157;
  local_14c = 0xe;
  local_114 = 2;
  local_110 = 0x8166;
  local_550 = local_570;
  local_530 = local_570;
  local_510 = local_570;
  local_408 = local_570;
  local_288 = local_570;
  local_118 = local_570;
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,7,&this_00->field_1A6C,nullptr,st::machine_word_boundary_cast<undefined4>(local_598),0);
  if (this_00->field_1A74 != 0xffffffff) {
    st::fn_006B34D0
              ((uint *)this_00->field_1AB8,this_00->field_1A74,0xfffffffe,this_00->field_1A8C,
               this_00->field_1A90);
  }
  if (this_00->field_1B05 != 0xffffffff) {
    st::fn_006B34D0
              ((uint *)this_00->field_1B49,this_00->field_1B05,0xfffffffe,this_00->field_1B1D,
               this_00->field_1B21);
  }
  if (this_00->field_1B96 != 0xffffffff) {
    st::fn_006B34D0
              ((uint *)this_00->field_1BDA,this_00->field_1B96,0xfffffffe,this_00->field_1BAE,
               this_00->field_1BB2);
  }
LAB_005aef44:
  if ((this_00->field_0x20b4 == '\0') || (param_1 != '\0')) {
    if (g_startSystem_0081176C->field_0389 != 0) {
      this_00->field_002D = 0x20;
      *(undefined4 *)&this_00->field_0x31 = 0;
      st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_00->field_0x1d);
    }
  }
  else {
    st::fn_00402A4A(g_startSystem_0081176C);
  }
  if ((this_00->field_20B7 != '\0') && (param_1 == '\0')) {
    st::fn_004028B5(g_startSystem_0081176C);
    ppcVar11 = local_fe4;
    for (iVar5 = 0x223; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppcVar11 = nullptr;
      ppcVar11 = ppcVar11 + 1;
    }
    local_fe4[0] = (ccFntTy *)0x1;
    local_fe4[1] = (ccFntTy *)0x9;
    local_fe4[2] = g_startSystem_0081176C->field_0034;
    local_fe4[3] = (ccFntTy *)0xcb;
    local_fe4[4] = (ccFntTy *)0x23f;
    local_fe4[5] = *(ccFntTy **)(g_startSystem_0081176C->field_0682 + 2);
    local_fcc = *(undefined4 *)(g_startSystem_0081176C->field_0682 + 4);
    local_fc8 = 0x104;
    local_fc4 = g_startSystem_0081176C->field_0686;
    pSVar1 = this_00->field_000C;
    local_780 = 0x100;
    local_f98 = pSVar1->field_0014;
    local_f90 = 0xc0a0;
    local_f94 = 0;
    local_f58 = pSVar1->field_0014;
    local_f54 = 0;
    local_f50 = 0xc0a2;
    (*pSVar1->vtable->CreateObject)
              ((SystemClassTy *)pSVar1,6,&g_startSystem_0081176C->field_054C,nullptr,st::machine_word_boundary_cast<undefined4>(local_fe4),0);
    st::fn_006B3430((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
  }
  pSVar1 = this_00->field_1A5B;
  if (pSVar1->field_02E6 != nullptr) {
    memset(&local_28, 0, 0x1a); /* compiler bulk-zero initialization */
    local_1c = 1;
    local_1e = 1;
    local_24 = 1;
    st::fn_00404B51(pSVar1->field_02E6,(int)&local_28);
  }
  if (param_1 != '\0') {
    st::fn_00402DBF(1,this_00->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  }
  g_currentExceptionFrame = local_c4.previous;
  return;
}

// 005AF350 ChooseMapTy::DeleteCtrls
#line 4 "decomp/ST.exe/functions/005AF350/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::DeleteCtrls */

void __thiscall st::fn_005AF350(ChooseMapTy *this)

{
  RecoveredSourceFamily_dibcopy *pRVar1;
  ChooseMapTy *this_00;
  int iVar3;
  HoloTy *pHVar3;
  int iVar4;
  uint uVar10;
  DArrayTy *pDVar5;
  uint local_EAX_970;
  uint local_EAX_1506;
  int iVar7;
  uint *puVar6;
  int iVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  InternalExceptionFrame local_50;
  ChooseMapTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x3ea,0,iVar3,st::mutable_c_string("%s")
                               ,"ChooseMapTy::DeleteCtrls");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x3ea);
    return;
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  this_00 = local_c;
  st::fn_00402DBF(0,local_c->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  if (this_00->field_1C83 != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_1C83);
  }
  this_00->field_1C83 = 0;
  st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_1C87);
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0x112,0x38,0x204,0x19d);
  st::fn_004042D2
            ((MMMObjTy *)g_dDXContext_0080759C,g_dDXContext_0080759C,nullptr,nullptr
             ,0x112,0x38,0x204,0x19d,&this_00->field_1A5B->field_0140);
  if (this_00->field_1A6C != 0) {
    st::fn_006E56B0(this_00->field_000C,this_00->field_1A6C);
  }
  this_00->field_1A6C = 0;
  if (this_00->field_20B8 != nullptr) {
    st::fn_0040128A(this_00->field_20B8);
    st::fn_0072E2B0(this_00->field_20B8);
    this_00->field_20B8 = nullptr;
  }
  pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
  if (pHVar3 == nullptr) {
    pHVar3 = nullptr;
  }
  else {
    pHVar3->field_0002 = 1;
    pHVar3->field_0000 = 0;
    *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
    pHVar3->field_0001 = CASE_2;
    pHVar3->field_0007 = nullptr;
    pHVar3->field_000B = nullptr;
    pHVar3->field_000F = 0;
    *(undefined4 *)&pHVar3->field_0x1b = 1;
    pHVar3->field_0013 = 1;
    pHVar3->field_0017 = -1;
    pHVar3->field_0027 = 0;
    pHVar3->field_0023 = 0;
    pHVar3->field_002F = 1;
    pHVar3->field_002B = 1;
  }
  this_00->field_20B8 = pHVar3;
  if (pHVar3 != nullptr) {
    uVar11 = 0;
    cVar10 = '\x01';
    bVar9 = 0x10;
    iVar8 = 1;
    iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x112,0x38,0x204,0x19d);
    uVar10 = st::fn_0040459D(this_00->field_20B8,CASE_2,0x112,0x38,iVar4,iVar8,bVar9,cVar10,uVar11);
    if (uVar10 != 0) {
      pHVar3 = this_00->field_20B8;
      pHVar3->field_0002 = 0;
      pHVar3->field_0017 = -1;
      uVar11 = *(uint *)&this_00->field_20B8->field_0x3;
      if (-1 < (int)uVar11) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar11);
      }
      st::fn_004055F1(this_00->field_20B8);
    }
    st::fn_00402298(0x112,0x38,0x112,0x38,0x204,(byte *)0x19d,'\x01',
               (BITMAPINFO *)g_startSystem_0081176C->field_002C);
  }
  if (this_00->field_1A74 != 0xffffffff) {
    st::fn_006B3AF0((int *)this_00->field_1AB8,this_00->field_1A74);
  }
  if (this_00->field_1B05 != 0xffffffff) {
    st::fn_006B3AF0((int *)this_00->field_1B49,this_00->field_1B05);
  }
  if (this_00->field_1B96 != 0xffffffff) {
    st::fn_006B3AF0((int *)this_00->field_1BDA,this_00->field_1B96);
  }
  puVar6 = &this_00->field_1C23;
  local_8 = 0x16;
  do {
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar6);
    puVar6 = puVar6 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (this_00->field_0x20b4 == '\0') {
    this_00->field_002D = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_00->field_0x1d);
  }
  else {
    if (g_startSystem_0081176C->field_0389 != 0) {
      st::fn_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_0389);
    }
    g_startSystem_0081176C->field_0389 = 0;
    pRVar1 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
    st::fn_006B4170(pRVar1,0,0,0,pRVar1->field_0004,pRVar1->field_0008,0xff);
    if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
      st::fn_006B5570((DArrayTy *)g_startSystem_0081176C->field_0548);
    }
    pDVar5 = st::fn_006B54F0(nullptr,10,10);
    g_startSystem_0081176C->field_0548 = st::pointer_boundary_cast<uint *>(&pDVar5->flags);
    if (this_00->field_20BC != nullptr) {
      st::fn_0040128A(this_00->field_20BC);
      st::fn_0072E2B0(this_00->field_20BC);
      this_00->field_20BC = nullptr;
    }
    pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    this_00->field_20BC = pHVar3;
    if (pHVar3 != nullptr) {
      uVar11 = 0;
      cVar10 = '\x01';
      bVar9 = 0x10;
      iVar8 = 1;
      iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      local_EAX_970 =
           st::fn_0040459D(this_00->field_20BC,CASE_4,10,0xb4,iVar4,iVar8,bVar9,cVar10,uVar11);
      if (local_EAX_970 != 0) {
        pHVar3 = this_00->field_20BC;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar11 = *(uint *)&this_00->field_20BC->field_0x3;
        if (-1 < (int)uVar11) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar11);
        }
        st::fn_004055F1(this_00->field_20BC);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      st::fn_00402298(10,0xb4,10,0xb4,0xf9,(byte *)0x121,'\x01',
                 (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    }
    if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391);
    }
    if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422);
    }
    if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3);
    }
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
  }
  if (this_00->field_20B7 == '\0') {
    this_00->field_002D = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    if (g_startSystem_0081176C->field_054C != 0) {
      st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_054C,(undefined4 *)&this_00->field_0x1d);
    }
    *(undefined4 *)&this_00->field_0x31 = 0;
    if (g_startSystem_0081176C->field_0550 != 0) {
      st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_0550,(undefined4 *)&this_00->field_0x1d);
    }
  }
  else {
    if (g_startSystem_0081176C->field_054C != 0) {
      st::fn_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_054C);
      g_startSystem_0081176C->field_054C = 0;
    }
    if (g_startSystem_0081176C->field_0550 != 0) {
      st::fn_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_0550);
      g_startSystem_0081176C->field_0550 = 0;
    }
    if (this_00->field_20C0 != nullptr) {
      st::fn_0040128A(this_00->field_20C0);
      st::fn_0072E2B0(this_00->field_20C0);
      this_00->field_20C0 = nullptr;
    }
    pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar3 == nullptr) {
      pHVar3 = nullptr;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
      pHVar3->field_0007 = nullptr;
      pHVar3->field_000B = nullptr;
      pHVar3->field_000F = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = -1;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    this_00->field_20C0 = pHVar3;
    if (pHVar3 != nullptr) {
      uVar11 = 0;
      cVar10 = '\x01';
      bVar9 = 0x10;
      iVar8 = 1;
      iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
      local_EAX_1506 =
           st::fn_0040459D(this_00->field_20C0,CASE_1,200,0x1f1,iVar4,iVar8,bVar9,cVar10,uVar11);
      if (local_EAX_1506 != 0) {
        pHVar3 = this_00->field_20C0;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = -1;
        uVar11 = *(uint *)&this_00->field_20C0->field_0x3;
        if (-1 < (int)uVar11) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar11);
        }
        st::fn_004055F1(this_00->field_20C0);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
      st::fn_00402298(200,0x1f1,200,0x1f1,400,(byte *)0x62,'\x01',
                 (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    }
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
    if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560);
    }
    if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1);
    }
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8A60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005AFD00 ChooseMapTy::PrepFiles
#line 4 "decomp/ST.exe/functions/005AFD00/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::PrepFiles

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_13=19

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

void __thiscall st::fn_005AFD00(ChooseMapTy *this,uint param_1)

{
  char cVar1;
  ChooseMapTy_field_1A5FState CVar3;
  StartSystemTy *pSVar4;
  RecoveredSourceFamily_dibcopy *pRVar5;
  int local_EAX_175;
  DArrayTy *local_EAX_267;
  DArrayTy *pDVar8;
  DArrayTy *local_EAX_301;
  int iVar7;
  cMf32 *pcVar7;
  ushort *puVar8;
  BOOL BVar9;
  int local_EAX_1635;
  BulkInitializedRecord_008087C7 *pBVar10;
  int local_EAX_2257;
  LONG LVar11;
  char *pcVar12;
  int local_EAX_2515;
  int iVar14;
  byte bVar13;
  int iVar15;
  uint uVar16;
  ChooseMapTy *this_00;
  uint *puVar17;
  char *pcVar18;
  CHAR *pCVar19;
  uint uVar21;
  byte *pbVar22;
  CHAR *pCVar23;
  char *pcVar24;
  byte *pbVar25;
  bool bVar26;
  DArrayTy *pDVar27;
  undefined4 uVar28;
  byte local_370 [260];
  _WIN32_FIND_DATAA local_26c;
  InternalExceptionFrame local_12c;
  InternalExceptionFrame local_e8;
  InternalExceptionFrame local_a4;
  undefined4 local_60;
  FILETIME local_44;
  FILETIME local_3c;
  int local_34;
  int local_30;
  int local_2c;
  ChooseMapTy *local_28;
  int local_24;
  char *local_20;
  int local_1c;
  HANDLE local_18;
  int *local_14;
  uint local_10;
  int local_c;
  bool local_5;
  byte CVar2;
  char *pcVar12_mg8;

  local_2c = 0;
  local_c = 0;
  local_30 = 0;
  switch(this->field_1A5F) {
  case CASE_1:
  case CASE_4:
switchD_005afd30_caseD_1:
    local_30 = -0x70fffbfb;
  case CASE_2:
  case CASE_5:
switchD_005afd30_caseD_2:
    local_c = -0x70fffdfb;
    break;
  case CASE_9:
    local_c = -0x77fffeea;
    break;
  case CASE_A:
    local_c = -0x77fffdea;
    break;
  case CASE_B:
    local_c = -0x77fffbea;
    break;
  case CASE_C:
switchD_005afd30_caseD_c:
    local_c = -0x77fffaea;
    break;
  case CASE_13:
    switch(DAT_00803400) {
    case '\x04':
      goto switchD_005afd30_caseD_1;
    case '\x05':
      goto switchD_005afd30_caseD_2;
    case '\f':
      goto switchD_005afd30_caseD_c;
    case '\x14':
    case '\x15':
      local_c = -0x70fff7fb;
    }
  }
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  local_28 = this;
  local_EAX_175 = st::fn_0072D7F0(local_a4.jumpBuffer,0);
  this_00 = local_28;
  if (local_EAX_175 != 0) {
    g_currentExceptionFrame = local_a4.previous;
    iVar14 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x4f5,0,local_EAX_175,
                                st::mutable_c_string("%s"),"ChooseMapTy::PrepFiles");
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_175,0,st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x4f5);
    return;
  }
  if (local_28->field_1C97 != nullptr) {
    st::fn_006B5570(local_28->field_1C97);
    this_00->field_1C97 = nullptr;
  }
  if (this_00->field_1C9B != nullptr) {
    st::fn_006AE110(this_00->field_1C9B);
    this_00->field_1C9B = nullptr;
  }
  if (this_00->field_1C9F != nullptr) {
    st::fn_006B5570(this_00->field_1C9F);
    this_00->field_1C9F = nullptr;
  }
  local_EAX_267 = st::fn_006B54F0(nullptr,0x32,10);
  this_00->field_1C97 = local_EAX_267;
  pDVar8 = st::fn_006AE290(nullptr,0x32,8,10);
  this_00->field_1C9B = pDVar8;
  local_EAX_301 = st::fn_006B54F0(nullptr,10,10);
  this_00->field_1C9F = local_EAX_301;
  this_00->field_002D = 0x20;
  *(undefined4 *)&this_00->field_0x31 = 0;
  st::fn_006E6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
  pSVar4 = this_00->field_1A5B;
  if (pSVar4->field_02E6 != nullptr) {
    memset(&local_60, 0, 0x1a); /* compiler bulk-zero initialization */
    STPiece<2,2>(local_60) = 0xffff;
    STPiece<0,2>(local_60) = 0xffff;
    st::fn_00404B51(pSVar4->field_02E6,(int)&local_60);
  }
  pRVar5 = (RecoveredSourceFamily_dibcopy *)this_00->field_1C7B;
  st::fn_006B4170(pRVar5,0,0,0,pRVar5->field_0004,pRVar5->field_0008,0);
  uVar21 = 0x3f;
  puVar17 = &this_00->field_1C23;
  do {
    st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar17,0xffffffff,0x114,uVar21);
    uVar21 = uVar21 + 0x13;
    puVar17 = puVar17 + 1;
  } while ((int)uVar21 < 0x1e1);
  uVar21 = 0xffffffff;
  pcVar18 = &this_00->field_1DA7;
  do {
    pcVar12 = pcVar18;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar12 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar12;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  pcVar18 = pcVar12 + -uVar21;
  pcVar12 = &this_00->field_1FAF;
  memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
  uVar16 = 0;
  uVar21 = 0xffffffff;
  pcVar18 = &st_global_007CC8BC;
  do {
    pcVar12 = pcVar18;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar12 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar12;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  iVar15 = -1;
  pcVar18 = &this_00->field_1FAF;
  do {
    pcVar24 = pcVar18;
    if (iVar15 == 0) break;
    iVar15 = iVar15 + -1;
    pcVar24 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar24;
  } while (cVar1 != '\0');
  pcVar18 = pcVar12 + -uVar21;
  pcVar12 = pcVar24 + -1;
  memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
  uVar16 = 0;
  CVar3 = this_00->field_1A5F;
  if ((CVar3 != CASE_0) && ((CVar3 < CASE_6 || ((CVar3 == CASE_13 && (DAT_00803400 != '\f')))))) {
    local_2c = 1;
  }
  pbVar22 = st::pointer_boundary_cast<byte *>(&this_00->field_1CA3);
  pcVar18 = &this_00->field_1DA7;
  do {
    bVar13 = *pcVar18;
    bVar26 = bVar13 < *pbVar22;
    if (bVar13 != *pbVar22) {
LAB_005aff82:
      local_34 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
      goto LAB_005aff87;
    }
    if (bVar13 == 0) break;
    bVar13 = pcVar18[1];
    bVar26 = bVar13 < pbVar22[1];
    if (bVar13 != pbVar22[1]) goto LAB_005aff82;
    pcVar18 = pcVar18 + 2;
    pbVar22 = pbVar22 + 2;
  } while (bVar13 != 0);
  local_34 = 0;
LAB_005aff87:
  if (local_2c != 0) {
    local_18 = st::external_00000070(st::pointer_boundary_cast<LPCSTR>(&this_00->field_1FAF),st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_26c));
    if (local_18 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_26c.dwFileAttributes & 0x10) != 0) {
          pbVar22 = st::pointer_boundary_cast<byte *>(&DAT_007cc8b8);
          pCVar19 = local_26c.cFileName;
          do {
            bVar13 = *pCVar19;
            bVar26 = bVar13 < *pbVar22;
            if (bVar13 != *pbVar22) {
LAB_005afffc:
              iVar15 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
              goto LAB_005b0001;
            }
            if (bVar13 == 0) break;
            bVar13 = pCVar19[1];
            bVar26 = bVar13 < pbVar22[1];
            if (bVar13 != pbVar22[1]) goto LAB_005afffc;
            pCVar19 = pCVar19 + 2;
            pbVar22 = pbVar22 + 2;
          } while (bVar13 != 0);
          iVar15 = 0;
LAB_005b0001:
          if (iVar15 != 0) {
            pbVar22 = st::pointer_boundary_cast<byte *>(&DAT_007cc8b4);
            pCVar19 = local_26c.cFileName;
            do {
              bVar13 = *pCVar19;
              bVar26 = bVar13 < *pbVar22;
              if (bVar13 != *pbVar22) {
LAB_005b003c:
                iVar15 = (1 - (uint)bVar26) - (uint)(bVar26 != 0);
                goto LAB_005b0041;
              }
              if (bVar13 == 0) break;
              bVar13 = pCVar19[1];
              bVar26 = bVar13 < pbVar22[1];
              if (bVar13 != pbVar22[1]) goto LAB_005b003c;
              pCVar19 = pCVar19 + 2;
              pbVar22 = pbVar22 + 2;
            } while (bVar13 != 0);
            iVar15 = 0;
LAB_005b0041:
            if ((iVar15 != 0) || (local_34 != 0)) {
              if (this_00->field_1A5F == CASE_3) {
                uVar21 = 0xffffffff;
                local_20 = &this_00->field_1FAF;
                pcVar18 = &this_00->field_1DA7;
                do {
                  pcVar12 = pcVar18;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pcVar12 = pcVar18 + 1;
                  cVar1 = *pcVar18;
                  pcVar18 = pcVar12;
                } while (cVar1 != '\0');
                uVar21 = ~uVar21;
                pcVar18 = pcVar12 + -uVar21;
                pcVar12 = local_20;
                memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
                uVar16 = 0;
                st::fn_006B8280(local_20,local_20);
                pcVar18 = local_20;
                uVar21 = 0xffffffff;
                pCVar19 = local_26c.cFileName;
                do {
                  pCVar23 = pCVar19;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pCVar23 = pCVar19 + 1;
                  cVar1 = *pCVar19;
                  pCVar19 = pCVar23;
                } while (cVar1 != '\0');
                uVar21 = ~uVar21;
                iVar15 = -1;
                pcVar12 = local_20;
                do {
                  pcVar24 = pcVar12;
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  pcVar24 = pcVar12 + 1;
                  cVar1 = *pcVar12;
                  pcVar12 = pcVar24;
                } while (cVar1 != '\0');
                pCVar19 = pCVar23 + -uVar21;
                pcVar12 = pcVar24 + -1;
                memmove(pcVar12, pCVar19, uVar21); /* compiler REP MOVS byte copy */
                uVar16 = 0;
                st::fn_006B8280(local_20,local_20);
                uVar21 = 0xffffffff;
                pcVar12_mg8 = PTR_s_ADDON_0079c060;
                do {
                  pcVar12 = pcVar12_mg8;
                  if (uVar21 == 0) break;
                  uVar21 = uVar21 - 1;
                  pcVar12 = pcVar12_mg8 + 1;
                  cVar1 = *pcVar12_mg8;
                  pcVar12_mg8 = pcVar12;
                } while (cVar1 != '\0');
                uVar21 = ~uVar21;
                local_10 = 1;
                iVar15 = -1;
                do {
                  pcVar24 = pcVar18;
                  if (iVar15 == 0) break;
                  iVar15 = iVar15 + -1;
                  pcVar24 = pcVar18 + 1;
                  cVar1 = *pcVar18;
                  pcVar18 = pcVar24;
                } while (cVar1 != '\0');
                pcVar18 = pcVar12 + -uVar21;
                pcVar12 = pcVar24 + -1;
                memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
                uVar16 = 0;
                local_e8.previous = g_currentExceptionFrame;
                g_currentExceptionFrame = &local_e8;
                iVar7 = st::fn_0072D7F0(local_e8.jumpBuffer,0);
                this_00 = local_28;
                if (iVar7 == 0) {
                  pcVar7 = (cMf32 *)st::fn_006F0EC0
                                              (0x345,(byte *)&local_28->field_1FAF,0,0,0);
                  if (g_dArray_0080C4CB != nullptr) {
                    st::fn_006B5570(g_dArray_0080C4CB);
                  }
                  g_dArray_0080C4CB =
                       (DArrayTy *)
                       st::fn_0071AA10(pcVar7,PTR_s_OBJECTIVES_0079c074,0);
                  if (g_dArray_0080C4CB == nullptr) {
                    g_dArray_0080C4CB = st::fn_006B54F0(nullptr,10,10);
                  }
                  pcVar18 = &CHAR_00h_0080ed16;
                  for (iVar15 = 0x41; iVar15 != 0; iVar15 = iVar15 + -1) {
                    pcVar18[0] = '\0';
                    pcVar18[1] = '\0';
                    pcVar18[2] = '\0';
                    pcVar18[3] = '\0';
                    pcVar18 = pcVar18 + 4;
                  }
                  local_14 = (int *)&CHAR_00h_0080ed16;
                  puVar8 = st::fn_006F1CE0(pcVar7,0xc,PTR_s_MISSION_0079c064,(int *)&local_14,0);
                  if (puVar8 == nullptr) {
                    local_10 = 0;
                  }
                  st::fn_006F1170(pcVar7);
                }
                else {
                  local_10 = 0;
                }
                g_currentExceptionFrame = local_e8.previous;
                if (local_10 == 0) goto LAB_005b01f3;
              }
              st::fn_006B5AA0(this_00->field_1C9F,local_26c.cFileName);
            }
          }
        }
LAB_005b01f3:
        BVar9 = st::external_00000071(local_18,st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_26c));
      } while (BVar9 != 0);
    }
    if (local_18 != (HANDLE)0xffffffff) {
      st::external_00000072(local_18);
    }
  }
  uVar21 = 0xffffffff;
  pcVar18 = &this_00->field_1DA7;
  do {
    pcVar12 = pcVar18;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar12 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar12;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  pcVar18 = pcVar12 + -uVar21;
  pcVar12 = &this_00->field_1FAF;
  memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
  uVar16 = 0;
  if ((8 < this_00->field_1A5F) && (this_00->field_1A5F < CASE_D)) {
    uVar21 = 0xffffffff;
    pcVar18 = st::pointer_boundary_cast<char *>(PTR_DAT_0079c06c);
    do {
      pcVar12 = pcVar18;
      if (uVar21 == 0) break;
      uVar21 = uVar21 - 1;
      pcVar12 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar12;
    } while (cVar1 != '\0');
    uVar21 = ~uVar21;
    iVar15 = -1;
    pcVar18 = &this_00->field_1FAF;
    do {
      pcVar24 = pcVar18;
      if (iVar15 == 0) break;
      iVar15 = iVar15 + -1;
      pcVar24 = pcVar18 + 1;
      cVar1 = *pcVar18;
      pcVar18 = pcVar24;
    } while (cVar1 != '\0');
    pcVar18 = pcVar12 + -uVar21;
    pcVar12 = pcVar24 + -1;
    memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
    uVar16 = 0;
  }
  uVar21 = 0xffffffff;
  pcVar18 = &st_global_007C72D8;
  do {
    pcVar12 = pcVar18;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar12 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar12;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  iVar15 = -1;
  pcVar18 = &this_00->field_1FAF;
  do {
    pcVar24 = pcVar18;
    if (iVar15 == 0) break;
    iVar15 = iVar15 + -1;
    pcVar24 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar24;
  } while (cVar1 != '\0');
  pcVar18 = pcVar12 + -uVar21;
  pcVar12 = pcVar24 + -1;
  memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
  uVar16 = 0;
  uVar21 = 0xffffffff;
  pcVar18 = st::pointer_boundary_cast<char *>(st_global_0079C058);
  do {
    pcVar12 = pcVar18;
    if (uVar21 == 0) break;
    uVar21 = uVar21 - 1;
    pcVar12 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar12;
  } while (cVar1 != '\0');
  uVar21 = ~uVar21;
  iVar15 = -1;
  pcVar18 = &this_00->field_1FAF;
  do {
    pcVar24 = pcVar18;
    if (iVar15 == 0) break;
    iVar15 = iVar15 + -1;
    pcVar24 = pcVar18 + 1;
    cVar1 = *pcVar18;
    pcVar18 = pcVar24;
  } while (cVar1 != '\0');
  pcVar18 = pcVar12 + -uVar21;
  pcVar12 = pcVar24 + -1;
  memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
  uVar16 = 0;
  if (this_00->field_1A5F == CASE_3) {
    bVar26 = false;
  }
  else {
    local_18 = st::external_00000070(st::pointer_boundary_cast<LPCSTR>(&this_00->field_1FAF),st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_26c));
    bVar26 = local_18 != (HANDLE)0xffffffff;
  }
  if (bVar26) {
    do {
      if (((byte)local_26c.dwFileAttributes & 0x10) == 0) {
        local_24 = 0;
        st::fn_0072E730
                  ((byte *)local_26c.cFileName,nullptr,nullptr,local_370,nullptr);
        local_12c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_12c;
        local_EAX_1635 = st::fn_0072D7F0(local_12c.jumpBuffer,0);
        this_00 = local_28;
        if (local_EAX_1635 == 0) {
          uVar21 = 0xffffffff;
          pcVar18 = &local_28->field_1DA7;
          do {
            pcVar12 = pcVar18;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pcVar12 = pcVar18 + 1;
            cVar1 = *pcVar18;
            pcVar18 = pcVar12;
          } while (cVar1 != '\0');
          uVar21 = ~uVar21;
          pcVar18 = pcVar12 + -uVar21;
          pcVar12 = &local_28->field_1FAF;
          memmove(pcVar12, pcVar18, uVar21); /* compiler REP MOVS byte copy */
          uVar16 = 0;
          uVar21 = 0xffffffff;
          pbVar22 = local_370;
          do {
            pbVar25 = pbVar22;
            if (uVar21 == 0) break;
            uVar21 = uVar21 - 1;
            pbVar25 = pbVar22 + 1;
            bVar13 = *pbVar22;
            pbVar22 = pbVar25;
          } while (bVar13 != 0);
          uVar21 = ~uVar21;
          iVar15 = -1;
          pcVar18 = &local_28->field_1FAF;
          do {
            pcVar12 = pcVar18;
            if (iVar15 == 0) break;
            iVar15 = iVar15 + -1;
            pcVar12 = pcVar18 + 1;
            cVar1 = *pcVar18;
            pcVar18 = pcVar12;
          } while (cVar1 != '\0');
          pbVar22 = pbVar25 + -uVar21;
          pbVar25 = (byte *)(pcVar12 + -1);
          memmove(pbVar25, pbVar22, uVar21); /* compiler REP MOVS byte copy */
          pcVar7 = (cMf32 *)st::fn_006F0EC0
                                      (0x345,(byte *)&local_28->field_1FAF,0,0,0);
          bVar26 = false;
          switch(this_00->field_1A5F) {
          case CASE_1:
          case CASE_2:
          case CASE_4:
          case CASE_5:
            bVar26 = false;
            break;
          case CASE_9:
          case CASE_A:
          case CASE_B:
          case CASE_C:
            bVar26 = true;
            break;
          case CASE_13:
            bVar26 = DAT_00803400 == '\f';
          }
          if (bVar26) {
            local_14 = &local_24;
            puVar8 = st::fn_006F1CE0(pcVar7,0x80,PTR_s_SAVE_DESC_0079c070,(int *)&local_14,0);
            if ((puVar8 != nullptr) && (local_c == local_24)) {
              st::fn_006AE1C0(this_00->field_1C9B,&local_26c.ftLastWriteTime);
              uVar21 = 0xffffffff;
              pcVar18 = st::pointer_boundary_cast<char *>(PTR_DAT_0079c06c);
              do {
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1;
                cVar1 = *pcVar18;
                pcVar18 = pcVar18 + 1;
              } while (cVar1 != '\0');
              pbVar22 = (byte *)st::fn_006B8240((char *)local_370,~uVar21 - 1);
LAB_005b051b:
              pDVar27 = this_00->field_1C97;
LAB_005b0523:
              st::fn_006B5AA0(pDVar27,(char *)pbVar22);
            }
          }
          else {
            local_14 = st::pointer_boundary_cast<int *>(&DAT_008087b6);
            puVar8 = st::fn_006F1CE0(pcVar7,0,PTR_s_DESCRIPTOR_0079c078,(int *)&local_14,0);
            if (((puVar8 != nullptr) && (DAT_008087b6 != 0)) &&
               ((_DAT_008087ba == local_c ||
                ((((CVar3 = this_00->field_1A5F, CVar3 == CASE_1 || (CVar3 == CASE_13)) ||
                  (CVar3 == CASE_4)) && (_DAT_008087ba == local_30)))))) {
              if (this_00->field_1A5F != CASE_2) {
                pbVar22 = local_370;
                goto LAB_005b051b;
              }
              bVar13 = 0;
              pBVar10 = g_bulkInitializedRecords_008087C7;
              iVar15 = 8;
              do {
                if ((pBVar10->field_0022 < 8) && (*(char *)pBVar10 == '\0')) {
                  bVar13 = bVar13 + 1;
                }
                pBVar10 = pBVar10 + 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
              if (bVar13 < 2) {
                pDVar27 = this_00->field_1C97;
                pbVar22 = local_370;
                goto LAB_005b0523;
              }
            }
          }
          st::fn_006F1170(pcVar7);
          g_currentExceptionFrame = local_12c.previous;
        }
        else {
          g_currentExceptionFrame = local_12c.previous;
        }
      }
      BVar9 = st::external_00000071(local_18,st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_26c));
    } while (BVar9 != 0);
  }
  if (local_18 != (HANDLE)0xffffffff) {
    st::external_00000072(local_18);
  }
  uVar21 = this_00->field_1C9F->elementSize;
  if ((int)(this_00->field_1C97->elementSize + uVar21) < 1) {
    this_00->field_002D = 0x22;
    *(undefined4 *)&this_00->field_0x31 = 0;
    st::fn_006E6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
    uVar28 = this_00->field_1A6C;
    this_00->field_002D = 5;
    goto LAB_005b07ac;
  }
  if (1 < uVar21) {
    local_10 = uVar21 - 1;
    do {
      local_1c = 0;
      uVar21 = 0;
      if (local_10 != 0) {
        do {
          pDVar27 = this_00->field_1C9F;
          uVar16 = uVar21 + 1;
          if ((int)uVar16 < (int)pDVar27->elementSize) {
            pcVar18 = *(char **)(pDVar27->growCapacity + 4 + uVar21 * 4);
          }
          else {
            pcVar18 = nullptr;
          }
          if ((int)uVar21 < (int)pDVar27->elementSize) {
            pcVar12 = *(char **)(pDVar27->growCapacity + uVar21 * 4);
          }
          else {
            pcVar12 = nullptr;
          }
          local_EAX_2257 = st::fn_0072E620(pcVar12,pcVar18);
          if (0 < local_EAX_2257) {
            st::fn_006B8200((AnonShape_006B8200_800652FF *)this_00->field_1C9F,uVar21,uVar16);
            local_1c = 1;
          }
          uVar21 = uVar16;
        } while (uVar16 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar21 = this_00->field_1C97->elementSize;
  if (1 < uVar21) {
    CVar2 = this_00->field_1A5F;
    if (CVar2 < 9) {
LAB_005b0639:
      local_5 = false;
    }
    else if (CVar2 < 0xd) {
      local_5 = true;
    }
    else {
      if (CVar2 != 0x13) goto LAB_005b0639;
      local_5 = DAT_00803400 == '\f';
    }
    local_10 = uVar21 - 1;
    do {
      uVar21 = 0;
      local_1c = 0;
      if (local_10 != 0) {
        do {
          if (local_5 == false) {
            pDVar27 = this_00->field_1C97;
            if ((int)(uVar21 + 1) < (int)pDVar27->elementSize) {
              pcVar18 = *(char **)(pDVar27->growCapacity + 4 + uVar21 * 4);
            }
            else {
              pcVar18 = nullptr;
            }
            if ((int)uVar21 < (int)pDVar27->elementSize) {
              pcVar12 = *(char **)(pDVar27->growCapacity + uVar21 * 4);
            }
            else {
              pcVar12 = nullptr;
            }
            local_EAX_2515 = st::fn_0072E620(pcVar12,pcVar18);
            if (0 < local_EAX_2515) {
              pDVar27 = this_00->field_1C97;
              goto LAB_005b06e8;
            }
          }
          else {
            st::fn_006ACC70(this_00->field_1C9B,uVar21,&local_3c);
            st::fn_006ACC70(this_00->field_1C9B,uVar21 + 1,&local_44);
            LVar11 = st::external_0000006B(&local_3c,&local_44);
            if (LVar11 < 0) {
              st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)this_00->field_1C9B,uVar21,uVar21 + 1);
              pDVar27 = this_00->field_1C97;
LAB_005b06e8:
              st::fn_006B8200((AnonShape_006B8200_800652FF *)pDVar27,uVar21,uVar21 + 1);
              local_1c = 1;
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < local_10);
      }
    } while (local_1c != 0);
  }
  uVar21 = st::machine_word_boundary_cast<uint>(this_00->field_1C9F->elementSize + this_00->field_1C97->elementSize);
  this_00->field_002D = 0x28;
  *(uint *)&this_00->field_0x31 = uVar21;
  st::fn_006E6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
  this_00->field_002D = 0x20;
  *(undefined4 *)&this_00->field_0x31 = 1;
  st::fn_006E6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
  this_00->field_002D = 0x22;
  if (uVar21 <= param_1) {
    param_1 = uVar21 - 1;
  }
  *(uint *)&this_00->field_0x31 = param_1;
  uVar28 = this_00->field_1A6C;
LAB_005b07ac:
  st::fn_006E6080(this_00,2,uVar28,(undefined4 *)&this_00->field_0x1d);
  this_00->field_1A64 = 1;
  this_00->field_1A68 = this_00->field_0061;
  g_currentExceptionFrame = local_a4.previous;
  return;
}

// 005B0BA0 ChooseMapTy::GetMessage
#line 4 "decomp/ST.exe/functions/005B0BA0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::GetMessage

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402E4B|005B0BA0; family_names=ChooseMapTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:24,18:5,1c:0}

   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

int __thiscall st::fn_005B0BA0(ChooseMapTy *this,STMessage *message)

{
  char cVar1;
  ChooseMapTy_field_1A5FState CVar3;
  byte bVar4;
  STMessageId SVar5;
  int *piVar6;
  dword dVar7;
  DArrayTy *pDVar8;
  StartSystemTy *this_00;
  ChooseMapTy *this_01;
  undefined1 uVar10;
  bool bVar11;
  DWORD DVar11;
  int local_EAX_52;
  char *pcVar12;
  HANDLE pvVar12;
  BITMAPINFO *pBVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar13;
  int iVar25;
  MMsgTy *pMVar14;
  uint uVar15;
  undefined4 uVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  UINT resourceId;
  char *pcVar20;
  char *pcVar21;
  byte *pbVar23;
  bool bVar24;
  int iVar26;
  int iVar27;
  uint uVar28;
  char local_6e0 [64];
  char local_6a0 [1044];
  byte local_28c [260];
  byte local_188 [260];
  InternalExceptionFrame local_84;
  ChooseMapTy *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  char *local_c;
  byte *local_8;
  byte CVar2;
  char *pcVar19;

  local_40 = this;
  DVar11 = st::fn_006E51B0(this->field_0010);
  this->field_0061 = DVar11;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_EAX_52 = st::fn_0072D7F0(local_84.jumpBuffer,0);
  this_01 = local_40;
  if (local_EAX_52 != 0) {
    g_currentExceptionFrame = local_84.previous;
    iVar25 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x6f7,0,local_EAX_52,
                                st::mutable_c_string("%s"),"ChooseMapTy::GetMessage");
    if (iVar25 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_52,0,st::mutable_c_string("E:\\__titans\\Start\\load_obj.cpp"),0x6f7);
    return 0xffff;
  }
  st::fn_00402563(local_40,message);
  st::fn_00402937(g_startSystem_0081176C,message);
  SVar5 = message->id;
  if (SVar5 < MESS_WAITTY_6943) {
    if (SVar5 == MESS_CHOOSEMAPTY_6942) {
      this_01->field_0045 = 0x200;
      this_01->field_0049 = 0;
      this_01->field_004D = 0x6102;
      this_01->field_0051 = static_cast<undefined4>((message->arg0).u32);
      st::fn_00404DB8((MTaskTy *)this_01);
      goto cf_common_exit_005B2053;
    }
    if (MESS_CHOOSEMAPTY_6327 < SVar5) {
      if (SVar5 < MESS_SHARED_6341) {
        if (SVar5 == MESS_SETTMAPMTY_6340) {
          st::fn_004031D4
                    ((MMMObjTy *)this_01,
                     (RecoveredRecord_MMMObjTy_005B6560 *)&this_01->field_1A5B->field_055C,
                     (int)message,0);
        }
        else {
          switch(SVar5) {
          case MESS_SHARED_6332:
            st::fn_00404D72
                      (g_startSystem_0081176C,(AnonShape_005DE050_5BD86458 *)message);
            break;
          case MESS_WAITTY_6333:
            st::fn_004031D4
                      ((MMMObjTy *)this_01,
                       (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_038D,
                       (int)message,0);
            break;
          case MESS_SHARED_6334:
            st::fn_004031D4
                      ((MMMObjTy *)this_01,
                       (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_041E,
                       (int)message,0);
            break;
          case MESS_WAITTY_6335:
            g_startSystem_0081176C->field_04CF =
                 *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
            if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
              st::fn_006B3730
                        ((uint *)g_startSystem_0081176C->field_04F7,
                         g_startSystem_0081176C->field_04B3,g_startSystem_0081176C->field_04B7,
                         g_startSystem_0081176C->field_04CB,g_startSystem_0081176C->field_04CF);
            }
          }
        }
      }
      else if (SVar5 == MESS_SHARED_6341) {
        st::fn_004031D4
                  ((MMMObjTy *)this_01,
                   (RecoveredRecord_MMMObjTy_005B6560 *)&this_01->field_1A5B->field_05ED,
                   (int)message,0);
      }
      else if (SVar5 == MESS_PRIVIDERTY_693F) {
        st::fn_00404D45(this_01);
      }
      else if (SVar5 == MESS_SHARED_6940) {
        st::fn_00404084(this_01);
      }
      goto cf_common_exit_005B2053;
    }
    if (SVar5 == MESS_CHOOSEMAPTY_6327) {
      piVar6 = st::pointer_boundary_cast<int *>((message->arg0).ptr);
      resourceId = 0x2342;
      st::fn_00404C0F(this_01,(RecoveredSourceFamily_dibcopy *)this_01->field_1C8B,piVar6);
      switch(this_01->field_1A5F) {
      case CASE_1:
      case CASE_2:
      case CASE_4:
      case CASE_5:
        resourceId = 0x2342;
        if (*piVar6 == 1) {
          resourceId = 0x2341;
        }
        break;
      case CASE_9:
      case CASE_A:
      case CASE_B:
        if (*piVar6 == 1) {
          resourceId = 0x233c;
        }
        else if (*piVar6 == 2) {
          resourceId = 0x233d;
        }
        else {
          resourceId = 0x233f;
        }
      }
      st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_01->field_1C8B,0,
                       *piVar6 * 0x7c + -0x7c,0,0x7a,
                       this_01->field_1C8B->field_0008 -
                       ((-(uint)(piVar6[1] != 1) & 0xfffffffd) + 3));
      uVar28 = 2;
      iVar27 = -1;
      iVar26 = -1;
      pcVar12 = st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
      st::fn_007119C0(g_startSystem_0081176C->field_0034,pcVar12,iVar26,iVar27,uVar28);
      st::fn_006B35D0((int *)g_ddxContext_008075A8,this_01->field_1C87);
      goto cf_common_exit_005B2053;
    }
    if (SVar5 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
      if (SVar5 == MESS_SHARED_6105) {
        this_01->field_0045 = 0x200;
        this_01->field_0049 = 0;
        this_01->field_004D = message->id;
        this_01->field_0051 = 0;
        this_01->field_0055 = 0;
        st::fn_00404DB8((MTaskTy *)this_01);
      }
      else {
        switch(SVar5) {
        case MESS_ID_NONE:
          st::fn_004029A5(this_01);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case MESS_ID_CREATE:
          st::fn_00402CD4(this_01,*(undefined1 *)((message->arg0).u32 + 0x14),
                        *(ChooseMapTy_InitChooseMap_param_2Enum *)((message->arg0).u32 + 0x18));
          break;
        case MESS_SHARED_0003:
          st::fn_0040417E(this_01);
          break;
        case MESS_SHARED_0005:
          st::fn_00402725(this_01,'\0');
        }
      }
      goto cf_common_exit_005B2053;
    }
    if (SVar5 < MESS_STAPPC_6122) {
      if (SVar5 < MESS_SHARED_6120) {
        if (SVar5 == MESS_SHARED_610A) {
          this_01->field_0045 = 0x200;
          this_01->field_0049 = 0;
          this_01->field_004D = 0x610a;
          this_01->field_0051 = 7;
          st::fn_00404DB8((MTaskTy *)this_01);
        }
      }
      else {
        this_01->field_0045 = 0x200;
        this_01->field_0049 = 0;
        this_01->field_004D = message->id;
        this_01->field_0051 = static_cast<undefined4>((message->arg0).u32);
        this_01->field_0055 = static_cast<undefined4>((message->arg1).u32);
        st::fn_00404DB8((MTaskTy *)this_01);
      }
      goto cf_common_exit_005B2053;
    }
    if (SVar5 != MESS_SHARED_6326) goto cf_common_exit_005B2053;
    pbVar18 = st::pointer_boundary_cast<byte *>((message->arg0).ptr);
    switch(this_01->field_1A5F) {
    case CASE_1:
    case CASE_2:
      if (*(int *)pbVar18 == 1) {
        this_01->field_1A5F = CASE_1;
      }
      else {
        this_01->field_1A5F = CASE_2;
      }
      g_startSystem_0081176C->field_02EB = *pbVar18;
      if (this_01->field_1A60 == 0) goto cf_common_exit_005B0DCE;
      goto LAB_005b0dc0;
    default:
      goto cf_common_exit_005B0DCE;
    case CASE_4:
    case CASE_5:
      if (*(int *)pbVar18 == 1) {
        this_01->field_1A5F = CASE_4;
      }
      else {
        this_01->field_1A5F = CASE_5;
      }
      g_startSystem_0081176C->field_02EB = *pbVar18;
      iVar26 = this_01->field_1A60;
      break;
    case CASE_9:
    case CASE_A:
    case CASE_B:
      if (*(int *)pbVar18 == 1) {
        this_01->field_1A5F = CASE_9;
      }
      else if (*(int *)pbVar18 == 2) {
        this_01->field_1A5F = CASE_A;
      }
      else {
        this_01->field_1A5F = CASE_B;
      }
      g_startSystem_0081176C->field_02EA = *pbVar18;
      iVar26 = this_01->field_1A60;
    }
    if (iVar26 != 0) {
LAB_005b0dc0:
      st::fn_00403B0C(this_01,this_01->field_1C93);
    }
cf_common_exit_005B0DCE:
    st::fn_00404BF1(this_01,10,'\x01',-1);
    goto cf_common_exit_005B2053;
  }
  if (MESS_CHOOSEMAPTY_6956 < SVar5) {
    if (MESS_SHARED_C0A2 < SVar5) goto cf_common_exit_005B2053;
    if (SVar5 != MESS_SHARED_C0A2) {
      switch(SVar5) {
      case MESS_SHARED_8160:
        (message->arg1).u32 = 0x13;
        break;
      case MESS_SIDTY_8161:
        uVar28 = (uint)(message->arg0).words.low;
        dVar7 = this_01->field_1C9F->elementSize;
        if ((int)uVar28 < (int)dVar7) {
          local_8 = *(byte **)(this_01->field_1C9F->growCapacity + uVar28 * 4);
        }
        else {
          iVar26 = uVar28 - dVar7;
          if (iVar26 < (int)this_01->field_1C97->elementSize) {
            local_8 = *(byte **)(this_01->field_1C97->growCapacity + iVar26 * 4);
          }
          else {
            local_8 = nullptr;
          }
        }
        local_c = nullptr;
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_01->field_1C7B,0,0,
                     (uint)(message->arg1).words.high,
                     ((RecoveredSourceFamily_dibcopy *)this_01->field_1C7B)->field_0004,0x13,0);
        if ((int)(uint)(message->arg0).words.low < (int)this_01->field_1C9F->elementSize) {
          pbVar19 = st::pointer_boundary_cast<byte *>(&DAT_007cc8b4);
          pbVar18 = local_8;
          do {
            bVar4 = *pbVar18;
            bVar24 = bVar4 < *pbVar19;
            if (bVar4 != *pbVar19) {
LAB_005b1d83:
              uVar28 = (uint)(1 - bVar24 == (uint)(bVar24 != 0));
              goto LAB_005b1da4;
            }
            if (bVar4 == 0) break;
            bVar4 = pbVar18[1];
            bVar24 = bVar4 < pbVar19[1];
            if (bVar4 != pbVar19[1]) goto LAB_005b1d83;
            pbVar18 = pbVar18 + 2;
            pbVar19 = pbVar19 + 2;
          } while (bVar4 != 0);
          uVar28 = 1;
        }
        else {
          uVar28 = (-(uint)(this_01->field_1C97->elementSize != 0) & 3) - 1;
        }
LAB_005b1da4:
        pcVar17 = local_c;
        if (-1 < (int)uVar28) {
          pBVar13 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_01->field_1C7F,uVar28);
          pcVar17 = (char *)(pBVar13->bmiHeader).biWidth;
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_01->field_1C7B,2,
                 (0x13 - (pBVar13->bmiHeader).biHeight) / 2 + (uint)(message->arg1).words.high,
                 '\x06',(byte *)pBVar13);
        }
        st::fn_00710A90(g_startSystem_0081176C->field_0030,(int)this_01->field_1C7B,0,
                         (int)(pcVar17 + 4),(uint)(message->arg1).words.high,
                         (this_01->field_1C7B->field_0004 - (int)pcVar17) + -4,0x13);
        st::fn_007119C0(g_startSystem_0081176C->field_0030,(char *)local_8,2,-1,
                       (-(uint)((message->arg0).words.high != 0) & 2) + 1);
        uVar28 = (uint)(message->arg1).words.high;
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,(&this_01->field_1C23)[uVar28 / 0x13],0xfffffffe,
                   0x114,uVar28 + 0x3f);
        break;
      case MESS_OPTPANELTY_8162:
        uVar28 = this_01->field_1C9F->elementSize;
        if ((message->arg0).u32 < uVar28) {
          if (this_01->field_1A5F == CASE_3) {
            this_01->field_002D = 0x6956;
            this_01->st::fn_00401280((STMessage *)&this_01->field_0x1d);
          }
          else {
            uVar15 = (uint)(message->arg0).words.low;
            if ((int)uVar15 < (int)uVar28) {
              pbVar18 = *(byte **)(this_01->field_1C9F->growCapacity + uVar15 * 4);
            }
            else {
              pbVar18 = nullptr;
            }
            pbVar23 = st::pointer_boundary_cast<byte *>(&DAT_007cc8b4);
            pbVar19 = pbVar18;
            do {
              bVar4 = *pbVar19;
              bVar24 = bVar4 < *pbVar23;
              if (bVar4 != *pbVar23) {
LAB_005b1b67:
                iVar26 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
                goto LAB_005b1b6c;
              }
              if (bVar4 == 0) break;
              bVar4 = pbVar19[1];
              bVar24 = bVar4 < pbVar23[1];
              if (bVar4 != pbVar23[1]) goto LAB_005b1b67;
              pbVar19 = pbVar19 + 2;
              pbVar23 = pbVar23 + 2;
            } while (bVar4 != 0);
            iVar26 = 0;
LAB_005b1b6c:
            if (iVar26 == 0) {
              pcVar17 = &this_01->field_1DA7;
              st::fn_006B78C0(pcVar17,pcVar17);
              st::fn_0072E730
                        ((byte *)pcVar17,local_188,local_28c,nullptr,nullptr);
              st::fn_0072F110
                        (pcVar17,(char *)local_188,(char *)local_28c,nullptr,nullptr);
            }
            else {
              uVar28 = 0xffffffff;
              do {
                pbVar19 = pbVar18;
                if (uVar28 == 0) break;
                uVar28 = uVar28 - 1;
                pbVar19 = pbVar18 + 1;
                bVar4 = *pbVar18;
                pbVar18 = pbVar19;
              } while (bVar4 != 0);
              local_8 = (byte *)~uVar28;
              iVar26 = -1;
              pcVar17 = &this_01->field_1DA7;
              do {
                pcVar20 = pcVar17;
                if (iVar26 == 0) break;
                iVar26 = iVar26 + -1;
                pcVar20 = pcVar17 + 1;
                cVar1 = *pcVar17;
                pcVar17 = pcVar20;
              } while (cVar1 != '\0');
              pbVar18 = pbVar19 + -(int)local_8;
              pbVar19 = (byte *)(pcVar20 + -1);
              for (uVar28 = (uint)local_8 >> 2; uVar28 != 0; uVar28 = uVar28 - 1) {
                *(undefined4 *)pbVar19 = *(undefined4 *)pbVar18;
                pbVar18 = pbVar18 + 4;
                pbVar19 = pbVar19 + 4;
              }
              for (uVar28 = (uint)local_8 & 3; uVar28 != 0; uVar28 = uVar28 - 1) {
                *pbVar19 = *pbVar18;
                pbVar18 = pbVar18 + 1;
                pbVar19 = pbVar19 + 1;
              }
            }
            pcVar17 = &this_01->field_1DA7;
            st::fn_006B78C0(pcVar17,pcVar17);
            if (this_01->field_1C8F != (HANDLE)0x0) {
              st::external_00000060(this_01->field_1C8F);
            }
            pvVar12 = st::external_00000074(pcVar17,0,1);
            this_01->field_1C8F = pvVar12;
            if (pvVar12 == (HANDLE)0xffffffff) {
              this_01->field_1C8F = (HANDLE)0x0;
            }
            st::fn_006B8280(pcVar17,pcVar17);
            st::fn_00403B0C(this_01,this_01->field_1C93);
          }
        }
        else {
          switch(this_01->field_1A5F) {
          case CASE_1:
          case CASE_2:
            this_01->field_002D = 0x694a;
            this_01->st::fn_00401280((STMessage *)&this_01->field_0x1d);
            break;
          case CASE_4:
          case CASE_5:
          case CASE_C:
          case CASE_13:
            this_01->field_002D = 0x694e;
            this_01->st::fn_00401280((STMessage *)&this_01->field_0x1d);
            break;
          case CASE_9:
          case CASE_A:
          case CASE_B:
            this_01->field_002D = 0x6949;
            this_01->st::fn_00401280((STMessage *)&this_01->field_0x1d);
          }
        }
        break;
      case MESS_SIDTY_8163:
        this_01->field_1C93 = static_cast<undefined4>((message->arg0).u32);
        this_01->field_1A64 = 1;
        this_01->field_1A68 = this_01->field_0061;
        break;
      case MESS_OPTPANELTY_8164:
        st::fn_004031D4
                  ((MMMObjTy *)this_01,(RecoveredRecord_MMMObjTy_005B6560 *)&this_01->field_1A70,
                   (int)message,0);
        break;
      case MESS_OPTPANELTY_8165:
        st::fn_004031D4
                  ((MMMObjTy *)this_01,(RecoveredRecord_MMMObjTy_005B6560 *)&this_01->field_1B01,
                   (int)message,0);
        break;
      case MESS_SHARED_8166:
        uVar28 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
        this_01->field_1BB2 = uVar28;
        if (this_01->field_1B96 != 0xffffffff) {
          st::fn_006B3730
                    ((uint *)this_01->field_1BDA,this_01->field_1B96,this_01->field_1B9A,
                     this_01->field_1BAE,uVar28);
        }
      }
      goto cf_common_exit_005B2053;
    }
    iVar26 = st::fn_004025F4((int)this_01->field_1A5B);
    if (iVar26 == 0) {
      if (DAT_008067a0 != '\0') {
        pDVar8 = this_01->field_1A5B->field_0686;
        if ((int)pDVar8->elementSize < 1) {
          pcVar17 = nullptr;
        }
        else {
          pcVar17 = *(char **)pDVar8->growCapacity;
        }
        bVar11 = st::fn_00401B1D(pcVar17);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,bVar11) != 0) {
          pDVar8 = this_01->field_1A5B->field_0686;
          if ((int)pDVar8->elementSize < 1) {
            st::external_00000107((CFsgsConnection *)&DAT_00802a90,nullptr);
          }
          else {
            st::external_00000107
                      ((CFsgsConnection *)&DAT_00802a90,*(char **)pDVar8->growCapacity);
          }
          goto LAB_005b2011;
        }
      }
      pcVar17 = local_6e0;
      for (iVar26 = 0x114; iVar26 != 0; iVar26 = iVar26 + -1) {
        pcVar17[0] = '\0';
        pcVar17[1] = '\0';
        pcVar17[2] = '\0';
        pcVar17[3] = '\0';
        pcVar17 = pcVar17 + 4;
      }
      *pcVar17 = '\0';
      uVar28 = 0xffffffff;
      pcVar17 = &CHAR_00h_00807ddd;
      do {
        pcVar20 = pcVar17;
        if (uVar28 == 0) break;
        uVar28 = uVar28 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar28 = ~uVar28;
      this_00 = this_01->field_1A5B;
      pcVar17 = pcVar20 + -uVar28;
      pcVar20 = local_6e0;
      memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
      uVar15 = 0;
      pDVar8 = this_00->field_0686;
      if ((int)pDVar8->elementSize < 1) {
        pcVar17 = nullptr;
      }
      else {
        pcVar17 = *(char **)pDVar8->growCapacity;
      }
      uVar28 = 0xffffffff;
      do {
        pcVar20 = pcVar17;
        if (uVar28 == 0) break;
        uVar28 = uVar28 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar28 = ~uVar28;
      pcVar17 = pcVar20 + -uVar28;
      pcVar20 = local_6a0;
      memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
      uVar15 = 0;
      local_c = local_6a0;
      st::fn_00402BBC(this_00,(int)local_6e0);
      st::fn_00715360(g_int_00811764,0,'\x1b',local_6e0,0x451,1,0xffffffff);
    }
LAB_005b2011:
    st::fn_006B6020(this_01->field_1A5B->field_0686,0,&CHAR_00h_008016a0);
    this_01->field_002D = 0x33;
    *(DArrayTy **)&this_01->field_0x31 = this_01->field_1A5B->field_0686;
    st::fn_006E6080(this_01,2,this_01->field_1A5B->field_054C,(undefined4 *)&this_01->field_0x1d);
    goto cf_common_exit_005B2053;
  }
  if (SVar5 == MESS_CHOOSEMAPTY_6956) {
    if ((((this_01->field_0065 != '\x01') || (CVar3 = this_01->field_1A5F, CVar3 == CASE_C)) ||
        (CVar3 == CASE_4)) || ((CVar3 == CASE_5 || (CVar3 == CASE_13))))
    goto cf_common_exit_005B2053;
    this_01->field_002D = 0x26;
    st::fn_006E6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    if (this_01->field_1C9F->elementSize <= *(uint *)&this_01->field_0x31)
    goto cf_common_exit_005B2053;
    if (this_01->field_1A64 != 0) {
      st::fn_004042B4(this_01,this_01->field_1C93);
      this_01->field_1A64 = 0;
    }
    STPiece<0,1>(DAT_008087a0) = this_01->field_1A5F;
    uVar28 = 0xffffffff;
    pcVar17 = &CHAR_00h_0080ed16;
    do {
      pcVar20 = pcVar17;
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar28 = ~uVar28;
    pcVar17 = pcVar20 + -uVar28;
    pcVar20 = (char *)&DAT_0080f33a;
    memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
    uVar15 = 0;
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->elementSize) {
      uVar16 = *(undefined4 *)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      uVar16 = 0;
    }
    st::external_00000080(st::pointer_boundary_cast<LPSTR>(&CHAR_00h_0080ef1e),st::mutable_c_string("%s%s\\%s"),st_global_0079C054,uVar16,
              &CHAR_00h_0080ed16);
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->elementSize) {
      uVar16 = *(undefined4 *)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      uVar16 = 0;
    }
    st::external_00000080(st::pointer_boundary_cast<LPSTR>(&CHAR_00h_0080ed16),st::mutable_c_string("%s%s\\%s"),&this_01->field_1DA7,uVar16,&DAT_0080f33a);
    STPiece<0,1>(DAT_008087a0) = CASE_3;
    iVar26 = st::fn_00404B4C((STAppC *)&DAT_00807620,1);
    if (iVar26 == 0) goto cf_common_exit_005B2053;
    uVar28 = 0xffffffff;
    pcVar17 = &CHAR_00h_00807784;
    do {
      pcVar20 = pcVar17;
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar28 = ~uVar28;
    pcVar17 = pcVar20 + -uVar28;
    pcVar20 = &CHAR_00h_0080f22a;
    memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
    uVar15 = 0;
    st::fn_006B8280(&CHAR_00h_0080f22a,&CHAR_00h_0080f22a);
    if (*(int *)&this_01->field_0x31 < (int)this_01->field_1C9F->elementSize) {
      pcVar17 = *(char **)(this_01->field_1C9F->growCapacity + *(int *)&this_01->field_0x31 * 4);
    }
    else {
      pcVar17 = nullptr;
    }
    uVar28 = 0xffffffff;
    do {
      pcVar20 = pcVar17;
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar28 = ~uVar28;
    iVar26 = -1;
    pcVar17 = &CHAR_00h_0080f22a;
    do {
      pcVar21 = pcVar17;
      if (iVar26 == 0) break;
      iVar26 = iVar26 + -1;
      pcVar21 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar1 != '\0');
    pcVar17 = pcVar20 + -uVar28;
    pcVar20 = pcVar21 + -1;
    memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
    uVar15 = 0;
    st::fn_006B8280(&CHAR_00h_0080f22a,&CHAR_00h_0080f22a);
    uVar28 = 0xffffffff;
    pcVar19 = st_global_0079C05C;
    do {
      pcVar17 = pcVar19;
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      pcVar17 = pcVar19 + 1;
      cVar1 = *pcVar19;
      pcVar19 = pcVar17;
    } while (cVar1 != '\0');
    uVar28 = ~uVar28;
    iVar26 = -1;
    pcVar20 = &CHAR_00h_0080f22a;
    do {
      pcVar21 = pcVar20;
      if (iVar26 == 0) break;
      iVar26 = iVar26 + -1;
      pcVar21 = pcVar20 + 1;
      cVar1 = *pcVar20;
      pcVar20 = pcVar21;
    } while (cVar1 != '\0');
    pcVar17 = pcVar17 + -uVar28;
    pcVar20 = pcVar21 + -1;
    memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
    uVar15 = 0;
    memset(&DAT_0080c522, 0, 0x27f0); /* compiler bulk-zero initialization */
    st::fn_004036C0(this_01,0x6948,0,0);
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    this_01->field_20B7 = 0;
    this_01->CloseButtons();
    pMVar14 = this_01->field_1A5B->field_02E6;
LAB_005b1644:
    if (pMVar14 != nullptr) {
      st::fn_00401FA5(pMVar14,1,0,1);
    }
    goto cf_common_exit_005B2053;
  }
  switch(SVar5) {
  case MESS_WAITTY_6943:
    st::fn_004036C0(this_01,0x6942,(message->arg0).u32,0);
    if (DAT_00811768 == '\x01') {
      DAT_00811768 = '\x02';
    }
    CVar3 = this_01->field_1A5F;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    if (((CVar3 == CASE_C) || (CVar3 == CASE_4)) || ((CVar3 == CASE_5 || (CVar3 == CASE_13)))) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    this_01->field_20B7 = uVar10;
    this_01->CloseButtons();
    pMVar14 = this_01->field_1A5B->field_02E6;
    if (pMVar14 != nullptr) {
      st::fn_00401FA5(pMVar14,1,0,1);
    }
    break;
  case MESS_SHARED_6940|MESS_SHARED_0008:
    STPiece<0,1>(DAT_008087a0) = this_01->field_1A5F;
    switch(this_01->field_1A5F) {
    case CASE_1:
    case CASE_2:
    case CASE_6:
    case CASE_A:
      DAT_00808783 = 2;
      break;
    case CASE_3:
    case CASE_9:
    case CASE_B:
      DAT_00808783 = 1;
      break;
    case CASE_4:
    case CASE_5:
    case CASE_7:
    case CASE_C:
    case CASE_13:
      DAT_00808783 = 3;
    }
    this_01->field_0049 = 1;
    if (this_01->field_1A5F == CASE_3) {
      this_01->field_004D = 0x7101;
      this_01->field_0051 = 3;
      this_01->field_0055 = 0;
      st::fn_00404DB8((MTaskTy *)this_01);
    }
    else {
      this_01->field_004D = 0x60ff;
      st::fn_00404DB8((MTaskTy *)this_01);
    }
    break;
  case MESS_FSGSTY_6949:
  case MESS_FSGSTY_694A:
    if ((((this_01->field_0065 != '\x01') || (CVar3 = this_01->field_1A5F, CVar3 == CASE_C)) ||
        (CVar3 == CASE_4)) || ((CVar3 == CASE_5 || (CVar3 == CASE_13)))) break;
    this_01->field_002D = 0x26;
    st::fn_006E6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar28 = this_01->field_1C9F->elementSize;
    if ((*(uint *)&this_01->field_0x31 < uVar28) ||
       ((local_8 = (byte *)(*(uint *)&this_01->field_0x31 - uVar28), (int)local_8 < 0 ||
        ((int)this_01->field_1C97->elementSize <= (int)local_8)))) break;
    uVar28 = 0xffffffff;
    pcVar17 = &this_01->field_1DA7;
    do {
      pcVar20 = pcVar17;
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar28 = ~uVar28;
    pcVar17 = pcVar20 + -uVar28;
    pcVar20 = &CHAR_00h_0080ed16;
    memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
    uVar15 = 0;
    if ((8 < this_01->field_1A5F) && (this_01->field_1A5F < CASE_C)) {
      uVar28 = 0xffffffff;
      pcVar17 = st::pointer_boundary_cast<char *>(PTR_DAT_0079c06c);
      do {
        pcVar20 = pcVar17;
        if (uVar28 == 0) break;
        uVar28 = uVar28 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar28 = ~uVar28;
      iVar26 = -1;
      pcVar17 = &CHAR_00h_0080ed16;
      do {
        pcVar21 = pcVar17;
        if (iVar26 == 0) break;
        iVar26 = iVar26 + -1;
        pcVar21 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar21;
      } while (cVar1 != '\0');
      pcVar17 = pcVar20 + -uVar28;
      pcVar20 = pcVar21 + -1;
      memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
      uVar15 = 0;
      _DAT_0080f32e = 1;
      DAT_0080879c = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->elementSize) {
      pcVar17 = *(char **)(this_01->field_1C97->growCapacity + (int)local_8 * 4);
    }
    else {
      pcVar17 = nullptr;
    }
    uVar28 = 0xffffffff;
    do {
      pcVar20 = pcVar17;
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar28 = ~uVar28;
    iVar26 = -1;
    pcVar17 = &CHAR_00h_0080ed16;
    do {
      pcVar21 = pcVar17;
      if (iVar26 == 0) break;
      iVar26 = iVar26 + -1;
      pcVar21 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar1 != '\0');
    pcVar17 = pcVar20 + -uVar28;
    pcVar20 = pcVar21 + -1;
    memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
    uVar15 = 0;
    uVar28 = 0xffffffff;
    pcVar17 = &CHAR_00h_0080ed16;
    do {
      pcVar20 = pcVar17;
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar28 = ~uVar28;
    pcVar17 = pcVar20 + -uVar28;
    pcVar20 = (char *)&DAT_0080ee1a;
    memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
    uVar28 = 0xffffffff;
    pcVar17 = &CHAR_00h_00807680;
    do {
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar1 != '\0');
    uVar15 = 0xffffffff;
    pcVar17 = (char *)((int)&DAT_0080ed12 + ~uVar28 + 3);
    do {
      pcVar20 = pcVar17;
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar15 = ~uVar15;
    pcVar17 = pcVar20 + -uVar15;
    pcVar20 = &CHAR_00h_0080ef1e;
    memmove(pcVar20, pcVar17, uVar15); /* compiler REP MOVS byte copy */
    uVar15 = 0;
    if (this_01->field_1A64 != 0) {
      st::fn_004042B4(this_01,this_01->field_1C93);
      this_01->field_1A64 = 0;
    }
    STPiece<0,1>(DAT_008087a0) = this_01->field_1A5F;
    if ((this_01->field_1A5F != CASE_0) && (this_01->field_1A5F < CASE_3)) {
      st::fn_004025B3((STAppC *)&DAT_00807620);
      st::fn_004039AE((STAppC *)&DAT_00807620);
    }
    if (this_01->field_1A5F == CASE_1) {
      st::fn_004025B8((STAppC *)&DAT_00807620);
    }
    st::fn_004036C0(this_01,0x6948,0,0);
    CVar3 = this_01->field_1A5F;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    if ((((CVar3 == CASE_C) || (CVar3 == CASE_4)) || (CVar3 == CASE_5)) || (CVar3 == CASE_13)) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    this_01->field_20B7 = uVar10;
    this_01->CloseButtons();
    pMVar14 = this_01->field_1A5B->field_02E6;
    goto LAB_005b1644;
  case 0x694b:
    CVar3 = this_01->field_1A5F;
    if (((CVar3 != CASE_C) && (CVar3 != CASE_4)) && ((CVar3 != CASE_5 && (CVar3 != CASE_13)))) {
      this_01->field_002D = 0x26;
      st::fn_006E6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
      uVar28 = this_01->field_1C9F->elementSize;
      if (((uVar28 <= *(uint *)&this_01->field_0x31) &&
          (iVar26 = *(uint *)&this_01->field_0x31 - uVar28, -1 < iVar26)) &&
         (iVar26 < (int)this_01->field_1C97->elementSize)) {
        uVar28 = 0xffffffff;
        pcVar17 = &this_01->field_1DA7;
        do {
          pcVar20 = pcVar17;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar20 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar1 != '\0');
        uVar28 = ~uVar28;
        pcVar17 = pcVar20 + -uVar28;
        pcVar20 = &CHAR_00h_0080ed16;
        memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        if (iVar26 < (int)this_01->field_1C97->elementSize) {
          pcVar17 = *(char **)(this_01->field_1C97->growCapacity + iVar26 * 4);
        }
        else {
          pcVar17 = nullptr;
        }
        uVar28 = 0xffffffff;
        do {
          pcVar20 = pcVar17;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar20 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar1 != '\0');
        uVar28 = ~uVar28;
        iVar26 = -1;
        pcVar17 = &CHAR_00h_0080ed16;
        do {
          pcVar21 = pcVar17;
          if (iVar26 == 0) break;
          iVar26 = iVar26 + -1;
          pcVar21 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar21;
        } while (cVar1 != '\0');
        pcVar17 = pcVar20 + -uVar28;
        pcVar20 = pcVar21 + -1;
        memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        uVar28 = 0xffffffff;
        pcVar17 = &CHAR_00h_0080ed16;
        do {
          pcVar20 = pcVar17;
          if (uVar28 == 0) break;
          uVar28 = uVar28 - 1;
          pcVar20 = pcVar17 + 1;
          cVar1 = *pcVar17;
          pcVar17 = pcVar20;
        } while (cVar1 != '\0');
        uVar28 = ~uVar28;
        pcVar17 = pcVar20 + -uVar28;
        pcVar20 = (char *)&DAT_0080ee1a;
        memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
        uVar15 = 0;
        if (this_01->field_1A64 != 0) {
          st::fn_004042B4(this_01,this_01->field_1C93);
          this_01->field_1A64 = 0;
        }
        CVar2 = this_01->field_1A5F;
        if ((CVar2 != 0) && (CVar2 < 3)) {
          st::fn_004036C0(this_01,0x6120,(uint)CVar2,(uint)CVar2);
          this_01->field_0x20b3 = 1;
          this_01->field_20B7 = 0;
          this_01->field_0x20b6 = 0;
          this_01->field_0x20b5 = 0;
          this_01->field_0x20b4 = 0;
          this_01->CloseButtons();
          if (this_01->field_1A5B->field_02E6 != nullptr) {
            local_38 = 0;
            local_3c = 0x10001;
            local_34 = 0;
            local_30 = 0;
            st::fn_00401A9B(this_01->field_1A5B->field_02E6,&local_3c);
          }
        }
      }
    }
    break;
  case 0x694c:
    switch((uint)this_01->field_1A5F) {
    case 4:
    case 5:
    case 0xc:
    case 0x13:
      uVar28 = 7;
      uVar16 = 0x6121;
      break;
    default:
      uVar28 = 6;
      uVar16 = 0x6120;
    }
    st::fn_004036C0(this_01,uVar16,uVar28,(uint)this_01->field_1A5F);
    this_01->field_0x20b4 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_20B7 = 0;
    this_01->field_0x20b6 = 0;
    this_01->field_0x20b5 = 0;
    this_01->CloseButtons();
    if (this_01->field_1A5B->field_02E6 != nullptr) {
      local_18 = 0;
      local_14 = 0;
      local_1c = 0x10101;
      local_10 = 0;
      st::fn_00401A9B(this_01->field_1A5B->field_02E6,&local_1c);
    }
    break;
  case MESS_WAITTY_694D:
    st::fn_004036C0(this_01,0x6105,0,0);
    CVar3 = this_01->field_1A5F;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
    if ((((CVar3 == CASE_C) || (CVar3 == CASE_4)) || (CVar3 == CASE_5)) || (CVar3 == CASE_13)) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    this_01->field_20B7 = uVar10;
    goto LAB_005b1108;
  case 0x694e:
    this_01->field_002D = 0x26;
    st::fn_006E6080(this_01,2,this_01->field_1A6C,(undefined4 *)&this_01->field_0x1d);
    uVar28 = this_01->field_1C9F->elementSize;
    if (((*(uint *)&this_01->field_0x31 < uVar28) ||
        (local_8 = (byte *)(*(uint *)&this_01->field_0x31 - uVar28), (int)local_8 < 0)) ||
       ((int)this_01->field_1C97->elementSize <= (int)local_8)) break;
    uVar28 = 0xffffffff;
    pcVar17 = &this_01->field_1DA7;
    do {
      pcVar20 = pcVar17;
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar28 = ~uVar28;
    pcVar17 = pcVar20 + -uVar28;
    pcVar20 = &CHAR_00h_0080ed16;
    memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
    uVar15 = 0;
    if ((this_01->field_1A5F == CASE_C) ||
       ((this_01->field_1A5F == CASE_13 && (DAT_00803400 == '\f')))) {
      uVar28 = 0xffffffff;
      pcVar17 = st::pointer_boundary_cast<char *>(PTR_DAT_0079c06c);
      do {
        pcVar20 = pcVar17;
        if (uVar28 == 0) break;
        uVar28 = uVar28 - 1;
        pcVar20 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar20;
      } while (cVar1 != '\0');
      uVar28 = ~uVar28;
      iVar26 = -1;
      pcVar17 = &CHAR_00h_0080ed16;
      do {
        pcVar21 = pcVar17;
        if (iVar26 == 0) break;
        iVar26 = iVar26 + -1;
        pcVar21 = pcVar17 + 1;
        cVar1 = *pcVar17;
        pcVar17 = pcVar21;
      } while (cVar1 != '\0');
      pcVar17 = pcVar20 + -uVar28;
      pcVar20 = pcVar21 + -1;
      memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
      uVar15 = 0;
      _DAT_0080f32e = 1;
    }
    if ((int)local_8 < (int)this_01->field_1C97->elementSize) {
      pcVar17 = *(char **)(this_01->field_1C97->growCapacity + (int)local_8 * 4);
    }
    else {
      pcVar17 = nullptr;
    }
    uVar28 = 0xffffffff;
    do {
      pcVar20 = pcVar17;
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar28 = ~uVar28;
    iVar26 = -1;
    pcVar17 = &CHAR_00h_0080ed16;
    do {
      pcVar21 = pcVar17;
      if (iVar26 == 0) break;
      iVar26 = iVar26 + -1;
      pcVar21 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar21;
    } while (cVar1 != '\0');
    pcVar17 = pcVar20 + -uVar28;
    pcVar20 = pcVar21 + -1;
    memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
    uVar15 = 0;
    uVar28 = 0xffffffff;
    pcVar17 = &CHAR_00h_0080ed16;
    do {
      pcVar20 = pcVar17;
      if (uVar28 == 0) break;
      uVar28 = uVar28 - 1;
      pcVar20 = pcVar17 + 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar20;
    } while (cVar1 != '\0');
    uVar28 = ~uVar28;
    pcVar17 = pcVar20 + -uVar28;
    pcVar20 = (char *)&DAT_0080ee1a;
    memmove(pcVar20, pcVar17, uVar28); /* compiler REP MOVS byte copy */
    if (this_01->field_1A64 != 0) {
      st::fn_004042B4(this_01,this_01->field_1C93);
      this_01->field_1A64 = 0;
    }
    if (this_01->field_1A5F != CASE_13) {
      uVar28 = (uint)this_01->field_1A5F;
      uVar15 = uVar28;
      goto LAB_005b137f;
    }
    switch(DAT_00803400) {
    case '\x04':
      uVar15 = 0x13;
      uVar28 = 4;
      break;
    case '\x05':
      uVar15 = 0x13;
      uVar28 = 5;
      break;
    default:
      goto switchD_005b1362_caseD_6;
    case '\f':
      uVar15 = 0x13;
      uVar28 = 0xc;
      break;
    case '\x14':
    case '\x15':
      uVar15 = 0x13;
      uVar28 = 0x13;
    }
LAB_005b137f:
    st::fn_004036C0(this_01,0x6121,uVar28,uVar15);
switchD_005b1362_caseD_6:
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 0;
    this_01->field_0x20b6 = 0;
    this_01->field_0x20b5 = 0;
    this_01->field_20B7 = 0;
    this_01->CloseButtons();
    if (this_01->field_1A5B->field_02E6 != nullptr) {
      local_28 = 0;
      local_24 = 0;
      local_2c = 0x10101;
      local_20 = 0;
      st::fn_00401A9B(this_01->field_1A5B->field_02E6,&local_2c);
    }
    break;
  case MESS_SHARED_6951:
    st::fn_004036C0(this_01,0x610a,0,0);
    st::external_0000010B((CFsgsConnection *)&DAT_00802a90);
    this_01->field_20B7 = 1;
    this_01->field_0x20b6 = 1;
    this_01->field_0x20b5 = 1;
    this_01->field_0x20b3 = 1;
    this_01->field_0x20b4 = 1;
LAB_005b1108:
    this_01->CloseButtons();
    pMVar14 = this_01->field_1A5B->field_02E6;
    if (pMVar14 != nullptr) {
      st::fn_00401FA5(pMVar14,1,0,1);
    }
  }
cf_common_exit_005B2053:
  g_currentExceptionFrame = local_84.previous;
  iVar13 = st::fn_00401280((MMObjTy *)this_01,message);
  return iVar13;
}

