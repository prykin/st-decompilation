#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/bldobj.cpp

// 004F05C0 BldObjPanelTy::InitBldObjPanel
#line 4 "decomp/ST.exe/functions/004F05C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldobj.cpp
   BldObjPanelTy::InitBldObjPanel */

void __thiscall st::fn_004F05C0(BldObjPanelTy *this)

{
  BldObjPanelTy *this_00;
  byte bVar2;
  int iVar7;
  DArrayTy *pDVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  int iVar6;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  bool bVar12;
  int *piVar13;
  int local_358 [11];
  undefined4 auStack_32c [3];
  undefined4 auStack_320 [4];
  undefined4 auStack_310 [4];
  undefined4 auStack_300 [3];
  undefined4 auStack_2f4 [143];
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
  BldObjPanelTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;

  puVar11 = local_74;
  local_1c = this;
  for (iVar8 = 0x16; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  memset(local_358, 0, 0x2a0); /* compiler bulk-zero initialization */
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  iVar7 = st::fn_0072D7F0(local_b8.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldobj.cpp"),0x3d,0,iVar7,st::mutable_c_string("%s"),
                               "BldObjPanelTy::InitBldObjPanel");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar7,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldobj.cpp"),0x3d);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar8 = 5;
  g_bldObjPanel_00801684 = (ProdPanelTy *)local_1c;
  puVar11 = &local_1c->field_027E;
  do {
    pDVar3 = st::fn_006AE290(nullptr,10,0x30,5);
    *puVar11 = st::machine_word_boundary_cast<undefined4>(pDVar3);
    puVar11 = puVar11 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 1;
  this_00->field_003C = st::machine_word_boundary_cast<undefined4>(this_00->field_003C + (g_nWidth_00806730 + -800) / 2);
  piVar13 = nullptr;
  pCVar4 = st::fn_0040577C(st::mutable_c_string("BKG_BLDOBJW"),0);
  puVar5 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar4,piVar13,iVar8);
  this_00->field_0184 = puVar5;
  pCVar4 = st::fn_0040577C(st::mutable_c_string("BKG_BLDOBJBUT"),0);
  st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_006C),st::mutable_c_string("%s0"),pCVar4);
  puVar5 = st::fn_006F1CE0(g_cMf32_00806790,1,&this_00->field_006C,nullptr,1);
  this_00->field_027A = puVar5;
  puVar5 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,st::pointer_boundary_cast<char *>(&DAT_007c1910),0xffffffff,0,1,0,nullptr);
  this_00->field_0188 = puVar5;
  puVar5 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,st::mutable_c_string("OBJSD"),0xffffffff,0,1,0,nullptr);
  this_00->field_018C = puVar5;
  pCVar4 = st::fn_0040577C(st::mutable_c_string("BKG_BLDOBJBUT"),0);
  st::fn_00404241
            ((ProdPanelTy *)this_00,0x2724,0x36,2,0xc1,0xc,0x79,99,0x5b,0xb7,99,0x1c,
             (DAT_0080874e == '\x03') + 0x13,0x31,pCVar4);
  local_8 = local_8 & 0xffffff00;
  local_10 = (DAT_0080874e != '\x03') + 4;
  if (local_10 != 0) {
    local_18 = this_00->field_003C;
    local_c = this_00->field_005C;
    local_14 = (-(uint)(DAT_0080874e != '\x03') & 0xffffffeb) + 0x3d;
    uVar9 = 0;
    do {
      iVar8 = local_14;
      local_358[uVar9 * 0x1c] = uVar9 + 1;
      local_358[uVar9 * 0x1c + 1] = 0;
      local_358[uVar9 * 0x1c + 3] = iVar8 + uVar9 * 0x2c + local_18;
      bVar12 = local_c != 0;
      local_358[uVar9 * 0x1c + 5] = 0x2b;
      iVar8 = DAT_00806734;
      if (bVar12) {
        iVar8 = this_00->field_0044;
      }
      local_358[uVar9 * 0x1c + 4] = iVar8 + 0x3d;
      local_358[uVar9 * 0x1c + 6] = 0x1b;
      auStack_310[uVar9 * 0x1c] = 0;
      auStack_300[uVar9 * 0x1c] = 0x101;
      auStack_32c[uVar9 * 0x1c] = 0x101;
      auStack_300[uVar9 * 0x1c + 1] = 3;
      auStack_32c[uVar9 * 0x1c + 1] = 3;
      auStack_32c[uVar9 * 0x1c + 2] = 0x4201;
      auStack_300[uVar9 * 0x1c + 2] = 0x4202;
      *(undefined2 *)(auStack_2f4 + uVar9 * 0x1c) = 0;
      *(undefined2 *)(auStack_320 + uVar9 * 0x1c) = 0;
      *(undefined2 *)((int)auStack_2f4 + (uVar9 * 0x38 + 1) * 2) = 2;
      *(undefined2 *)((int)auStack_320 + (uVar9 * 0x38 + 1) * 2) = 2;
      switch(uVar9) {
      case 0:
        uVar10 = 0x3a9b;
        break;
      case 1:
        uVar10 = 0x3a9c;
        break;
      case 2:
        uVar10 = 0x3a9d;
        break;
      case 3:
        uVar10 = 0x3aa8;
        break;
      case 4:
        uVar10 = 0x3a9e;
        break;
      default:
        goto switchD_004f0850_default;
      }
      auStack_2f4[uVar9 * 0x1c + 1] = uVar10;
      auStack_320[uVar9 * 0x1c + 1] = uVar10;
switchD_004f0850_default:
      bVar2 = (char)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
      uVar9 = (uint)bVar2;
    } while ((int)uVar9 < local_10);
  }
  local_2c = local_358;
  local_28 = (byte)this_00->field_0278 + 1;
  local_64 = this_00->field_0008;
  local_74[0] = 1;
  local_74[1] = 1;
  local_60 = 2;
  local_5c = 0xb205;
  local_40 = 2;
  local_3c = 0xb206;
  local_24 = 1;
  local_20 = 1;
  local_44 = local_64;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)this_00->field_000C + 8))(5,&this_00->field_0292,0,local_74,0);
  g_currentExceptionFrame = local_b8.previous;
  return;
}

// 004F0B60 BldObjPanelTy::Update
#line 4 "decomp/ST.exe/functions/004F0B60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldobj.cpp
   BldObjPanelTy::Update */

void __thiscall st::fn_004F0B60(BldObjPanelTy *this)

{
  BldObjPanelTy *this_00;
  int errorCode;
  uint uVar2;
  int iVar3;
  uint uVar4;
  InternalExceptionFrame local_4c;
  BldObjPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    st::fn_004035BC
              (g_allPlayers_007FA174,8,(AnonShape_0043BEB0_1C00EC12 *)&local_8->field_027E);
    if ((&this_00->field_027E)[(byte)this_00->field_0279] == 0) {
      uVar4 = 0;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar4 = *(uint *)((&this_00->field_027E)[(byte)this_00->field_0279] + 0xc);
    }
    if ((&this_00->field_027E)[(byte)this_00->field_0278] == 0) {
      uVar2 = 0;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar2 = *(uint *)((&this_00->field_027E)[(byte)this_00->field_0278] + 0xc);
    }
    st::fn_00402A13(this_00,uVar2,uVar4);
    st::fn_00402C7A(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldobj.cpp"),0x5e,0,errorCode,st::mutable_c_string("%s")
                             ,"BldObjPanelTy::Update");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldobj.cpp"),0x5e);
  return;
}

// 004F0E60 BldObjPanelTy::PaintBldBut
#line 4 "decomp/ST.exe/functions/004F0E60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldobj.cpp
   BldObjPanelTy::PaintBldBut */

void __thiscall st::fn_004F0E60(BldObjPanelTy *this,AnonShape_004EF320_444F9AB1 *param_1)

{
  int *piVar1;
  int iVar2;
  BldObjPanelTy *pBVar4;
  int iVar5;
  uint uVar6;
  int errorCode;
  BITMAPINFO *pBVar7;
  int iVar7;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar8;
  InternalExceptionFrame local_5c;
  int local_18;
  BldObjPanelTy *local_14;
  int local_10;
  BITMAPINFO *local_c;
  Global_sub_00526BA0_param_1Enum *local_8;

  piVar1 = param_1->field_0018;
  local_18 = *piVar1 - this->field_003C;
  if (this->field_005C == 0) {
    local_10 = st::machine_word_boundary_cast<int>(piVar1[1] - DAT_00806734);
  }
  else {
    local_10 = piVar1[1] - this->field_0044;
  }
  uVar6 = this->field_0199 + -0xc0af + param_1->field_0010;
  iVar2 = (&this->field_027E)[(byte)this->field_0278];
  if ((iVar2 == 0) || (*(uint *)(iVar2 + 0xc) <= uVar6)) {
    local_8 = nullptr;
  }
  else {
    local_8 = (Global_sub_00526BA0_param_1Enum *)
              (*(int *)(iVar2 + 8) * uVar6 + *(int *)(iVar2 + 0x1c));
  }
  local_14 = this;
  if ((param_1->field_0014 == 0) || (local_8 == nullptr)) {
    local_c = (BITMAPINFO *)this->field_027A;
  }
  else {
    if ((char)local_8[2] == 0) {
      pAVar8 = (AnonShape_GLOBAL_0081175C_57F682DD *)this->field_018C;
    }
    else {
      pAVar8 = (AnonShape_GLOBAL_0081175C_57F682DD *)this->field_0188;
    }
    uVar6 = st::fn_004056F5(*local_8,STField<byte>(local_8,9));
    local_c = st::fn_0070B3A0(pAVar8,uVar6);
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  errorCode = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  iVar5 = local_10;
  pBVar4 = local_14;
  iVar2 = local_18;
  if (errorCode == 0) {
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_18,local_10,'\x01',
           (byte *)local_c);
    if ((param_1->field_0014 == 3) && (local_8 != nullptr)) {
      pBVar7 = st::fn_0070B3A0(pBVar4->field_0190,9 - (uint)((char)local_8[2] != 0));
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pBVar4->field_0068,iVar2,iVar5,'\x06',(byte *)pBVar7);
    }
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,pBVar4->field_0060,0xffffffff,pBVar4->field_003C,
               pBVar4->field_0044);
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldobj.cpp"),0x92,0,errorCode,st::mutable_c_string("%s")
                             ,"BldObjPanelTy::PaintBldBut");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldobj.cpp"),0x92);
  return;
}

// 004F1080 BldObjPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/004F1080/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\bldobj.cpp
   BldObjPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004F1080; family_names=BldObjPanelTy::GetMessage; ret4=8;
   direct_offsets={10:2,14:2,18:0,1c:2} */

int __thiscall st::fn_004F1080(BldObjPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  BldObjPanelTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar5;
  int iVar6;
  InternalExceptionFrame local_4c;
  BldObjPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\bldobj.cpp"),0xca,0,iVar3,st::mutable_c_string("%s"),
                               "BldObjPanelTy::GetMessage");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\bldobj.cpp"),0xca);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    st::fn_004032A6((ProdPanelTy *)local_8);
  }
  st::fn_004059D4((ProdPanelTy *)this_00,message);
  SVar1 = message->id;
  if (SVar1 < MESS_RESEARCHPANELTY_B207) {
    if (SVar1 == MESS_BLDOBJPANELTY_B206) {
      st::fn_00401CE4
                ((ProdPanelTy *)this_00,(AnonShape_0053FCD0_D10A885A *)message,st::pointer_boundary_cast<undefined *>(st::fn_00401BA4));
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_CREATE) {
      st::fn_00401BEA(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_SHARED_0003) {
      st::fn_00404129((AnonShape_004F0A60_A5DE070F *)this_00);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    }
    if (SVar1 == MESS_BLDOBJPANELTY_B205) {
      this_00->field_0279 = this_00->field_0278;
      this_00->field_0278 = *(char *)(message->arg0).ptr + -1;
      st::fn_00405E2F(0xae);
      this_00->Update();
      g_currentExceptionFrame = local_4c.previous;
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
      iVar6 = (&this_00->field_027E)[(byte)this_00->field_0278];
      if ((iVar6 == 0) ||
         (iVar4 = SVar1 + this_00->field_0199, *(uint *)(iVar6 + 0xc) <= iVar4 - 0xc09fU)) {
        puVar5 = nullptr;
      }
      else {
        puVar5 = (undefined4 *)((iVar4 + -0xc09f) * *(int *)(iVar6 + 8) + *(int *)(iVar6 + 0x1c));
      }
      if ((puVar5 != nullptr) && (*(char *)(puVar5 + 2) != '\0')) {
        st::fn_004035AD(g_cursorClass_00802A30,0xe,*puVar5);
        st::fn_00401A73((ProdPanelTy *)this_00,'\0');
        st::fn_00405E2F(0xae);
        g_currentExceptionFrame = local_4c.previous;
        return 0;
      }
      break;
    case MESS_BLDLABPANELTY_C0A4:
      this_00->field_0199 = static_cast<undefined4>((message->arg0).u32);
      st::fn_00402C7A(this_00);
      st::fn_00405E2F(0xae);
      g_currentExceptionFrame = local_4c.previous;
      return 0;
    case MESS_INTERCOMPANELTY_C0AF:
    case 0xc0b0:
    case MESS_BEHPANELTY_C0B1:
    case 0xc0b2:
    case MESS_BLDLABPANELTY_C0B3:
      st::fn_0040431D(this_00,(AnonShape_004EF320_444F9AB1 *)message);
    }
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

