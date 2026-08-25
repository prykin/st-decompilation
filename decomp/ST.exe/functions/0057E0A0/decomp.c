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
  ushort uVar15;
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

  if (((this->field_0261 & 4) != 0) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_24 = this;
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
  /* ST_CALLSITE[0057E0FE]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  iVar9 = STSprGameObjC::GetMessage((STSprGameObjC *)local_24,message);
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
      if (this_00->field_025D == 2) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      /* ST_CALLSITE[0057ED43]: CALL 0x0040119a; direct=0040119A STAllPlayersC::SaveGObjData */
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
      this_00->field_023D = 2;
      puVar13 = (byte *)(&this_00->field_0231);
      pbVar18 = local_c;
      memmove(pbVar18, puVar13, 0x46); /* compiler REP MOVS byte copy */
      pbVar18 = local_10;
      pbVar22 = local_c + 0x46;
      memmove(pbVar22, pbVar18, local_8); /* compiler REP MOVS byte copy */
      /* ST_CALLSITE[0057EDAF]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
      STPlaySystemC::SaveObjData
                (g_playSystem_00802A38,(int *)this_00->field_0018,local_c,local_8 + 0x46);
      FreeAndNull(&local_10);
      FreeAndNull(&local_c);
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
    thunk_FUN_005803c0();
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  if (SVar3 == MESS_SHARED_0108) {
    local_EAX_2748 = thunk_FUN_004ab050();
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
      STT3DSprC::sub_004AD3C0
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
      thunk_FUN_004d8530((STResourceC *)this_00);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      uVar15 = extraout_var;
      if (this_00->field_026D != nullptr) {
        iVar11 = this_00->field_0265 + -1;
        this_00->field_0265 = iVar11;
        while (-1 < iVar11) {
          thunk_FUN_004ad310(*(STT3DSprC **)(&this_00->field_026D->field_0000 + iVar11 * 4));
          Library::MSVCRT::FUN_0072e2b0
                    (*(HoloTy **)(&this_00->field_026D->field_0000 + this_00->field_0265 * 4));
          iVar11 = this_00->field_0265 + -1;
          this_00->field_0265 = iVar11;
        }
        Library::MSVCRT::FUN_0072e2b0(this_00->field_026D);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar15 = extraout_var_00;
      }
      if (this_00->field_0032 != -1) {
        /* ST_CALLSITE[0057E1C3]: CALL 0x00401541; direct=00401541 STAllPlayersC::UnRegisterDeposit */
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        STAllPlayersC::UnRegisterDeposit
                  (g_allPlayers_007FA174,CONCAT22(uVar15,this_00->field_0032),(STResourceC *)this_00
                  );
      }
      thunk_FUN_004ad310((STT3DSprC *)&this_00->field_01D5);
      if (this_00->field_0273 == nullptr) {
        g_currentExceptionFrame = local_68.previous;
        return 0;
      }
      FUN_006e6580((void *)this_00->field_0211,this_00->field_0273);
      this_00->field_0273 = nullptr;
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    local_18 = (message->arg0).ptr;
    if ((uint)local_18[3] < 2) {
      this_00->field_0261 = 4;
      this_00->field_0265 = 0;
      this_00->field_026D = nullptr;
      puVar13 = (byte *)((message->arg0).ptr);
      puVar19 = (byte *)(&this_00->field_0231);
      memmove(puVar19, puVar13, 0x28); /* compiler REP MOVS byte copy */
      if (this_00->field_0251 < 1) {
        thunk_FUN_00580380((STResourceC *)this_00);
        goto cf_common_exit_0057E624;
      }
      SVar4 = this_00->field_0255;
      if ((((SVar4 != CASE_DD) && (SVar4 != CASE_DE)) && (SVar4 != CASE_DC)) && (SVar4 != CASE_E0))
      {
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
        thunk_FUN_00580380((STResourceC *)this_00);
      }
      /* ST_CALLSITE[0057E5A1]: CALL 0x00403cd8; direct=00403CD8 STAllPlayersC::RegisterDeposit */
      iVar11 = STAllPlayersC::RegisterDeposit(g_allPlayers_007FA174,0xffff,this_00);
      if (iVar11 != 0) {
        thunk_FUN_00580380((STResourceC *)this_00);
      }
      this_00->field_0261 = this_00->field_0261 | 1;
      this_00->field_0259 = this_00->field_0251;
      thunk_FUN_00417a20(this_00,(short)this_00->field_0245,(short)this_00->field_0249,
                         (short)this_00->field_024D,0);
      /* ST_CALLSITE[0057E5EF]: CALL 0x00401ed3; direct=00401ED3 STDcResourcC::CreateRes */
      local_EAX_1359 = CreateRes(this_00);
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
      STAllPlayersC::RestoreGObjData((STAllPlayersC *)this_00,(undefined4 *)((int)local_18 + 0x46));
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
        thunk_FUN_00580380((STResourceC *)this_00);
      }
      /* ST_CALLSITE[0057E379]: CALL 0x00403cd8; direct=00403CD8 STAllPlayersC::RegisterDeposit */
      iVar11 = STAllPlayersC::RegisterDeposit(g_allPlayers_007FA174,this_00->field_0032,this_00);
      if (iVar11 != 0) {
        thunk_FUN_00580380((STResourceC *)this_00);
      }
      if (local_18[3] == 1) {
        thunk_FUN_00580f50();
      }
      this_00->field_0261 = this_00->field_0261 | 1;
      this_00->field_0259 = this_00->field_0251;
      thunk_FUN_00417a20(this_00,(short)this_00->field_0245,(short)this_00->field_0249,
                         (short)this_00->field_024D,0);
      /* ST_CALLSITE[0057E3DA]: CALL 0x00401ed3; direct=00401ED3 STDcResourcC::CreateRes */
      local_EAX_826 = CreateRes(this_00);
      if (local_EAX_826 == 0xffff) {
        iVar11 = 0xb1;
LAB_0057e60c:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\To_gold.cpp",iVar11
                  );
      }
    }
    this_00->field_0261 = this_00->field_0261 & 0xfffffffb;
cf_common_exit_0057E624:
    if ((this_00->field_0261 & 4) != 0) {
      g_currentExceptionFrame = local_68.previous;
      return 0;
    }
    thunk_FUN_004d84e0((int)this_00);
    sVar9 = (short)this_00->field_0245;
    this_00->field_0047 = sVar9;
    this_00->field_005B = sVar9;
    sVar9 = (short)this_00->field_0249;
    this_00->field_0049 = sVar9;
    this_00->field_005D = sVar9;
    sVar9 = (short)this_00->field_024D;
    this_00->field_004B = sVar9;
    this_00->field_005F = sVar9;
    this_00->field_0045 = (short)this_00->field_024D * 200 + 100;
    this_00->field_0041 = (short)this_00->field_0245 * 0xc9 + 100;
    this_00->field_0043 = (short)this_00->field_0249 * 0xc9 + 100;
    g_currentExceptionFrame = local_68.previous;
    return 0;
  }
  iVar11 = thunk_FUN_0041c710((AnonShape_0041C710_C4D46939 *)this_00);
  if (iVar11 == 0) {
    if ((this_00->field_0261 & 1) == 0) {
      thunk_FUN_005803e0((int)this_00);
      uVar12 = this_00->field_0261 | 2;
LAB_0057e6f0:
      this_00->field_0261 = uVar12;
    }
  }
  else if ((this_00->field_0261 & 2) != 0) {
    thunk_FUN_005803c0();
    uVar12 = this_00->field_0261 & 0xfffffffd;
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
      VisibleClassTy::sub_00558C00
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
            if ((((int)local_18 < 0) || (pVVar7->field_0030 <= (int)local_18)) ||
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
      puVar13 = (byte *)(STFieldC::CreateField((STFieldC *)this_00,this_00->field_0245,this_00->field_0249));
      this_00->field_0273 = puVar13;
      goto cf_common_join_0057E9C2;
    }
    piVar23 = this_00->field_0273;
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
      VisibleClassTy::sub_00558C00
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
            if (((local_1c < 0) || (pVVar7->field_0030 <= local_1c)) ||
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
    piVar23 = this_00->field_0273;
  }
  FUN_006e6580((void *)this_00->field_0211,piVar23);
  this_00->field_0273 = nullptr;
cf_common_join_0057E9C2:
  /* ST_CALLSITE[0057E9C6]: CALL dword ptr [EAX + 0xd8] */
  this_00->vfunc_D8();
  if ((this_00->field_0255 != CASE_E0) && (iVar11 = 0, 0 < this_00->field_0265)) {
    do {
      thunk_FUN_004ac9e0(*(void **)(&this_00->field_026D->field_0000 + iVar11 * 4),
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
        STT3DSprC::sub_004ACE30
                  ((STT3DSprC *)&this_00->field_01D5,PTR_00806724->entries[bVar8],
                   (int)PTR_00806724->field_002C);
        if ((this_00->field_0255 != CASE_E0) && (iVar11 = 0, 0 < this_00->field_0265)) {
          do {
            /* ST_CALLSITE[0057EAB2]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
            STT3DSprC::sub_004ACE30
                      (*(STT3DSprC **)(&this_00->field_026D->field_0000 + iVar11 * 4),
                       PTR_00806724->entries[(byte)this_00->field_0272],
                       (int)PTR_00806724->field_002C);
            iVar11 = iVar11 + 1;
          } while (iVar11 < this_00->field_0265);
        }
      }
      else {
        thunk_FUN_00580380((STResourceC *)this_00);
      }
    }
    if ((((this_00->field_0259 != 0) &&
         (iVar11 = thunk_FUN_00580dc0((STJellyGunC *)this_00), iVar11 != 0)) &&
        /* ST_CALLSITE[0057EAFB]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
        (STT3DSprC::sub_004ACE30((STT3DSprC *)&this_00->field_01D5,0,(int)PTR_00806724->field_002C),
        this_00->field_0255 != CASE_E0)) && (iVar11 = 0, 0 < this_00->field_0265)) {
      do {
        /* ST_CALLSITE[0057EB32]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
        STT3DSprC::sub_004ACE30
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

