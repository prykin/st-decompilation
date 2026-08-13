#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_Rubb.cpp

// 0062E740 STRubbishC::GetMessage
#line 4 "decomp/ST.exe/functions/0062E740/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040231F|0062E740; family_names=STRubbishC::GetMessage; ret4=8;
   direct_offsets={10:1,14:3,18:4,1c:2}

   [STSwitchEnumApplier] Switch target field_01FA uses
   /SubmarineTitans/Recovered/Enums/STRubbishC_field_01FAState. Cases: CASE_0=0;CASE_1=1;CASE_2=2 */

int __thiscall st::fn_0062E740(STRubbishC *this,STMessage *message)

{
  short sVar1;
  short sVar2;
  STMessageId SVar3;
  short sVar5;
  STRubbishC *this_00;
  int local_EAX_35;
  int iVar6;
  int iVar7;
  int local_EAX_339;
  STWorldObject *pSVar8;
  int iVar10;
  int local_EAX_686;
  int local_EAX_709;
  int local_EAX_880;
  int local_EAX_1038;
  int iVar9;
  int iVar11;
  AnonShape_0062FA80_0B91B2B9 *pAVar12;
  InternalExceptionFrame local_58;
  STRubbishC *local_14;
  byte *local_10;
  uint local_c;
  AnonShape_0062E740_213F21A8 *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  local_EAX_35 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_Rubb.cpp"),0xa6,0,local_EAX_35,
                               st::mutable_c_string("%s"),"STRubbishC::GetMessage");
    if (iVar9 == 0) {
      st::fn_006A5E40(local_EAX_35,0,st::mutable_c_string("E:\\__titans\\nick\\to_Rubb.cpp"),0xa8);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar6 = st::fn_00403EBD((STGameObjC *)local_14,message);
  if (iVar6 == 0xffff) {
    return 0xffff;
  }
  SVar3 = message->id;
  if (MESS_SHARED_0003 < SVar3) {
    if (SVar3 == MESS_SHARED_0108) {
      local_EAX_1038 = st::fn_0040581C();
      st::fn_00402E0A(this_00,local_EAX_1038);
    }
    else if (SVar3 == MESS_SHARED_010F) {
      local_10 = st::fn_00404719(this_00,&local_c);
      st::fn_004025F9(g_playSystem_00802A38,(int *)this_00->field_0018,local_10,local_c);
      st::fn_006AB060(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar3 == MESS_SHARED_0003) {
    st::fn_00401D1B((AnonShape_0062F7A0_700302F7 *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar3 == MESS_ID_NONE) {
    if (this_00->field_01FA == CASE_1) {
      if ((this_00->field_01F9 == '\0') &&
         (local_EAX_880 = st::fn_00401D39(this_00,this_00->field_01D5,this_00->field_01D9),
         local_EAX_880 != 0)) {
        st::fn_00405533((STJellyGunC *)this_00);
        this_00->field_01F9 = 1;
      }
      st::fn_0040131B((RecoveredRecord_STRubbishC_0062F150 *)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (this_00->field_01FA != CASE_2) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    st::fn_00405885(this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (SVar3 != MESS_ID_CREATE) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  pAVar12 = st::pointer_boundary_cast<AnonShape_0062FA80_0B91B2B9 *>((message->arg0).ptr);
  local_8 = (AnonShape_0062E740_213F21A8 *)pAVar12;
  if (*(int *)&pAVar12->field_0xc == 2) {
    st::fn_004032AB(this_00,pAVar12);
    if (this_00->field_01F9 == '\0') {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    st::fn_00405533((STJellyGunC *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (((this_00->field_01D5 < 0) || (this_00->field_01D9 < 0)) || (this_00->field_01DD < 0)) {
    iVar7 = pAVar12->field_0014;
    iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
    this_00->field_01D5 = iVar7;
    iVar7 = pAVar12->field_0018;
    iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
    this_00->field_01D9 = iVar7;
    iVar7 = pAVar12->field_001C;
    iVar7 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
    this_00->field_01DD = iVar7;
    local_EAX_339 =
         st::fn_00404D3B((short)this_00->field_01D5,(short)this_00->field_01D9,(short)iVar7);
    if (local_EAX_339 != 0) {
      sVar5 = (short)this_00->field_01D5;
      sVar1 = (short)this_00->field_01DD;
      sVar2 = (short)this_00->field_01D9;
      if ((((sVar5 < 0) || (g_worldGrid.sizeX <= sVar5)) ||
          ((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)))))) ||
         (g_worldGrid.sizeZ <= sVar1)) {
        pSVar8 = nullptr;
      }
      else {
        pSVar8 = STGridAt3D(g_worldGrid, sVar5, sVar2, sVar1).objects[1];
        pAVar12 = (AnonShape_0062FA80_0B91B2B9 *)local_8;
      }
      if ((pSVar8 == nullptr) &&
         (iVar7 = st::fn_00401325
                            ((short)this_00->field_01D5,(short)this_00->field_01D9,
                             (short)this_00->field_01DD,1,
                             (RecoveredRecord_DumpClassC_00495EC0 *)this_00),
         pAVar12 = (AnonShape_0062FA80_0B91B2B9 *)local_8, iVar7 == 0)) {
        iVar7 = local_8->field_0014;
        iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
        this_00->field_01D5 = iVar7;
        iVar11 = local_8->field_0018;
        iVar11 = STBiasedDiv16(iVar11, 0xc9); /* exact signed 16-bit grid-index division */
        this_00->field_01D9 = iVar11;
        iVar10 = local_8->field_001C;
        iVar10 = STBiasedDiv16(iVar10, 200); /* exact signed 16-bit grid-index division */
        this_00->field_01DD = iVar10;
        local_EAX_686 = st::fn_00401D39(this_00,iVar7,iVar11);
        this_00->field_01F9 = (char)local_EAX_686;
        goto LAB_0062ea02;
      }
    }
    st::fn_00405885(this_00);
  }
LAB_0062ea02:
  local_EAX_709 = st::fn_00403EDB(this_00,(AnonShape_0062FCA0_22A9EE35 *)pAVar12);
  if (local_EAX_709 == 0xffff) {
    return 0xffff;
  }
  this_00->field_01FA = CASE_1;
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

// 0062ED90 STRubbishC::RubbishCreatePart
#line 4 "decomp/ST.exe/functions/0062ED90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::RubbishCreatePart */

int __thiscall st::fn_0062ED90(STRubbishC *this)

{
  int iVar2;
  int *piVar2;
  undefined4 *puVar3;
  AnonShape_004AB810_8E5693D5 *pAVar4;
  int iVar7;
  int iVar5;
  int iVar6;
  InternalExceptionFrame local_50;
  STRubbishC *local_c;
  int local_8;

  local_8 = -1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_Rubb.cpp"),0xd9,0,iVar2,st::mutable_c_string("%s"),
                               "STRubbishC::RubbishCreatePart");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\nick\\to_Rubb.cpp"),0xdb);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  piVar2 = st::pointer_boundary_cast<int *>(&local_c->field_01E5);
  iVar6 = 0;
  iVar5 = local_8;
  do {
    if (*piVar2 == 0) {
      local_8 = iVar5;
      puVar3 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(0x3e));
      (&local_c->field_01E5)[iVar6] = puVar3;
      if (puVar3 != nullptr) {
        for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        *(undefined2 *)puVar3 = 0;
        iVar5 = iVar6;
        if (local_c->field_01F9 != '\0') {
          pAVar4 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
          if (pAVar4 == nullptr) {
            pAVar4 = nullptr;
          }
          else {
            pAVar4 = st::fn_00401316(pAVar4);
          }
          *(AnonShape_004AB810_8E5693D5 **)((&local_c->field_01E5)[iVar6] + 0x10) = pAVar4;
        }
      }
      g_currentExceptionFrame = local_50.previous;
      return iVar5;
    }
    iVar5 = 5;
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar6 < 5);
  g_currentExceptionFrame = local_50.previous;
  return 5;
}

// 0062F3B0 STRubbishC::LoadImagSpr
#line 4 "decomp/ST.exe/functions/0062F3B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::LoadImagSpr

   [STSwitchEnumApplier] Switch target param_4 uses
   /SubmarineTitans/Recovered/Enums/STRubbishC_LoadImagSpr_param_4Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

undefined4 __thiscall
st::fn_0062F3B0
          (STRubbishC *this,void *param_1,int *param_2,undefined4 param_3,
          STRubbishC_LoadImagSpr_param_4Enum param_4)

{
  STT3DSprC *this_00;
  int iVar2;
  int iVar4;
  int iVar3;
  undefined4 uVar5;
  InternalExceptionFrame local_5c;
  undefined4 local_18;
  STT3DSprC *local_14;
  int local_10;
  int local_c;
  char **local_8;

  local_18 = 0;
  switch(param_4) {
  case CASE_1:
    local_10 = *(int *)(&DAT_007d1530 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1534 + *param_2 * 8);
  default:
    local_8 = &PTR_s_rubb_w0_007d1480;
    break;
  case CASE_2:
    local_8 = &PTR_s_rubb_g0_007d14a8;
    local_10 = *(int *)(&DAT_007d1530 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1534 + *param_2 * 8);
    break;
  case CASE_3:
    local_8 = &PTR_s_rubb3_007d14d0;
    local_10 = 0xf;
    local_c = 0xf;
    break;
  case CASE_4:
    local_8 = &PTR_s_rubb_gw0_007d1514;
    goto LAB_0062f450;
  case CASE_5:
    local_8 = &PTR_s_rubb_gb0_007d14f8;
LAB_0062f450:
    local_10 = *(int *)(&DAT_007d1580 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1584 + *param_2 * 8);
    break;
  case CASE_6:
    local_8 = &PTR_s_rubb3_007d14d0;
    local_10 = *(int *)(&DAT_007d1580 + *param_2 * 8);
    local_c = *(int *)(&DAT_007d1584 + *param_2 * 8);
  }
  local_14 = st::pointer_boundary_cast<STT3DSprC *>(param_1);
  if (param_1 == nullptr) {
    return 0xffffffff;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar2 == 0) {
    iVar4 = st::fn_0040537B(local_14,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar4 != 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\nick\\to_Rubb.cpp"),0x17b);
      return 0xffff;
    }
    iVar4 = st::fn_00404183(this_00,0xe,PTR_00806774,local_8[*param_2],CASE_1D);
    if (iVar4 == 0) {
      st::fn_00401064(this_00,'\x0e',param_2[6]);
      st::fn_004023C4(this_00,local_10 / 2,local_c / 2 - 0xe);
      st::fn_004045D9
                (this_00,(float)param_2[3] * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_2[4] * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_2[5] * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      g_currentExceptionFrame = local_5c.previous;
      return local_18;
    }
  }
  else {
    g_currentExceptionFrame = local_5c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_Rubb.cpp"),0x189,0,iVar2,st::mutable_c_string("%s"),
                               "STRubbishC::LoadImagSpr");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\nick\\to_Rubb.cpp"),0x18b);
  }
  return 0xffff;
}

