#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\To_gold.cpp
   STDcResourcC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040502E|0057E0A0; family_names=STDcResourcC::GetMessage; ret4=8;
   direct_offsets={10:2,14:2,18:1,1c:0} */

int __thiscall STDcResourcC::GetMessage(STDcResourcC *this,STMessage *message)

{
  short sVar1;
  short sVar2;
  STMessageId SVar3;
  bool bVar5;
  VisibleClassTy *pVVar6;
  STSprGameObjC *this_00;
  byte bVar7;
  short sVar8;
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
  undefined4 *puVar13;
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
  STSprGameObjC_field_0231State *pSVar16;
  STWorldObject *pSVar17;
  int iVar18;
  byte *pbVar19;
  STSprGameObjC_field_0231State *pSVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  int *piVar24;
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
  local_EAX_67 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  this_00 = local_24;
  if (local_EAX_67 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar10 = ReportDebugMessage("E:\\__titans\\Igor\\To_gold.cpp",0x169,0,local_EAX_67,
                                "%s","STDcResourcC::GetMessage");
    if (iVar10 == 0) {
      RaiseInternalException(local_EAX_67,0,"E:\\__titans\\Igor\\To_gold.cpp",0x16a);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar9 = STSprGameObjC::GetMessage(local_24,message);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar15 = extraout_var_01;
  if (iVar9 == 0xffff) {
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_gold.cpp",0x56);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    uVar15 = extraout_var_02;
  }
  SVar3 = message->id;
  if (MESS_SHARED_0108 < SVar3) {
    if (SVar3 == MESS_SHARED_010F) {
      if (*(int *)&this_00->field_0x25d == 2) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      local_10 = (byte *)STAllPlayersC::SaveGObjData((STAllPlayersC *)this_00,(int *)&local_8);
      local_c = Library::DKW::LIB::MemAlloc(local_8 + 0x46);
      if (local_10 == nullptr) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      if (local_c == nullptr) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      *(undefined4 *)&this_00->field_0x23d = 2;
      pSVar16 = &this_00->field_0231;
      pSVar20 = local_c;
      memmove(pSVar20, pSVar16, 0x46); /* compiler REP MOVS byte copy */
      pbVar19 = local_10;
      pbVar23 = (byte *)((int)local_c + 0x46);
      memmove(pbVar23, pbVar19, local_8); /* compiler REP MOVS byte copy */
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_c,
                 (AnonShape_0060EA30_DCEB68AD *)(local_8 + 0x46));
      FreeAndNull(&local_10);
      FreeAndNull(&local_c);
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
      pSVar17 = nullptr;
    }
    else {
      pSVar17 = STGridAt3D(g_worldGrid, sVar8, sVar2, sVar1).objects[0];
    }
    if (pSVar17 == nullptr) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    iVar11 = pSVar17->GetObjectTypeId();
    if ((*(int *)&this_00->field_0x255 != 0xdd) || ((iVar11 != 0x39 && (iVar11 != 0x5e)))) {
      if (*(int *)&this_00->field_0x255 != 0xde) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      if ((iVar11 != 0x4f) && (iVar11 != 0x61)) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
    }
    thunk_FUN_005803c0();
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  if (SVar3 == MESS_SHARED_0108) {
    local_EAX_2748 = thunk_FUN_004ab050();
    local_18 = nullptr;
    if (*(int *)&this_00->field_0x265 < 1) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    iVar11 = local_EAX_2748 * 2 + 1;
    local_14 = local_EAX_2748 * 8 + -0x1c;
    iVar21 = iVar11 * 4;
    do {
      iVar14 = iVar21;
      if (8 < iVar11) {
        iVar14 = local_14;
      }
      local_20 = *(int *)((int)&DAT_007cb0b8 + iVar14) + *(int *)((int)&this_00->field_0244 + 1);
      STT3DSprC::sub_004AD3C0
                (*(STT3DSprC **)(*(int *)&this_00->field_0x26d + (int)local_18 * 4),
                 (float)local_20 * _DAT_007904f8 + _DAT_007904f4,
                 (float)(*(int *)((int)&DAT_007cb0dc + iVar14) + *(int *)&this_00->field_0x249) *
                 _DAT_007904f8 + _DAT_007904f4,
                 (float)*(int *)&this_00->field_0x24d * _DAT_00790504 + _DAT_00790500 +
                 _DAT_007904fc);
      iVar22 = iVar21 + 4;
      iVar18 = iVar11 + 1;
      iVar14 = local_14 + 4;
      if (*(int *)&this_00->field_0x255 == 0xde) {
        iVar22 = iVar21 + 8;
        iVar18 = iVar11 + 2;
        iVar14 = local_14 + 8;
      }
      local_14 = iVar14;
      local_18 = (STSprGameObjC_field_0231State *)((int)local_18 + 1);
      iVar11 = iVar18;
      iVar21 = iVar22;
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
      thunk_FUN_004d8530((STResourceC *)this_00);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar15 = extraout_var;
      if (*(int *)&this_00->field_0x26d != 0) {
        iVar11 = *(int *)&this_00->field_0x265 + -1;
        *(int *)&this_00->field_0x265 = iVar11;
        while (-1 < iVar11) {
          thunk_FUN_004ad310(*(STT3DSprC **)(*(int *)&this_00->field_0x26d + iVar11 * 4));
          Library::MSVCRT::FUN_0072e2b0
                    (*(HoloTy **)(*(int *)&this_00->field_0x26d + *(int *)&this_00->field_0x265 * 4)
                    );
          iVar11 = *(int *)&this_00->field_0x265 + -1;
          *(int *)&this_00->field_0x265 = iVar11;
        }
        Library::MSVCRT::FUN_0072e2b0(*(HoloTy **)&this_00->field_0x26d);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = extraout_var_00;
      }
      if (*(short *)&this_00->field_0x32 != -1) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        STAllPlayersC::UnRegisterDeposit
                  (g_allPlayers_007FA174,CONCAT22(uVar15,*(short *)&this_00->field_0x32),
                   (STResourceC *)this_00);
      }
      thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
      if (*(int **)&this_00->field_0x273 == nullptr) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      FUN_006e6580(this_00->field_0211,*(int **)&this_00->field_0x273);
      *(undefined4 *)&this_00->field_0x273 = 0;
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    local_18 = (message->arg0).ptr;
    if (local_18[3] < CASE_2) {
      *(undefined4 *)&this_00->field_0x261 = 4;
      *(undefined4 *)&this_00->field_0x265 = 0;
      *(undefined4 *)&this_00->field_0x26d = 0;
      pSVar16 = (message->arg0).ptr;
      pSVar20 = &this_00->field_0231;
      memmove(pSVar20, pSVar16, 0x28); /* compiler REP MOVS byte copy */
      if (*(int *)&this_00->field_0x251 < 1) {
        thunk_FUN_00580380((STResourceC *)this_00);
        goto cf_common_exit_0057E624;
      }
      iVar11 = *(int *)&this_00->field_0x255;
      if ((((iVar11 != 0xdd) && (iVar11 != 0xde)) && (iVar11 != 0xdc)) && (iVar11 != 0xe0)) {
        local_EAX_979 =
             ReportDebugMessage("E:\\__titans\\Igor\\To_gold.cpp",0x6a,0,0,"%s",
                                "STResourceC::Invalid resource type - assigning metal as default");
        if (local_EAX_979 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        this_00->field_0231 = 0xde;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = extraout_var_04;
      }
      sVar8 = *(short *)((int)&this_00->field_0244 + 1);
      sVar1 = *(short *)&this_00->field_0x249;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_14 = CONCAT22(uVar15,sVar1);
      sVar2 = *(short *)&this_00->field_0x24d;
      if (((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) ||
         (((sVar1 < 0 || ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))) ||
          (g_worldGrid.sizeZ <= sVar2)))) {
        pSVar17 = nullptr;
      }
      else {
        pSVar17 = STGridAt3D(g_worldGrid, sVar8, sVar1, sVar2).objects[0];
      }
      if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar1 < 0)) ||
          ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
        sVar8 = -1;
      }
      else {
        sVar8 = STGridAt3D(g_pathingGrid, sVar8, sVar1, sVar2);
      }
      if ((sVar8 != 0) &&
         ((pSVar17 == nullptr ||
          (((iVar11 = pSVar17->GetObjectTypeId(), iVar11 != 0x39 &&
            (iVar11 = pSVar17->GetObjectTypeId(), iVar11 != 0x4f)) &&
           ((iVar11 = pSVar17->GetObjectTypeId(), iVar11 != 0x5e &&
            (iVar11 = pSVar17->GetObjectTypeId(), iVar11 != 0x61)))))))) {
        thunk_FUN_00580380((STResourceC *)this_00);
      }
      iVar11 = STAllPlayersC::RegisterDeposit(g_allPlayers_007FA174,0xffff,this_00);
      if (iVar11 != 0) {
        thunk_FUN_00580380((STResourceC *)this_00);
      }
      *(uint *)&this_00->field_0x261 = *(uint *)&this_00->field_0x261 | 1;
      this_00->field_0259 = *(STSprGameObjC_field_0259State *)&this_00->field_0x251;
      thunk_FUN_00417a20(this_00,*(short *)((int)&this_00->field_0244 + 1),
                         *(short *)&this_00->field_0x249,*(short *)&this_00->field_0x24d,0);
      local_EAX_1359 = CreateRes((STDcResourcC *)this_00);
      if (local_EAX_1359 == 0xffff) {
        iVar11 = 0x85;
        goto LAB_0057e60c;
      }
    }
    else {
      if (local_18[3] != CASE_2) goto cf_common_exit_0057E624;
      pSVar16 = local_18;
      pSVar20 = &this_00->field_0231;
      memmove(pSVar20, pSVar16, 0x46); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      *(undefined4 *)&this_00->field_0x273 = 0;
      *(undefined4 *)&this_00->field_0x265 = 0;
      *(undefined4 *)&this_00->field_0x26d = 0;
      *(undefined4 *)&this_00->field_0x261 = 4;
      STAllPlayersC::RestoreGObjData((STAllPlayersC *)this_00,(undefined4 *)((int)local_18 + 0x46));
      sVar8 = *(short *)((int)&this_00->field_0244 + 1);
      sVar1 = *(short *)&this_00->field_0x249;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      local_14 = CONCAT22(extraout_var_03,sVar1);
      sVar2 = *(short *)&this_00->field_0x24d;
      if (((((sVar8 < 0) || (g_worldGrid.sizeX <= sVar8)) || (sVar1 < 0)) ||
          ((g_worldGrid.sizeY <= sVar1 || (sVar2 < 0)))) || (g_worldGrid.sizeZ <= sVar2)) {
        pSVar17 = nullptr;
      }
      else {
        pSVar17 = STGridAt3D(g_worldGrid, sVar8, sVar1, sVar2).objects[0];
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
         ((pSVar17 == nullptr ||
          (((iVar11 = pSVar17->GetObjectTypeId(), iVar11 != 0x39 &&
            (iVar11 = pSVar17->GetObjectTypeId(), iVar11 != 0x4f)) &&
           ((iVar11 = pSVar17->GetObjectTypeId(), iVar11 != 0x5e &&
            (iVar11 = pSVar17->GetObjectTypeId(), iVar11 != 0x61)))))))) {
        thunk_FUN_00580380((STResourceC *)this_00);
      }
      iVar11 = STAllPlayersC::RegisterDeposit
                         (g_allPlayers_007FA174,*(ushort *)&this_00->field_0x32,this_00);
      if (iVar11 != 0) {
        thunk_FUN_00580380((STResourceC *)this_00);
      }
      if (local_18[3] == CASE_1) {
        thunk_FUN_00580f50();
      }
      *(uint *)&this_00->field_0x261 = *(uint *)&this_00->field_0x261 | 1;
      this_00->field_0259 = *(STSprGameObjC_field_0259State *)&this_00->field_0x251;
      thunk_FUN_00417a20(this_00,*(short *)((int)&this_00->field_0244 + 1),
                         *(short *)&this_00->field_0x249,*(short *)&this_00->field_0x24d,0);
      local_EAX_826 = CreateRes((STDcResourcC *)this_00);
      if (local_EAX_826 == 0xffff) {
        iVar11 = 0xb1;
LAB_0057e60c:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_gold.cpp",iVar11
                  );
      }
    }
    *(uint *)&this_00->field_0x261 = *(uint *)&this_00->field_0x261 & 0xfffffffb;
cf_common_exit_0057E624:
    if ((this_00->field_0x261 & 4) != 0) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    thunk_FUN_004d84e0((int)this_00);
    uVar15 = *(undefined2 *)((int)&this_00->field_0244 + 1);
    *(undefined2 *)&this_00->field_0x47 = uVar15;
    *(undefined2 *)&this_00->field_0x5b = uVar15;
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
  iVar11 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)this_00);
  if (iVar11 == 0) {
    if ((this_00->field_0x261 & 1) == 0) {
      thunk_FUN_005803e0((int)this_00);
      uVar12 = *(uint *)&this_00->field_0x261 | 2;
LAB_0057e6f0:
      *(uint *)&this_00->field_0x261 = uVar12;
    }
  }
  else if ((this_00->field_0x261 & 2) != 0) {
    thunk_FUN_005803c0();
    uVar12 = *(uint *)&this_00->field_0x261 & 0xfffffffd;
    goto LAB_0057e6f0;
  }
  pVVar6 = g_visibleClass_00802A88;
  if (*(int *)&this_00->field_0x273 == 0) {
    if (g_visibleClass_00802A88 == nullptr) goto cf_common_join_0057E9C2;
    iVar11 = *(int *)&this_00->field_0x24d;
    if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
      uVar12 = 0;
    }
    else {
      VisibleClassTy::sub_00558C00
                (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                 *(int *)((int)&this_00->field_0244 + 1),*(int *)&this_00->field_0x249,
                 (int *)&local_18,&local_14);
      if ((iVar11 < 0) || (4 < iVar11)) {
        uVar12 = 0xffffffff;
      }
      else {
        if (((((int)local_18 < 0) || ((int)pVVar6->field_0028 <= (int)local_18)) ||
            (g_centeredOffsets5[iVar11] + local_14 < 0)) ||
           (pVVar6->field_002C <= g_centeredOffsets5[iVar11] + local_14)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (((bVar5) && (pVVar6->field_010C < 4)) &&
           (pVVar6->field_003C[pVVar6->field_010C] != nullptr)) {
          uVar12 = (uint)*(byte *)((int)local_18 +
                                  (int)((int)pVVar6->field_003C[pVVar6->field_010C] +
                                       (g_centeredOffsets5[iVar11] + local_14) * pVVar6->field_0028)
                                  );
        }
        else {
          uVar12 = 0xffffffff;
        }
        if (-1 < (int)uVar12) {
          if (uVar12 == 0xf) {
            if ((((int)local_18 < 0) || ((int)pVVar6->field_0030 <= (int)local_18)) ||
               ((g_centeredOffsets5[iVar11] + local_14 < 0 ||
                (pVVar6->field_0034 <= g_centeredOffsets5[iVar11] + local_14)))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) && (pVVar6->field_004C != nullptr)) {
              uVar12 = (uint)pVVar6->field_004C
                             [(int)((int)local_18 +
                                   (g_centeredOffsets5[iVar11] + local_14) * pVVar6->field_0030)];
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
      puVar13 = STFieldC::CreateField
                          ((STFieldC *)this_00,*(int *)((int)&this_00->field_0244 + 1),
                           *(int *)&this_00->field_0x249);
      *(undefined4 **)&this_00->field_0x273 = puVar13;
      goto cf_common_join_0057E9C2;
    }
    piVar24 = *(int **)&this_00->field_0x273;
    if (piVar24 == nullptr) goto cf_common_join_0057E9C2;
  }
  else {
    if (g_visibleClass_00802A88 == nullptr) goto cf_common_join_0057E9C2;
    iVar11 = *(int *)&this_00->field_0x24d;
    if ((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) {
      uVar12 = 0;
    }
    else {
      VisibleClassTy::sub_00558C00
                (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                 *(int *)((int)&this_00->field_0244 + 1),*(int *)&this_00->field_0x249,&local_1c,
                 &local_20);
      if ((iVar11 < 0) || (4 < iVar11)) {
        uVar12 = 0xffffffff;
      }
      else {
        if ((((local_1c < 0) || ((int)pVVar6->field_0028 <= local_1c)) ||
            (g_centeredOffsets5[iVar11] + local_20 < 0)) ||
           (pVVar6->field_002C <= g_centeredOffsets5[iVar11] + local_20)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (((bVar5) && (pVVar6->field_010C < 4)) &&
           (pVVar6->field_003C[pVVar6->field_010C] != nullptr)) {
          uVar12 = (uint)*(byte *)((int)pVVar6->field_003C[pVVar6->field_010C] +
                                  local_1c +
                                  (g_centeredOffsets5[iVar11] + local_20) * pVVar6->field_0028);
        }
        else {
          uVar12 = 0xffffffff;
        }
        if (-1 < (int)uVar12) {
          if (uVar12 == 0xf) {
            if (((local_1c < 0) || ((int)pVVar6->field_0030 <= local_1c)) ||
               ((g_centeredOffsets5[iVar11] + local_20 < 0 ||
                (pVVar6->field_0034 <= g_centeredOffsets5[iVar11] + local_20)))) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) && (pVVar6->field_004C != nullptr)) {
              uVar12 = (uint)pVVar6->field_004C
                             [local_1c +
                              (g_centeredOffsets5[iVar11] + local_20) * pVVar6->field_0030];
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
    piVar24 = *(int **)&this_00->field_0x273;
  }
  FUN_006e6580(this_00->field_0211,piVar24);
  *(undefined4 *)&this_00->field_0x273 = 0;
cf_common_join_0057E9C2:
  this_00->vfunc_D8();
  if ((*(int *)&this_00->field_0x255 != 0xe0) && (iVar11 = 0, 0 < *(int *)&this_00->field_0x265)) {
    do {
      thunk_FUN_004ac9e0(*(void **)(*(int *)&this_00->field_0x26d + iVar11 * 4),
                         g_playSystem_00802A38->field_00E4);
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)&this_00->field_0x265);
  }
  if (*(int *)&this_00->field_0x25d == 2) {
    if ((this_00->field_0211 != nullptr) &&
       (g_playSystem_00802A38->field_00E4 % 0xf == 0)) {
      bVar7 = this_00->field_0x272 + 1;
      this_00->field_0x272 = bVar7;
      if ((short)(ushort)bVar7 < PTR_00806724->entryCount) {
        STT3DSprC::sub_004ACE30
                  ((STT3DSprC *)&this_00->field_01D5,PTR_00806724->entries[bVar7],
                   (int)PTR_00806724->field_002C);
        if ((*(int *)&this_00->field_0x255 != 0xe0) &&
           (iVar11 = 0, 0 < *(int *)&this_00->field_0x265)) {
          do {
            STT3DSprC::sub_004ACE30
                      (*(STT3DSprC **)(*(int *)&this_00->field_0x26d + iVar11 * 4),
                       PTR_00806724->entries[(byte)this_00->field_0x272],
                       (int)PTR_00806724->field_002C);
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)&this_00->field_0x265);
        }
      }
      else {
        thunk_FUN_00580380((STResourceC *)this_00);
      }
    }
    if ((((this_00->field_0259 != 0) &&
         (iVar11 = thunk_FUN_00580dc0((STJellyGunC *)this_00), iVar11 != 0)) &&
        (STT3DSprC::sub_004ACE30((STT3DSprC *)&this_00->field_01D5,0,(int)PTR_00806724->field_002C),
        *(int *)&this_00->field_0x255 != 0xe0)) && (iVar11 = 0, 0 < *(int *)&this_00->field_0x265))
    {
      do {
        STT3DSprC::sub_004ACE30
                  (*(STT3DSprC **)(*(int *)&this_00->field_0x26d + iVar11 * 4),0,
                   (int)PTR_00806724->field_002C);
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)&this_00->field_0x265);
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return 0;
}

