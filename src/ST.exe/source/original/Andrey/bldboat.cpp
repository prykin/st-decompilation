#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/bldboat.cpp

// 004EEA40 BldBoatPanelTy::InitBldBoatPanel
#line 4 "decomp/ST.exe/functions/004EEA40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::InitBldBoatPanel */

void __thiscall st::fn_004EEA40(BldBoatPanelTy *this)

{
  BldBoatPanelTy *this_00;
  byte bVar2;
  int iVar8;
  DArrayTy *pDVar3;
  ccFntTy *pcVar4;
  LPSTR pCVar5;
  ushort *puVar6;
  int iVar7;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  bool bVar13;
  int *piVar14;
  int local_2e8 [11];
  undefined4 auStack_2bc [3];
  undefined4 auStack_2b0 [4];
  undefined4 auStack_2a0 [4];
  undefined4 auStack_290 [3];
  undefined4 auStack_284 [115];
  InternalExceptionFrame local_b8;
  undefined4 local_74 [4];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  BldBoatPanelTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  char *text;

  puVar12 = local_74;
  local_1c = this;
  for (iVar9 = 0x16; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  memset(local_2e8, 0, 0x230); /* compiler bulk-zero initialization */
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  iVar8 = st::fn_0072D7F0(local_b8.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldboat.cpp"),0x3f,0,iVar8,st::mutable_c_string("%s"),
                               "BldBoatPanelTy::InitBldBoatPanel");
    if (iVar7 == 0) {
      st::fn_006A5E40(iVar8,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldboat.cpp"),0x3f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar9 = 4;
  g_bldBoatPanel_0080167C = (ProdPanelTy *)local_1c;
  puVar12 = &local_1c->field_027A;
  do {
    pDVar3 = st::fn_006AE290(nullptr,10,0x30,5);
    *puVar12 = st::machine_word_boundary_cast<undefined4>(pDVar3);
    puVar12 = puVar12 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  this_00->field_003C = st::machine_word_boundary_cast<undefined4>(this_00->field_003C + (g_nWidth_00806730 + -800) / 2);
  pcVar4 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,st::mutable_c_string("HOLD_FONT"),0);
  this_00->field_028A = pcVar4;
  pcVar4->field_0058 = 1;
  pcVar4->field_005C = 0;
  iVar9 = 1;
  piVar14 = nullptr;
  pCVar5 = st::fn_0040577C(st::mutable_c_string("BKG_BLDBOATW"),0);
  puVar6 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar5,piVar14,iVar9);
  this_00->field_0184 = puVar6;
  text = &this_00->field_006C;
  pCVar5 = st::fn_0040577C(st::mutable_c_string("BKG_BLDBOATBUT"),0);
  st::external_00000080(text,st::mutable_c_string("%s0"),pCVar5);
  puVar6 = st::fn_006F1CE0(g_cMf32_00806790,1,text,nullptr,1);
  this_00->field_028E = puVar6;
  if (DAT_0080874d == 0xff) {
    iVar9 = 1;
  }
  else {
    iVar9 = DAT_0080874d + 1;
  }
  st::external_00000080(text,st::mutable_c_string("BOATS_%d"),iVar9);
  puVar6 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,text,0xffffffff,0,1,0,nullptr);
  this_00->field_0188 = puVar6;
  puVar6 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,st::mutable_c_string("BOATS_D"),0xffffffff,0,1,0,nullptr);
  this_00->field_018C = puVar6;
  pCVar5 = st::fn_0040577C(st::mutable_c_string("BKG_BLDBOATBUT"),0);
  st::fn_00404241
            ((ProdPanelTy *)this_00,0x2723,0x3f,2,0xc1,0xc,0x85,99,0x68,0xc4,99,0x20,0x13,0x33,
             pCVar5);
  local_8 = local_8 & 0xffffff00;
  local_10 = (DAT_0080874e != '\x03') + 3;
  if (local_10 != 0) {
    local_18 = this_00->field_003C;
    local_14 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffea) + 0x5e;
    uVar10 = 0;
    local_c = this_00->field_005C;
    do {
      iVar9 = local_14;
      local_2e8[uVar10 * 0x1c] = uVar10 + 1;
      local_2e8[uVar10 * 0x1c + 1] = 0;
      local_2e8[uVar10 * 0x1c + 3] = iVar9 + uVar10 * 0x2c + local_18;
      bVar13 = local_c != 0;
      local_2e8[uVar10 * 0x1c + 5] = 0x2b;
      iVar9 = DAT_00806734;
      if (bVar13) {
        iVar9 = this_00->field_0044;
      }
      local_2e8[uVar10 * 0x1c + 4] = iVar9 + 0x3d;
      local_2e8[uVar10 * 0x1c + 6] = 0x1b;
      auStack_2a0[uVar10 * 0x1c] = 0;
      auStack_290[uVar10 * 0x1c] = 0x101;
      auStack_2bc[uVar10 * 0x1c] = 0x101;
      auStack_290[uVar10 * 0x1c + 1] = 3;
      auStack_2bc[uVar10 * 0x1c + 1] = 3;
      auStack_2bc[uVar10 * 0x1c + 2] = 0x4201;
      auStack_290[uVar10 * 0x1c + 2] = 0x4202;
      *(undefined2 *)(auStack_284 + uVar10 * 0x1c) = 0;
      *(undefined2 *)(auStack_2b0 + uVar10 * 0x1c) = 0;
      *(undefined2 *)((int)auStack_284 + (uVar10 * 0x38 + 1) * 2) = 2;
      *(undefined2 *)((int)auStack_2b0 + (uVar10 * 0x38 + 1) * 2) = 2;
      switch(uVar10) {
      case 0:
        uVar11 = 0x3a9f;
        break;
      case 1:
        uVar11 = 0x3aa0;
        break;
      case 2:
        uVar11 = 0x3aa2;
        break;
      case 3:
        uVar11 = 0x3aa1;
        break;
      default:
        goto switchD_004eed0b_default;
      }
      auStack_284[uVar10 * 0x1c + 1] = uVar11;
      auStack_2b0[uVar10 * 0x1c + 1] = uVar11;
switchD_004eed0b_default:
      bVar2 = (char)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
      uVar10 = (uint)bVar2;
    } while ((int)uVar10 < local_10);
  }
  local_2c = local_2e8;
  local_28 = (byte)this_00->field_0278 + 1;
  local_64 = this_00->field_0008;
  local_60 = 2;
  local_40 = 2;
  local_74[0] = 1;
  local_74[1] = 1;
  local_5c = 0xb201;
  local_3c = 0xb202;
  local_24 = 1;
  local_20 = 1;
  local_44 = local_64;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*(int *)this_00->field_000C + 8))(5,&this_00->field_0292,0,local_74,0);
  g_currentExceptionFrame = local_b8.previous;
  return;
}

// 004EF020 BldBoatPanelTy::Update
#line 4 "decomp/ST.exe/functions/004EF020/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::Update */

void __thiscall st::fn_004EF020(BldBoatPanelTy *this)

{
  BldBoatPanelTy *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  uint uVar4;
  InternalExceptionFrame local_4c;
  BldBoatPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    st::fn_004035BC
              (g_allPlayers_007FA174,7,(AnonShape_0043BEB0_1C00EC12 *)&local_8->field_027A);
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
    st::fn_00403C6A(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldboat.cpp"),0x60,0,errorCode,
                             st::mutable_c_string("%s"),"BldBoatPanelTy::Update");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldboat.cpp"),0x60);
  return;
}

// 004EF320 BldBoatPanelTy::PaintBldBut
#line 4 "decomp/ST.exe/functions/004EF320/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::PaintBldBut */

void __thiscall
st::fn_004EF320(BldBoatPanelTy *this,AnonShape_004EF320_444F9AB1 *param_1)

{
  int iVar1;
  BldBoatPanelTy *pBVar3;
  uint uVar4;
  int iVar4;
  BITMAPINFO *pBVar5;
  int iVar6;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar6;
  int iVar7;
  InternalExceptionFrame local_60;
  int local_1c;
  BldBoatPanelTy *local_18;
  int *local_14;
  BITMAPINFO *local_10;
  uint local_c;
  Global_sub_00526BA0_param_1Enum *local_8;

  local_14 = param_1->field_0018;
  local_1c = *local_14 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = st::machine_word_boundary_cast<uint>(local_14[1] - DAT_00806734);
  }
  else {
    local_c = local_14[1] - this->field_0044;
  }
  uVar4 = this->field_0199 + -0xc0af + param_1->field_0010;
  iVar1 = (&this->field_027A)[(byte)this->field_0278];
  if ((iVar1 == 0) || (*(uint *)(iVar1 + 0xc) <= uVar4)) {
    local_8 = nullptr;
  }
  else {
    local_8 = (Global_sub_00526BA0_param_1Enum *)
              (*(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 0x1c));
  }
  local_18 = this;
  if ((param_1->field_0014 == 0) || (local_8 == nullptr)) {
    local_10 = (BITMAPINFO *)this->field_028E;
  }
  else {
    if ((char)local_8[2] == 0) {
      pAVar6 = (AnonShape_GLOBAL_0081175C_57F682DD *)this->field_018C;
    }
    else {
      pAVar6 = (AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0188;
    }
    uVar4 = st::fn_004056F5(*local_8,STField<byte>(local_8,9));
    local_10 = st::fn_0070B3A0(pAVar6,uVar4);
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar4 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  uVar4 = local_c;
  pBVar3 = local_18;
  iVar1 = local_1c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldboat.cpp"),0x9e,0,iVar4,st::mutable_c_string("%s"),
                               "BldBoatPanelTy::PaintBldBut");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldboat.cpp"),0x9e);
    return;
  }
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)local_18->field_0068,0,local_1c,local_c,local_14[2],
               local_14[3],0);
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)pBVar3->field_0068,iVar1 + 1,uVar4 + 1,'\x01',
         (byte *)local_10);
  if (param_1->field_0014 == 3) {
    if (local_8 == nullptr) goto LAB_004ef4e9;
    iVar7 = (-(uint)((char)local_8[2] != 0) & 2) + 3;
  }
  else {
    iVar7 = 4;
  }
  pBVar5 = st::fn_0070B3A0(pBVar3->field_0190,iVar7);
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)pBVar3->field_0068,iVar1,uVar4,'\x06',(byte *)pBVar5);
  if ((((local_8 != nullptr) && (local_8[1] != 0)) &&
      ((char)local_8[2] != 0)) && (param_1->field_0014 != 0)) {
    st::external_00000080(st::pointer_boundary_cast<LPSTR>(&pBVar3->field_006C),st::mutable_c_string("%d"),local_8[1]);
    st::fn_00710A90(pBVar3->field_028A,pBVar3->field_0068,0,iVar1,uVar4,local_14[2],local_14[3]);
    st::fn_007119C0(pBVar3->field_028A,&pBVar3->field_006C,-2,-1,0);
  }
LAB_004ef4e9:
  st::fn_006B3640
            ((int *)g_ddxContext_008075A8,pBVar3->field_0060,0xffffffff,pBVar3->field_003C,
             pBVar3->field_0044);
  g_currentExceptionFrame = local_60.previous;
  return;
}

// 004EF6D0 BldBoatPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/004EF6D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldboat.cpp
   BldBoatPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004EF6D0; family_names=BldBoatPanelTy::GetMessage; ret4=8;
   direct_offsets={10:2,14:2,18:1,1c:2} */

int __thiscall st::fn_004EF6D0(BldBoatPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  BldBoatPanelTy *this_00;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar6;
  int iVar7;
  InternalExceptionFrame local_58;
  undefined1 local_14;
  undefined3 uStack_13;
  undefined1 local_10;
  short sStack_f;
  undefined1 uStack_d;
  undefined2 local_c;
  undefined1 local_a;
  BldBoatPanelTy *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldboat.cpp"),0xec,0,iVar4,st::mutable_c_string("%s"),
                               "BldBoatPanelTy::GetMessage");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldboat.cpp"),0xec);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    st::fn_004032A6((ProdPanelTy *)local_8);
  }
  st::fn_004059D4((ProdPanelTy *)this_00,message);
  SVar1 = message->id;
  if (SVar1 < 0xb203) {
    if (SVar1 == MESS_SHARED_B202) {
      st::fn_00401CE4
                ((ProdPanelTy *)this_00,(AnonShape_0053FCD0_D10A885A *)message,st::pointer_boundary_cast<undefined *>(st::fn_00402E7D));
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_CREATE) {
      st::fn_004054A7(this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_SHARED_0003) {
      st::fn_00404DAE((AnonShape_004EEF20_59DE1DA2 *)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_SHARED_B201) {
      this_00->field_0279 = this_00->field_0278;
      this_00->field_0278 = *(char *)(message->arg0).ptr + -1;
      st::fn_00405E2F(0xae);
      this_00->Update();
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else {
    switch(SVar1) {
    case MESS_SHARED_C09F:
    case MESS_BEHPANELTY_C0A0:
    case MESS_FSGSTY_C0A1:
    case MESS_SHARED_C0A2:
    case MESS_SHARED_C0A3:
      iVar7 = (&this_00->field_027A)[(byte)this_00->field_0278];
      if ((iVar7 == 0) ||
         (iVar5 = SVar1 + this_00->field_0199, *(uint *)(iVar7 + 0xc) <= iVar5 - 0xc09fU)) {
        puVar6 = nullptr;
      }
      else {
        puVar6 = (undefined4 *)((iVar5 + -0xc09f) * *(int *)(iVar7 + 8) + *(int *)(iVar7 + 0x1c));
      }
      if ((puVar6 != nullptr) && (*(char *)(puVar6 + 2) != '\0')) {
        sStack_f = 0;
        uStack_d = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        auto _local_14 = CONCAT31((int3)*puVar6,1);
        local_10 = (undefined1)((uint)*puVar6 >> 0x18);
        local_c = 0;
        local_a = 0;
        if ((message->arg1).u32 == 0) {
          uVar3 = st::external_00000082(0x10);
          sStack_f = (-(ushort)((uVar3 & 0x8000) != 0) & 9) + 1;
        }
        else {
          uVar3 = st::external_00000082(0x10);
          sStack_f = (-(ushort)((uVar3 & 0x8000) != 0) & 0xfff7) - 1;
        }
        uStack_d = 0xff;
        local_c = 0xffff;
        local_a = 0xff;
        st::fn_00403C33((undefined4 *)0x1e,(uint *)&local_14,0,0xffffffff);
        st::fn_00405E2F(0xae);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      break;
    case MESS_BLDLABPANELTY_C0A4:
      this_00->field_0199 = static_cast<undefined4>((message->arg0).u32);
      st::fn_00403C6A(this_00);
      st::fn_00405E2F(0xae);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    case MESS_INTERCOMPANELTY_C0AF:
    case 0xc0b0:
    case MESS_BEHPANELTY_C0B1:
    case 0xc0b2:
    case MESS_BLDLABPANELTY_C0B3:
      st::fn_004011EA(this_00,(AnonShape_004EF320_444F9AB1 *)message);
    }
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

