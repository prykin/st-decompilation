#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/research.cpp

// 0053C120 ResearchPanelTy::InitResearchPanel
#line 4 "decomp/ST.exe/functions/0053C120/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::InitResearchPanel */

void __thiscall st::fn_0053C120(ResearchPanelTy *this)

{
  ResearchPanelTy *this_00;
  int iVar2;
  int iVar6;
  DArrayTy *pDVar3;
  LPSTR text;
  ushort *puVar4;
  uint *puVar5;
  int iVar8;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint local_1fc [84];
  InternalExceptionFrame local_ac;
  uint local_68 [4];
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  ResearchPanelTy *local_10;
  int local_c;
  int local_8;

  puVar5 = local_68;
  local_10 = this;
  for (iVar7 = 0x16; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  memset(local_1fc, 0, 0x150); /* compiler bulk-zero initialization */
  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  iVar6 = st::fn_0072D7F0(local_ac.jumpBuffer,0);
  this_00 = local_10;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\research.cpp"),0x39,0,iVar6,st::mutable_c_string("%s")
                               ,"ResearchPanelTy::InitResearchPanel");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\research.cpp"),0x39);
    return;
  }
  iVar7 = 2;
  g_researchPanel_008016E8 = reinterpret_cast<ProdPanelTy *>(local_10);
  puVar5 = &local_10->field_027A;
  do {
    pDVar3 = st::fn_006AE290(nullptr,0x28,0x30,10);
    *puVar5 = st::machine_word_boundary_cast<uint>(pDVar3);
    puVar5 = puVar5 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 1;
  piVar11 = nullptr;
  this_00->field_003C = this_00->field_003C + (g_nWidth_00806730 + -800) / 2;
  text = st::fn_0040577C(st::mutable_c_string("BKG_RESEARCHW"),0);
  puVar4 = st::fn_006F1CE0(g_cMf32_00806790,1,reinterpret_cast<char *>(text),piVar11,iVar7);
  this_00->field_0184 = puVar4;
  puVar4 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,reinterpret_cast<char *>(&DAT_007c20a0),0xffffffff,0,1,0,nullptr);
  this_00->field_0188 = puVar4;
  puVar4 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,reinterpret_cast<char *>(&DAT_007c38c8),0xffffffff,0,1,0,nullptr);
  this_00->field_018C = puVar4;
  /* ST_CALLSITE[0053C257]: CALL 0x00404241; direct=00404241 ProdPanelTy::InitProdPanel */
  st::fn_00404241
            (reinterpret_cast<ProdPanelTy *>(this_00),0x2722,0x3f,2,0xc1,0xc,0x85,0x4f,0x68,0xc4,0x4f,0x20,0x13,0x33,
             st::mutable_c_string("UPG_00"));
  if (DAT_0080874e != '\x03') {
    local_c = this_00->field_005C;
    puVar5 = local_1fc + 1;
    iVar9 = this_00->field_003C + 0x70;
    local_8 = 2;
    iVar7 = 0;
    do {
      iVar2 = local_c;
      puVar5[-1] = iVar7 + 1;
      *puVar5 = 0;
      puVar5[2] = iVar9;
      puVar5[4] = 0x2e;
      iVar10 = DAT_00806734;
      if (iVar2 != 0) {
        iVar10 = this_00->field_0044;
      }
      puVar5[3] = iVar10 + 0x34;
      puVar5[5] = 0x10;
      puVar5[0x11] = 0;
      puVar5[0x15] = 0x101;
      puVar5[10] = 0x101;
      puVar5[0x16] = 3;
      puVar5[0xb] = 3;
      puVar5[0xc] = 0x4201;
      puVar5[0x17] = 0x4202;
      *(undefined2 *)(puVar5 + 0x18) = 0;
      *(undefined2 *)(puVar5 + 0xd) = 0;
      STField<undefined2>(puVar5,0x62) = 2;
      STField<undefined2>(puVar5,0x36) = 2;
      if (iVar7 == 0) {
        uVar8 = 0x3aab;
LAB_0053c30d:
        puVar5[0x19] = uVar8;
        puVar5[0xe] = uVar8;
      }
      else if (iVar7 == 1) {
        uVar8 = 0x3aac;
        goto LAB_0053c30d;
      }
      iVar9 = iVar9 + 0x31;
      puVar5 = puVar5 + 0x1c;
      local_8 = local_8 + -1;
      iVar7 = iVar7 + 1;
    } while (local_8 != 0);
    local_20 = local_1fc;
    local_58 = this_00->field_0008;
    local_1c = (byte)this_00->field_0278 + 1;
    local_68[0] = 1;
    local_68[1] = 1;
    local_18 = 1;
    local_14 = 1;
    local_54 = 2;
    local_50 = 0xb207;
    local_34 = 2;
    local_30 = 0xc0b4;
    local_38 = local_58;
    /* ST_CALLSITE[0053C386]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              (reinterpret_cast<SystemClassTy *>(this_00->field_000C),5,&this_00->field_0282,nullptr,st::machine_word_boundary_cast<undefined4>(local_68),0);
  }
  g_currentExceptionFrame = local_ac.previous;
  return;
}

// 0053C500 ResearchPanelTy::Update
#line 4 "decomp/ST.exe/functions/0053C500/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::Update */

void __thiscall st::fn_0053C500(ResearchPanelTy *this)

{
  ResearchPanelTy *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  uint uVar4;
  InternalExceptionFrame local_4c;
  ResearchPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;

  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    /* ST_CALLSITE[0053C541]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    st::fn_004035BC
              (g_allPlayers_007FA174,6,reinterpret_cast<RecoveredRecordView_0043BEB0_8330D129 *>(&local_8->field_027A)
              );
    if ((&this_00->field_027A)[(byte)this_00->field_0279] == 0) {
      uVar4 = 0;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar4 = *(uint *)((&this_00->field_027A)[(byte)this_00->field_0279] + 0xc);
    }
    if ((&this_00->field_027A)[(byte)this_00->field_0278] == 0) {
      uVar2 = 0;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar2 = *(uint *)((&this_00->field_027A)[(byte)this_00->field_0278] + 0xc);
    }
    st::fn_00402A13(this_00,uVar2,uVar4);
    /* ST_CALLSITE[0053C585]: CALL 0x00405664; direct=00405664 ResearchPanelTy::sub_0053C620 */
    st::fn_00405664(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;

  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\research.cpp"),0x52,0,errorCode,
                             st::mutable_c_string("%s"),"ResearchPanelTy::Update");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\research.cpp"),0x52);
  return;
}

// 0053C820 ResearchPanelTy::PaintUpdBut
#line 4 "decomp/ST.exe/functions/0053C820/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::PaintUpdBut */

void __thiscall
st::fn_0053C820(ResearchPanelTy *this,RecoveredRecordView_004EF320_A54422CD *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar6;
  ResearchPanelTy *pRVar7;
  int iVar5;
  BITMAPINFO *pBVar8;
  int iVar7;
  RecoveredGlobalRecordView_0081175C *pRVar9;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  ResearchPanelTy *local_10;
  int local_c;
  Global_sub_005276E0_param_1Enum *local_8;

  piVar2 = param_1->field_0018;
  local_18 = *piVar2 - this->field_003C;
  if (this->field_005C == 0) {
    local_14 = piVar2[1] - DAT_00806734;
  }
  else {
    local_14 = piVar2[1] - this->field_0044;
  }
  uVar1 = this->field_0199 + -0xc0af + param_1->field_0010;
  iVar3 = (&this->field_027A)[(byte)this->field_0278];
  if ((iVar3 == 0) || (STField<uint>(iVar3,0xC) <= uVar1)) {
    local_8 = nullptr;
  }
  else {
    local_8 = (Global_sub_005276E0_param_1Enum *)
              (STField<int>(iVar3,0x8) * uVar1 + STField<int>(iVar3,0x1C));
  }
  local_10 = this;
  if ((param_1->field_0014 == 0) || (local_8 == nullptr)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = (int)*(short *)((int)this->field_0188 + 0x23) - ((DAT_0080874e != '\x03') + 1);
  }
  else {

    local_c = st::fn_004033F0(*local_8,(byte)((uint)*(undefined4 *)local_8 >> 0x10));
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;

  iVar5 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pRVar7 = local_10;
  if (iVar5 == 0) {
    if ((local_8 == nullptr) || (local_8[8] == CASE_0)) {
      pRVar9 = reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(local_10->field_018C);
    }
    else {
      pRVar9 = reinterpret_cast<RecoveredGlobalRecordView_0081175C *>(local_10->field_0188);
    }
    /* ST_CALLSITE[0053C92A]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
    pBVar8 = st::fn_0070B3A0(pRVar9,local_c);
    iVar6 = local_14;
    iVar3 = local_18;
    /* ST_CALLSITE[0053C941]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)pRVar7->field_0068,local_18,local_14,'\x01',
           reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar8));
    if ((param_1->field_0014 == 3) && (local_8 != nullptr)) {
      /* ST_CALLSITE[0053C96C]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; source view only; no Ghidra override */
      pBVar8 = st::fn_0070B3A0(pRVar7->field_0190,7 - (uint)(local_8[8] != CASE_0));
      /* ST_CALLSITE[0053C97A]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pRVar7->field_0068,iVar3,iVar6,'\x06',
             reinterpret_cast<RecoveredRecordView_006B84D0_87AF9D9B *>(pBVar8));
    }

    st::fn_006B3640
              (reinterpret_cast<int *>(g_ddxContext_008075A8),pRVar7->field_0060,0xffffffff,pRVar7->field_003C,
               pRVar7->field_0044);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;

  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\research.cpp"),0x88,0,iVar5,st::mutable_c_string("%s"),
                             "ResearchPanelTy::PaintUpdBut");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\research.cpp"),0x88);
  return;
}

// 0053CA80 ResearchPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/0053CA80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\research.cpp
   ResearchPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0053CA80; family_names=ResearchPanelTy::GetMessage; ret4=8;
   direct_offsets={10:2,14:2,18:0,1c:2} */

int __thiscall st::fn_0053CA80(ResearchPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  ResearchPanelTy *this_00;
  int iVar3;
  int iVar5;
  byte *puVar6;
  int iVar4;
  int iVar7;
  uint *puVar8;
  InternalExceptionFrame local_58;
  uint local_14;
  byte local_10;
  undefined2 uStack_f;
  undefined1 uStack_d;
  ushort local_c;
  byte local_a;
  ResearchPanelTy *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = this;

  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\research.cpp"),200,0,iVar3,st::mutable_c_string("%s"),
                               "ResearchPanelTy::GetMessage");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\research.cpp"),200);
    return 0xffff;
  }
  iVar7 = 2;
  if (message->id == MESS_ID_CREATE) {
    /* ST_CALLSITE[0053CAC9]: CALL 0x004032a6; direct=004032A6 ProdPanelTy::PreInitProdPanel */
    st::fn_004032A6(reinterpret_cast<ProdPanelTy *>(local_8));
  }
  /* ST_CALLSITE[0053CAD1]: CALL 0x004059d4; direct=004059D4 ProdPanelTy::GetMessage */
  st::fn_004059D4(reinterpret_cast<ProdPanelTy *>(this_00),message);
  SVar1 = message->id;
  if (SVar1 < MESS_BLDLABPANELTY_C0A4) {
    if (SVar1 < MESS_SHARED_C09F) {
      if (SVar1 == MESS_ID_CREATE) {
        /* ST_CALLSITE[0053CB98]: CALL 0x004011b3; direct=004011B3 ResearchPanelTy::InitResearchPanel */
        st::fn_004011B3(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (SVar1 == MESS_SHARED_0003) {
        puVar8 = &this_00->field_027A;
        do {
          if ((DArrayTy *)*puVar8 != nullptr) {
            st::fn_006AE110((DArrayTy *)*puVar8);
            *puVar8 = 0;
          }
          puVar8 = puVar8 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (this_00->field_0282 != 0) {
          st::fn_006E56B0(this_00->field_000C,this_00->field_0282);
        }
        this_00->field_0282 = 0;
        g_researchPanel_008016E8 = nullptr;
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (SVar1 == MESS_RESEARCHPANELTY_B207) {
        this_00->field_0279 = this_00->field_0278;
        this_00->field_0278 = *(char *)(message->arg0).ptr + -1;
        st::fn_00405E2F(0xae);
        /* ST_CALLSITE[0053CB2F]: CALL dword ptr [EAX + 0x1c] */
        this_00->Update();
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
    else {
      iVar7 = (&this_00->field_027A)[(byte)this_00->field_0278];
      if ((iVar7 == 0) ||
         (iVar5 = SVar1 + this_00->field_0199, STField<uint>(iVar7,0xC) <= iVar5 - 0xc09fU)) {
        puVar6 = nullptr;
      }
      else {
        puVar6 = (undefined1 *)((iVar5 + -0xc09f) * STField<int>(iVar7,0x8) + STField<int>(iVar7,0x1C));
      }
      if ((puVar6 != nullptr) && (puVar6[8] != '\0')) {
        uStack_d = 0;
        local_c = 0;
        local_a = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_14 = (uint)CONCAT11(*puVar6,2);
        local_10 = 0;
        uStack_f = 1;
        /* ST_CALLSITE[0053CC2B]: CALL 0x00403c33; direct=00403C33 STPlaySystemC::sub_0054EDF0 */
        st::fn_00403C33(g_playSystem_00802A38,(undefined4 *)0x1e,&local_14,0,0xffffffff);
        /* ST_CALLSITE[0053CC34]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
        st::fn_00401A73(reinterpret_cast<ProdPanelTy *>(this_00),'\0');
        st::fn_00405E2F(0xae);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else {
    switch(SVar1) {
    case MESS_BLDLABPANELTY_C0A4:
      this_00->field_0199 = ((message->arg0).u32);
      /* ST_CALLSITE[0053CC7D]: CALL 0x00405664; direct=00405664 ResearchPanelTy::sub_0053C620 */
      st::fn_00405664(this_00);
      st::fn_00405E2F(0xae);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case MESS_INTERCOMPANELTY_C0AF:
    case 0xc0b0:
    case MESS_BEHPANELTY_C0B1:
    case 0xc0b2:
    case MESS_BLDLABPANELTY_C0B3:
      /* ST_CALLSITE[0053CCA5]: CALL 0x00405ebb; direct=00405EBB ResearchPanelTy::PaintUpdBut */
      st::fn_00405EBB(this_00,reinterpret_cast<RecoveredRecordView_004EF320_A54422CD *>(message));
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case MESS_RESEARCHPANELTY_C0B4:
      /* ST_CALLSITE[0053CCC5]: CALL 0x00403ea4; direct=00403EA4 ProdPanelTy::PaintTab */
      st::fn_00403EA4
                (reinterpret_cast<ProdPanelTy *>(this_00),reinterpret_cast<AnonShape_0053FEE0_A49592EB *>(message),st::function_address_boundary_cast<code *>(st::fn_0052A7B0));
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}
