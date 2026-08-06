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
    iVar2 = st::fn_006AD4D0("E:\\__titans\\Igor\\To_gold.cpp",0x36,0,0,"%s",
                               "STResourceC::SetResource - value too big");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    if ((this->field_0255 != 0xde) || (param_1 < 1000000)) goto cf_common_exit_0057E045;
    iVar2 = st::fn_006AD4D0("E:\\__titans\\Igor\\To_gold.cpp",0x3c,0,0,"%s",
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
  bool bVar5;
  VisibleClassTy *pVVar6;
  STSprGameObjC *this_00;
  byte bVar7;
  short sVar8;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  undefined2 uVar14;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  STSprGameObjC_field_0231State *pSVar15;
  STWorldObject *pSVar16;
  int iVar17;
  byte *pbVar18;
  STSprGameObjC_field_0231State *pSVar19;
  int iVar20;
  byte *pbVar21;
  int *piVar22;
  InternalExceptionFrame local_68;
  STSprGameObjC *local_24;
  int local_20;
  int local_1c;
  STSprGameObjC_field_0231State *local_18;
  int local_14;
  byte *local_10;
  STSprGameObjC_field_0231State *local_c;
  uint local_8;

  if (((*(byte *)&this->field_0261 & 4) != 0) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_24 = (STSprGameObjC *)this;
  iVar9 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  this_00 = local_24;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar13 = st::fn_006AD4D0("E:\\__titans\\Igor\\To_gold.cpp",0x169,0,iVar9,"%s",
                                "STDcResourcC::GetMessage");
    if (iVar13 == 0) {
      st::fn_006A5E40(iVar9,0,"E:\\__titans\\Igor\\To_gold.cpp",0x16a);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar9 = st::fn_00404F07(local_24,message);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar14 = extraout_var_01;
  if (iVar9 == 0xffff) {
    st::fn_006A5E40
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_gold.cpp",0x56);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar14 = extraout_var_02;
  }
  SVar3 = message->id;
  if (MESS_SHARED_0108 < SVar3) {
    if (SVar3 == MESS_SHARED_010F) {
      if (*(int *)&this_00->field_0x25d == 2) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      local_10 = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_8);
      local_c = st::fn_006AAC70(local_8 + 0x46);
      if (local_10 == nullptr) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      if (local_c == nullptr) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      *(undefined4 *)&this_00->field_0x23d = 2;
      pSVar15 = &this_00->field_0231;
      pSVar19 = local_c;
      memmove(pSVar19, pSVar15, 0x46); /* compiler REP MOVS byte copy */
      pbVar18 = local_10;
      pbVar21 = (byte *)((int)local_c + 0x46);
      memmove(pbVar21, pbVar18, local_8); /* compiler REP MOVS byte copy */
      st::fn_004025F9
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                 (AnonShape_0060EA30_DCEB68AD *)(local_8 + 0x46));
      st::fn_006AB060(&local_10);
      st::fn_006AB060(&local_c);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    if (SVar3 != MESS_ID_ALLCREATE) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    sVar8 = *(short *)((int)&this_00->field_0244 + 1);
    sVar1 = *(short *)&this_00->field_0x24d;
    sVar2 = *(short *)&this_00->field_0x249;
    if ((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar2 < 0)) ||
       (((g_worldGrid.sizeY <= sVar2 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))) {
      pSVar16 = nullptr;
    }
    else {
      pSVar16 = STGridAt3D(g_worldGrid, sVar8, sVar2, sVar1).objects[0];
    }
    if (pSVar16 == nullptr) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    iVar9 = pSVar16->GetObjectTypeId();
    if ((*(int *)&this_00->field_0x255 != 0xdd) || ((iVar9 != 0x39 && (iVar9 != 0x5e)))) {
      if (*(int *)&this_00->field_0x255 != 0xde) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      if ((iVar9 != 0x4f) && (iVar9 != 0x61)) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
    st::fn_004045BB();
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  if (SVar3 == MESS_SHARED_0108) {
    iVar9 = st::fn_0040581C();
    local_18 = nullptr;
    if (*(int *)&this_00->field_0x265 < 1) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    iVar13 = iVar9 * 2 + 1;
    local_14 = iVar9 * 8 + -0x1c;
    iVar9 = iVar13 * 4;
    do {
      iVar12 = iVar9;
      if (8 < iVar13) {
        iVar12 = local_14;
      }
      local_20 = *(int *)((int)&DAT_007cb0b8 + iVar12) + *(int *)((int)&this_00->field_0244 + 1);
      st::fn_004045D9
                (*(STT3DSprC **)(*(int *)&this_00->field_0x26d + (int)local_18 * 4),
                 (float)local_20 * _DAT_007904f8 + _DAT_007904f4,
                 (float)(*(int *)((int)&DAT_007cb0dc + iVar12) + *(int *)&this_00->field_0x249) *
                 _DAT_007904f8 + _DAT_007904f4,
                 (float)*(int *)&this_00->field_0x24d * _DAT_00790504 + _DAT_00790500 +
                 _DAT_007904fc);
      iVar20 = iVar9 + 4;
      iVar17 = iVar13 + 1;
      iVar12 = local_14 + 4;
      if (*(int *)&this_00->field_0x255 == 0xde) {
        iVar20 = iVar9 + 8;
        iVar17 = iVar13 + 2;
        iVar12 = local_14 + 8;
      }
      local_14 = iVar12;
      local_18 = (STSprGameObjC_field_0231State *)((int)local_18 + 1);
      iVar13 = iVar17;
      iVar9 = iVar20;
    } while ((int)local_18 < *(int *)&this_00->field_0x265);
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
      uVar14 = extraout_var;
      if (*(int *)&this_00->field_0x26d != 0) {
        iVar9 = *(int *)&this_00->field_0x265 + -1;
        *(int *)&this_00->field_0x265 = iVar9;
        while (-1 < iVar9) {
          st::fn_004021D5(*(STT3DSprC **)(*(int *)&this_00->field_0x26d + iVar9 * 4));
          st::fn_0072E2B0
                    (*(HoloTy **)(*(int *)&this_00->field_0x26d + *(int *)&this_00->field_0x265 * 4)
                    );
          iVar9 = *(int *)&this_00->field_0x265 + -1;
          *(int *)&this_00->field_0x265 = iVar9;
        }
        st::fn_0072E2B0(*(HoloTy **)&this_00->field_0x26d);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_var_00;
      }
      if (*(short *)&this_00->field_0x32 != -1) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        st::fn_00401541
                  (g_allPlayers_007FA174,CONCAT22(uVar14,*(short *)&this_00->field_0x32),
                   (STResourceC *)this_00);
      }
      st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
      if (*(int **)&this_00->field_0x273 == nullptr) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      st::fn_006E6580(this_00->field_0211,*(int **)&this_00->field_0x273);
      *(undefined4 *)&this_00->field_0x273 = 0;
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    local_18 = (message->arg0).ptr;
    if (local_18[3] < CASE_2) {
      *(undefined4 *)&this_00->field_0x261 = 4;
      *(undefined4 *)&this_00->field_0x265 = 0;
      *(undefined4 *)&this_00->field_0x26d = 0;
      pSVar15 = (message->arg0).ptr;
      pSVar19 = &this_00->field_0231;
      memmove(pSVar19, pSVar15, 0x28); /* compiler REP MOVS byte copy */
      if (*(int *)&this_00->field_0x251 < 1) {
        st::fn_00404449((STResourceC *)this_00);
        goto cf_common_exit_0057E624;
      }
      iVar9 = *(int *)&this_00->field_0x255;
      if ((((iVar9 != 0xdd) && (iVar9 != 0xde)) && (iVar9 != 0xdc)) && (iVar9 != 0xe0)) {
        iVar9 = st::fn_006AD4D0("E:\\__titans\\Igor\\To_gold.cpp",0x6a,0,0,"%s",
                                   "STResourceC::Invalid resource type - assigning metal as default");
        if (iVar9 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        this_00->field_0231 = 0xde;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_var_04;
      }
      sVar8 = *(short *)((int)&this_00->field_0244 + 1);
      sVar1 = *(short *)&this_00->field_0x249;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_14 = CONCAT22(uVar14,sVar1);
      sVar2 = *(short *)&this_00->field_0x24d;
      if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
         (((sVar1 < 0 || ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar2)))) {
        pSVar16 = nullptr;
      }
      else {
        pSVar16 = STGridAt3D(g_worldGrid, sVar8, sVar1, sVar2).objects[0];
      }
      if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar1 < 0)) ||
          ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
        sVar8 = -1;
      }
      else {
        sVar8 = STGridAt3D(g_pathingGrid, sVar8, sVar1, sVar2);
      }
      if ((sVar8 != 0) &&
         ((pSVar16 == nullptr ||
          (((iVar9 = pSVar16->GetObjectTypeId(), iVar9 != 0x39 &&
            (iVar9 = pSVar16->GetObjectTypeId(), iVar9 != 0x4f)) &&
           ((iVar9 = pSVar16->GetObjectTypeId(), iVar9 != 0x5e &&
            (iVar9 = pSVar16->GetObjectTypeId(), iVar9 != 0x61)))))))) {
        st::fn_00404449((STResourceC *)this_00);
      }
      iVar9 = st::fn_00403CD8(g_allPlayers_007FA174,0xffff,this_00);
      if (iVar9 != 0) {
        st::fn_00404449((STResourceC *)this_00);
      }
      *(uint *)&this_00->field_0x261 = *(uint *)&this_00->field_0x261 | 1;
      this_00->field_0259 = *(STSprGameObjC_field_0259State *)&this_00->field_0x251;
      st::fn_0040295F(this_00,*(short *)((int)&this_00->field_0244 + 1),
                         *(short *)&this_00->field_0x249,*(short *)&this_00->field_0x24d,0);
      iVar9 = st::fn_00401ED3((STDcResourcC *)this_00);
      if (iVar9 == 0xffff) {
        iVar9 = 0x85;
        goto LAB_0057e60c;
      }
    }
    else {
      if (local_18[3] != CASE_2) goto cf_common_exit_0057E624;
      pSVar15 = local_18;
      pSVar19 = &this_00->field_0231;
      memmove(pSVar19, pSVar15, 0x46); /* compiler REP MOVS byte copy */
      iVar9 = 0;
      *(undefined4 *)&this_00->field_0x273 = 0;
      *(undefined4 *)&this_00->field_0x265 = 0;
      *(undefined4 *)&this_00->field_0x26d = 0;
      *(undefined4 *)&this_00->field_0x261 = 4;
      st::fn_0040551F((STAllPlayersC *)this_00,(undefined4 *)((int)local_18 + 0x46));
      sVar8 = *(short *)((int)&this_00->field_0244 + 1);
      sVar1 = *(short *)&this_00->field_0x249;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_14 = CONCAT22(extraout_var_03,sVar1);
      sVar2 = *(short *)&this_00->field_0x24d;
      if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar1 < 0)) ||
          ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
        pSVar16 = nullptr;
      }
      else {
        pSVar16 = STGridAt3D(g_worldGrid, sVar8, sVar1, sVar2).objects[0];
      }
      if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
         ((sVar1 < 0 ||
          (((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))))) {
        sVar8 = -1;
      }
      else {
        sVar8 = STGridAt3D(g_pathingGrid, sVar8, sVar1, sVar2);
      }
      if ((sVar8 != 0) &&
         ((pSVar16 == nullptr ||
          (((iVar9 = pSVar16->GetObjectTypeId(), iVar9 != 0x39 &&
            (iVar9 = pSVar16->GetObjectTypeId(), iVar9 != 0x4f)) &&
           ((iVar9 = pSVar16->GetObjectTypeId(), iVar9 != 0x5e &&
            (iVar9 = pSVar16->GetObjectTypeId(), iVar9 != 0x61)))))))) {
        st::fn_00404449((STResourceC *)this_00);
      }
      iVar9 = st::fn_00403CD8
                        (g_allPlayers_007FA174,*(ushort *)&this_00->field_0x32,this_00);
      if (iVar9 != 0) {
        st::fn_00404449((STResourceC *)this_00);
      }
      if (local_18[3] == CASE_1) {
        st::fn_00403FD5();
      }
      *(uint *)&this_00->field_0x261 = *(uint *)&this_00->field_0x261 | 1;
      this_00->field_0259 = *(STSprGameObjC_field_0259State *)&this_00->field_0x251;
      st::fn_0040295F(this_00,*(short *)((int)&this_00->field_0244 + 1),
                         *(short *)&this_00->field_0x249,*(short *)&this_00->field_0x24d,0);
      iVar9 = st::fn_00401ED3((STDcResourcC *)this_00);
      if (iVar9 == 0xffff) {
        iVar9 = 0xb1;
LAB_0057e60c:
        st::fn_006A5E40
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_gold.cpp",iVar9);
      }
    }
    *(uint *)&this_00->field_0x261 = *(uint *)&this_00->field_0x261 & 0xfffffffb;
cf_common_exit_0057E624:
    if ((this_00->field_0x261 & 4) != 0) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    st::fn_00402C4D((int)this_00);
    uVar14 = *(undefined2 *)((int)&this_00->field_0244 + 1);
    *(undefined2 *)&this_00->field_0x47 = uVar14;
    *(undefined2 *)&this_00->field_0x5b = uVar14;
    *(undefined2 *)&this_00->field_0x49 = *(undefined2 *)&this_00->field_0x249;
    *(undefined2 *)&this_00->field_0x5d = *(undefined2 *)&this_00->field_0x249;
    *(undefined2 *)&this_00->field_0x4b = *(undefined2 *)&this_00->field_0x24d;
    *(undefined2 *)&this_00->field_0x5f = *(undefined2 *)&this_00->field_0x24d;
    sVar8 = *(short *)((int)&this_00->field_0244 + 1);
    *(short *)&this_00->field_0x45 = *(short *)&this_00->field_0x24d * 200 + 100;
    *(short *)&this_00->field_0x41 = sVar8 * 0xc9 + 100;
    *(short *)&this_00->field_0x43 = *(short *)&this_00->field_0x249 * 0xc9 + 100;
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  iVar9 = st::fn_00401A3C((AnonShape_0041C710_C4D46939 *)this_00);
  if (iVar9 == 0) {
    if ((this_00->field_0x261 & 1) == 0) {
      st::fn_0040109B((int)this_00);
      uVar10 = *(uint *)&this_00->field_0x261 | 2;
LAB_0057e6f0:
      *(uint *)&this_00->field_0x261 = uVar10;
    }
  }
  else if ((this_00->field_0x261 & 2) != 0) {
    st::fn_004045BB();
    uVar10 = *(uint *)&this_00->field_0x261 & 0xfffffffd;
    goto LAB_0057e6f0;
  }
  pVVar6 = g_visibleClass_00802A88;
  if (*(int *)&this_00->field_0x273 == 0) {
    if (g_visibleClass_00802A88 == nullptr) goto cf_common_join_0057E9C2;
    iVar9 = *(int *)&this_00->field_0x24d;
    if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
      uVar10 = 0;
    }
    else {
      st::fn_00403F53
                (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                 *(int *)((int)&this_00->field_0244 + 1),*(int *)&this_00->field_0x249,
                 (int *)&local_18,&local_14);
      if ((iVar9 < 0) || (4 < iVar9)) {
        uVar10 = 0xffffffff;
      }
      else {
        if (((((int)local_18 < 0) || ((int)pVVar6->field_0028 <= (int)local_18)) ||
            (g_centeredOffsets5[iVar9] + local_14 < 0)) ||
           (pVVar6->field_002C <= g_centeredOffsets5[iVar9] + local_14)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (((bVar5) && (pVVar6->field_010C < 4)) && (pVVar6->field_003C[pVVar6->field_010C] != 0))
        {
          uVar10 = (uint)*(byte *)((g_centeredOffsets5[iVar9] + local_14) * pVVar6->field_0028 +
                                   pVVar6->field_003C[pVVar6->field_010C] + (int)local_18);
        }
        else {
          uVar10 = 0xffffffff;
        }
        if (-1 < (int)uVar10) {
          if (uVar10 == 0xf) {
            if ((((int)local_18 < 0) || (pVVar6->field_0030 <= (int)local_18)) ||
               ((g_centeredOffsets5[iVar9] + local_14 < 0 ||
                (pVVar6->field_0034 <= g_centeredOffsets5[iVar9] + local_14)))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) && (pVVar6->field_004C != nullptr)) {
              uVar10 = (uint)pVVar6->field_004C
                             [(int)((int)local_18 +
                                   (g_centeredOffsets5[iVar9] + local_14) * pVVar6->field_0030)];
            }
            else {
              uVar10 = 0xffffffff;
            }
            if (-1 < (int)uVar10) {
              uVar10 = (uint)(uVar10 != 0xf);
            }
          }
          else {
            uVar10 = 2;
          }
        }
      }
    }
    if (uVar10 != 2) {
      puVar11 = st::fn_0040157D
                          ((STFieldC *)this_00,*(int *)((int)&this_00->field_0244 + 1),
                           *(int *)&this_00->field_0x249);
      *(undefined4 **)&this_00->field_0x273 = puVar11;
      goto cf_common_join_0057E9C2;
    }
    piVar22 = *(int **)&this_00->field_0x273;
    if (piVar22 == nullptr) goto cf_common_join_0057E9C2;
  }
  else {
    if (g_visibleClass_00802A88 == nullptr) goto cf_common_join_0057E9C2;
    iVar9 = *(int *)&this_00->field_0x24d;
    if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
      uVar10 = 0;
    }
    else {
      st::fn_00403F53
                (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                 *(int *)((int)&this_00->field_0244 + 1),*(int *)&this_00->field_0x249,&local_1c,
                 &local_20);
      if ((iVar9 < 0) || (4 < iVar9)) {
        uVar10 = 0xffffffff;
      }
      else {
        if ((((local_1c < 0) || ((int)pVVar6->field_0028 <= local_1c)) ||
            (g_centeredOffsets5[iVar9] + local_20 < 0)) ||
           (pVVar6->field_002C <= g_centeredOffsets5[iVar9] + local_20)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (((bVar5) && (pVVar6->field_010C < 4)) && (pVVar6->field_003C[pVVar6->field_010C] != 0))
        {
          uVar10 = (uint)*(byte *)((g_centeredOffsets5[iVar9] + local_20) * pVVar6->field_0028 +
                                   pVVar6->field_003C[pVVar6->field_010C] + local_1c);
        }
        else {
          uVar10 = 0xffffffff;
        }
        if (-1 < (int)uVar10) {
          if (uVar10 == 0xf) {
            if (((local_1c < 0) || (pVVar6->field_0030 <= local_1c)) ||
               ((g_centeredOffsets5[iVar9] + local_20 < 0 ||
                (pVVar6->field_0034 <= g_centeredOffsets5[iVar9] + local_20)))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) && (pVVar6->field_004C != nullptr)) {
              uVar10 = (uint)pVVar6->field_004C
                             [local_1c + (g_centeredOffsets5[iVar9] + local_20) * pVVar6->field_0030
                             ];
            }
            else {
              uVar10 = 0xffffffff;
            }
            if (-1 < (int)uVar10) {
              uVar10 = (uint)(uVar10 != 0xf);
            }
          }
          else {
            uVar10 = 2;
          }
        }
      }
    }
    if (uVar10 != 2) goto cf_common_join_0057E9C2;
    piVar22 = *(int **)&this_00->field_0x273;
  }
  st::fn_006E6580(this_00->field_0211,piVar22);
  *(undefined4 *)&this_00->field_0x273 = 0;
cf_common_join_0057E9C2:
  this_00->vfunc_D8();
  if ((*(int *)&this_00->field_0x255 != 0xe0) && (iVar9 = 0, 0 < *(int *)&this_00->field_0x265)) {
    do {
      st::fn_004033AA(*(void **)(*(int *)&this_00->field_0x26d + iVar9 * 4),
                         g_playSystem_00802A38->field_00E4);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)&this_00->field_0x265);
  }
  if (*(int *)&this_00->field_0x25d == 2) {
    if ((this_00->field_0211 != nullptr) &&
       (g_playSystem_00802A38->field_00E4 % 0xf == 0)) {
      bVar7 = this_00->field_0x272 + 1;
      this_00->field_0x272 = bVar7;
      if ((short)(ushort)bVar7 < PTR_00806724->entryCount) {
        st::fn_0040116D
                  ((STT3DSprC *)&this_00->field_01D5,PTR_00806724->entries[bVar7],
                   (int)PTR_00806724->field_002C);
        if ((*(int *)&this_00->field_0x255 != 0xe0) &&
           (iVar9 = 0, 0 < *(int *)&this_00->field_0x265)) {
          do {
            st::fn_0040116D
                      (*(STT3DSprC **)(*(int *)&this_00->field_0x26d + iVar9 * 4),
                       PTR_00806724->entries[(byte)this_00->field_0x272],
                       (int)PTR_00806724->field_002C);
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)&this_00->field_0x265);
        }
      }
      else {
        st::fn_00404449((STResourceC *)this_00);
      }
    }
    if ((((this_00->field_0259 != 0) &&
         (iVar9 = st::fn_0040583F((STJellyGunC *)this_00), iVar9 != 0)) &&
        (st::fn_0040116D((STT3DSprC *)&this_00->field_01D5,0,(int)PTR_00806724->field_002C),
        *(int *)&this_00->field_0x255 != 0xe0)) && (iVar9 = 0, 0 < *(int *)&this_00->field_0x265)) {
      do {
        st::fn_0040116D
                  (*(STT3DSprC **)(*(int *)&this_00->field_0x26d + iVar9 * 4),0,
                   (int)PTR_00806724->field_002C);
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)&this_00->field_0x265);
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
  AnonShape_004AB810_8E5693D5 *pAVar5;
  STT3DSprC *this_00;
  HoloTy *pHVar6;
  undefined4 *puVar7;
  int iVar8;
  HoloTy *pHVar9;
  HoloTy *pHVar10;

  pAVar5 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
  if (pAVar5 != nullptr) {
    this_00 = (STT3DSprC *)st::fn_00401316(pAVar5);
    if (this_00 != nullptr) {
      pHVar6 = (HoloTy *)st::fn_0072E530(this->field_0265 * 4 + 4);
      if (pHVar6 == nullptr) {
        st::fn_0072E2B0((HoloTy *)this_00);
        return nullptr;
      }
      iVar8 = this->field_0265;
      if (iVar8 != 0) {
        pHVar9 = this->field_026D;
        pHVar10 = pHVar6;
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          HVar2 = pHVar9->field_0001;
          uVar3 = pHVar9->field_0002;
          uVar4 = pHVar9->field_0x3;
          pHVar10->field_0000 = pHVar9->field_0000;
          pHVar10->field_0001 = HVar2;
          pHVar10->field_0002 = uVar3;
          pHVar10->field_0x3 = uVar4;
          pHVar9 = (HoloTy *)&pHVar9->field_0x4;
          pHVar10 = (HoloTy *)&pHVar10->field_0x4;
        }
        st::fn_0072E2B0(this->field_026D);
      }
      this->field_026D = pHVar6;
      *(STT3DSprC **)((int)&pHVar6->field_0000 + this->field_0265 * 4) = this_00;
      this->field_0265 = this->field_0265 + 1;
      iVar8 = st::fn_0040537B(this_00,PTR_008073cc,0x5a,0x45,this,0xb4,0x8c,0x11);
      if (iVar8 != 0) {
        iVar8 = st::fn_006AD4D0("E:\\__titans\\Igor\\To_gold.cpp",0x203,0,0,"%s",
                                   "STDcResourcC::Init Sprite Error");
        if (iVar8 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        return nullptr;
      }
      return (undefined4 *)this_00;
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
  int iVar5;
  STT3DSprC *pSVar6;
  char *pcVar7;
  STWorldObject *pSVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
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
  iVar5 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = st::fn_006AD4D0("E:\\__titans\\Igor\\To_gold.cpp",0x2b3,0,iVar5,"%s",
                                "STDcResourcC::CreateRes");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\Igor\\To_gold.cpp",0x2b4);
    return 0xffff;
  }
  switch(local_18->field_0255) {
  case CASE_DC:
    local_c = -1;
    local_14 = 0;
    do {
      iVar5 = *(int *)((int)&DAT_007cb0b8 + local_14);
      local_10 = *(int *)((int)&DAT_007cb0dc + local_14);
      iVar10 = this_00->field_0245 + iVar5;
      if (((((iVar10 < g_worldGrid.sizeX) && (-1 < iVar10)) &&
           (iVar10 = this_00->field_0249 + local_10, iVar10 < g_worldGrid.sizeY)) &&
          ((-1 < iVar10 && (-1 < (int)this_00->field_024D)))) && ((int)this_00->field_024D < 5)) {
        if (this_00 == nullptr) {
          pSVar6 = nullptr;
        }
        else {
          pSVar6 = (STT3DSprC *)&this_00->field_01D5;
        }
        if ((3 < local_14) && (pSVar6 = (STT3DSprC *)st::fn_00405911(this_00), pSVar6 == nullptr))
        goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pcVar7 = (char *)st::fn_00401744(this_00,local_c,0);
        iVar10 = st::fn_00404183(pSVar6,0xe,PTR_00806774,pcVar7,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pcVar7 = (char *)st::fn_00401744(this_00,local_c,1);
        iVar10 = st::fn_00404183(pSVar6,0xd,PTR_00806774,pcVar7,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        st::fn_00405240(pSVar6,0xe,g_playSystem_00802A38->field_00E4);
        st::fn_00405CA9(pSVar6,PTR_008073cc);
        st::fn_00403AFD(pSVar6,'\r');
        st::fn_00405240(pSVar6,0xd,g_playSystem_00802A38->field_00E4);
        iVar10 = this_00->field_0249 + local_10;
        local_10 = this_00->field_0245 + iVar5;
        st::fn_004045D9
                  (pSVar6,(float)local_10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)iVar10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)(int)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        st::fn_006EA3E0((void *)this_00->field_0211,pSVar6->field_0018,-1);
      }
      local_14 = local_14 + 4;
      local_c = local_c + 1;
    } while (local_14 < 0x21);
    break;
  case CASE_DD:
    local_c = -1;
    local_14 = 0;
    do {
      iVar5 = *(int *)((int)&DAT_007cb0b8 + local_14);
      local_10 = *(int *)((int)&DAT_007cb0dc + local_14);
      iVar10 = this_00->field_0245 + iVar5;
      if ((((iVar10 < g_worldGrid.sizeX) && (-1 < iVar10)) &&
          (iVar10 = this_00->field_0249 + local_10, iVar10 < g_worldGrid.sizeY)) &&
         (((-1 < iVar10 && (-1 < (int)this_00->field_024D)) && ((int)this_00->field_024D < 5)))) {
        if (this_00 == nullptr) {
          pSVar6 = nullptr;
        }
        else {
          pSVar6 = (STT3DSprC *)&this_00->field_01D5;
        }
        if ((3 < local_14) && (pSVar6 = (STT3DSprC *)st::fn_00405911(this_00), pSVar6 == nullptr))
        goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pcVar7 = (char *)st::fn_00404FD4(this_00,local_c,0);
        iVar10 = st::fn_00404183(pSVar6,0xe,PTR_00806774,pcVar7,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        bVar13 = 0x1d;
        pcVar7 = (char *)st::fn_00404FD4(this_00,local_c,1);
        iVar10 = st::fn_00404183(pSVar6,0xd,PTR_00806774,pcVar7,bVar13);
        if (iVar10 != 0) goto cf_break_loop_0057FAA5;
        st::fn_00405240(pSVar6,0xe,g_playSystem_00802A38->field_00E4);
        st::fn_00405CA9(pSVar6,PTR_008073cc);
        st::fn_00403AFD(pSVar6,'\r');
        st::fn_00405240(pSVar6,0xd,g_playSystem_00802A38->field_00E4);
        iVar10 = this_00->field_0249 + local_10;
        local_10 = this_00->field_0245 + iVar5;
        st::fn_004045D9
                  (pSVar6,(float)local_10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)iVar10 * _DAT_007904f8 + _DAT_007904f4,
                   (float)(int)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        st::fn_006EA3E0((void *)this_00->field_0211,pSVar6->field_0018,-1);
      }
      local_14 = local_14 + 4;
      local_c = local_c + 1;
    } while (local_14 < 0x21);
    break;
  case CASE_DE:
    iVar5 = -1;
    do {
      if (iVar5 == 1) {
        iVar5 = 0;
      }
      local_c = (&DAT_007cb0bc)[iVar5];
      local_10 = (&DAT_007cb0e0)[iVar5];
      iVar10 = local_c + this_00->field_0245;
      if ((((iVar10 < g_worldGrid.sizeX) && (-1 < iVar10)) &&
          ((iVar10 = this_00->field_0249 + local_10, iVar10 < g_worldGrid.sizeY &&
           ((-1 < iVar10 && (-1 < (int)this_00->field_024D)))))) && ((int)this_00->field_024D < 5))
      {
        if (this_00 == nullptr) {
          pSVar6 = nullptr;
        }
        else {
          pSVar6 = (STT3DSprC *)&this_00->field_01D5;
        }
        if ((iVar5 < 0) || (pSVar6 = (STT3DSprC *)st::fn_00405911(this_00), pSVar6 != nullptr)) {
          bVar13 = 0x1d;
          pcVar7 = (char *)st::fn_0040185C(this_00,iVar5,0);
          iVar10 = st::fn_00404183(pSVar6,0xe,PTR_00806774,pcVar7,bVar13);
          if (iVar10 == 0) {
            bVar13 = 0x1d;
            pcVar7 = (char *)st::fn_0040185C(this_00,iVar5,1);
            iVar10 = st::fn_00404183(pSVar6,0xd,PTR_00806774,pcVar7,bVar13);
            if (iVar10 == 0) {
              st::fn_00405240(pSVar6,0xe,g_playSystem_00802A38->field_00E4);
              st::fn_00405CA9(pSVar6,PTR_008073cc);
              st::fn_00403AFD(pSVar6,'\r');
              st::fn_00405240(pSVar6,0xd,g_playSystem_00802A38->field_00E4);
              local_14 = this_00->field_0245 + local_c;
              st::fn_004045D9
                        (pSVar6,(float)local_14 * _DAT_007904f8 + _DAT_007904f4,
                         (float)(this_00->field_0249 + local_10) * _DAT_007904f8 + _DAT_007904f4,
                         (float)(int)this_00->field_024D * _DAT_00790504 + _DAT_00790500 +
                         _DAT_007904fc);
              st::fn_006EA3E0
                        ((void *)this_00->field_0211,pSVar6->field_0018,-1);
              goto LAB_0057fc59;
            }
          }
        }
        local_8 = 0;
        break;
      }
LAB_0057fc59:
      iVar5 = iVar5 + 2;
    } while (iVar5 < 7);
    if (iVar5 != 8) {
      local_8 = 0;
    }
    goto LAB_0057fd72;
  default:
    goto switchD_0057f734_caseD_df;
  case CASE_E0:
    if ((((((int)local_18->field_0245 < (int)g_worldGrid.sizeX) && (-1 < (int)local_18->field_0245))
         && (local_18->field_0249 < (int)g_worldGrid.sizeY)) &&
        ((-1 < local_18->field_0249 && (iVar5 = local_18->field_024D, -1 < iVar5)))) &&
       ((iVar5 < 5 &&
        (iVar5 = st::fn_00404D3B(*(short *)&local_18->field_0245,(short)local_18->field_0249,
                                    (short)iVar5), iVar5 != 0)))) {
      sVar1 = *(short *)&this_00->field_0245;
      sVar2 = *(short *)&this_00->field_024D;
      sVar3 = (short)this_00->field_0249;
      if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar3 < 0)) ||
         (((g_worldGrid.sizeY <= sVar3 || (sVar2 < 0)) || (g_worldGrid.sizeZ <= sVar2)))) {
        pSVar8 = nullptr;
      }
      else {
        pSVar8 = STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[0];
      }
      if (pSVar8 == nullptr) {
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
    iVar5 = st::fn_0040581C();
    local_c = 0;
    if (0 < this_00->field_0265) {
      iVar10 = iVar5 * 2 + 1;
      local_10 = iVar5 * 8 + -0x1c;
      iVar5 = iVar10 * 4;
      do {
        iVar9 = iVar5;
        if (8 < iVar10) {
          iVar9 = local_10;
        }
        local_14 = *(int *)((int)&DAT_007cb0b8 + iVar9) + this_00->field_0245;
        st::fn_004045D9
                  (*(STT3DSprC **)(&this_00->field_026D->field_0000 + local_c * 4),
                   (float)local_14 * _DAT_007904f8 + _DAT_007904f4,
                   (float)(*(int *)((int)&DAT_007cb0dc + iVar9) + this_00->field_0249) *
                   _DAT_007904f8 + _DAT_007904f4,
                   (float)(int)this_00->field_024D * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
        iVar11 = iVar5 + 4;
        iVar12 = iVar10 + 1;
        iVar9 = local_10 + 4;
        if (this_00->field_0255 == CASE_DE) {
          iVar11 = iVar5 + 8;
          iVar12 = iVar10 + 2;
          iVar9 = local_10 + 8;
        }
        local_10 = iVar9;
        local_c = local_c + 1;
        iVar5 = iVar11;
        iVar10 = iVar12;
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
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Igor\\To_gold.cpp",0x414,0,iVar3,"%s",
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
  if ((puVar4 != nullptr) && ((void *)pSVar2->field_0211 != nullptr)) {
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

