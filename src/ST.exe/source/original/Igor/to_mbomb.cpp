#include "st/generated.hpp"
// Generated translation unit: source/original/Igor/to_mbomb.cpp

// 00588BC0 STMBombC::GetMessage
#line 4 "decomp/ST.exe/functions/00588BC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_mbomb.cpp
   STMBombC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401037|00588BC0; family_names=STMBombC::GetMessage; ret4=10;
   direct_offsets={10:2,14:3,18:1,1c:2} */

int __thiscall st::fn_00588BC0(STMBombC *this,STMessage *message)

{
  STMessageId SVar1;
  dword dVar2;
  STMBombC *this_00;
  int local_EAX_85;
  int local_EAX_1342;
  int iVar8;
  int iVar9;
  int iVar4;
  uint uVar5;
  short sVar6;
  byte *puVar7;
  byte *pbVar8;
  byte *puVar9;
  AnonShape_00588BC0_84BDD66C *pAVar10;
  byte *pbVar11;
  InternalExceptionFrame local_8c;
  undefined4 *local_48;
  STMBombC *local_44;
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ushort *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  void *local_24;
  byte *local_20;
  byte *local_1c;
  uint local_18;
  AnonShape_00588BC0_84BDD66C *local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;

  local_24 = nullptr;
  if ((this->field_0231 == 3) && (message->id != MESS_SHARED_0003)) {
    return 0;
  }
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_44 = this;
  local_EAX_85 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  this_00 = local_44;
  if (local_EAX_85 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_mbomb.cpp"),0x389,0,local_EAX_85,
                               st::mutable_c_string("%s"),"STMBombC::GetMessage");
    if (iVar9 == 0) {
      st::fn_006A5E40(local_EAX_85,0,st::mutable_c_string("E:\\__titans\\Igor\\to_mbomb.cpp"),0x38a);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00404F07((STSprGameObjC *)local_44,message);
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 == MESS_STOCTOPUSC_0112) {
      st::fn_00402A90((STT3DSprC *)&this_00->field_01D5);
    }
    else if (SVar1 == MESS_STSPRGAMEOBJC_0113) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_010F) {
    local_20 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_10);
    local_1c = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_18);
    local_14 = st::pointer_boundary_cast<AnonShape_00588BC0_84BDD66C *>(st::fn_006AAC70(local_18 + 0x87 + local_10));
    if (local_20 == nullptr) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (local_1c == nullptr) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (local_14 == nullptr) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    puVar7 = (byte *)&this_00->field_0x27c;
    pAVar10 = local_14;
    memmove(pAVar10, puVar7, 0x2a); /* compiler REP MOVS byte copy */
    *(undefined4 *)&local_14->field_0xc = 2;
    *(undefined4 *)&local_14->field_0x2a = this_00->field_0231;
    *(undefined4 *)&local_14->field_0x2e = this_00->field_0235;
    *(undefined4 *)&local_14->field_0x32 = this_00->field_0239;
    *(undefined4 *)&local_14->field_0x36 = this_00->field_023D;
    *(undefined2 *)&local_14->field_0x3a = this_00->field_0241;
    *(undefined2 *)&local_14->field_0x3c = this_00->field_0243;
    *(undefined2 *)&local_14->field_0x3e = this_00->field_0245;
    *(undefined4 *)&local_14->field_0x62 = this_00->field_0263;
    *(undefined4 *)&local_14->field_0x66 = this_00->field_0267;
    *(undefined4 *)&local_14->field_0x6a = this_00->field_026B;
    *(undefined2 *)&local_14->field_0x40 = this_00->field_0247;
    *(undefined2 *)&local_14->field_0x42 = this_00->field_0249;
    *(undefined2 *)&local_14->field_0x44 = this_00->field_024B;
    *(undefined2 *)&local_14->field_0x46 = this_00->field_024D;
    *(undefined2 *)&local_14->field_0x48 = this_00->field_024F;
    *(undefined2 *)&local_14->field_0x4a = this_00->field_0251;
    *(uint *)&local_14->field_0x4c = this_00->field_0253;
    local_14->field_0050 = this_00->field_0257;
    local_14->field_0054 = this_00->field_025B;
    *(undefined4 *)&local_14->field_0x58 = this_00->field_025F;
    *(undefined4 *)&local_14->field_0x5c = this_00->field_026F;
    *(undefined2 *)&local_14->field_0x60 = this_00->field_0273;
    *(undefined4 *)&local_14->field_0x74 = 0;
    *(undefined2 *)&local_14->field_0x6e = this_00->field_0041;
    *(undefined2 *)&local_14->field_0x70 = this_00->field_0043;
    *(undefined2 *)&local_14->field_0x72 = this_00->field_0045;
    local_14->field_0x78 = this_00->field_0275;
    local_14->field_0x79 = this_00->field_0276;
    local_14->field_0x7a = this_00->field_0277;
    *(undefined4 *)&local_14->field_0x7b = this_00->field_0278;
    local_14->field_007F = local_10;
    pbVar8 = local_20;
    pbVar11 = st::pointer_boundary_cast<byte *>(&local_14->field_0x83);
    memmove(pbVar11, pbVar8, local_10); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    *(uint *)(&local_14->field_0x83 + local_10) = local_18;
    pbVar8 = local_1c;
    pbVar11 = st::pointer_boundary_cast<byte *>(&local_14[1].field_0x3 + local_10);
    memmove(pbVar11, pbVar8, local_18); /* compiler REP MOVS byte copy */
    st::fn_004025F9
              (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_14,
               local_18 + 0x87 + local_10);
    st::fn_006AB060(&local_20);
    st::fn_006AB060(&local_1c);
    st::fn_006AB060(&local_14);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    st::fn_00401A32((int *)this_00);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_CREATE) {
    DAT_0081170c = st::fn_006ACF0D(0,0,0,0x3ed,0x3ed,1000);
    dVar2 = (message->arg0).u32;
    this_00->field_0231 = 3;
    uVar5 = *(uint *)(dVar2 + 0xc);
    if (uVar5 < 2) {
      this_00->field_0257 = 0;
      this_00->field_0253 = g_playSystem_00802A38->field_00E4;
      this_00->field_026F = 0xff;
      puVar7 = (byte *)((message->arg0).ptr);
      puVar9 = (byte *)&this_00->field_0x27c;
      memmove(puVar9, puVar7, 0x2a); /* compiler REP MOVS byte copy */
      iVar4 = 0;
      uVar5 = st::machine_word_boundary_cast<uint>(this_00->field_001C * 0x41c64e6d + 0x3039);
      this_00->field_001C = uVar5;
      this_00->field_025B = (uVar5 >> 0x10) % 0x19 - 0xc;
      this_00->field_025F = 2;
      this_00->field_026B = 0;
      this_00->field_0267 = 0;
      this_00->field_0263 = 0;
      if ((this_00->field_0290 < (int)(short)(g_worldGrid.sizeX * 0xc9 + 100)) &&
         (-1 < this_00->field_0290)) {
        if ((this_00->field_0294 < (int)(short)(g_worldGrid.sizeY * 0xc9 + 100)) &&
           (((-1 < this_00->field_0294 &&
             (iVar4 = this_00->field_0298, iVar4 < (short)(STPiece<4,4>(g_worldGrid) * 200 + 100))) &&
            (-1 < iVar4)))) {
          st::fn_00403107(this_00,(ushort)this_00->field_0290,(short)this_00->field_0294,(ushort)iVar4);
          iVar4 = this_00->field_0290;
          sVar6 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
          iVar4 = this_00->field_0294;
          this_00->field_0047 = sVar6;
          sVar6 = STBiasedDiv16(iVar4, 0xc9); /* exact signed 16-bit grid-index division */
          iVar4 = this_00->field_0298;
          this_00->field_0049 = sVar6;
          sVar6 = STBiasedDiv16(iVar4, 200); /* exact signed 16-bit grid-index division */
          this_00->field_004B = sVar6;
          iVar4 = st::fn_00404183
                            ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_00806774,st::mutable_c_string("mmine"),
                             CASE_1D);
          if (iVar4 != 0) {
            st::fn_006A5E40
                      (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Igor\\to_mbomb.cpp"),0x2c3
                      );
          }
          st::fn_00405240
                    ((STT3DSprC *)&this_00->field_01D5,0xe,g_playSystem_00802A38->field_00E4);
          if (((AnonShape_005EFAE0_B406B78B *)this_00->field_029C ==
               nullptr) ||
             (iVar4 = st::fn_006E62D0
                                (g_playSystem_00802A38,
                                 (AnonShape_005EFAE0_B406B78B *)this_00->field_029C,(int *)&local_24
                                ), iVar4 != 0)) {
            this_00->field_0231 = 1;
            this_00->field_0235 = 0;
            this_00->field_0239 = 0;
            this_00->field_023D = 0;
          }
          else {
            this_00->field_0231 = 0;
            this_00->field_0273 = STField<undefined2>(local_24,0x32);
            this_00->field_026F = STField<undefined4>(local_24,0x24);
            st::fn_004031E3(local_24,(uint *)&local_6,(int *)&local_8,&local_a);
            local_a = local_a - this_00->field_0045;
            local_8 = local_8 - this_00->field_0043;
            local_6 = local_6 - this_00->field_0041;
            local_EAX_1342 = st::fn_006ACF0D(0,0,0,(int)local_6,(int)local_8,(int)local_a);
            this_00->field_0235 = 0;
            this_00->field_0239 = 0;
            this_00->field_023D = 0;
            if (0 < local_EAX_1342) {
              this_00->field_0235 = (local_6 * 0xc0000) / local_EAX_1342;
              this_00->field_0239 = (local_8 * 0xc0000) / local_EAX_1342;
              this_00->field_023D = (local_a * 0xc0000) / local_EAX_1342;
            }
          }
          st::fn_00403D19(this_00,this_00->field_0290,this_00->field_0294,0x45b);
          this_00->field_024F = this_00->field_0043;
          this_00->field_024D = this_00->field_0041;
          this_00->field_0251 = this_00->field_0045;
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Igor\\to_mbomb.cpp"),0x2ae,0,0,st::mutable_c_string("%s"),
                                 "STMBombC:Bad init coordinates");
      if (iVar8 == 0) {
        st::fn_00405EF2(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (uVar5 != 2) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    local_48 = (undefined4 *)(message->arg0).u32;
    puVar7 = (byte *)(local_48);
    puVar9 = (byte *)&this_00->field_0x27c;
    memmove(puVar9, puVar7, 0x2a); /* compiler REP MOVS byte copy */
    local_10 = STField<uint>(local_48,0x7f);
    st::fn_0040551F
              ((STAllPlayersC *)this_00,(undefined4 *)(local_10 + 0x87 + (int)local_48));
    puVar7 = (byte *)(local_48);
    this_00->field_0231 = STField<undefined4>(local_48,0x2a);
    this_00->field_0235 = STField<undefined4>(local_48,0x2e);
    this_00->field_0239 = STField<undefined4>(local_48,0x32);
    this_00->field_023D = STField<undefined4>(local_48,0x36);
    this_00->field_0241 = STField<undefined2>(local_48,0x3a);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0243 = *(undefined2 *)(local_48 + 0xf);
    this_00->field_0245 = STField<undefined2>(local_48,0x3e);
    this_00->field_0263 = STField<undefined4>(local_48,0x62);
    this_00->field_0267 = STField<undefined4>(local_48,0x66);
    this_00->field_026B = STField<undefined4>(local_48,0x6a);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0247 = *(undefined2 *)(local_48 + 0x10);
    this_00->field_0249 = STField<undefined2>(local_48,0x42);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_024B = *(undefined2 *)(local_48 + 0x11);
    this_00->field_024D = STField<undefined2>(local_48,0x46);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_024F = *(undefined2 *)(local_48 + 0x12);
    this_00->field_0251 = STField<undefined2>(local_48,0x4a);
    this_00->field_0253 = local_48[0x13];
    this_00->field_0257 = local_48[0x14];
    this_00->field_025B = local_48[0x15];
    this_00->field_025F = local_48[0x16];
    this_00->field_026F = local_48[0x17];
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0273 = *(undefined2 *)(local_48 + 0x18);
    this_00->field_0041 = STField<undefined2>(local_48,0x6e);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0043 = *(undefined2 *)(local_48 + 0x1c);
    this_00->field_0045 = STField<undefined2>(local_48,0x72);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0275 = *(undefined1 *)(local_48 + 0x1e);
    this_00->field_0276 = STField<undefined1>(local_48,0x79);
    this_00->field_0277 = STField<undefined1>(local_48,0x7a);
    this_00->field_0278 = STField<undefined4>(local_48,0x7b);
    local_40 = st::fn_006AAC70(0x44);
    if (local_40 == nullptr) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    iVar4 = 0;
    do {
      *(int **)(iVar4 + (int)local_40) = PTR_00806774;
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0x44);
    STField<int *>(local_40,0x24) = PTR_00806764;
    local_3c = 0;
    local_38 = 0;
    local_34 = PTR_008073cc;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    st::fn_00404CA5
              ((STT3DSprC *)&this_00->field_01D5,(int *)&local_40,
               (AnonShape_004AD790_77673787 *)((int)puVar7 + 0x83));
    st::fn_006AB060(&local_40);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar1 != MESS_SHARED_0003) {
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}

