#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/specpan.cpp

// 0053D7A0 UPanelTy::PaintBut
#line 4 "decomp/ST.exe/functions/0053D7A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_0053D7A0(UPanelTy *this,AnonShape_0053D7A0_044B6141 *param_1,byte param_2,char *param_3,
                  code *param_4)

{
  AnonNested_0053D7A0_0018_F6872402 *pAVar1;
  UPanelTy *pUVar3;
  int *errorCode;
  uint uVar4;
  LPSTR text;
  int iVar5;
  InternalExceptionFrame local_58;
  UPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  local_8 = nullptr;
  pAVar1 = param_1->field_0018;
  local_10 = pAVar1->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = pAVar1->field_0004 + this->field_0048;
  }
  else {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  if (param_4 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    errorCode = (int *)st::fn_0072D7F0(local_58.jumpBuffer,0);
    if (errorCode == nullptr) {
      iVar5 = 1;
      /* ST_CALLSITE[0053D817]: CALL dword ptr [EBP + 0x14] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (*(code *)param_4)(param_1);
      text = st::fn_006F2C00(param_3,1,uVar4);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,param_2,text,errorCode,iVar5);
      pUVar3 = local_14;
      /* ST_CALLSITE[0053D84D]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_10,local_c,param_2,
             (byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,pUVar3->field_0060,0xffffffff,pUVar3->field_003C,
                 pUVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x24,0,(int)errorCode,
                               st::mutable_c_string("%s"),"UPanelTy::PaintBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40((int)errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x24);
  }
  return;
}

// 0053D920 UPanelTy::PaintTxtBut
#line 4 "decomp/ST.exe/functions/0053D920/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintTxtBut

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0053D920 parameter used as this of ccFntTy::SetSurf @ 0053D9F2 | 0053D920 parameter
   used as this of ccFntTy::WrStr @ 0053DA19 */

void __thiscall
st::fn_0053D920
          (UPanelTy *this,AnonShape_0053D920_829E6B3B *param_1,byte param_2,char *param_3,
          ccFntTy *param_4,UINT param_5,code *param_6)

{
  UPanelTy *pUVar2;
  int iVar3;
  uint uVar4;
  char *resourceString;
  int iVar5;
  InternalExceptionFrame local_5c;
  AnonNested_0053D920_0018_8DE8F5C2 *local_18;
  int local_14;
  UPanelTy *local_10;
  uint local_c;
  ushort *local_8;

  local_18 = param_1->field_0018;
  local_8 = nullptr;
  local_14 = local_18->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = local_18->field_0004 + this->field_0048;
  }
  else {
    local_c = local_18->field_0004 - this->field_0044;
  }
  if (param_6 != nullptr) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_10 = this;
    iVar3 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
    if (iVar3 == 0) {
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,param_2,param_3,nullptr,1);
      uVar4 = local_c;
      pUVar2 = local_10;
      iVar3 = local_14;
      /* ST_CALLSITE[0053D9C3]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_10->field_0068,local_14,local_c,param_2,
             (byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      st::fn_00710A90(param_4,pUVar2->field_0068,0,iVar3,uVar4,local_18->field_0008,
                       local_18->field_000C);
      /* ST_CALLSITE[0053D9FB]: CALL dword ptr [EBP + 0x1c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (*(code *)param_6)(param_1);
      iVar5 = -1;
      iVar3 = -2;
      resourceString = st::fn_006B0140(param_5,g_hINSTANCE_00807618);
      st::fn_007119C0(param_4,resourceString,iVar3,iVar5,uVar4);
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,pUVar2->field_0060,0xffffffff,pUVar2->field_003C,
                 pUVar2->field_0044);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x3e,0,iVar3,st::mutable_c_string("%s"),
                               "UPanelTy::PaintTxtBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x3e);
  }
  return;
}

// 0053DAF0 UPanelTy::PaintIBut
#line 4 "decomp/ST.exe/functions/0053DAF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintIBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_0053DAF0(UPanelTy *this,AnonShape_0053DAF0_3BDC2979 *param_1,char *param_2,UINT param_3)

{
  UPanelTy *pUVar2;
  undefined4 *errorCode;
  uint uVar3;
  LPSTR text;
  ushort *puVar4;
  char *resourceString;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  InternalExceptionFrame local_58;
  AnonNested_0053DAF0_0018_BAFC63C8 *local_14;
  UPanelTy *local_10;
  int local_c;
  uint local_8;

  local_14 = param_1->field_0018;
  local_c = local_14->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_8 = this->field_0048 + local_14->field_0004;
  }
  else {
    local_8 = local_14->field_0004 - this->field_0044;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  errorCode = (undefined4 *)st::fn_0072D7F0(local_58.jumpBuffer,0);
  pUVar2 = local_10;
  if (errorCode == nullptr) {
    iVar7 = 1;
    uVar5 = 0xffffffff;
    puVar8 = errorCode;
    puVar10 = errorCode;
    uVar3 = st::fn_00401E88((int)param_1);
    bVar6 = (byte)errorCode;
    text = st::fn_006F2C00(param_2,1,uVar3);
    puVar4 = st::fn_00709AF0
                       (PTR_00806794,CASE_1,text,uVar5,bVar6,iVar7,(int)puVar8,puVar10);
    uVar5 = local_8;
    /* ST_CALLSITE[0053DB97]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pUVar2->field_0068,local_c,local_8,'\x01',(byte *)puVar4
          );
    st::fn_00710A90((ccFntTy *)g_interSystem_00802A28->field_0024,pUVar2->field_0068,0,local_c,
                     uVar5,local_14->field_0008,local_14->field_000C);
    uVar5 = st::fn_00401E88((int)param_1);
    iVar9 = -1;
    iVar7 = -2;
    resourceString = st::fn_006B0140(param_3,g_hINSTANCE_00807618);
    st::fn_007119C0((ccFntTy *)g_interSystem_00802A28->field_0024,resourceString,iVar7,iVar9,uVar5);
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,pUVar2->field_0060,0xffffffff,pUVar2->field_003C,
               pUVar2->field_0044);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x51,0,(int)errorCode,
                             st::mutable_c_string("%s"),"UPanelTy::PaintIBut");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40((int)errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x51);
  return;
}

// 0053DCC0 UPanelTy::PaintLBut
#line 4 "decomp/ST.exe/functions/0053DCC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::PaintLBut */

void __thiscall
st::fn_0053DCC0(UPanelTy *this,AnonShape_0053DCC0_5B8C160B *param_1,byte param_2,char *param_3,
                   char *param_4,undefined *param_5)

{
  AnonNested_0053DCC0_0018_16DF3813 *pAVar1;
  UPanelTy *pUVar3;
  int iVar6;
  int iVar4;
  uint uVar7;
  LPSTR text;
  int iVar5;
  InternalExceptionFrame local_58;
  UPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  pAVar1 = param_1->field_0018;
  local_8 = nullptr;
  local_10 = pAVar1->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = pAVar1->field_0004 + this->field_0048;
  }
  else {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  if (param_5 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
    if (iVar4 == 0) {
      /* ST_CALLSITE[0053DD3A]: CALL dword ptr [EBP + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar7 = (*(code *)param_5)(param_1);
      text = st::fn_006F2C00(param_3,1,uVar7);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,param_2,text,nullptr,1);
      iVar6 = local_c;
      pUVar3 = local_14;
      /* ST_CALLSITE[0053DD73]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_10,local_c,param_2,
             (byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      if (param_1->field_0014 == 3) {
        local_8 = st::fn_006F1CE0(g_cMf32_00806790,6,param_4,nullptr,1);
        /* ST_CALLSITE[0053DDB4]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pUVar3->field_0068,local_10,iVar6,'\x06',
               (byte *)local_8);
        st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      }
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,pUVar3->field_0060,0xffffffff,pUVar3->field_003C,
                 pUVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x74,0,iVar4,st::mutable_c_string("%s"),
                               "UPanelTy::PaintLBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x74);
  }
  return;
}

// 0053DEA0 UPanelTy::CreateBut
#line 4 "decomp/ST.exe/functions/0053DEA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::CreateBut

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00510E30 -> 0053DEA0 @ 00511440 | 00510E30 -> 0053DEA0 @ 005114D9 | 0052E5E0 ->
   0053DEA0 @ 0052E7B7 | 0052E5E0 -> 0053DEA0 @ 0052E7F1 | 0052FB00 -> 0053DEA0 @ 00530650 |
   0052FB00 -> 0053DEA0 @ 005306A3 | 0052FB00 -> 0053DEA0 @ 005306E3 | 0052FB00 -> 0053DEA0 @
   00530725 | 0052FB00 -> 0053DEA0 @ 0053077F | 0052FB00 -> 0053DEA0 @ 0053098D | 0052FB00 ->
   0053DEA0 @ 005309D5 | 0052FB00 -> 0053DEA0 @ 00530B35 | 0052FB00 -> 0053DEA0 @ 00530C60 |
   0052FB00 -> 0053DEA0 @ 005318BD | 00539B90 -> 0053DEA0 @ 00539E01 | 00539B90 -> 0053DEA0 @
   0053A020

   [STPrototypeApplier] Propagated parameter 10.
   Evidence: 00510E30 -> 0053DEA0 @ 00511440; literal 0 at 00511410 | 00510E30 -> 0053DEA0 @
   005114D9; literal 0 at 005114B2 | 0052FB00 -> 0053DEA0 @ 00530650; literal 0 at 0053061D |
   0052FB00 -> 0053DEA0 @ 005306A3; literal 0 at 00530679 | 0052FB00 -> 0053DEA0 @ 005306E3; literal
   0 at 005306B0 | 0052FB00 -> 0053DEA0 @ 00530725; literal 0 at 005306FB | 0052FB00 -> 0053DEA0 @
   0053077F; literal 0 at 0053075B | 0052FB00 -> 0053DEA0 @ 0053098D; literal 0 at 00530965 |
   0052FB00 -> 0053DEA0 @ 005309D5; literal 0 at 0053099A | 0052FB00 -> 0053DEA0 @ 00530B35; literal
   0 at 00530B12 | 0052FB00 -> 0053DEA0 @ 00530C60; literal 0 at 00530C28 | 0052FB00 -> 0053DEA0 @
   005318BD; literal 0 at 0053188A | 00539B90 -> 0053DEA0 @ 00539FB1; literal 0 at 00539F99 |
   00539B90 -> 0053DEA0 @ 0053A020; literal 0 at 00539FE7 */

undefined4 __thiscall
st::fn_0053DEA0(UPanelTy *this,undefined4 param_1,int param_2,int param_3,int param_4,
                   byte param_5,LPSTR param_6,undefined4 param_7,undefined4 param_8,short param_9,
                   ushort param_10,undefined4 param_11,char *param_12,undefined4 param_13,
                   undefined4 param_14)

{
  char *text;
  UPanelTy *pUVar2;
  int iVar3;
  int iVar4;
  uint uVar3;
  int iVar5;
  int *piVar6;
  int local_1d0 [4];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  ushort local_144;
  short local_142;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  ushort local_120;
  short local_11e;
  undefined4 local_11c;
  undefined4 local_114;
  undefined4 local_c8;
  undefined4 local_c4;
  ushort *local_ac;
  int local_a8;
  InternalExceptionFrame local_54;
  UPanelTy *local_10;
  undefined4 local_c;
  ushort *local_8;

  local_8 = nullptr;
  local_c = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar3 == 0) {
    piVar6 = local_1d0;
    for (iVar5 = 0x5f; pUVar2 = local_10, iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
    local_1d0[1] = param_1;
    local_1d0[0] = param_2;
    if (param_6 != (LPSTR)0x0) {
      text = (char *)&local_10->field_006C;
      /* ST_CALLSITE[0053DF17]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(text,st::mutable_c_string("%s0"),param_6);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,param_5,text,nullptr,1);
    }
    if ((param_5 == 1) || (param_5 == 6)) {
      local_1c0 = *(undefined4 *)(local_8 + 2);
      param_14 = *(undefined4 *)(local_8 + 4);
    }
    else {
      local_1c0 = param_13;
    }
    local_1d0[2] = st::machine_word_boundary_cast<int>(pUVar2->field_003C + param_3);
    if (pUVar2->field_005C == 0) {
      local_1d0[3] = -pUVar2->field_0048;
    }
    else {
      local_1d0[3] = pUVar2->field_0044;
    }
    local_1d0[3] = st::machine_word_boundary_cast<int>(local_1d0[3] + param_4);
    local_1bc = param_14;
    if (local_8 != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
    }
    local_1b0 = pUVar2->field_0008;
    local_168 = param_8;
    local_c8 = 1;
    local_c4 = 1;
    local_1ac = 2;
    local_1a8 = param_7;
    local_16c = 2;
    if (param_9 != 0) {
      local_150 = 0x101;
      local_14c = 3;
      local_148 = 0x4201;
      local_144 = param_10;
      local_142 = param_9;
      local_140 = param_11;
      local_138 = 0;
      local_114 = 0;
      local_12c = 0x101;
      local_128 = 3;
      local_124 = 0x4202;
      local_120 = param_10;
      local_11e = param_9;
      local_11c = param_11;
    }
    local_170 = local_1b0;
    if (param_12 != nullptr) {
      local_ac = st::fn_0070AA70(g_cMf32_00806790,param_12,0,1);
      local_a8 = st::fn_0070A6F0(g_cMf32_00806790,0x12,param_12,1);
    }
    /* ST_CALLSITE[0053E0B9]: CALL dword ptr [EAX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*STField<int *>(pUVar2,0xC) + 8))(2,&local_c,0,local_1d0,0);
    g_currentExceptionFrame = local_54.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0xb1,0,iVar3,st::mutable_c_string("%s"),
                             "UPanelTy::CreateBut");
  if (iVar4 == 0) {
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0xb1);
    return 0;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0053E1C0 UPanelTy::CreateTab
#line 4 "decomp/ST.exe/functions/0053E1C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   UPanelTy::CreateTab */

undefined4 __thiscall
st::fn_0053E1C0(UPanelTy *this,byte param_1,byte param_2,int param_3,int param_4,uint param_5,
                   uint param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  byte bVar2;
  int iVar3;
  int iVar5;
  uint uVar3;
  int iVar4;
  int iVar6;
  uint *puVar7;
  uint uVar9;
  uint local_510 [280];
  InternalExceptionFrame local_b0;
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  UPanelTy *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_b0.jumpBuffer,0);
  if (iVar3 == 0) {
    memset(local_6c, 0, 0x58); /* compiler bulk-zero initialization */
    iVar4 = 0;
    memset(local_510, 0, 0x460); /* compiler bulk-zero initialization */
    bVar2 = 0;
    if (param_1 != 0) {
      local_14 = local_c->field_005C;
      iVar4 = 0;
      local_10 = 1;
      puVar7 = local_510 + 1;
      uVar9 = st::machine_word_boundary_cast<uint>(local_c->field_003C + param_3);
      do {
        puVar7[-1] = local_10;
        iVar6 = local_14;
        *puVar7 = (uint)(bVar2 == param_2);
        puVar7[2] = uVar9;
        if (iVar6 == 0) {
          iVar6 = -local_c->field_0048;
        }
        else {
          iVar6 = local_c->field_0044;
        }
        puVar7[3] = iVar6 + iVar4 + param_4;
        puVar7[4] = param_5;
        puVar7[5] = param_6;
        bVar2 = bVar2 + 1;
        local_10 = local_10 + 1;
        iVar4 = iVar4 + param_8;
        uVar9 = uVar9 + param_7;
        puVar7 = puVar7 + 0x1c;
      } while (bVar2 < param_1);
    }
    local_24 = local_510;
    local_5c = local_c->field_0008;
    local_20 = param_2 + 1;
    local_34 = param_10;
    local_58 = 2;
    local_38 = 2;
    local_6c[0] = 1;
    local_6c[1] = 0;
    local_54 = param_9;
    local_1c = 1;
    local_18 = 1;
    local_3c = local_5c;
    /* ST_CALLSITE[0053E30F]: CALL dword ptr [EDX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*STField<int *>(local_c,0xC) + 8))(5,&local_8,0,local_6c,0);
    g_currentExceptionFrame = local_b0.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_b0.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0xd1,0,iVar3,st::mutable_c_string("%s"),
                             "UPanelTy::CreateTab");
  if (iVar5 == 0) {
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0xd1);
    return 0xffffffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0053E3F0 SpecPanelTy::InitPanel
#line 4 "decomp/ST.exe/functions/0053E3F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::InitPanel

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0053CEF0 -> 0053E3F0 @ 0053CF4C

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0053E3F0 -> 00710A90 @ 0053E4F1 */

void __thiscall
st::fn_0053E3F0
          (SpecPanelTy *this,char *text,int param_2,uint param_3,int param_4,int param_5,
          UINT param_6,undefined4 param_7,undefined4 param_8)

{
  ushort *puVar1;
  AnonPointee_SpecPanelTy_0000 *pAVar2;
  SpecPanelTy *pSVar4;
  int iVar5;
  ushort *puVar5;
  ccFntTy *pcVar6;
  uint *puVar7;
  char *resourceString;
  LPSTR pCVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar5 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar4 = local_8;
  if (iVar5 == 0) {
    local_8->field_003C = st::machine_word_boundary_cast<undefined4>(local_8->field_003C + (g_nWidth_00806730 + -800) / 2);
    puVar5 = st::fn_006F1CE0(g_cMf32_00806790,1,text,nullptr,1);
    pSVar4->field_0185 = puVar5;
    /* ST_CALLSITE[0053E469]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new */
    pcVar6 = (ccFntTy *)st::fn_0070DF00(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0028);
    pSVar4->field_0189 = pcVar6;
    pcVar6->field_0058 = 0;
    pcVar6->field_005C = 0;
    puVar1 = pSVar4->field_0068;
    uVar10 = *(uint *)(puVar1 + 10);
    if (uVar10 == 0) {
      uVar10 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar1 + 4);
    }
    puVar7 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    /* ST_CALLSITE[0053E4CD]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pSVar4->field_0068,0,0,'\x01',(byte *)pSVar4->field_0185
          );
    st::fn_00710A90(pSVar4->field_0189,(int)pSVar4->field_0068,0,param_2,param_3,param_4,param_5);
    uVar10 = 0;
    iVar16 = -1;
    iVar5 = -2;
    resourceString = st::fn_006B0140(param_6,g_hINSTANCE_00807618);
    st::fn_007119C0(pSVar4->field_0189,resourceString,iVar5,iVar16,uVar10);
    uVar18 = 1;
    pAVar2 = pSVar4->field_0000;
    uVar17 = 0;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0xc000;
    uVar11 = 0xbfff;
    pCVar8 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
    /* ST_CALLSITE[0053E552]: CALL dword ptr [EDI + 0x4] */
    uVar11 = (*STField<code *>(pAVar2,0x4))
                       (0,1,param_7,param_8,0,1,1,pCVar8,uVar11,uVar12,uVar13,uVar14,uVar15,uVar17,
                        uVar18);
    pSVar4->field_017C = uVar11;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar16 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0xeb,0,iVar5,st::mutable_c_string("%s"),
                              "SpecPanelTy::InitPanel");
  if (iVar16 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0xeb);
  return;
}

// 0053E640 SpecPanelTy::DonePanel
#line 4 "decomp/ST.exe/functions/0053E640/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::DonePanel */

void __thiscall st::fn_0053E640(SpecPanelTy *this)

{
  SpecPanelTy *pSVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_017C != 0) {
      st::fn_006E56B0(local_8->field_000C,local_8->field_017C);
    }
    pSVar2->field_017C = 0;
    if (pSVar2->field_0189 != nullptr) {
      st::fn_00710560((uint *)pSVar2->field_0189);
      pSVar2->field_0189 = nullptr;
    }
    if (pSVar2->field_0185 != nullptr) {
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&pSVar2->field_0185);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0xfa,0,errorCode,
                             st::mutable_c_string("%s"),"SpecPanelTy::DonePanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0xfa);
  return;
}

// 0053E760 SpecPanelTy::SwitchPanel
#line 4 "decomp/ST.exe/functions/0053E760/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::SwitchPanel

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/SpecPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall st::fn_0053E760(SpecPanelTy *this,int param_1)

{
  SpecPanelTy_field_0172State SVar1;
  SpecPanelTy *pSVar3;
  int errorCode;
  int iVar4;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar3 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x113,0,errorCode,
                               st::mutable_c_string("%s"),"SpecPanelTy::SwitchPanel");
    if (iVar4 == 0) {
      st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x113);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = local_8->field_0172;
  if (SVar1 == CASE_1) {
    if (param_1 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (local_8->field_0178 != 0) {
      local_8->field_0028 = 0x4202;
      local_8->field_002C = 0;
      local_8->field_002E = 2;
      local_8->field_0030 = local_8->field_0178;
      if (g_cursorClass_00802A30 != nullptr) {
        /* ST_CALLSITE[0053E839]: CALL dword ptr [EDX] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)g_cursorClass_00802A30->field_0000)(&local_8->field_0x18);
      }
    }
    /* ST_CALLSITE[0053E841]: CALL dword ptr [EDX + 0x18] */
    (*STField<code *>(pSVar3->field_0000,0x0018))(0);
  }
  else {
    if (SVar1 == CASE_2) {
      if (param_1 == 0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      local_8->field_0172 = CASE_3;
      st::fn_00405E2F(CASE_AF);
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      /* ST_CALLSITE[0053E7F2]: CALL 0x00405dbc; direct=00405DBC CPanelTy::ShiftControls */
      st::fn_00405DBC(g_cPanel_00801688,pSVar3->field_0180,0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (SVar1 != CASE_3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    pSVar3->field_0172 = CASE_4;
    st::fn_00405E2F(CASE_B0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 0053E920 SpecPanelTy::SetPanel
#line 4 "decomp/ST.exe/functions/0053E920/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::SetPanel */

undefined4 __thiscall st::fn_0053E920(SpecPanelTy *this,char param_1)

{
  SpecPanelTy *this_00;
  int iVar2;
  int iVar3;
  uint uVar2;
  int iVar4;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;

  if (this->field_0184 == param_1) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_8->field_0184 = param_1;
    if (param_1 == '\0') {
      if ((g_cPanel_00801688 != nullptr) && (g_cPanel_00801688->field_023F == CASE_1)) {
        /* ST_CALLSITE[0053E99E]: CALL 0x00405dbc; direct=00405DBC CPanelTy::ShiftControls */
        st::fn_00405DBC(g_cPanel_00801688,local_8->field_0180,1);
      }
      iVar4 = 0;
    }
    else {
      /* ST_CALLSITE[0053E97A]: CALL dword ptr [EDX + 0x20] */
      (*STField<code *>(local_8->field_0000,0x0020))();
      iVar4 = 1;
    }
    /* ST_CALLSITE[0053E9A7]: CALL 0x0040438b; direct=0040438B SpecPanelTy::SwitchPanel */
    st::fn_0040438B(this_00,iVar4);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x124,0,iVar2,st::mutable_c_string("%s"),
                             "SpecPanelTy::SetPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x124);
  return 1;
}

// 0053EA50 SpecPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/0053EA50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::ShiftControls

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0053EA50(SpecPanelTy *this,int param_1)

{
  short sVar2;
  int iVar4;
  int iVar3;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;

  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    this->field_002E = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (iVar4 == 0) {
      if (local_8->field_017C != 0) {
        st::fn_006E6080(local_8,2,local_8->field_017C,(undefined4 *)&local_8->field_0x18);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x134,0,iVar4,st::mutable_c_string("%s")
                               ,"SpecPanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x134);
  }
  return;
}

// 0053EB70 SpecPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/0053EB70/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   SpecPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401401|0053EB70; family_names=SpecPanelTy::GetMessage; ret4=6;
   direct_offsets={10:3,14:0,18:1,1c:1}

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/SpecPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

int __thiscall st::fn_0053EB70(SpecPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  AnonPointee_SpecPanelTy_0000 *pAVar2;
  SpecPanelTy *this_00;
  int iVar4;
  int iVar6;
  LPSTR pCVar7;
  int iVar5;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  InternalExceptionFrame local_4c;
  SpecPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x168,0,iVar4,st::mutable_c_string("%s")
                               ,"SpecPanelTy::GetMessage");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x168);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    st::fn_006B1A50(g_ddxContext_008075A8,3,nullptr,(undefined4 *)&local_8->field_0x4c);
    iVar6 = this_00->field_0050 + this_00->field_0058;
    this_00->field_0044 = iVar6;
    this_00->field_0174 = (this_00->field_0048 - iVar6) + DAT_00806734;
  }
  /* ST_CALLSITE[0053EBE6]: CALL 0x004017f8; direct=004017F8 PanelTy::GetMessage */
  st::fn_004017F8((PanelTy *)this_00,message);
  SVar1 = message->id;
  if (SVar1 < MESS_SHARED_C000) {
    if (SVar1 == MESS_SHARED_BFFF) {
      /* ST_CALLSITE[0053ECF4]: CALL dword ptr [EDX + 0x1c] */
      (*STField<code *>(this_00->field_0000,0x001C))(0);
      st::fn_00405E2F(0xae);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      if (this_00->field_0172 == CASE_3) {
        iVar6 = st::machine_word_boundary_cast<int>(this_00->field_0050 + (this_00->field_0058 - this_00->field_0048));
        if (iVar6 < this_00->field_0044) {
          this_00->field_0044 = st::machine_word_boundary_cast<int>(this_00->field_0044 + -0xf);
        }
        if (this_00->field_0044 <= iVar6) {
          this_00->field_0044 = iVar6;
          this_00->field_0172 = CASE_1;
          /* ST_CALLSITE[0053ECBF]: CALL dword ptr [EDX + 0x18] */
          (*STField<code *>(this_00->field_0000,0x0018))(1);
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (this_00->field_0172 == CASE_4) {
        iVar6 = this_00->field_0050 + this_00->field_0058;
        if (this_00->field_0044 < iVar6) {
          this_00->field_0044 = st::machine_word_boundary_cast<int>(this_00->field_0044 + 0xf);
        }
        if (iVar6 <= this_00->field_0044) {
          this_00->field_0044 = iVar6;
          this_00->field_0172 = CASE_2;
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else if (SVar1 == MESS_SHARED_0003) {
      /* ST_CALLSITE[0053EC0E]: CALL 0x004033f5; direct=004033F5 SpecPanelTy::DonePanel */
      st::fn_004033F5(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_SHARED_C000) {
    pAVar2 = this_00->field_0000;
    uVar10 = 1;
    uVar9 = 0;
    uVar8 = 0x274e;
    pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
    /* ST_CALLSITE[0053ED3C]: CALL dword ptr [EBX + 0x10] */
    (*STField<code *>(pAVar2,0x10))(message,pCVar7,uVar8,uVar9,uVar10);
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

// 0053EE30 ProdPanelTy::PreInitProdPanel
#line 4 "decomp/ST.exe/functions/0053EE30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::PreInitProdPanel

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0053EE30(ProdPanelTy *this)

{
  ProdPanelTy *pPVar2;
  int iVar3;
  int iVar5;
  int iVar4;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    st::fn_006B1A50(g_ddxContext_008075A8,3,nullptr,(undefined4 *)&local_8->field_0x4c);
    iVar5 = pPVar2->field_0050 + pPVar2->field_0058;
    pPVar2->field_0044 = iVar5;
    pPVar2->field_0174 = (pPVar2->field_0048 - iVar5) + DAT_00806734;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x178,0,iVar3,st::mutable_c_string("%s"),
                             "ProdPanelTy::PreInitProdPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x178);
  return;
}

// 0053EF20 ProdPanelTy::InitProdPanel
#line 4 "decomp/ST.exe/functions/0053EF20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::InitProdPanel

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0053EF20 -> 00710A90 @ 0053F01C

   [STPrototypeRepairApplier] Propagated parameter 14.
   Evidence: 004EEA40 -> 0053EF20 @ 004EEBFB; return of FUN_00571240 | 004EFB60 -> 0053EF20 @
   004EFC57; string at 007C1900 | 004F05C0 -> 0053EF20 @ 004F0740; return of FUN_00571240 | 0053C120
   -> 0053EF20 @ 0053C257; string at 007C771C | 0053EF20 -> 00538690 @ 0053F0F2 */

void __thiscall
st::fn_0053EF20
          (ProdPanelTy *this,UINT param_1,int param_2,uint param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
          int param_13,char *text)

{
  ushort *puVar1;
  ProdPanelTy *this_00;
  int local_EAX_36;
  ccFntTy *pcVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  char *resourceString;
  uint uVar5;
  int iVar2;
  int iVar10;
  uint uVar6;
  byte *puVar7;
  uint uVar8;
  byte bVar9;
  int iVar11;
  int iVar12;
  uint *puVar13;
  InternalExceptionFrame local_58;
  ProdPanelTy *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  local_EAX_36 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  if (local_EAX_36 == 0) {
    /* ST_CALLSITE[0053EF64]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new */
    pcVar3 = (ccFntTy *)st::fn_0070DF00(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0028);
    this_00 = local_14;
    puVar13 = nullptr;
    iVar12 = 0;
    iVar11 = 1;
    bVar9 = 0;
    uVar8 = 0xffffffff;
    local_14->field_017C = pcVar3;
    pcVar3->field_0058 = 0;
    pcVar3->field_005C = 0;
    pCVar4 = st::fn_0040577C(st::mutable_c_string("FRAMES"),0);
    puVar5 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,pCVar4,uVar8,bVar9,iVar11,iVar12,puVar13);
    this_00->field_0190 = puVar5;
    puVar1 = this_00->field_0068;
    uVar8 = *(uint *)(puVar1 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar13 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar13 = 0xffffffff;
      puVar13 = puVar13 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar13 = 0xff;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    /* ST_CALLSITE[0053EFF8]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',
           (byte *)this_00->field_0184);
    st::fn_00710A90(this_00->field_017C,(int)this_00->field_0068,0,param_2,param_3,param_4,param_5);
    uVar8 = 0;
    iVar12 = -1;
    iVar11 = -2;
    resourceString = st::fn_006B0140(param_1,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,resourceString,iVar11,iVar12,uVar8);
    pCVar4 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
    /* ST_CALLSITE[0053F07B]: CALL 0x0040300d; direct=0040300D PanelTy::CreateBut */
    uVar5 = st::fn_0040300D((PanelTy *)this_00,0,1,param_6,param_7,0,1,1,pCVar4,0xbfff,0xc000,0,0
                               ,0,nullptr,0);
    this_00->field_0180 = uVar5;
    /* ST_CALLSITE[0053F0A0]: CALL 0x00405d3f; direct=00405D3F ProdPanelTy::CreateSlider */
    iVar2 = st::fn_00405D3F(this_00,param_8,param_10,param_9,param_10,0xc0a4,0,0,0);
    local_c = &this_00->field_01A1;
    this_00->field_019D = iVar2;
    iVar11 = 0xc09f;
    local_8 = param_11;
    puVar7 = &this_00[1].field_0x10;
    local_10 = 5;
    do {
      /* ST_CALLSITE[0053F0F2]: CALL 0x0040300d; direct=0040300D PanelTy::CreateBut */
      uVar5 = st::fn_0040300D((PanelTy *)this_00,1,0,local_8,param_12,0,1,1,text,iVar11,
                                 iVar11 + 0x10,1,0,st::machine_word_boundary_cast<undefined4>(puVar7),nullptr,0);
      puVar7 = puVar7 + 0x27;
      iVar11 = iVar11 + 1;
      *local_c = uVar5;
      local_8 = local_8 + param_13;
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x193,0,local_EAX_36,
                              st::mutable_c_string("%s"),"ProdPanelTy::InitProdPanel");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_36,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x193);
  return;
}

// 0053F220 ProdPanelTy::DoneProdPanel
#line 4 "decomp/ST.exe/functions/0053F220/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::DoneProdPanel */

void __thiscall st::fn_0053F220(ProdPanelTy *this)

{
  ProdPanelTy *pPVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_0180 != 0) {
      st::fn_006E56B0(local_8->field_000C,local_8->field_0180);
    }
    pPVar2->field_0180 = 0;
    if (pPVar2->field_019D != 0) {
      st::fn_006E56B0(pPVar2->field_000C,pPVar2->field_019D);
    }
    pPVar2->field_019D = 0;
    puVar6 = &pPVar2->field_01A1;
    iVar5 = 5;
    do {
      if (*puVar6 != 0) {
        st::fn_006E56B0(pPVar2->field_000C,*puVar6);
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (pPVar2->field_017C != nullptr) {
      st::fn_00710560((uint *)pPVar2->field_017C);
      pPVar2->field_017C = nullptr;
    }
    if (pPVar2->field_0184 != 0) {
      st::fn_006F20E0(g_cMf32_00806790,&pPVar2->field_0184);
    }
    pPVar2->field_0190 = nullptr;
    pPVar2->field_0188 = 0;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x1a6,0,iVar3,st::mutable_c_string("%s"),
                             "ProdPanelTy::DoneProdPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x1a6);
  return;
}

// 0053F3A0 ProdPanelTy::SwitchPanel
#line 4 "decomp/ST.exe/functions/0053F3A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::SwitchPanel

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/ProdPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall st::fn_0053F3A0(ProdPanelTy *this,int param_1)

{
  ProdPanelTy_field_0172State PVar1;
  ProdPanelTy *pPVar3;
  int errorCode;
  int iVar4;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pPVar3 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x1bf,0,errorCode,
                               st::mutable_c_string("%s"),"ProdPanelTy::SwitchPanel");
    if (iVar4 == 0) {
      st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x1bf);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  PVar1 = local_8->field_0172;
  if (PVar1 == CASE_1) {
    if (param_1 != 0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    /* ST_CALLSITE[0053F448]: CALL dword ptr [EDX + 0x18] */
    (*STField<code *>(local_8->field_0000,0x0018))(0);
  }
  else {
    if (PVar1 == CASE_2) {
      if (param_1 == 0) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      local_8->field_0172 = CASE_3;
      st::fn_00405E2F(CASE_AF);
      if (g_cPanel_00801688 == nullptr) {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      /* ST_CALLSITE[0053F42A]: CALL 0x00405dbc; direct=00405DBC CPanelTy::ShiftControls */
      st::fn_00405DBC(g_cPanel_00801688,pPVar3->field_0195,0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (PVar1 != CASE_3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  if (param_1 == 0) {
    pPVar3->field_0172 = CASE_4;
    st::fn_00405E2F(CASE_B0);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 0053F650 ProdPanelTy::SetPanel
#line 4 "decomp/ST.exe/functions/0053F650/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::SetPanel */

undefined4 __thiscall st::fn_0053F650(ProdPanelTy *this,char param_1)

{
  ProdPanelTy *this_00;
  int iVar2;
  int iVar3;
  uint uVar2;
  int iVar4;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  if (this->field_0194 == param_1) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_8->field_0194 = param_1;
    if (param_1 == '\0') {
      if ((g_cPanel_00801688 != nullptr) && (g_cPanel_00801688->field_023F == CASE_1)) {
        /* ST_CALLSITE[0053F6CE]: CALL 0x00405dbc; direct=00405DBC CPanelTy::ShiftControls */
        st::fn_00405DBC(g_cPanel_00801688,local_8->field_0195,1);
      }
      iVar4 = 0;
    }
    else {
      /* ST_CALLSITE[0053F6AA]: CALL dword ptr [EDX + 0x1c] */
      (*STField<code *>(local_8->field_0000,0x001C))();
      iVar4 = 1;
    }
    /* ST_CALLSITE[0053F6D7]: CALL 0x00403b48; direct=00403B48 ProdPanelTy::SwitchPanel */
    st::fn_00403B48(this_00,iVar4);
    g_currentExceptionFrame = local_4c.previous;
    return 1;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x1eb,0,iVar2,st::mutable_c_string("%s"),
                             "ProdPanelTy::SetPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x1eb);
  return 1;
}

// 0053F780 ProdPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/0053F780/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::ShiftControls

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0053F780(ProdPanelTy *this,int param_1)

{
  ProdPanelTy *this_00;
  short sVar2;
  int iVar5;
  uint uVar3;
  int iVar4;
  int iVar6;
  int *piVar8;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    this->field_002E = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar5 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (iVar5 == 0) {
      if (local_8->field_0180 != 0) {
        st::fn_006E6080(local_8,2,local_8->field_0180,(undefined4 *)&local_8->field_0x18);
      }
      if (this_00->field_019D != 0) {
        st::fn_006E6080(this_00,2,this_00->field_019D,(undefined4 *)&this_00->field_0x18);
      }
      piVar8 = reinterpret_cast<int *>(&this_00->field_01A1);
      iVar6 = 5;
      do {
        if (*piVar8 != 0) {
          st::fn_006E6080(this_00,2,*piVar8,(undefined4 *)&this_00->field_0x18);
        }
        piVar8 = piVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if ((param_1 == 0) || (uVar3 = 0x55, DAT_0080734c == '\0')) {
        uVar3 = 0x56;
      }
      this_00->field_0028 = uVar3;
      if (this_00->field_019D != 0) {
        st::fn_006E6080(this_00,2,this_00->field_019D,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x1ff,0,iVar5,st::mutable_c_string("%s")
                               ,"ProdPanelTy::ShiftControls");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x1ff);
  }
  return;
}

// 0053F940 ProdPanelTy::CreateSlider
#line 4 "decomp/ST.exe/functions/0053F940/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::CreateSlider */

int __thiscall
st::fn_0053F940
          (ProdPanelTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6,undefined4 param_7,undefined4 param_8)

{
  ProdPanelTy *this_00;
  int iVar2;
  LPSTR pCVar2;
  int iVar8;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar9;
  int local_42c [6];
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined2 local_398;
  undefined2 local_396;
  undefined4 local_394;
  undefined4 local_38c;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined2 local_374;
  undefined2 local_372;
  undefined4 local_370;
  undefined4 local_368;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_2a8;
  int local_2a4 [26];
  undefined4 local_23c;
  undefined4 local_214;
  undefined4 local_1f0;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  InternalExceptionFrame local_54;
  ProdPanelTy *local_10;
  ushort *local_c;
  int local_8;

  local_8 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar2 == 0) {
    memset(local_42c, 0, 0x3d8); /* compiler bulk-zero initialization */
    local_6c = param_7;
    local_84 = this_00->field_0008;
    local_68 = param_8;
    local_42c[0] = param_6;
    local_80 = 2;
    local_7c = param_5;
    if (DAT_0080734c != '\0') {
      local_64 = 1;
    }
    iVar9 = 1;
    piVar7 = nullptr;
    uVar6 = 0;
    iVar3 = 1;
    local_42c[2] = (int)(param_6 == 1);
    local_42c[1] = 2;
    local_2a8 = 2;
    local_42c[3] = 2;
    local_318 = 1;
    local_31c = 1;
    pCVar2 = st::fn_0040577C(st::mutable_c_string("BUT_SLLT"),0);
    pCVar2 = st::fn_006F2C00(pCVar2,iVar3,uVar6);
    local_c = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar2,piVar7,iVar9);
    local_414 = *(undefined4 *)(local_c + 2);
    local_410 = *(undefined4 *)(local_c + 4);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_c);
    iVar3 = this_00->field_003C;
    iVar9 = this_00->field_005C;
    local_42c[4] = iVar3 + param_3;
    iVar4 = DAT_00806734;
    if (iVar9 != 0) {
      iVar4 = this_00->field_0044;
    }
    local_3c0 = 2;
    local_42c[5] = iVar4 + param_4;
    local_3c4 = this_00->field_0008;
    local_38c = 0;
    local_380 = 0x101;
    local_3a4 = 0x101;
    local_374 = 0;
    local_398 = 0;
    local_37c = 3;
    local_3a0 = 3;
    local_372 = 2;
    local_396 = 2;
    local_370 = 0x272e;
    local_394 = 0x272e;
    local_3bc = 0xc005;
    local_368 = 1;
    local_39c = 0x4201;
    local_378 = 0x4202;
    local_314 = 500;
    local_310 = 0x32;
    piVar7 = local_42c + 2;
    piVar5 = local_2a4;
    memmove(piVar5, piVar7, 0x17c); /* compiler REP MOVS byte copy */
    local_2a4[2] = iVar3 + param_1;
    local_2a4[3] = DAT_00806734;
    if (iVar9 != 0) {
      local_2a4[3] = this_00->field_0044;
    }
    local_2a4[3] = st::machine_word_boundary_cast<int>(local_2a4[3] + param_2);
    local_23c = 0xc006;
    local_1f0 = 0x272f;
    local_214 = 0x272f;
    /* ST_CALLSITE[0053FB76]: CALL dword ptr [EAX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,4,(undefined4 *)&local_8,nullptr,st::machine_word_boundary_cast<undefined4>(local_42c),0);
    if ((this_00->field_005C == 0) || (uVar6 = 0x55, DAT_0080734c == '\0')) {
      uVar6 = 0x56;
    }
    this_00->field_0028 = uVar6;
    if (local_8 != 0) {
      st::fn_006E6080(this_00,st::machine_word_boundary_cast<undefined4>(&DAT_80000002),local_8,(undefined4 *)&this_00->field_0x18);
    }
    g_currentExceptionFrame = local_54.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x239,0,iVar2,st::mutable_c_string("%s"),
                             "ProdPanelTy::CreateSlider");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x239);
  return -1;
}

// 0053FCD0 ProdPanelTy::PaintTab
#line 4 "decomp/ST.exe/functions/0053FCD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::PaintTab

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_0053FCD0(ProdPanelTy *this,AnonShape_0053FCD0_D10A885A *param_1,code *param_2)

{
  AnonNested_0053FCD0_0014_03E531EF *pAVar1;
  ProdPanelTy *pPVar3;
  int *piVar4;
  uint uVar5;
  LPSTR pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_58;
  ProdPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  pAVar1 = param_1->field_0014;
  local_8 = nullptr;
  local_10 = pAVar1->field_000C - this->field_003C;
  if (this->field_005C == 0) {
    local_c = st::machine_word_boundary_cast<int>(pAVar1->field_0010 - DAT_00806734);
  }
  else {
    local_c = pAVar1->field_0010 - this->field_0044;
  }
  if (param_2 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    piVar4 = (int *)st::fn_0072D7F0(local_58.jumpBuffer,0);
    if (piVar4 == nullptr) {
      iVar9 = 1;
      /* ST_CALLSITE[0053FD51]: CALL dword ptr [EBP + 0xc] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar5 = (*(code *)param_2)(param_1);
      iVar8 = 2;
      pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_BLDTAB"),0);
      pCVar6 = st::fn_006F2C00(pCVar6,iVar8,uVar5);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar6,piVar4,iVar9);
      iVar8 = local_c;
      pPVar3 = local_14;
      /* ST_CALLSITE[0053FD94]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_10,local_c,'\x01',
             (byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      if (param_1->field_0014->field_0004 == 3) {
        iVar9 = 1;
        piVar4 = nullptr;
        pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_BLDFRAME"),0);
        local_8 = st::fn_006F1CE0(g_cMf32_00806790,6,pCVar6,piVar4,iVar9);
        /* ST_CALLSITE[0053FDE4]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pPVar3->field_0068,local_10,iVar8,'\x06',
               (byte *)local_8);
        st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      }
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,pPVar3->field_0060,0xffffffff,pPVar3->field_003C,
                 pPVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x255,0,(int)piVar4,
                               st::mutable_c_string("%s"),"ProdPanelTy::PaintTab");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40((int)piVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x255);
  }
  return;
}

// 0053FEE0 ProdPanelTy::PaintTab
#line 4 "decomp/ST.exe/functions/0053FEE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::PaintTab */

void __thiscall
st::fn_0053FEE0(ProdPanelTy *this,AnonShape_0053FEE0_A49592EB *param_1,code *param_2)

{
  AnonNested_0053FEE0_0014_154E5252 *pAVar1;
  ProdPanelTy *pPVar3;
  int *piVar4;
  uint uVar5;
  LPSTR pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_58;
  ProdPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  pAVar1 = param_1->field_0014;
  local_8 = nullptr;
  local_10 = pAVar1->field_000C - this->field_003C;
  if (this->field_005C == 0) {
    local_c = st::machine_word_boundary_cast<int>(pAVar1->field_0010 - DAT_00806734);
  }
  else {
    local_c = pAVar1->field_0010 - this->field_0044;
  }
  if (param_2 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    piVar4 = (int *)st::fn_0072D7F0(local_58.jumpBuffer,0);
    if (piVar4 == nullptr) {
      iVar9 = 1;
      /* ST_CALLSITE[0053FF61]: CALL dword ptr [EBP + 0xc] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar5 = (*(code *)param_2)(param_1);
      iVar8 = 2;
      pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_MFTABS"),0);
      pCVar6 = st::fn_006F2C00(pCVar6,iVar8,uVar5);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar6,piVar4,iVar9);
      iVar8 = local_c;
      pPVar3 = local_14;
      /* ST_CALLSITE[0053FFA4]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_10,local_c,'\x01',
             (byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      if (param_1->field_0014->field_0004 == 3) {
        iVar9 = 1;
        piVar4 = nullptr;
        pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_MFFRAMES"),0);
        local_8 = st::fn_006F1CE0(g_cMf32_00806790,6,pCVar6,piVar4,iVar9);
        /* ST_CALLSITE[0053FFF4]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pPVar3->field_0068,local_10,iVar8,'\x06',
               (byte *)local_8);
        st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      }
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,pPVar3->field_0060,0xffffffff,pPVar3->field_003C,
                 pPVar3->field_0044);
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x270,0,(int)piVar4,
                               st::mutable_c_string("%s"),"ProdPanelTy::PaintTab");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40((int)piVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x270);
  }
  return;
}

// 005400F0 ProdPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/005400F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\specpan.cpp
   ProdPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004059D4|005400F0; family_names=ProdPanelTy::GetMessage; ret4=7;
   direct_offsets={10:1,14:0,18:1,1c:0}

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/ProdPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

int __thiscall st::fn_005400F0(ProdPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  ProdPanelTy *this_00;
  int iVar3;
  int iVar5;
  LPSTR pCVar6;
  int iVar4;
  char *text;
  InternalExceptionFrame local_4c;
  ProdPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x2a3,0,iVar3,st::mutable_c_string("%s")
                               ,"ProdPanelTy::GetMessage");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\specpan.cpp"),0x2a3);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[0054012D]: CALL 0x004017f8; direct=004017F8 PanelTy::GetMessage */
  st::fn_004017F8((PanelTy *)local_8,message);
  SVar1 = message->id;
  if (SVar1 < MESS_OPTPANELTY_C001) {
    if (SVar1 == MESS_SHARED_C000) {
      pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
      /* ST_CALLSITE[00540281]: CALL 0x00402121; direct=00402121 PanelTy::PaintIBut */
      st::fn_00402121((PanelTy *)this_00,(AnonShape_00538DB0_574DDCD0 *)message,pCVar6,0x274e,0,1
                        );
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      if (this_00->field_0172 == CASE_3) {
        iVar5 = (this_00->field_0058 - this_00->field_0048) + this_00->field_0050;
        if (iVar5 < this_00->field_0044) {
          this_00->field_0044 = st::machine_word_boundary_cast<int>(this_00->field_0044 + -0xf);
        }
        if (this_00->field_0044 <= iVar5) {
          this_00->field_0044 = iVar5;
          this_00->field_0172 = CASE_1;
          /* ST_CALLSITE[00540236]: CALL dword ptr [EDX + 0x18] */
          (*STField<code *>(this_00->field_0000,0x0018))(1);
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (this_00->field_0172 == CASE_4) {
        iVar5 = this_00->field_0058 + this_00->field_0050;
        if (this_00->field_0044 < iVar5) {
          this_00->field_0044 = st::machine_word_boundary_cast<int>(this_00->field_0044 + 0xf);
        }
        if (iVar5 <= this_00->field_0044) {
          this_00->field_0044 = iVar5;
          this_00->field_0172 = CASE_2;
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
    else {
      if (SVar1 == MESS_SHARED_0003) {
        /* ST_CALLSITE[00540185]: CALL 0x00403ecc; direct=00403ECC ProdPanelTy::DoneProdPanel */
        st::fn_00403ECC(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (SVar1 == MESS_SHARED_BFFF) {
        /* ST_CALLSITE[0054015E]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        st::fn_00401A73(this_00,'\0');
        st::fn_00405E2F(0xae);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
    }
  }
  else {
    if (SVar1 == MESS_SHARED_C005) {
      text = "BUT_SLRT";
    }
    else {
      if (SVar1 != MESS_OPTPANELTY_C006) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      text = "BUT_SLLT";
    }
    pCVar6 = st::fn_0040577C(text,0);
    /* ST_CALLSITE[005402CA]: CALL 0x00403373; direct=00403373 PanelTy::PaintBut */
    st::fn_00403373((PanelTy *)this_00,(AnonShape_005389E0_C98BD548 *)message,1,pCVar6,
                      st::function_address_boundary_cast<code *>(st::fn_00529FE0),0,1);
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

