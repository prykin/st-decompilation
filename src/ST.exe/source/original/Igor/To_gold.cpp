#include "st/generated.hpp"
// Generated translation unit: source/original/Igor/To_gold.cpp

// 0057DFD0 STResourceC::SetResource
#line 4 "decomp/ST.exe/functions/0057DFD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STResourceC::SetResource

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0057DFD0(STResourceC *this,int param_1,int param_2)

{
  int iVar2;

  if (this->field_0255 == 0xdd) {
    if (param_1 < 1000000) goto cf_common_exit_0057E045;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_gold.cpp"),0x36,0,0,st::mutable_c_string("%s"),
                               "STResourceC::SetResource - value too big");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    if ((this->field_0255 != 0xde) || (param_1 < 1000000)) goto cf_common_exit_0057E045;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_gold.cpp"),0x3c,0,0,st::mutable_c_string("%s"),
                               "STResourceC::SetResource - value too big");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  param_1 = 999999;
cf_common_exit_0057E045:
  this->field_0259 = param_1;
  if (param_1 < 1) {
    if (param_2 != 0) {
      /* ST_CALLSITE[0057E05A]: CALL 0x00403a30; direct=00403A30 STResourceC::sub_00580D30 */
      st::fn_00403A30(this,1);
    }
    st::fn_00401479();
  }
  return;
}

// 0057E0A0 STDcResourcC::GetMessage
#line 4 "decomp/ST.exe/functions/0057E0A0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STDcResourcC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040502E|0057E0A0; family_names=STDcResourcC::GetMessage; ret4=8;
   direct_offsets={10:2,14:2,18:1,1c:0} */

int __thiscall st::fn_0057E0A0(STDcResourcC *this,STMessage *message)

{
  short sVar1;
  short sVar2;
  STMessageId SVar3;
  STDcResourcC_field_0255State SVar4;
  bool bVar6;
  VisibleClassTy *pVVar7;
  STDcResourcC *this_00;
  byte bVar8;
  short sVar9;
  int local_EAX_67;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  int iVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  undefined2 uVar15;
  int local_EAX_826;
  int local_EAX_979;
  int local_EAX_1359;
  uint uVar12;
  byte *puVar13;
  int local_EAX_2748;
  int iVar14;
  int iVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  STWorldObject *pSVar16;
  int iVar17;
  byte *pbVar18;
  byte *puVar19;
  int iVar20;
  int iVar21;
  byte *pbVar22;
  int *piVar23;
  InternalExceptionFrame local_68;
  STDcResourcC *local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  byte *local_10;
  byte *local_c;
  uint local_8;

  if (((*(byte *)&this->field_0261 & 4) != 0) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_24 = this;
  local_EAX_67 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  this_00 = local_24;
  if (local_EAX_67 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_gold.cpp"),0x169,0,local_EAX_67,
                                st::mutable_c_string("%s"),"STDcResourcC::GetMessage");
    if (iVar10 == 0) {
      st::fn_006A5E40(local_EAX_67,0,st::mutable_c_string("E:\\__titans\\Igor\\To_gold.cpp"),0x16a);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[0057E0FE]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  iVar9 = st::fn_00404F07((STSprGameObjC *)local_24,message);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar15 = extraout_var_01;
  if (iVar9 == 0xffff) {
    st::fn_006A5E40
              (0xffff,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\To_gold.cpp"),0x56);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar15 = extraout_var_02;
  }
  SVar3 = message->id;
  if (MESS_SHARED_0108 < SVar3) {
    if (SVar3 == MESS_SHARED_010F) {
      if (this_00->field_025D == 2) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      /* ST_CALLSITE[0057ED43]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
      local_10 = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_8);
      local_c = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(local_8 + 0x46));
      if (local_10 == nullptr) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      if (local_c == nullptr) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      this_00->field_023D = 2;
      puVar13 = (byte *)(&this_00->field_0231);
      pbVar18 = local_c;
      memmove(pbVar18, puVar13, 0x46); /* compiler REP MOVS byte copy */
      pbVar18 = local_10;
      pbVar22 = local_c + 0x46;
      memmove(pbVar22, pbVar18, local_8); /* compiler REP MOVS byte copy */
      /* ST_CALLSITE[0057EDAF]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
      st::fn_004025F9
                (g_playSystem_00802A38,(int *)this_00->field_0018,local_c,local_8 + 0x46);
      st::fn_006AB060(&local_10);
      st::fn_006AB060(&local_c);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar3 != MESS_ID_ALLCREATE) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    sVar9 = (short)this_00->field_0245;
    sVar1 = (short)this_00->field_024D;
    sVar2 = (short)this_00->field_0249;
    if ((((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) || (sVar2 < 0)) ||
       (((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))) {
      pSVar16 = nullptr;
    }
    else {
      pSVar16 = STGridAt3D(g_worldGrid, sVar9, sVar2, sVar1).objects[0];
    }
    if (pSVar16 == nullptr) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    /* ST_CALLSITE[0057ECE0]: CALL dword ptr [EAX + 0x2c] */
    iVar11 = pSVar16->GetObjectTypeId();
    if ((this_00->field_0255 != CASE_DD) || ((iVar11 != 0x39 && (iVar11 != 0x5e)))) {
      if (this_00->field_0255 != CASE_DE) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      if ((iVar11 != 0x4f) && (iVar11 != 0x61)) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
    st::fn_004045BB();
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  if (SVar3 == MESS_SHARED_0108) {
    local_EAX_2748 = st::fn_0040581C();
    local_18 = nullptr;
    if (this_00->field_0265 < 1) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    iVar11 = local_EAX_2748 * 2 + 1;
    local_14 = local_EAX_2748 * 8 + -0x1c;
    iVar20 = iVar11 * 4;
    do {
      iVar14 = iVar20;
      if (8 < iVar11) {
        iVar14 = local_14;
      }
      local_20 = *(int *)((int)&DAT_007cb0b8 + iVar14) + this_00->field_0245;
      /* ST_CALLSITE[0057EC02]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
      st::fn_004045D9
                (*(STT3DSprC **)(&this_00->field_026D->field_0000 + (int)local_18 * 4),
                 (float)local_20 * _DAT_007904f8 + _DAT_007904f4,
                 (float)(*(int *)((int)&DAT_007cb0dc + iVar14) + this_00->field_0249) *
                 _DAT_007904f8 + _DAT_007904f4,
                 (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
      iVar21 = iVar20 + 4;
      iVar17 = iVar11 + 1;
      iVar14 = local_14 + 4;
      if (this_00->field_0255 == CASE_DE) {
        iVar21 = iVar20 + 8;
        iVar17 = iVar11 + 2;
        iVar14 = local_14 + 8;
      }
      local_14 = iVar14;
      local_18 = (undefined4 *)((int)local_18 + 1);
      iVar11 = iVar17;
      iVar20 = iVar21;
    } while ((int)local_18 < this_00->field_0265);
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  if (SVar3 != MESS_ID_NONE) {
    if (SVar3 != MESS_ID_CREATE) {
      if (SVar3 != MESS_SHARED_0003) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      st::fn_00404D04((STResourceC *)this_00);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar15 = extraout_var;
      if (this_00->field_026D != nullptr) {
        iVar11 = st::machine_word_boundary_cast<int>(this_00->field_0265 + -1);
        this_00->field_0265 = iVar11;
        while (-1 < iVar11) {
          st::fn_004021D5(*(STT3DSprC **)(&this_00->field_026D->field_0000 + iVar11 * 4));
          st::fn_0072E2B0
                    (*(HoloTy **)(&this_00->field_026D->field_0000 + this_00->field_0265 * 4));
          iVar11 = st::machine_word_boundary_cast<int>(this_00->field_0265 + -1);
          this_00->field_0265 = iVar11;
        }
        st::fn_0072E2B0(this_00->field_026D);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = extraout_var_00;
      }
      if (this_00->field_0032 != -1) {
        /* ST_CALLSITE[0057E1C3]: CALL 0x00401541; direct=00401541 STAllPlayersC::UnRegisterDeposit */
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        st::fn_00401541
                  (g_allPlayers_007FA174,CONCAT22(uVar15,this_00->field_0032),(STResourceC *)this_00
                  );
      }
      st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
      if (this_00->field_0273 == nullptr) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      st::fn_006E6580((void *)this_00->field_0211,st::pointer_boundary_cast<int *>(this_00->field_0273));
      this_00->field_0273 = nullptr;
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    local_18 = st::pointer_boundary_cast<undefined4 *>((message->arg0).ptr);
    if ((uint)local_18[3] < 2) {
      this_00->field_0261 = 4;
      this_00->field_0265 = 0;
      this_00->field_026D = nullptr;
      puVar13 = (byte *)((message->arg0).ptr);
      puVar19 = (byte *)(&this_00->field_0231);
      memmove(puVar19, puVar13, 0x28); /* compiler REP MOVS byte copy */
      if (this_00->field_0251 < 1) {
        st::fn_00404449((STResourceC *)this_00);
        goto cf_common_exit_0057E624;
      }
      SVar4 = this_00->field_0255;
      if ((((SVar4 != CASE_DD) && (SVar4 != CASE_DE)) && (SVar4 != CASE_DC)) && (SVar4 != CASE_E0))
      {
        local_EAX_979 =
             st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_gold.cpp"),0x6a,0,0,st::mutable_c_string("%s"),
                                "STResourceC::Invalid resource type - assigning metal as default");
        if (local_EAX_979 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        this_00->field_0231 = 0xde;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = extraout_var_04;
      }
      sVar9 = (short)this_00->field_0245;
      sVar1 = (short)this_00->field_0249;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_14 = CONCAT22(uVar15,sVar1);
      sVar2 = (short)this_00->field_024D;
      if (((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) ||
         (((sVar1 < 0 || ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar2)))) {
        pSVar16 = nullptr;
      }
      else {
        pSVar16 = STGridAt3D(g_worldGrid, sVar9, sVar1, sVar2).objects[0];
      }
      if (((((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) || (sVar1 < 0)) ||
          ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
        sVar9 = -1;
      }
      else {
        sVar9 = STGridAt3D(g_pathingGrid, sVar9, sVar1, sVar2);
      }
      if ((sVar9 != 0) &&
         ((pSVar16 == nullptr ||
          /* ST_CALLSITE[0057E562]: CALL dword ptr [EDX + 0x2c] */
          (((iVar11 = pSVar16->GetObjectTypeId(), iVar11 != 0x39 &&
            /* ST_CALLSITE[0057E56E]: CALL dword ptr [EAX + 0x2c] */
            (iVar11 = pSVar16->GetObjectTypeId(), iVar11 != 0x4f)) &&
           /* ST_CALLSITE[0057E57A]: CALL dword ptr [EDX + 0x2c] */
           ((iVar11 = pSVar16->GetObjectTypeId(), iVar11 != 0x5e &&
            /* ST_CALLSITE[0057E586]: CALL dword ptr [EAX + 0x2c] */
            (iVar11 = pSVar16->GetObjectTypeId(), iVar11 != 0x61)))))))) {
        st::fn_00404449((STResourceC *)this_00);
      }
      /* ST_CALLSITE[0057E5A1]: CALL 0x00403cd8; direct=00403CD8 STAllPlayersC::RegisterDeposit */
      iVar11 = st::fn_00403CD8(g_allPlayers_007FA174,0xffff,this_00);
      if (iVar11 != 0) {
        st::fn_00404449((STResourceC *)this_00);
      }
      this_00->field_0261 = st::machine_word_boundary_cast<undefined4>(this_00->field_0261 | 1);
      this_00->field_0259 = this_00->field_0251;
      st::fn_0040295F(this_00,(short)this_00->field_0245,(short)this_00->field_0249,
                         (short)this_00->field_024D,0);
      /* ST_CALLSITE[0057E5EF]: CALL 0x00401ed3; direct=00401ED3 STDcResourcC::CreateRes */
      local_EAX_1359 = st::fn_00401ED3(this_00);
      if (local_EAX_1359 == 0xffff) {
        iVar11 = 0x85;
        goto LAB_0057e60c;
      }
    }
    else {
      if (local_18[3] != 2) goto cf_common_exit_0057E624;
      puVar13 = (byte *)(local_18);
      puVar19 = (byte *)(&this_00->field_0231);
      memmove(puVar19, puVar13, 0x46); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      this_00->field_0273 = nullptr;
      this_00->field_0265 = 0;
      this_00->field_026D = nullptr;
      this_00->field_0261 = 4;
      /* ST_CALLSITE[0057E25A]: CALL 0x0040551f; direct=0040551F STAllPlayersC::RestoreGObjData */
      st::fn_0040551F((STAllPlayersC *)this_00,(undefined4 *)((int)local_18 + 0x46));
      sVar9 = (short)this_00->field_0245;
      sVar1 = (short)this_00->field_0249;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_14 = CONCAT22(extraout_var_03,sVar1);
      sVar2 = (short)this_00->field_024D;
      if (((((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) || (sVar1 < 0)) ||
          ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
        pSVar16 = nullptr;
      }
      else {
        pSVar16 = STGridAt3D(g_worldGrid, sVar9, sVar1, sVar2).objects[0];
      }
      if (((sVar9 < 0) || (g_worldGrid.sizeX <= sVar9)) ||
         ((sVar1 < 0 ||
          (((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
        sVar9 = -1;
      }
      else {
        sVar9 = STGridAt3D(g_pathingGrid, sVar9, sVar1, sVar2);
      }
      if ((sVar9 != 0) &&
         ((pSVar16 == nullptr ||
          /* ST_CALLSITE[0057E33A]: CALL dword ptr [EDX + 0x2c] */
          (((iVar11 = pSVar16->GetObjectTypeId(), iVar11 != 0x39 &&
            /* ST_CALLSITE[0057E346]: CALL dword ptr [EAX + 0x2c] */
            (iVar11 = pSVar16->GetObjectTypeId(), iVar11 != 0x4f)) &&
           /* ST_CALLSITE[0057E352]: CALL dword ptr [EDX + 0x2c] */
           ((iVar11 = pSVar16->GetObjectTypeId(), iVar11 != 0x5e &&
            /* ST_CALLSITE[0057E35E]: CALL dword ptr [EAX + 0x2c] */
            (iVar11 = pSVar16->GetObjectTypeId(), iVar11 != 0x61)))))))) {
        st::fn_00404449((STResourceC *)this_00);
      }
      /* ST_CALLSITE[0057E379]: CALL 0x00403cd8; direct=00403CD8 STAllPlayersC::RegisterDeposit */
      iVar11 = st::fn_00403CD8(g_allPlayers_007FA174,this_00->field_0032,this_00);
      if (iVar11 != 0) {
        st::fn_00404449((STResourceC *)this_00);
      }
      if (local_18[3] == 1) {
        st::fn_00403FD5();
      }
      this_00->field_0261 = st::machine_word_boundary_cast<undefined4>(this_00->field_0261 | 1);
      this_00->field_0259 = this_00->field_0251;
      st::fn_0040295F(this_00,(short)this_00->field_0245,(short)this_00->field_0249,
                         (short)this_00->field_024D,0);
      /* ST_CALLSITE[0057E3DA]: CALL 0x00401ed3; direct=00401ED3 STDcResourcC::CreateRes */
      local_EAX_826 = st::fn_00401ED3(this_00);
      if (local_EAX_826 == 0xffff) {
        iVar11 = 0xb1;
LAB_0057e60c:
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\To_gold.cpp"),iVar11
                  );
      }
    }
    this_00->field_0261 = st::machine_word_boundary_cast<undefined4>(this_00->field_0261 & 0xfffffffb);
cf_common_exit_0057E624:
    if ((*(byte *)&this_00->field_0261 & 4) != 0) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    st::fn_00402C4D((int)this_00);
    uVar15 = (undefined2)this_00->field_0245;
    this_00->field_0047 = uVar15;
    this_00->field_005B = uVar15;
    uVar15 = (undefined2)this_00->field_0249;
    this_00->field_0049 = uVar15;
    this_00->field_005D = uVar15;
    uVar15 = (undefined2)this_00->field_024D;
    this_00->field_004B = uVar15;
    this_00->field_005F = uVar15;
    this_00->field_0045 = (short)this_00->field_024D * 200 + 100;
    this_00->field_0041 = (short)this_00->field_0245 * 0xc9 + 100;
    this_00->field_0043 = (short)this_00->field_0249 * 0xc9 + 100;
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  iVar11 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)this_00);
  if (iVar11 == 0) {
    if ((*(byte *)&this_00->field_0261 & 1) == 0) {
      st::fn_0040109B((int)this_00);
      uVar12 = st::machine_word_boundary_cast<uint>(this_00->field_0261 | 2);
LAB_0057e6f0:
      this_00->field_0261 = uVar12;
    }
  }
  else if ((*(byte *)&this_00->field_0261 & 2) != 0) {
    st::fn_004045BB();
    uVar12 = st::machine_word_boundary_cast<uint>(this_00->field_0261 & 0xfffffffd);
    goto LAB_0057e6f0;
  }
  pVVar7 = g_visibleClass_00802A88;
  if (this_00->field_0273 == nullptr) {
    if (g_visibleClass_00802A88 == nullptr) goto cf_common_join_0057E9C2;
    iVar11 = this_00->field_024D;
    if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
      uVar12 = 0;
    }
    else {
      /* ST_CALLSITE[0057E752]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
      st::fn_00403F53
                (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,this_00->field_0245,
                 this_00->field_0249,(int *)&local_18,&local_14);
      if ((iVar11 < 0) || (4 < iVar11)) {
        uVar12 = 0xffffffff;
      }
      else {
        if (((((int)local_18 < 0) || ((int)pVVar7->field_0028 <= (int)local_18)) ||
            (g_centeredOffsets5[iVar11] + local_14 < 0)) ||
           (pVVar7->field_002C <= g_centeredOffsets5[iVar11] + local_14)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (((bVar6) && (pVVar7->field_010C < 4)) &&
           (pVVar7->field_003C[pVVar7->field_010C] != nullptr)) {
          uVar12 = (uint)*(byte *)((int)local_18 +
                                  (int)((int)pVVar7->field_003C[pVVar7->field_010C] +
                                       (g_centeredOffsets5[iVar11] + local_14) * pVVar7->field_0028)
                                  );
        }
        else {
          uVar12 = 0xffffffff;
        }
        if (-1 < (int)uVar12) {
          if (uVar12 == 0xf) {
            if ((((int)local_18 < 0) || ((int)pVVar7->field_0030 <= (int)local_18)) ||
               ((g_centeredOffsets5[iVar11] + local_14 < 0 ||
                (pVVar7->field_0034 <= g_centeredOffsets5[iVar11] + local_14)))) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if ((bVar6) && (pVVar7->field_004C != nullptr)) {
              uVar12 = (uint)pVVar7->field_004C
                             [(int)((int)local_18 +
                                   (g_centeredOffsets5[iVar11] + local_14) * pVVar7->field_0030)];
            }
            else {
              uVar12 = 0xffffffff;
            }
            if (-1 < (int)uVar12) {
              uVar12 = (uint)(uVar12 != 0xf);
            }
          }
          else {
            uVar12 = 2;
          }
        }
      }
    }
    if (uVar12 != 2) {
      /* ST_CALLSITE[0057E84E]: CALL 0x0040157d; direct=0040157D STFieldC::CreateField */
      puVar13 = (byte *)(st::fn_0040157D((STFieldC *)this_00,this_00->field_0245,this_00->field_0249));
      this_00->field_0273 = puVar13;
      goto cf_common_join_0057E9C2;
    }
    piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0273);
    if (piVar23 == nullptr) goto cf_common_join_0057E9C2;
  }
  else {
    if (g_visibleClass_00802A88 == nullptr) goto cf_common_join_0057E9C2;
    iVar11 = this_00->field_024D;
    if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
      uVar12 = 0;
    }
    else {
      /* ST_CALLSITE[0057E8BA]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
      st::fn_00403F53
                (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,this_00->field_0245,
                 this_00->field_0249,&local_1c,&local_20);
      if ((iVar11 < 0) || (4 < iVar11)) {
        uVar12 = 0xffffffff;
      }
      else {
        if ((((local_1c < 0) || ((int)pVVar7->field_0028 <= local_1c)) ||
            (g_centeredOffsets5[iVar11] + local_20 < 0)) ||
           (pVVar7->field_002C <= g_centeredOffsets5[iVar11] + local_20)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (((bVar6) && (pVVar7->field_010C < 4)) &&
           (pVVar7->field_003C[pVVar7->field_010C] != nullptr)) {
          uVar12 = (uint)*(byte *)((int)pVVar7->field_003C[pVVar7->field_010C] +
                                  local_1c +
                                  (g_centeredOffsets5[iVar11] + local_20) * pVVar7->field_0028);
        }
        else {
          uVar12 = 0xffffffff;
        }
        if (-1 < (int)uVar12) {
          if (uVar12 == 0xf) {
            if (((local_1c < 0) || ((int)pVVar7->field_0030 <= local_1c)) ||
               ((g_centeredOffsets5[iVar11] + local_20 < 0 ||
                (pVVar7->field_0034 <= g_centeredOffsets5[iVar11] + local_20)))) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if ((bVar6) && (pVVar7->field_004C != nullptr)) {
              uVar12 = (uint)pVVar7->field_004C
                             [local_1c +
                              (g_centeredOffsets5[iVar11] + local_20) * pVVar7->field_0030];
            }
            else {
              uVar12 = 0xffffffff;
            }
            if (-1 < (int)uVar12) {
              uVar12 = (uint)(uVar12 != 0xf);
            }
          }
          else {
            uVar12 = 2;
          }
        }
      }
    }
    if (uVar12 != 2) goto cf_common_join_0057E9C2;
    piVar23 = st::pointer_boundary_cast<int *>(this_00->field_0273);
  }
  st::fn_006E6580((void *)this_00->field_0211,piVar23);
  this_00->field_0273 = nullptr;
cf_common_join_0057E9C2:
  /* ST_CALLSITE[0057E9C6]: CALL dword ptr [EAX + 0xd8] */
  this_00->vfunc_D8();
  if ((this_00->field_0255 != CASE_E0) && (iVar11 = 0, 0 < this_00->field_0265)) {
    do {
      st::fn_004033AA(*(void **)(&this_00->field_026D->field_0000 + iVar11 * 4),
                         g_playSystem_00802A38->field_00E4);
      iVar11 = iVar11 + 1;
    } while (iVar11 < this_00->field_0265);
  }
  if (this_00->field_025D == 2) {
    if ((this_00->field_0211 != 0) && (g_playSystem_00802A38->field_00E4 % 0xf == 0)) {
      bVar8 = this_00->field_0272 + 1;
      this_00->field_0272 = bVar8;
      if ((short)(ushort)bVar8 < PTR_00806724->entryCount) {
        /* ST_CALLSITE[0057EA79]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
        st::fn_0040116D
                  ((STT3DSprC *)&this_00->field_01D5,PTR_00806724->entries[bVar8],
                   (int)PTR_00806724->field_002C);
        if ((this_00->field_0255 != CASE_E0) && (iVar11 = 0, 0 < this_00->field_0265)) {
          do {
            /* ST_CALLSITE[0057EAB2]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
            st::fn_0040116D
                      (*(STT3DSprC **)(&this_00->field_026D->field_0000 + iVar11 * 4),
                       PTR_00806724->entries[(byte)this_00->field_0272],
                       (int)PTR_00806724->field_002C);
            iVar11 = iVar11 + 1;
          } while (iVar11 < this_00->field_0265);
        }
      }
      else {
        st::fn_00404449((STResourceC *)this_00);
      }
    }
    if ((((this_00->field_0259 != 0) &&
         (iVar11 = st::fn_0040583F((STJellyGunC *)this_00), iVar11 != 0)) &&
        /* ST_CALLSITE[0057EAFB]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
        (st::fn_0040116D((STT3DSprC *)&this_00->field_01D5,0,(int)PTR_00806724->field_002C),
        this_00->field_0255 != CASE_E0)) && (iVar11 = 0, 0 < this_00->field_0265)) {
      do {
        /* ST_CALLSITE[0057EB32]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
        st::fn_0040116D
                  (*(STT3DSprC **)(&this_00->field_026D->field_0000 + iVar11 * 4),0,
                   (int)PTR_00806724->field_002C);
        iVar11 = iVar11 + 1;
      } while (iVar11 < this_00->field_0265);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

// 0057F580 STDcResourcC::Init
#line 4 "decomp/ST.exe/functions/0057F580/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STDcResourcC::Init
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4 *
   __thiscall Init(STDcResourcC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0057F5AF RET | 0057F667 RET | 0057F678 RET | 0057F680 RET */

undefined4 * __thiscall st::fn_0057F580(STDcResourcC *this)

{
  HoloTy_field_0001State HVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  STT3DSprC *pSVar5;
  HoloTy *pHVar6;
  int iVar8;
  undefined4 *puVar7;
  int iVar9;
  HoloTy *pHVar10;
  HoloTy *pHVar11;

  pSVar5 = (STT3DSprC *)st::fn_0072E530(0x40);
  if (pSVar5 != nullptr) {
    /* ST_CALLSITE[0057F59A]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
    pSVar5 = st::fn_00401316(pSVar5);
    if (pSVar5 != nullptr) {
      pHVar6 = (HoloTy *)st::fn_0072E530(st::machine_word_boundary_cast<uint>(this->field_0265 * 4 + 4));
      if (pHVar6 == nullptr) {
        st::fn_0072E2B0((HoloTy *)pSVar5);
        return nullptr;
      }
      iVar9 = this->field_0265;
      if (iVar9 != 0) {
        pHVar10 = this->field_026D;
        pHVar11 = pHVar6;
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          HVar2 = pHVar10->field_0001;
          uVar3 = pHVar10->field_0002;
          uVar4 = pHVar10->field_0x3;
          pHVar11->field_0000 = pHVar10->field_0000;
          pHVar11->field_0001 = HVar2;
          pHVar11->field_0002 = uVar3;
          pHVar11->field_0x3 = uVar4;
          pHVar10 = (HoloTy *)&pHVar10->field_0x4;
          pHVar11 = (HoloTy *)&pHVar11->field_0x4;
        }
        st::fn_0072E2B0(this->field_026D);
      }
      this->field_026D = pHVar6;
      *(STT3DSprC **)((int)&pHVar6->field_0000 + this->field_0265 * 4) = pSVar5;
      this->field_0265 = st::machine_word_boundary_cast<int>(this->field_0265 + 1);
      /* ST_CALLSITE[0057F632]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
      iVar9 = st::fn_0040537B(pSVar5,PTR_008073cc,0x5a,0x45,this,0xb4,0x8c,0x11);
      if (iVar9 != 0) {
        iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_gold.cpp"),0x203,0,0,st::mutable_c_string("%s"),
                                   "STDcResourcC::Init Sprite Error");
        if (iVar8 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return nullptr;
      }
      return (undefined4 *)&pSVar5->vtable;
    }
  }
  return nullptr;
}

// 0057F6E0 STDcResourcC::CreateRes
#line 4 "decomp/ST.exe/functions/0057F6E0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STDcResourcC::CreateRes

   [STSwitchEnumApplier] Switch target field_0255 uses
   /SubmarineTitans/Recovered/Enums/STDcResourcC_field_0255State. Cases:
   CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_E0=224 */

int __thiscall st::fn_0057F6E0(STDcResourcC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STDcResourcC *this_00;
  int local_EAX_43;
  int iVar6;
  STT3DSprC *pSVar7;
  char *pcVar8;
  int iVar5;
  STWorldObject *pSVar9;
  int local_EAX_1699;
  int iVar11;
  int iVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  Global_mfRLoad_param_2Enum GVar15;
  InternalExceptionFrame local_5c;
  STDcResourcC *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_8 = 1;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  local_EAX_43 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_43 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_gold.cpp"),0x2b3,0,local_EAX_43,
                                st::mutable_c_string("%s"),"STDcResourcC::CreateRes");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_43,0,st::mutable_c_string("E:\\__titans\\Igor\\To_gold.cpp"),0x2b4);
    return 0xffff;
  }
  switch(local_18->field_0255) {
  case CASE_DC:
    local_c = -1;
    local_14 = 0;
    do {
      iVar12 = *(int *)((int)&DAT_007cb0b8 + local_14);
      local_10 = *(int *)((int)&DAT_007cb0dc + local_14);
      iVar6 = st::machine_word_boundary_cast<int>(this_00->field_0245 + iVar12);
      if (((((iVar6 < g_worldGrid.sizeX) && (-1 < iVar6)) &&
           (iVar6 = st::machine_word_boundary_cast<int>(this_00->field_0249 + local_10), iVar6 < g_worldGrid.sizeY)) &&
          ((-1 < iVar6 && (-1 < this_00->field_024D)))) && (this_00->field_024D < 5)) {
        if (this_00 == nullptr) {
          pSVar7 = nullptr;
        }
        else {
          pSVar7 = (STT3DSprC *)&this_00->field_01D5;
        }
        /* ST_CALLSITE[0057F977]: CALL 0x00405911; direct=00405911 STDcResourcC::Init */
        if ((3 < local_14) && (pSVar7 = (STT3DSprC *)st::fn_00405911(this_00), pSVar7 == nullptr))
        goto cf_break_loop_0057FAA5;
        GVar15 = CASE_1D;
        /* ST_CALLSITE[0057F990]: CALL 0x00401744; direct=00401744 STDcResourcC::sub_0057F3A0 */
        pcVar8 = (char *)st::fn_00401744(this_00,local_c,0);
        /* ST_CALLSITE[0057F9A1]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar6 = st::fn_00404183(pSVar7,0xe,PTR_00806774,pcVar8,GVar15);
        if (iVar6 != 0) goto cf_break_loop_0057FAA5;
        GVar15 = CASE_1D;
        /* ST_CALLSITE[0057F9B8]: CALL 0x00401744; direct=00401744 STDcResourcC::sub_0057F3A0 */
        pcVar8 = (char *)st::fn_00401744(this_00,local_c,1);
        /* ST_CALLSITE[0057F9C8]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar6 = st::fn_00404183(pSVar7,0xd,PTR_00806774,pcVar8,GVar15);
        if (iVar6 != 0) goto cf_break_loop_0057FAA5;
        /* ST_CALLSITE[0057F9E6]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        st::fn_00405240(pSVar7,0xe,g_playSystem_00802A38->field_00E4);
        /* ST_CALLSITE[0057F9F3]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
        st::fn_00405CA9(pSVar7,PTR_008073cc);
        /* ST_CALLSITE[0057F9FC]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
        st::fn_00403AFD(pSVar7,'\r');
        /* ST_CALLSITE[0057FA12]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        st::fn_00405240(pSVar7,0xd,g_playSystem_00802A38->field_00E4);
        iVar6 = st::machine_word_boundary_cast<int>(this_00->field_0249 + local_10);
        local_10 = st::machine_word_boundary_cast<int>(this_00->field_0245 + iVar12);
        /* ST_CALLSITE[0057FA74]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
        st::fn_004045D9
                  (pSVar7,(float)local_10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)iVar6 * _DAT_007904f8 + _DAT_007904f4,
                   (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        st::fn_006EA3E0((void *)this_00->field_0211,pSVar7->field_0018,-1);
      }
      local_14 = local_14 + 4;
      local_c = local_c + 1;
    } while (local_14 < 0x21);
    break;
  case CASE_DD:
    local_c = -1;
    local_14 = 0;
    do {
      iVar12 = *(int *)((int)&DAT_007cb0b8 + local_14);
      local_10 = *(int *)((int)&DAT_007cb0dc + local_14);
      iVar6 = st::machine_word_boundary_cast<int>(this_00->field_0245 + iVar12);
      if ((((iVar6 < g_worldGrid.sizeX) && (-1 < iVar6)) &&
          (iVar6 = st::machine_word_boundary_cast<int>(this_00->field_0249 + local_10), iVar6 < g_worldGrid.sizeY)) &&
         (((-1 < iVar6 && (-1 < this_00->field_024D)) && (this_00->field_024D < 5)))) {
        if (this_00 == nullptr) {
          pSVar7 = nullptr;
        }
        else {
          pSVar7 = (STT3DSprC *)&this_00->field_01D5;
        }
        /* ST_CALLSITE[0057F7C1]: CALL 0x00405911; direct=00405911 STDcResourcC::Init */
        if ((3 < local_14) && (pSVar7 = (STT3DSprC *)st::fn_00405911(this_00), pSVar7 == nullptr))
        goto cf_break_loop_0057FAA5;
        GVar15 = CASE_1D;
        /* ST_CALLSITE[0057F7DA]: CALL 0x00404fd4; direct=00404FD4 STDcResourcC::sub_0057F2E0 */
        pcVar8 = (char *)st::fn_00404FD4(this_00,local_c,0);
        /* ST_CALLSITE[0057F7EB]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar6 = st::fn_00404183(pSVar7,0xe,PTR_00806774,pcVar8,GVar15);
        if (iVar6 != 0) goto cf_break_loop_0057FAA5;
        GVar15 = CASE_1D;
        /* ST_CALLSITE[0057F802]: CALL 0x00404fd4; direct=00404FD4 STDcResourcC::sub_0057F2E0 */
        pcVar8 = (char *)st::fn_00404FD4(this_00,local_c,1);
        /* ST_CALLSITE[0057F812]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
        iVar6 = st::fn_00404183(pSVar7,0xd,PTR_00806774,pcVar8,GVar15);
        if (iVar6 != 0) goto cf_break_loop_0057FAA5;
        /* ST_CALLSITE[0057F830]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        st::fn_00405240(pSVar7,0xe,g_playSystem_00802A38->field_00E4);
        /* ST_CALLSITE[0057F83D]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
        st::fn_00405CA9(pSVar7,PTR_008073cc);
        /* ST_CALLSITE[0057F846]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
        st::fn_00403AFD(pSVar7,'\r');
        /* ST_CALLSITE[0057F85C]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
        st::fn_00405240(pSVar7,0xd,g_playSystem_00802A38->field_00E4);
        iVar6 = st::machine_word_boundary_cast<int>(this_00->field_0249 + local_10);
        local_10 = st::machine_word_boundary_cast<int>(this_00->field_0245 + iVar12);
        /* ST_CALLSITE[0057F8BE]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
        st::fn_004045D9
                  (pSVar7,(float)local_10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)iVar6 * _DAT_007904f8 + _DAT_007904f4,
                   (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        st::fn_006EA3E0((void *)this_00->field_0211,pSVar7->field_0018,-1);
      }
      local_14 = local_14 + 4;
      local_c = local_c + 1;
    } while (local_14 < 0x21);
    break;
  case CASE_DE:
    iVar12 = -1;
    do {
      if (iVar12 == 1) {
        iVar12 = 0;
      }
      local_c = (&DAT_007cb0bc)[iVar12];
      local_10 = (&DAT_007cb0e0)[iVar12];
      iVar6 = local_c + this_00->field_0245;
      if ((((iVar6 < g_worldGrid.sizeX) && (-1 < iVar6)) &&
          ((iVar6 = st::machine_word_boundary_cast<int>(this_00->field_0249 + local_10), iVar6 < g_worldGrid.sizeY &&
           ((-1 < iVar6 && (-1 < this_00->field_024D)))))) && (this_00->field_024D < 5)) {
        if (this_00 == nullptr) {
          pSVar7 = nullptr;
        }
        else {
          pSVar7 = (STT3DSprC *)&this_00->field_01D5;
        }
        /* ST_CALLSITE[0057FB49]: CALL 0x00405911; direct=00405911 STDcResourcC::Init */
        if ((iVar12 < 0) || (pSVar7 = (STT3DSprC *)st::fn_00405911(this_00), pSVar7 != nullptr)) {
          GVar15 = CASE_1D;
          /* ST_CALLSITE[0057FB5F]: CALL 0x0040185c; direct=0040185C STDcResourcC::sub_0057F470 */
          pcVar8 = (char *)st::fn_0040185C(this_00,iVar12,0);
          /* ST_CALLSITE[0057FB70]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
          iVar6 = st::fn_00404183(pSVar7,0xe,PTR_00806774,pcVar8,GVar15);
          if (iVar6 == 0) {
            GVar15 = CASE_1D;
            /* ST_CALLSITE[0057FB84]: CALL 0x0040185c; direct=0040185C STDcResourcC::sub_0057F470 */
            pcVar8 = (char *)st::fn_0040185C(this_00,iVar12,1);
            /* ST_CALLSITE[0057FB94]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
            iVar6 = st::fn_00404183(pSVar7,0xd,PTR_00806774,pcVar8,GVar15);
            if (iVar6 == 0) {
              /* ST_CALLSITE[0057FBB2]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
              st::fn_00405240(pSVar7,0xe,g_playSystem_00802A38->field_00E4);
              /* ST_CALLSITE[0057FBBF]: CALL 0x00405ca9; direct=00405CA9 STT3DSprC::sub_004ACEF0 */
              st::fn_00405CA9(pSVar7,PTR_008073cc);
              /* ST_CALLSITE[0057FBC8]: CALL 0x00403afd; direct=00403AFD STT3DSprC::sub_004ACF50 */
              st::fn_00403AFD(pSVar7,'\r');
              /* ST_CALLSITE[0057FBDE]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
              st::fn_00405240(pSVar7,0xd,g_playSystem_00802A38->field_00E4);
              local_14 = st::machine_word_boundary_cast<int>(this_00->field_0245 + local_c);
              /* ST_CALLSITE[0057FC43]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
              st::fn_004045D9
                        (pSVar7,(float)local_14 * _DAT_007904f8 + _DAT_007904f4,
                         (float)(this_00->field_0249 + local_10) * _DAT_007904f8 + _DAT_007904f4,
                         (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
              st::fn_006EA3E0
                        ((void *)this_00->field_0211,pSVar7->field_0018,-1);
              goto LAB_0057fc59;
            }
          }
        }
        local_8 = 0;
        break;
      }
LAB_0057fc59:
      iVar12 = iVar12 + 2;
    } while (iVar12 < 7);
    if (iVar12 != 8) {
      local_8 = 0;
    }
    goto LAB_0057fd72;
  default:
    goto switchD_0057f734_caseD_df;
  case CASE_E0:
    if (((((local_18->field_0245 < (int)g_worldGrid.sizeX) && (-1 < local_18->field_0245)) &&
         (local_18->field_0249 < (int)g_worldGrid.sizeY)) &&
        ((-1 < local_18->field_0249 && (iVar12 = local_18->field_024D, -1 < iVar12)))) &&
       ((iVar12 < 5 &&
        (iVar5 = st::fn_00404D3B((short)local_18->field_0245,(short)local_18->field_0249,
                                    (short)iVar12), iVar5 != 0)))) {
      sVar1 = (short)this_00->field_0245;
      sVar2 = (short)this_00->field_024D;
      sVar3 = (short)this_00->field_0249;
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
         (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
        pSVar9 = nullptr;
      }
      else {
        pSVar9 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
      }
      if (pSVar9 == nullptr) {
        /* ST_CALLSITE[0057FD68]: CALL 0x0040345e; direct=0040345E STDcResourcC::sub_005805C0 */
        st::fn_0040345E(this_00);
        goto LAB_0057fd72;
      }
    }
    goto switchD_0057f734_caseD_df;
  }
LAB_0057faac:
  if (local_c != 8) {
    local_8 = 0;
  }
LAB_0057fd72:
  if (local_8 != 0) {
    local_EAX_1699 = st::fn_0040581C();
    local_c = 0;
    if (0 < this_00->field_0265) {
      iVar12 = local_EAX_1699 * 2 + 1;
      local_10 = local_EAX_1699 * 8 + -0x1c;
      iVar6 = iVar12 * 4;
      do {
        iVar11 = iVar6;
        if (8 < iVar12) {
          iVar11 = local_10;
        }
        local_14 = *(int *)((int)&DAT_007cb0b8 + iVar11) + this_00->field_0245;
        /* ST_CALLSITE[0057FE2D]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
        st::fn_004045D9
                  (*(STT3DSprC **)(&this_00->field_026D->field_0000 + local_c * 4),
                   (float)local_14 * _DAT_007904f8 + _DAT_007904f4,
                   (float)(*(int *)((int)&DAT_007cb0dc + iVar11) + this_00->field_0249) *
                   _DAT_007904f8 + _DAT_007904f4,
                   (float)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        iVar13 = iVar6 + 4;
        iVar14 = iVar12 + 1;
        iVar11 = local_10 + 4;
        if (this_00->field_0255 == CASE_DE) {
          iVar13 = iVar6 + 8;
          iVar14 = iVar12 + 2;
          iVar11 = local_10 + 8;
        }
        local_10 = iVar11;
        local_c = local_c + 1;
        iVar6 = iVar13;
        iVar12 = iVar14;
      } while (local_c < this_00->field_0265);
    }
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_8;
switchD_0057f734_caseD_df:
  local_8 = 0;
  goto LAB_0057fd72;
cf_break_loop_0057FAA5:
  local_8 = 0;
  goto LAB_0057faac;
}

// 00580B60 STFieldC::CreateField
#line 4 "decomp/ST.exe/functions/00580B60/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STFieldC::CreateField */

undefined4 * __thiscall st::fn_00580B60(STFieldC *this,int param_1,int param_2)

{
  STFieldC *pSVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  char *text;
  InternalExceptionFrame local_50;
  STFieldC *local_c;
  undefined4 *local_8;

  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\To_gold.cpp"),0x414,0,iVar3,st::mutable_c_string("%s"),
                               "STFieldC::CreateField");
    if (iVar3 == 0) {
      return local_8;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_0255 == 0xdd) {
    text = "ResSmall";
  }
  else if (local_c->field_0255 == 0xde) {
    text = "ResSmallM";
  }
  else {
    text = "ResSmall";
  }
  puVar4 = st::fn_00709AF0
                     (PTR_00806774,CASE_1D,text,0xffffffff,0,1,0,nullptr);
  if ((puVar4 != nullptr) && ((void *)pSVar2->field_0211 != 0)) {
    puVar5 = st::fn_006E6460((void *)pSVar2->field_0211,STField<undefined4>(puVar4,0x21),
                          *(int *)puVar4,(short)(STField<int>(puVar4,9) / 2),
                          (short)(STField<int>(puVar4,0xd) / 2),1,1);
    local_8 = nullptr;
    if (puVar5 != nullptr) {
      local_8 = puVar5;
      st::fn_006E6540((int)puVar5,(float)param_1 * _DAT_007904f8 + _DAT_007904f4,
                   (float)param_2 * _DAT_007904f8 + _DAT_007904f4,-1);
      g_currentExceptionFrame = local_50.previous;
      return puVar5;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

