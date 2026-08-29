#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_rab3m.cpp

// 0062CCA0 STManRub3C::GetMessage
#line 4 "decomp/ST.exe/functions/0062CCA0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004040D9|0062CCA0; family_names=STManRub3C::GetMessage; ret4=4;
   direct_offsets={10:1,14:0,18:0,1c:1} */

int __thiscall st::fn_0062CCA0(STManRub3C *this,STMessage *message)

{
  STMessageId SVar1;
  STManRub3C *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_58;
  byte *local_14;
  uint local_10;
  STManRub3C *local_c;
  AnonShape_0062CCA0_BAB34A07 *local_8;

  local_8 = nullptr;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;

  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;

    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_rab3m.cpp"),0x4e,0,iVar3,st::mutable_c_string("%s"),
                               "STManRub3C::GetMessage");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\nick\\to_rab3m.cpp"),0x50);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (SVar1 == MESS_ID_CREATE) {
    if (g_cMf32_00806754 != nullptr) {
      local_8 = reinterpret_cast<AnonShape_0062CCA0_BAB34A07 *>(st::fn_006F2D90(g_cMf32_00806754,PTR_s_RUBBISH_3_0079d080,0,0));
    }
    if ((local_8 == nullptr) || (local_8->field_000C != 2)) {
      local_c->field_001C = 0;
      local_c->field_0028 = 1;
      local_c->field_0024 = 1;
      local_c->field_0020 = 0xff;
      local_c->field_00B4 = DAT_00808754;
    }
    else {
      /* ST_CALLSITE[0062CDA2]: CALL 0x00401d34; direct=00401D34 STManRub3C::sub_0062D840 */
      st::fn_00401D34(local_c,reinterpret_cast<undefined4 *>(local_8));
    }
    if ((local_8 != nullptr) && (g_cMf32_00806754 != nullptr)) {
      st::fn_006F20E0(g_cMf32_00806754,reinterpret_cast<uint *>(&local_8));
    }
  }
  else {
    if (SVar1 == MESS_SHARED_0003) {
      /* ST_CALLSITE[0062CD3E]: CALL 0x00405245; direct=00405245 STManRub3C::sub_0062CF50 */
      st::fn_00405245(local_c);
      /* ST_CALLSITE[0062CD45]: CALL 0x0040246e; direct=0040246E STManRub3C::sub_0062DD40 */
      st::fn_0040246E(this_00);
      /* ST_CALLSITE[0062CD4C]: CALL 0x00403e81; direct=00403E81 STManRub3C::sub_0062E130 */
      st::fn_00403E81(this_00);
      g_manRub3_008117A4 = nullptr;
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_SHARED_010F) {
      /* ST_CALLSITE[0062CCFE]: CALL 0x00401cf8; direct=00401CF8 STManRub3C::sub_0062D670; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/char; source view only; no Ghidra override */
      local_14 = st::fn_00401CF8(local_c,&local_10);
      /* ST_CALLSITE[0062CD19]: CALL 0x00401078; direct=00401078 STPlaySystemC::SaveObjData */
      st::fn_00401078
                (g_playSystem_00802A38,PTR_s_RUBBISH_3_0079d080,local_14,local_10,0xc);
      st::fn_006AB060(&local_14);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

// 0062CF90 STManRub3C::AddNewRub3
#line 4 "decomp/ST.exe/functions/0062CF90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::AddNewRub3 */

uint __thiscall st::fn_0062CF90(STManRub3C *this,int *param_1)

{
  STManRub3C *pSVar2;
  int *piVar3;
  int iVar4;
  DArrayTy *pDVar4;
  int uVar6;
  int iVar6;
  uint uVar5;
  InternalExceptionFrame local_74;
  int local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  uint local_10;
  STManRub3C *local_c;
  int *local_8;

  local_10 = 0xffffffff;
  if (param_1 == nullptr) {
    return 0xffffffff;
  }
  local_8 = param_1;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_74.jumpBuffer,0);
  piVar3 = local_8;
  pSVar2 = local_c;
  if (iVar4 == 0) {
    if (local_c->field_0030[*local_8] == 0) {
      pDVar4 = st::fn_006AE290(nullptr,10,0x20,10);
      pSVar2->field_0030[*piVar3] = (uint)pDVar4;
    }
    if (pSVar2->field_0030[*piVar3] != 0) {
      memset(local_30, 0, 0x20); /* compiler bulk-zero initialization */
      local_20 = piVar3[4];
      local_18 = piVar3[6];
      local_1c = piVar3[5];
      local_30[1] = piVar3[1];
      local_30[2] = piVar3[2];
      local_30[3] = piVar3[3];
      uVar6 = st::fn_006AE1C0((DArrayTy *)pSVar2->field_0030[*piVar3],local_30);
      g_currentExceptionFrame = local_74.previous;
      return uVar6;
    }
    g_currentExceptionFrame = local_74.previous;
    return local_10;
  }
  g_currentExceptionFrame = local_74.previous;
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_rab3m.cpp"),0x86,0,iVar4,st::mutable_c_string("%s"),
                             "STManRub3C::AddNewRub3");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\nick\\to_rab3m.cpp"),0x88);
  return 0xffff;
}

// 0062D910 STManRub3C::AddNewDock
#line 4 "decomp/ST.exe/functions/0062D910/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::AddNewDock

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=2, sites=0062D9AB MOV CX,word ptr
   [EBP + 0xc] | 0062DA04 MOV AX,word ptr [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: raw retained-width parameter lifetime: width=2, reads=2, sites=0062D9B3 MOV CX,word ptr
   [EBP + 0x10] | 0062D9FD MOV CX,word ptr [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: raw retained-width parameter lifetime: width=2, reads=2, sites=0062D9BB MOV CX,word ptr
   [EBP + 0x14] | 0062DA13 MOV AX,word ptr [EBP + 0x14]

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: raw retained-width parameter lifetime: width=2, reads=2, sites=0062D9A0 MOV CX,word ptr
   [EBP + 0x1c] | 0062D9F2 MOV CX,word ptr [EBP + 0x1c] */

uint __thiscall
st::fn_0062D910
          (STManRub3C *this,int param_1,ushort param_2,ushort param_3,ushort param_4,int param_5,
          ushort param_6,int *param_7)

{
  uint uVar1;
  STManRub3C *pSVar3;
  int iVar4;
  DArrayTy *pDVar4;
  int *piVar5;
  int uVar7;
  int iVar6;
  uint uVar8;
  InternalExceptionFrame local_7c;
  int local_38;
  ushort local_34;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  uint local_2c;
  uint local_18;
  uint local_10;
  int local_c;
  STManRub3C *local_8;

  *param_7 = 0;
  local_10 = 0xffffffff;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_7c.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_rab3m.cpp"),0x1c8,0,iVar4,st::mutable_c_string("%s"),
                               "STManRub3C::AddNewDock");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\nick\\to_rab3m.cpp"),0x1ca);
    return 0xffff;
  }
  if (local_8->field_0030[param_1 + 8] == 0) {
    pDVar4 = st::fn_006AE290(nullptr,10,0x28,10);
    pSVar3->field_0030[param_1 + 8] = (uint)pDVar4;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_c = *(int *)(local_8->field_0030[param_1 + 8] + 0xc);
    uVar8 = 0;
    if (0 < local_c) {
      do {
        uVar1 = local_8->field_0030[param_1 + 8];
        if (uVar8 < STField<uint>(uVar1,0xC)) {
          piVar5 = (int *)(STField<int>(uVar1,0x8) * uVar8 + STField<int>(uVar1,0x1C));
        }
        else {
          piVar5 = nullptr;
        }
        if ((piVar5 != nullptr) && (*piVar5 == param_5)) {
          piVar5[3] = 0;
          *(ushort *)(piVar5 + 1) = param_6;
          STField<ushort>(piVar5,6) = param_2;
          *(ushort *)(piVar5 + 2) = param_3;
          STField<ushort>(piVar5,10) = param_4;
          piVar5[8] = 0;
          *param_7 = 1;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < local_c);
    }
  }
  pDVar4 = (DArrayTy *)pSVar3->field_0030[param_1 + 8];
  if ((pDVar4 != nullptr) && (*param_7 == 0)) {
    memset(&local_38, 0, 0x28); /* compiler bulk-zero initialization */
    local_34 = param_6;
    local_38 = param_5;
    local_30 = param_3;
    local_32 = param_2;
    local_2e = param_4;
    local_2c = 0;
    local_18 = 0;
    uVar7 = st::fn_006AE1C0(pDVar4,&local_38);
    g_currentExceptionFrame = local_7c.previous;
    return uVar7;
  }
  g_currentExceptionFrame = local_7c.previous;
  return local_10;
}

// 0062DD80 STManRub3C::AddNewColl3
#line 4 "decomp/ST.exe/functions/0062DD80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_rab3m.cpp
   STManRub3C::AddNewColl3 */

uint __thiscall
st::fn_0062DD80(STManRub3C *this,int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  STManRub3C *pSVar3;
  int iVar4;
  DArrayTy *pDVar5;
  int *piVar6;
  int uVar7;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_60;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  STManRub3C *local_c;
  int local_8;

  local_10 = 0xffffffff;
  local_8 = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  pSVar3 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_rab3m.cpp"),0x24d,0,iVar4,st::mutable_c_string("%s"),
                               "STManRub3C::AddNewColl3");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\nick\\to_rab3m.cpp"),0x24f);
    return 0xffff;
  }
  if (local_c->field_0030[param_1 + 0x10] == 0) {
    pDVar5 = st::fn_006AE290(nullptr,10,0xc,10);
    pSVar3->field_0030[param_1 + 0x10] = (uint)pDVar5;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = *(int *)(local_c->field_0030[param_1 + 0x10] + 0xc);
    uVar8 = 0;
    if (0 < iVar4) {
      do {
        uVar1 = local_c->field_0030[param_1 + 0x10];
        if (uVar8 < STField<uint>(uVar1,0xC)) {
          piVar6 = (int *)(STField<int>(uVar1,0x8) * uVar8 + STField<int>(uVar1,0x1C));
        }
        else {
          piVar6 = nullptr;
        }
        if ((piVar6 != nullptr) && (*piVar6 == param_2)) {
          local_8 = 1;
          piVar6[1] = param_3;
          piVar6[2] = param_4;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar4);
    }
  }
  pDVar5 = (DArrayTy *)pSVar3->field_0030[param_1 + 0x10];
  if ((pDVar5 != nullptr) && (local_8 == 0)) {
    local_1c = param_2;
    local_18 = param_3;
    local_14 = param_4;
    uVar7 = st::fn_006AE1C0(pDVar5,&local_1c);
    g_currentExceptionFrame = local_60.previous;
    return uVar7;
  }
  g_currentExceptionFrame = local_60.previous;
  return local_10;
}
