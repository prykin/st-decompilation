#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/bldlab.cpp

// 004EFB60 BldLabPanelTy::InitBldLabPanel
#line 4 "decomp/ST.exe/functions/004EFB60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::InitBldLabPanel */

void __thiscall st::fn_004EFB60(BldLabPanelTy *this)

{
  BldLabPanelTy *this_00;
  int errorCode;
  BldLabPanelTy_field_027ADArray *pBVar2;
  ushort *puVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  BldLabPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    g_bldLabPanel_00801680 = (ProdPanelTy *)local_8;
    pBVar2 = (BldLabPanelTy_field_027ADArray *)
             st::fn_006AE290(nullptr,0x28,0x30,10);
    this_00->field_027A = pBVar2;
    this_00->field_003C = st::machine_word_boundary_cast<undefined4>(this_00->field_003C + (g_nWidth_00806730 + -800) / 2);
    puVar3 = st::fn_006F1CE0(g_cMf32_00806790,1,st::mutable_c_string("BKG_BUILDLABW"),nullptr,1);
    this_00->field_0184 = puVar3;
    puVar3 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,st::pointer_boundary_cast<char *>(&DAT_007c1910),0xffffffff,0,1,0,nullptr);
    this_00->field_0188 = puVar3;
    puVar3 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,st::mutable_c_string("OBJSD"),0xffffffff,0,1,0,nullptr);
    this_00->field_018C = puVar3;
    st::fn_00404241
              ((ProdPanelTy *)this_00,0x2726,0x3f,2,0xc1,0xc,0x81,99,100,0xc0,99,0x25,0x14,0x31,
               st::mutable_c_string("OBJS_0"));
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldlab.cpp"),0x1d,0,errorCode,st::mutable_c_string("%s")
                             ,"BldLabPanelTy::InitBldLabPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldlab.cpp"),0x1d);
  return;
}

// 004EFD10 BldLabPanelTy::Update
#line 4 "decomp/ST.exe/functions/004EFD10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::Update
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall Update(BldLabPanelTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=004EFD92 RET | 004EFDD1 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_004EFD10(BldLabPanelTy *this)

{
  BldLabPanelTy_field_027ADArray **ppBVar1;
  BldLabPanelTy *this_00;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_50;
  dword local_c;
  BldLabPanelTy *local_8;

  if (this->field_027A != nullptr) {
    local_c = this->field_027A->count;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_8 = this;
    errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      ppBVar1 = &local_8->field_027A;
      st::fn_004035BC(g_allPlayers_007FA174,0xc,(AnonShape_0043BEB0_1C00EC12 *)ppBVar1);
      st::fn_00402A13(this_00,(*ppBVar1)->count,local_c);
      st::fn_004038EB(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldlab.cpp"),0x30,0,errorCode,
                               st::mutable_c_string("%s"),"BldLabPanelTy::Update");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldlab.cpp"),0x30);
  }
  return;
}

// 004EFFE0 BldLabPanelTy::PaintUpdBut
#line 4 "decomp/ST.exe/functions/004EFFE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::PaintUpdBut */

void __thiscall st::fn_004EFFE0(BldLabPanelTy *this,AnonShape_004EF320_444F9AB1 *param_1)

{
  uint uVar1;
  int *piVar2;
  BldLabPanelTy_field_027ADArray *pBVar3;
  int iVar5;
  int iVar7;
  BldLabPanelTy *pBVar8;
  int iVar6;
  BITMAPINFO *pBVar9;
  int iVar8;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar10;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  BldLabPanelTy *local_10;
  uint local_c;
  Global_sub_00526BA0_param_1Enum *pGStack_8;
  BldLabPanelTy_field_027AElement *element_027a;

  piVar2 = param_1->field_0018;
  local_18 = *piVar2 - this->field_003C;
  if (this->field_005C == 0) {
    local_14 = st::machine_word_boundary_cast<int>(piVar2[1] - DAT_00806734);
  }
  else {
    local_14 = piVar2[1] - this->field_0044;
  }
  uVar1 = this->field_0199 + -0xc0af + param_1->field_0010;
  pBVar3 = this->field_027A;
  if ((pBVar3 == nullptr) || (pBVar3->count <= uVar1)) {
    pGStack_8 = nullptr;
  }
  else {
    element_027a = DArrayAt<BldLabPanelTy_field_027AElement>(pBVar3, uVar1);
  }
  local_10 = this;
  if ((param_1->field_0014 == 0) || (element_027a == nullptr)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = (int)*(short *)((int)this->field_0188 + 0x23) - 1;
  }
  else {
    local_c = st::fn_004056F5(element_027a->field_0000,'\x03');
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar6 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pBVar8 = local_10;
  if (iVar6 == 0) {
    if ((element_027a == nullptr) || ((char)element_027a->field_0008 == 0)) {
      pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_018C;
    }
    else {
      pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)local_10->field_0188;
    }
    pBVar9 = st::fn_0070B3A0(pAVar10,local_c);
    iVar7 = local_14;
    iVar5 = local_18;
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pBVar8->field_0068,local_18,local_14,'\x01',
           (byte *)pBVar9);
    if ((param_1->field_0014 == 3) && (element_027a != nullptr)) {
      pBVar9 = st::fn_0070B3A0(pBVar8->field_0190,9 - (uint)((char)element_027a->field_0008 != 0));
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pBVar8->field_0068,iVar5,iVar7,'\x06',(byte *)pBVar9);
    }
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,pBVar8->field_0060,0xffffffff,pBVar8->field_003C,
               pBVar8->field_0044);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldlab.cpp"),0x66,0,iVar6,st::mutable_c_string("%s"),
                             "BldLabPanelTy::PaintUpdBut");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldlab.cpp"),0x66);
  return;
}

// 004F0210 BldLabPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/004F0210/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldlab.cpp
   BldLabPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004F0210; family_names=BldLabPanelTy::GetMessage; ret4=5;
   direct_offsets={10:2,14:1,18:0,1c:1} */

int __thiscall st::fn_004F0210(BldLabPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  BldLabPanelTy_field_027ADArray *pBVar2;
  BldLabPanelTy *this_00;
  int iVar4;
  int iVar6;
  Global_sub_00526BA0_param_1Enum *pGVar7;
  BldLabPanelTy_field_027AElement *element_027a;
  int iVar5;
  InternalExceptionFrame local_4c;
  BldLabPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldlab.cpp"),0x9a,0,iVar4,st::mutable_c_string("%s"),
                               "BldLabPanelTy::GetMessage");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldlab.cpp"),0x9a);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (message->id == MESS_ID_CREATE) {
    st::fn_004032A6((ProdPanelTy *)local_8);
  }
  st::fn_004059D4((ProdPanelTy *)this_00,message);
  SVar1 = message->id;
  if (SVar1 < MESS_BLDLABPANELTY_C0A4) {
    if (SVar1 < MESS_SHARED_C09F) {
      if (SVar1 == MESS_ID_CREATE) {
        st::fn_00405CCC(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (SVar1 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (this_00->field_027A != nullptr) {
        st::fn_006AE110((DArrayTy *)this_00->field_027A);
      }
      this_00->field_027A = nullptr;
      g_bldLabPanel_00801680 = nullptr;
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    pBVar2 = this_00->field_027A;
    if ((pBVar2 == nullptr) ||
       (iVar6 = SVar1 + this_00->field_0199, pBVar2->count <= iVar6 - 0xc09fU)) {
      pGVar7 = nullptr;
    }
    else {
      element_027a = DArrayAt<BldLabPanelTy_field_027AElement>(pBVar2, iVar6 + -0xc09f);
    }
    if (element_027a == nullptr) {
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (*(char *)(element_027a + 2) == '\0') {
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    st::fn_004035AD(g_cursorClass_00802A30,0xe,element_027a->field_0000);
    st::fn_00401A73((ProdPanelTy *)this_00,'\0');
  }
  else {
    if (SVar1 != MESS_BLDLABPANELTY_C0A4) {
      if (SVar1 < MESS_INTERCOMPANELTY_C0AF) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      if (MESS_BLDLABPANELTY_C0B3 < SVar1) {
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      st::fn_0040587B(this_00,(AnonShape_004EF320_444F9AB1 *)message);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    this_00->field_0199 = static_cast<undefined4>((message->arg0).u32);
    st::fn_004038EB(this_00);
  }
  st::fn_00405E2F(0xae);
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

