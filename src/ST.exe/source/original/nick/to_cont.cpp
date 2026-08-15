#include "st/generated.hpp"
// Generated translation unit: source/original/nick/to_cont.cpp

// 005FB640 STContainerC::GetMessage
#line 4 "decomp/ST.exe/functions/005FB640/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_cont.cpp
   STContainerC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005FB640; family_names=STContainerC::GetMessage; ret4=22;
   direct_offsets={10:1,14:3,18:9,1c:0} */

int __thiscall st::fn_005FB640(STContainerC *this,STMessage *message)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STMessageId SVar4;
  dword dVar5;
  bool bVar7;
  STContainerC *this_00;
  int local_EAX_16;
  int iVar8;
  uint uVar8;
  int local_EAX_598;
  undefined4 uVar10;
  STGameObjC *this_01;
  int uVar9;
  int iVar12;
  byte bVar11;
  int iVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  undefined2 uVar14;
  byte *puVar15;
  byte *puVar16;
  byte *puVar17;
  STWorldObject *pSVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  InternalExceptionFrame local_60;
  int local_1c;
  int local_18;
  byte *local_14;
  AnonShape_0060EA30_DCEB68AD *local_10;
  STGameObjC *local_c;
  STContainerC *local_8;

  local_8 = this;
  local_EAX_16 = st::fn_00404F07((STSprGameObjC *)this,message);
  if (local_EAX_16 != 0xffff) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    iVar8 = st::fn_0072D7F0(local_60.jumpBuffer,0);
    this_00 = local_8;
    if (iVar8 == 0) {
      SVar4 = message->id;
      if (MESS_TORPHIT < SVar4) {
        switch(SVar4) {
        case MESS_STOCTOPUSC_0112:
          if (local_8->field_02D6 < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          st::fn_00402A90((STT3DSprC *)&local_8->vtable_at_1d5);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        case MESS_STSPRGAMEOBJC_0113:
          if (local_8->field_02D6 < 0) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          (*local_8->vtable_at_1d5->vfunc_00)((STContainerC *)&local_8->vtable_at_1d5);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        default:
          g_currentExceptionFrame = local_60.previous;
          return 0;
        case MESS_HITKILL:
          dVar5 = (message->arg0).u32;
          local_8->field_0315 = *(undefined1 *)(dVar5 + 0x18);
          if (((local_8->field_024E != '\0') && (local_8->field_02AB != 0xffff)) &&
             ((this_01 = (STGameObjC *)local_8->field_02AD, this_01 != nullptr ||
              (this_01 = st::fn_004028BA
                                   (g_allPlayers_007FA174,local_8->field_02A3,local_8->field_02AB,
                                    CASE_1), this_01 != nullptr)))) {
            st::fn_00402A6D(this_01,(int)this_00->field_0018);
            this_00->vfunc_AC((short)this_01->field_0018);
          }
          switch(*(undefined4 *)(dVar5 + 0x18)) {
          case 2:
          case 4:
            goto switchD_005fbd82_caseD_2;
          case 3:
            uVar8 = 0;
            this_00->field_030E = *(undefined1 *)(dVar5 + 8);
            this_00->field_030F = *(undefined2 *)(dVar5 + 0xc);
            iVar13 = this_00->field_02C6;
            this_00->field_030D = 1;
            this_00->field_023A = 5;
            iVar21 = this_00->field_02C2;
            this_00->field_02E0 = st::machine_word_boundary_cast<uint>(g_playSystem_00802A38->field_00E4 + 0x15);
            iVar20 = this_00->field_02BE;
            iVar19 = 1;
            uVar9 = st::fn_004052CC((STT3DSprC *)&this_00->vtable_at_1d5);
            st::fn_004051A5(uVar9,iVar19,iVar20,iVar21,iVar13,uVar8);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          case 5:
            this_00->field_02D2 = 0;
            this_00->field_02B5 = 3;
            this_00->field_023A = 5;
            g_currentExceptionFrame = local_60.previous;
            return 0;
          default:
            this_00->field_030E = *(undefined1 *)(dVar5 + 8);
            this_00->field_030F = *(undefined2 *)(dVar5 + 0xc);
            this_00->field_030D = 1;
            if (-1 < this_00->field_02D6) {
              st::fn_006EAB60(this_00->field_0211,this_00->field_02D6);
            }
            st::fn_0040477D(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
        case MESS_SHARED_0129:
          goto switchD_005fbd08_caseD_129;
        }
      }
      if (SVar4 == MESS_TORPHIT) {
        puVar16 = (byte *)((message->arg0).ptr);
        if (local_8->field_023A == 5) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (local_8->field_023A == 6) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        iVar13 = local_8->vfunc_124((short)*puVar16);
        if (iVar13 == 0) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        st::fn_00401F2D(1);
        this_00->field_030E = *(undefined1 *)(puVar16 + 2);
        this_00->field_030F = *(undefined2 *)(puVar16 + 3);
        this_00->field_030D = 1;
        this_00->field_023A = 5;
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (MESS_SHARED_0003 < SVar4) {
        if (SVar4 == MESS_SHARED_0108) {
          st::fn_00404903((int)local_8);
          st::fn_00401B0E(this_00,0);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (SVar4 != MESS_SHARED_010F) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        local_14 = st::fn_00405934((STAllPlayersC *)local_8,(uint *)&local_10);
        st::fn_004025F9
                  (g_playSystem_00802A38,this_00->field_0018,local_14,(uint)local_10);
        st::fn_006AB060(&local_14);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (SVar4 == MESS_SHARED_0003) {
        iVar13 = st::fn_00404EC1(local_8->field_0242,local_8->field_0244,local_8->field_0246,0,
                                    (AnonShape_00495FF0_59081BDD *)local_8);
        if (iVar13 == 0) {
          this_00->field_0252 = this_00->field_0252 + -1;
        }
        st::fn_004021D5((STT3DSprC *)&this_00->vtable_at_1d5);
        if (this_00->field_02E4 == '\0') {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        if (g_allPlayers_007FA174 == nullptr) {
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar14 = extraout_var;
        if (this_00->field_0250 != '\x03') {
          st::fn_00401AFA(this_00);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          uVar14 = extraout_var_00;
        }
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        st::fn_00401F64
                  (g_allPlayers_007FA174,CONCAT22(uVar14,this_00->field_0032),
                   (AnonShape_0044A730_DBE673B2 *)this_00);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (SVar4 == MESS_ID_NONE) {
        if (local_8->field_023A == 6) {
          st::fn_0040477D(local_8);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        uVar10 = st::fn_00405DE9((AnonShape_005EE6E0_AB6798ED *)local_8);
        this_00->field_02DE = (char)uVar10;
        if ((char)uVar10 == '\0') {
          if (this_00->field_023A != 6) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          st::fn_0040477D(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        this_00->field_02BE = this_00->field_0277;
        this_00->field_02C2 = this_00->field_027B;
        this_00->field_02C6 = this_00->field_027F;
        st::fn_00401096((int)this_00);
        if ((-1 < this_00->field_02D2) &&
           (iVar13 = st::fn_00405CE5((AnonShape_005F0BA0_C8D654C5 *)this_00), iVar13 != 0)) {
          this_00->field_02D2 = -1;
        }
        st::fn_00401B0E(this_00,0);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (SVar4 != MESS_ID_CREATE) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      puVar16 = (byte *)((message->arg0).ptr);
      if (puVar16[3] != 2) {
        puVar15 = (byte *)(puVar16);
        puVar17 = (byte *)&local_8->field_0x326;
        memmove(puVar17, puVar15, 0x155); /* compiler REP MOVS byte copy */
        if (puVar16[3] == 0) {
          local_8->field_046F = (int)local_8->field_034E;
          local_8->field_0473 = (int)local_8->field_0350;
          local_8->field_0477 = (int)local_8->field_0352;
          local_8->field_034E = local_8->field_034E * 0xc9 + 100;
          local_8->field_0350 = local_8->field_0350 * 0xc9 + 100;
          local_8->field_0352 = local_8->field_0352 * 200 + 100;
        }
        iVar13 = st::fn_004036E3((AnonShape_005FC4A0_70B17F95 *)local_8);
        if (iVar13 == 0) {
          st::fn_0040477D(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        st::fn_00401F2D(0);
        if (((((AnonShape_005EFAE0_B406B78B *)this_00->field_0358 !=
               nullptr) && ((short)this_00->field_0342 == 1)) &&
            (iVar13 = st::fn_006E62D0
                                (g_playSystem_00802A38,
                                 (AnonShape_005EFAE0_B406B78B *)this_00->field_0358,&local_18),
            iVar13 != -4)) && (this_00->field_0211 != nullptr)) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_006EA460
                    (this_00->field_0211,this_00->field_01ED,*(int *)(local_18 + 0x1ed));
        }
        if (g_allPlayers_007FA174 != nullptr) {
          iVar13 = st::fn_00401294(g_allPlayers_007FA174,0xffff,this_00);
          if (iVar13 != 0) {
            st::fn_0040477D(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00->field_02E4 = 1;
          st::fn_0040218A((AnonShape_005FCEB0_FA1F7938 *)this_00);
        }
        uVar8 = st::machine_word_boundary_cast<uint>(this_00->field_0342 >> 0x10);
        if (uVar8 != 3) {
          if (uVar8 != 5) {
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00->field_02D2 = st::machine_word_boundary_cast<int>(PTR_00806724->entryCount + -1);
          this_00->field_02B5 = 1;
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        st::fn_004051A5(this_00->field_01ED,1,(int)this_00->field_034E,(int)this_00->field_0350,
                           (int)this_00->field_0352,0x13);
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      local_EAX_598 = st::fn_0040301C(local_8,st::pointer_boundary_cast<undefined4 *>(puVar16));
      if (local_EAX_598 < 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      if (this_00->field_0252 != '\0') {
        sVar1 = this_00->field_0242;
        sVar2 = this_00->field_0244;
        local_1c = (int)sVar2;
        sVar3 = this_00->field_0246;
        local_c = (STGameObjC *)0x1;
        if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
            ((sVar2 < 0 || ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))))) ||
           (g_worldGrid.sizeZ <= sVar3)) {
          pSVar18 = nullptr;
        }
        else {
          pSVar18 = STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[0];
        }
        bVar7 = true;
        if ((pSVar18 == nullptr) &&
           (iVar13 = st::fn_00401325
                               (sVar1,sVar2,sVar3,0,(RecoveredRecord_DumpClassC_00495EC0 *)this_00),
           iVar13 == 0)) {
          this_00->field_0252 = this_00->field_0252 + '\x01';
        }
        else {
          bVar7 = false;
        }
        if (!bVar7) {
          st::fn_0040477D(this_00);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        bVar11 = this_00->field_0252 - 1;
        this_00->field_0252 = bVar11;
        if (1 < bVar11) {
          sVar1 = this_00->field_0248;
          sVar2 = this_00->field_024A;
          local_c = (STGameObjC *)(int)sVar2;
          sVar3 = this_00->field_024C;
          local_1c = 1;
          if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
             (((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)) || (g_worldGrid.sizeZ <= sVar3)))) {
            pSVar18 = nullptr;
          }
          else {
            pSVar18 = STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[0];
          }
          bVar7 = true;
          if ((pSVar18 == nullptr) &&
             (iVar13 = st::fn_00401325
                                 (sVar1,sVar2,sVar3,0,(RecoveredRecord_DumpClassC_00495EC0 *)this_00
                                 ), iVar13 == 0)) {
            this_00->field_0252 = this_00->field_0252 + '\x01';
          }
          else {
            bVar7 = false;
          }
          if (!bVar7) {
            st::fn_0040477D(this_00);
            g_currentExceptionFrame = local_60.previous;
            return 0;
          }
          this_00->field_0252 = this_00->field_0252 + -1;
        }
      }
      st::fn_00404903((int)this_00);
      st::fn_00401B0E(this_00,0);
      if (g_allPlayers_007FA174 == nullptr) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      iVar13 = st::fn_00401294(g_allPlayers_007FA174,this_00->field_0032,this_00);
      if (iVar13 == 0) {
        g_currentExceptionFrame = local_60.previous;
        return 0;
      }
      st::fn_0040477D(this_00);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    g_currentExceptionFrame = local_60.previous;
    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\nick\\to_cont.cpp"),0x139,0,iVar8,st::mutable_c_string("%s"),
                                "STContainerC::GetMessage");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar8,0,st::mutable_c_string("E:\\__titans\\nick\\to_cont.cpp"),0x13b);
  }
  return 0xffff;
switchD_005fbd82_caseD_2:
  iVar13 = this_00->vfunc_124(20000);
  if (iVar13 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  st::fn_00401F2D(1);
  if (*(int *)(dVar5 + 0x18) == 4) {
    st::fn_006E9D40(this_00->field_0211,(uint *)this_00->field_01ED,8);
  }
  this_00->field_030E = *(undefined1 *)(dVar5 + 8);
  this_00->field_030F = *(undefined2 *)(dVar5 + 0xc);
  this_00->field_023A = 5;
  this_00->field_030D = 1;
  g_currentExceptionFrame = local_60.previous;
  return 0;
switchD_005fbd08_caseD_129:
  if (local_8->field_023A != 4) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (local_8->field_02AB == 0xffff) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  if (local_8->field_024F == '\0') {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  local_c = (STGameObjC *)local_8->field_02AD;
  if (local_c == nullptr) {
    local_c = st::fn_004028BA
                        (g_allPlayers_007FA174,local_8->field_02A3,local_8->field_02AB,CASE_1);
  }
  if (local_c != nullptr) {
    this_00->field_0277 = (int)*(short *)&local_c->field_0x41;
    this_00->field_027B = (int)*(short *)&local_c->field_0x43;
    this_00->field_027F = *(short *)&local_c->field_0x45 + 5;
    this_00->field_02BA = (int)(short)local_c->field_006C / 0xf;
    puVar16 = (byte *)&local_c->field_0x34;
    puVar15 = (byte *)&this_00->field_0x34;
    memmove(puVar15, puVar16, 0x5f); /* compiler REP MOVS byte copy */
    this_00->field_0076 = 0;
    this_00->field_006E = local_c->field_006E;
    this_00->field_02BE = this_00->field_0277;
    this_00->field_02C2 = this_00->field_027B;
    this_00->field_02C6 = this_00->field_027F;
  }
  st::fn_00404903((int)this_00);
  iVar13 = this_00->vfunc_D8();
  if (iVar13 == 0) {
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  return 0xffff;
}

