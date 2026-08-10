#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_BldMark.cpp

// 004C60E0 TLOBldMark::Create
#line 4 "decomp/ST.exe/functions/004C60E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_BldMark.cpp
   TLOBldMark::Create */

int __thiscall st::fn_004C60E0(TLOBldMark *this)

{
  InternalExceptionFrame *pIVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_48 [16];
  TLOBldMark *local_8;

  pIVar2 = g_currentExceptionFrame;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_48,0);
  if (iVar3 == 0) {
    g_currentExceptionFrame = pIVar2;
    g_tLOBldMark_007FB2AC = local_8;
    return 0;
  }
  g_currentExceptionFrame = pIVar2;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_BldMark.cpp"),0x2a,0,iVar3,st::mutable_c_string("%s"),
                             "TLOBldMark::Create error");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_BldMark.cpp"),0x2b);
  return iVar3;
}

// 004C6210 TLOBldMark::sub_004C6210
#line 4 "decomp/ST.exe/functions/004C6210/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_BldMark.cpp
   Diagnostic line evidence: 72 | 73 | 76 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as TLOBldMark.
   Evidence: this_call_owners=[TLOBldMark]; agreed_this_calls=1; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004C6210(TLOBldMark *this,int param_1,int *param_2)

{
  AnonShape_004AB810_8E5693D5 *pAVar1;
  STT3DSprC *this_00;
  int iVar2;
  uint uVar3;
  DWORD DVar4;

  this->field_0018 = 0;
  this->field_001C = param_1;
  this->field_0020 = st::pointer_boundary_cast<int *>(param_2);
  pAVar1 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
  if (pAVar1 == nullptr) {
    this_00 = nullptr;
  }
  else {
    this_00 = (STT3DSprC *)st::fn_00401316(pAVar1);
  }
  this->field_002C = this_00;
  if (*(int *)(&DAT_00791d68 + this->field_001C * 4) == 0) {
    iVar2 = st::fn_0040537B(this_00,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (iVar2 != 0) {
      st::fn_006A5E40
                (iVar2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_BldMark.cpp"),0x48);
    }
  }
  else if (*(int *)(&DAT_00791d68 + this->field_001C * 4) == 1) {
    iVar2 = st::fn_0040537B(this_00,PTR_008073cc,0x78,0x56,nullptr,0xf0,0xbe,0x11);
    if (iVar2 != 0) {
      st::fn_006A5E40
                (iVar2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_BldMark.cpp"),0x49);
    }
    uVar3 = st::fn_004052CC(this->field_002C);
    st::fn_006E9210(g_sT3DSMAPContext_00807598,uVar3);
  }
  st::fn_00402A90(this->field_002C);
  iVar2 = st::fn_00404183
                    (this->field_002C,0,PTR_0080678c,
                     *(char **)(&DAT_007ad250 + (uint)(byte)this->field_0010->field_112E * 4),
                     CASE_1D);
  if (iVar2 != 0) {
    st::fn_006A5E40
              (iVar2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_BldMark.cpp"),0x4c);
  }
  st::fn_00401EBA(this->field_002C,0,*(int *)(&DAT_00790f84 + this->field_001C * 4),
                     *(int *)(&DAT_00790f84 + this->field_001C * 4),'\0');
  st::fn_00401064(this->field_002C,'\0',*(uint *)(&DAT_00790f84 + this->field_001C * 4));
  DVar4 = st::fn_006E51B0(this->field_0010);
  st::fn_00405240(this->field_002C,0,DVar4);
  st::fn_00403D0F(this->field_002C);
  this->field_0024 = 0;
  this->field_0028 = 0;
  return 0;
}

// 004C6440 TLOBldMark::sub_004C6440
#line 4 "decomp/ST.exe/functions/004C6440/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_BldMark.cpp
   Diagnostic line evidence: 119 | 130 | 152 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as TLOBldMark.
   Evidence: this_call_owners=[TLOBldMark]; agreed_this_calls=1; incoming_this_accesses=38;
   incoming_edx_uses=0; incoming_stack_parameter_uses=9; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_004C6440
          (TLOBldMark *this,float param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  float fVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;

  local_28 = 0;
  local_c = 3;
  local_20 = g_centeredOffsets5 + 3;
  while( true ) {
    piVar8 = local_20;
    st::fn_006E1C20
              (g_sT3DSMAPContext_00807598,param_1,param_2,(float)local_c * _DAT_00790504,&local_14,
               &local_18);
    if (local_14 < _DAT_0079034c) {
      lVar11 = st::fn_0072E288();
      iVar9 = (short)lVar11 + -1;
    }
    else {
      lVar11 = st::fn_0072E288();
      iVar9 = (int)(short)lVar11;
    }
    local_10 = iVar9;
    if (local_18 < _DAT_0079034c) {
      lVar11 = st::fn_0072E288();
      local_8 = (short)lVar11 + -1;
    }
    else {
      lVar11 = st::fn_0072E288();
      local_8 = (int)(short)lVar11;
    }
    pVVar4 = g_visibleClass_00802A88;
    if (((((-1 < iVar9) && (iVar9 < g_worldGrid.sizeX)) && (-1 < local_8)) &&
        (local_8 < g_worldGrid.sizeY)) &&
       ((((((g_visibleClass_00802A88 == nullptr || (DAT_0080874d == 0xff)) ||
           ((g_visibleClass_00802A88->field_00F8 == 0 ||
            ((st::fn_00403F53
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_10,
                         local_8,&local_30,&local_34), (int)piVar8 < 0x79aed0 ||
             (0x79aee3 < (int)piVar8)))))) ||
          ((local_30 < 0 ||
           ((((int)pVVar4->field_0030 <= local_30 ||
             (iVar9 = *piVar8 + local_34, piVar8 = local_20, iVar9 < 0)) ||
            (pVVar4->field_0034 <= iVar9)))))) ||
         ((pVVar4->field_004C == nullptr ||
          (pVVar4->field_004C[local_30 + iVar9 * pVVar4->field_0030] != 0)))) &&
        (iVar9 = local_10,
        st::fn_00402829((short)local_10,local_8,local_c,this->field_001C,(uint)DAT_0080874d,
                           &local_2c,&local_24,&local_1c,0,this->field_0020), local_24 != 0))))
    break;
    local_20 = piVar8 + -1;
    local_c = local_c + -1;
    if ((int)local_20 < 0x79aed0) {
cf_common_exit_004C6899:
      if (((this->field_0024 != 0) || (this->field_0028 != 0)) && (local_28 == 0)) {
        st::fn_00403D0F(this->field_002C);
        this->field_0024 = 0;
        this->field_0028 = 0;
      }
      return this->field_0024;
    }
  }
  local_28 = 1;
  if (local_1c == 0) {
    if (this->field_0028 == 0) {
      iVar9 = this->field_001C;
      if ((((iVar9 != 0x39) && (iVar9 != 0x4f)) && ((iVar9 != 0x4d && (iVar9 != 0x5e)))) &&
         (((((iVar9 < 0x54 || (0x5a < iVar9)) && (iVar9 != 0x61)) &&
           ((iVar9 != 0x65 && (iVar9 != 0x43)))) && (iVar9 != 0x73)))) {
        local_28 = 0;
        goto cf_common_exit_004C6899;
      }
      iVar9 = st::fn_00404183
                        (this->field_002C,0,PTR_0080678c,
                         (&PTR_s_tlo_bldmark_si_007ad25c)[(byte)this->field_0010->field_112E],
                         CASE_1D);
      if (iVar9 != 0) {
        st::fn_006A5E40
                  (iVar9,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_BldMark.cpp"),
                   0x82);
      }
      uVar10 = 0;
      cVar1 = this->field_0010->field_112E;
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        iVar9 = this->field_001C;
        if (iVar9 == 0x4f) {
          uVar10 = 1;
        }
        else if (iVar9 == 0x4d) {
          uVar10 = 2;
        }
        else if (iVar9 == 0x43) {
          uVar10 = 3;
        }
      }
      else {
        uVar10 = *(uint *)(&DAT_00790f84 + this->field_001C * 4);
      }
      st::fn_00401EBA(this->field_002C,0,uVar10,uVar10,'\0');
      st::fn_00401064(this->field_002C,'\0',uVar10);
      DVar6 = st::fn_006E51B0(this->field_0010);
      st::fn_00405240(this->field_002C,0,DVar6);
      iVar9 = local_10;
    }
  }
  else if (this->field_0024 == 0) {
    iVar5 = st::fn_00404183
                      (this->field_002C,0,PTR_0080678c,
                       *(char **)(&DAT_007ad250 + (uint)(byte)this->field_0010->field_112E * 4),
                       CASE_1D);
    if (iVar5 != 0) {
      st::fn_006A5E40
                (iVar5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_BldMark.cpp"),0x77);
    }
    st::fn_00401EBA(this->field_002C,0,*(int *)(&DAT_00790f84 + this->field_001C * 4),
                       *(int *)(&DAT_00790f84 + this->field_001C * 4),'\0');
    st::fn_00401064(this->field_002C,'\0',*(uint *)(&DAT_00790f84 + this->field_001C * 4));
    DVar6 = st::fn_006E51B0(this->field_0010);
    st::fn_00405240(this->field_002C,0,DVar6);
  }
  st::fn_00402982(this->field_002C,0);
  if (*(int *)(&DAT_00791d68 + this->field_001C * 4) == 0) {
    fVar12 = (float)local_8 * _DAT_007904f8 + _DAT_007904f4;
    fVar3 = (float)local_10 * _DAT_007904f8 + _DAT_007904f4;
LAB_004c6848:
    st::fn_004045D9
              (this->field_002C,fVar3,fVar12,
               (float)local_c * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
  }
  else {
    if (*(int *)(&DAT_00791d68 + this->field_001C * 4) == 1) {
      fVar12 = (float)(local_8 + 1) * _DAT_007904f8;
      fVar3 = (float)(iVar9 + 1) * _DAT_007904f8;
      goto LAB_004c6848;
    }
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_BldMark.cpp"),0x98,0,0,st::mutable_c_string("%s"),
                               "error");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  this->field_0030 = iVar9;
  if (param_3 != nullptr) {
    *param_3 = iVar9;
  }
  this->field_0034 = local_8;
  if (param_3 != nullptr) {
    *param_4 = local_8;
  }
  this->field_0038 = local_c;
  if (param_3 != nullptr) {
    *param_5 = local_c;
  }
  if (local_1c == 0) {
    this->field_0024 = 0;
    this->field_0028 = 1;
  }
  else {
    this->field_0024 = 1;
    this->field_0028 = 0;
  }
  goto cf_common_exit_004C6899;
}

// 004C6A00 TLOBldMark::GetMessage
#line 4 "decomp/ST.exe/functions/004C6A00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_BldMark.cpp
   TLOBldMark::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004044D5|004C6A00; family_names=TLOBldMark::GetMessage; ret4=4;
   direct_offsets={10:1,14:1,18:0,1c:0} */

int __thiscall st::fn_004C6A00(TLOBldMark *this,STMessage *message)

{
  STMessageId SVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_4c;
  TLOBldMark *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_BldMark.cpp"),0xb6,0,iVar3,
                               st::mutable_c_string("%s"),"TLOBldMark::GetMessage error");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_BldMark.cpp"),0xb7);
    return iVar3;
  }
  SVar1 = message->id;
  if (SVar1 == MESS_ID_NONE) {
    st::fn_004032A1(local_8);
  }
  else {
    if (SVar1 == MESS_ID_CREATE) {
      st::fn_004051D7(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_SHARED_0003) {
      st::fn_00401767(local_8);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

