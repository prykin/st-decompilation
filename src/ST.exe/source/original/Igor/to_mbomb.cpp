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
  undefined2 uVar1;
  STMessageId SVar2;
  dword dVar3;
  undefined1 uVar5;
  STSprGameObjC *this_00;
  undefined1 uVar6;
  undefined1 uVar7;
  int local_EAX_85;
  int local_EAX_1342;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  short sVar12;
  byte *puVar13;
  byte *pbVar14;
  byte *puVar15;
  AnonShape_00588BC0_84BDD66C *pAVar16;
  byte *pbVar17;
  InternalExceptionFrame local_8c;
  undefined4 *local_48;
  STSprGameObjC *local_44;
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
  local_44 = (STSprGameObjC *)this;
  local_EAX_85 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  this_00 = local_44;
  if (local_EAX_85 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_mbomb.cpp",0x389,0,local_EAX_85,
                               "%s","STMBombC::GetMessage");
    if (iVar9 == 0) {
      st::fn_006A5E40(local_EAX_85,0,"E:\\__titans\\Igor\\to_mbomb.cpp",0x38a);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00404F07(local_44,message);
  SVar2 = message->id;
  if (MESS_SHARED_010F < SVar2) {
    if (SVar2 == MESS_STOCTOPUSC_0112) {
      st::fn_00402A90((STT3DSprC *)&this_00->field_01D5);
    }
    else if (SVar2 == MESS_STSPRGAMEOBJC_0113) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)this_00->field_01D5)();
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar2 == MESS_SHARED_010F) {
    local_20 = (byte *)st::fn_004018D4((STT3DSprC *)&this_00->field_01D5,&local_10);
    local_1c = (byte *)st::fn_0040119A((STAllPlayersC *)this_00,(int *)&local_18);
    local_14 = st::fn_006AAC70(local_18 + 0x87 + local_10);
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
    puVar13 = (byte *)&this_00->field_0x27c;
    pAVar16 = local_14;
    memmove(pAVar16, puVar13, 0x2a); /* compiler REP MOVS byte copy */
    *(undefined4 *)&local_14->field_0xc = 2;
    *(STSprGameObjC_field_0231State *)&local_14->field_0x2a = this_00->field_0231;
    *(undefined4 *)&local_14->field_0x2e = *(undefined4 *)&this_00->field_0x235;
    *(undefined4 *)&local_14->field_0x32 = *(undefined4 *)&this_00->field_0x239;
    *(undefined4 *)&local_14->field_0x36 = *(undefined4 *)&this_00->field_0x23d;
    *(undefined2 *)&local_14->field_0x3a = *(undefined2 *)((int)&this_00->field_023E + 3);
    *(undefined2 *)&local_14->field_0x3c = *(undefined2 *)((int)&this_00->field_0242 + 1);
    *(undefined2 *)&local_14->field_0x3e = *(undefined2 *)((int)&this_00->field_0244 + 1);
    *(undefined4 *)&local_14->field_0x62 = *(undefined4 *)&this_00->field_0x263;
    *(undefined4 *)&local_14->field_0x66 = *(undefined4 *)&this_00->field_0x267;
    *(undefined4 *)&local_14->field_0x6a = *(undefined4 *)&this_00->field_0x26b;
    *(undefined2 *)&local_14->field_0x40 = *(undefined2 *)((int)&this_00->field_0246 + 1);
    *(undefined2 *)&local_14->field_0x42 = *(undefined2 *)&this_00->field_0x249;
    *(undefined2 *)&local_14->field_0x44 = *(undefined2 *)&this_00->field_0x24b;
    uVar5 = this_00->field_024E;
    local_14->field_0x46 = this_00->field_0x24d;
    local_14->field_0x47 = uVar5;
    uVar5 = this_00->field_0x250;
    local_14->field_0x48 = this_00->field_024F;
    local_14->field_0x49 = uVar5;
    *(undefined2 *)&local_14->field_0x4a = *(undefined2 *)&this_00->field_0x251;
    *(undefined4 *)&local_14->field_0x4c = *(undefined4 *)&this_00->field_0x253;
    local_14->field_0050 = *(undefined4 *)&this_00->field_0x257;
    local_14->field_0054 = *(undefined4 *)((int)&this_00->field_0259 + 2);
    *(undefined4 *)&local_14->field_0x58 = *(undefined4 *)&this_00->field_0x25f;
    *(undefined4 *)&local_14->field_0x5c = *(undefined4 *)&this_00->field_0x26f;
    *(undefined2 *)&local_14->field_0x60 = *(undefined2 *)&this_00->field_0x273;
    *(undefined4 *)&local_14->field_0x74 = 0;
    *(undefined2 *)&local_14->field_0x6e = *(undefined2 *)&this_00->field_0x41;
    *(undefined2 *)&local_14->field_0x70 = *(undefined2 *)&this_00->field_0x43;
    *(undefined2 *)&local_14->field_0x72 = *(undefined2 *)&this_00->field_0x45;
    local_14->field_0x78 = this_00->field_0x275;
    local_14->field_0x79 = this_00->field_0x276;
    local_14->field_0x7a = this_00->field_0x277;
    *(undefined4 *)&local_14->field_0x7b = *(undefined4 *)&this_00->field_0x278;
    local_14->field_007F = local_10;
    pbVar14 = local_20;
    pbVar17 = &local_14->field_0x83;
    memmove(pbVar17, pbVar14, local_10); /* compiler REP MOVS byte copy */
    uVar11 = 0;
    *(uint *)(&local_14->field_0x83 + local_10) = local_18;
    pbVar14 = local_1c;
    pbVar17 = &local_14[1].field_0x3 + local_10;
    memmove(pbVar17, pbVar14, local_18); /* compiler REP MOVS byte copy */
    st::fn_004025F9
              (g_playSystem_00802A38,(int *)this_00->field_0018,(byte *)local_14,
               (AnonShape_0060EA30_DCEB68AD *)(local_18 + 0x87 + local_10));
    st::fn_006AB060(&local_20);
    st::fn_006AB060(&local_1c);
    st::fn_006AB060(&local_14);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar2 == MESS_ID_NONE) {
    st::fn_00401A32((int *)this_00);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar2 == MESS_ID_CREATE) {
    DAT_0081170c = st::fn_006ACF0D(0,0,0,0x3ed,0x3ed,1000);
    dVar3 = (message->arg0).u32;
    this_00->field_0231 = CASE_3;
    uVar11 = *(uint *)(dVar3 + 0xc);
    if (uVar11 < 2) {
      *(undefined4 *)&this_00->field_0x257 = 0;
      *(uint *)&this_00->field_0x253 = g_playSystem_00802A38->field_00E4;
      *(undefined4 *)&this_00->field_0x26f = 0xff;
      puVar13 = (byte *)((message->arg0).ptr);
      puVar15 = (byte *)&this_00->field_0x27c;
      memmove(puVar15, puVar13, 0x2a); /* compiler REP MOVS byte copy */
      iVar10 = 0;
      uVar11 = *(int *)&this_00->field_0x1c * 0x41c64e6d + 0x3039;
      *(uint *)&this_00->field_0x1c = uVar11;
      *(uint *)((int)&this_00->field_0259 + 2) = (uVar11 >> 0x10) % 0x19 - 0xc;
      *(undefined4 *)&this_00->field_0x25f = 2;
      *(undefined4 *)&this_00->field_0x26b = 0;
      *(undefined4 *)&this_00->field_0x267 = 0;
      *(undefined4 *)&this_00->field_0x263 = 0;
      if ((*(int *)&this_00->field_0x290 < (int)(short)(g_worldGrid.sizeX * 0xc9 + 100)) &&
         (-1 < *(int *)&this_00->field_0x290)) {
        if ((*(int *)&this_00->field_0x294 < (int)(short)(g_worldGrid.sizeY * 0xc9 + 100)) &&
           (((-1 < *(int *)&this_00->field_0x294 &&
             (iVar10 = *(int *)&this_00->field_0x298,
             iVar10 < (short)(STPiece<4,4>(g_worldGrid) * 200 + 100))) && (-1 < iVar10)))) {
          st::fn_00403107(this_00,*(ushort *)&this_00->field_0x290,*(short *)&this_00->field_0x294,
                       (ushort)iVar10);
          iVar10 = *(int *)&this_00->field_0x290;
          sVar12 = (short)(iVar10 >> 0x1f);
          if (iVar10 < 0) {
            sVar12 = (((short)(iVar10 / 0xc9) + sVar12) -
                     (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            sVar12 = ((short)(iVar10 / 0xc9) + sVar12) -
                     (short)((longlong)iVar10 * 0x28c1979 >> 0x3f);
          }
          iVar10 = *(int *)&this_00->field_0x294;
          *(short *)&this_00->field_0x47 = sVar12;
          sVar12 = (short)(iVar10 >> 0x1f);
          if (iVar10 < 0) {
            sVar12 = (((short)(iVar10 / 0xc9) + sVar12) -
                     (short)((longlong)iVar10 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            sVar12 = ((short)(iVar10 / 0xc9) + sVar12) -
                     (short)((longlong)iVar10 * 0x28c1979 >> 0x3f);
          }
          iVar10 = *(int *)&this_00->field_0x298;
          *(short *)&this_00->field_0x49 = sVar12;
          sVar12 = (short)(iVar10 >> 0x1f);
          if (iVar10 < 0) {
            sVar12 = (((short)(iVar10 / 200) + sVar12) -
                     (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)) + -1;
          }
          else {
            sVar12 = ((short)(iVar10 / 200) + sVar12) -
                     (short)((longlong)iVar10 * 0x51eb851f >> 0x3f);
          }
          *(short *)&this_00->field_0x4b = sVar12;
          iVar10 = st::fn_00404183
                             ((STT3DSprC *)&this_00->field_01D5,0xe,PTR_00806774,"mmine",
                              CASE_1D);
          if (iVar10 != 0) {
            st::fn_006A5E40
                      (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_mbomb.cpp",0x2c3
                      );
          }
          st::fn_00405240
                    ((STT3DSprC *)&this_00->field_01D5,0xe,g_playSystem_00802A38->field_00E4);
          if ((*(AnonShape_005EFAE0_B406B78B **)&this_00->field_0x29c ==
               nullptr) ||
             (iVar10 = st::fn_006E62D0
                                 (g_playSystem_00802A38,
                                  *(AnonShape_005EFAE0_B406B78B **)&this_00->field_0x29c,
                                  (int *)&local_24), iVar10 != 0)) {
            this_00->field_0231 = CASE_1;
            *(undefined4 *)&this_00->field_0x235 = 0;
            *(undefined4 *)&this_00->field_0x239 = 0;
            *(undefined4 *)&this_00->field_0x23d = 0;
          }
          else {
            this_00->field_0231 = CASE_0;
            *(undefined2 *)&this_00->field_0x273 = STField<undefined2>(local_24,0x32);
            *(undefined4 *)&this_00->field_0x26f = STField<undefined4>(local_24,0x24);
            st::fn_004031E3(local_24,(uint *)&local_6,(int *)&local_8,&local_a);
            local_a = local_a - *(short *)&this_00->field_0x45;
            local_8 = local_8 - *(short *)&this_00->field_0x43;
            local_6 = local_6 - *(short *)&this_00->field_0x41;
            local_EAX_1342 = st::fn_006ACF0D(0,0,0,(int)local_6,(int)local_8,(int)local_a);
            *(undefined4 *)&this_00->field_0x235 = 0;
            *(undefined4 *)&this_00->field_0x239 = 0;
            *(undefined4 *)&this_00->field_0x23d = 0;
            if (0 < local_EAX_1342) {
              *(int *)&this_00->field_0x235 = (local_6 * 0xc0000) / local_EAX_1342;
              *(int *)&this_00->field_0x239 = (local_8 * 0xc0000) / local_EAX_1342;
              *(int *)&this_00->field_0x23d = (local_a * 0xc0000) / local_EAX_1342;
            }
          }
          st::fn_00403D19(this_00,*(int *)&this_00->field_0x290,*(int *)&this_00->field_0x294,
                             0x45b);
          uVar5 = this_00->field_0x44;
          uVar6 = this_00->field_0x41;
          uVar7 = this_00->field_0x42;
          uVar1 = *(undefined2 *)&this_00->field_0x45;
          this_00->field_024F = this_00->field_0x43;
          this_00->field_0x250 = uVar5;
          this_00->field_0x24d = uVar6;
          this_00->field_024E = uVar7;
          *(undefined2 *)&this_00->field_0x251 = uVar1;
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      iVar8 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_mbomb.cpp",0x2ae,0,0,"%s",
                                 "STMBombC:Bad init coordinates");
      if (iVar8 == 0) {
        st::fn_00405EF2(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (uVar11 != 2) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    local_48 = (undefined4 *)(message->arg0).u32;
    puVar13 = (byte *)(local_48);
    puVar15 = (byte *)&this_00->field_0x27c;
    memmove(puVar15, puVar13, 0x2a); /* compiler REP MOVS byte copy */
    local_10 = STField<uint>(local_48,0x7f);
    st::fn_0040551F
              ((STAllPlayersC *)this_00,(undefined4 *)(local_10 + 0x87 + (int)local_48));
    puVar13 = (byte *)(local_48);
    this_00->field_0231 = STField<STSprGameObjC_field_0231State>(local_48,0x2a);
    *(undefined4 *)&this_00->field_0x235 = STField<undefined4>(local_48,0x2e);
    *(undefined4 *)&this_00->field_0x239 = STField<undefined4>(local_48,0x32);
    *(undefined4 *)&this_00->field_0x23d = STField<undefined4>(local_48,0x36);
    *(undefined2 *)((int)&this_00->field_023E + 3) = STField<undefined2>(local_48,0x3a);
    *(undefined2 *)((int)&this_00->field_0242 + 1) = *(undefined2 *)(local_48 + 0xf);
    *(undefined2 *)((int)&this_00->field_0244 + 1) = STField<undefined2>(local_48,0x3e);
    *(undefined4 *)&this_00->field_0x263 = STField<undefined4>(local_48,0x62);
    *(undefined4 *)&this_00->field_0x267 = STField<undefined4>(local_48,0x66);
    *(undefined4 *)&this_00->field_0x26b = STField<undefined4>(local_48,0x6a);
    *(undefined2 *)((int)&this_00->field_0246 + 1) = *(undefined2 *)(local_48 + 0x10);
    *(undefined2 *)&this_00->field_0x249 = STField<undefined2>(local_48,0x42);
    *(undefined2 *)&this_00->field_0x24b = *(undefined2 *)(local_48 + 0x11);
    *(undefined2 *)&this_00->field_0x24d = STField<undefined2>(local_48,0x46);
    *(undefined2 *)&this_00->field_024F = *(undefined2 *)(local_48 + 0x12);
    *(undefined2 *)&this_00->field_0x251 = STField<undefined2>(local_48,0x4a);
    *(undefined4 *)&this_00->field_0x253 = local_48[0x13];
    *(undefined4 *)&this_00->field_0x257 = local_48[0x14];
    *(undefined4 *)((int)&this_00->field_0259 + 2) = local_48[0x15];
    *(undefined4 *)&this_00->field_0x25f = local_48[0x16];
    *(undefined4 *)&this_00->field_0x26f = local_48[0x17];
    *(undefined2 *)&this_00->field_0x273 = *(undefined2 *)(local_48 + 0x18);
    *(undefined2 *)&this_00->field_0x41 = STField<undefined2>(local_48,0x6e);
    *(undefined2 *)&this_00->field_0x43 = *(undefined2 *)(local_48 + 0x1c);
    *(undefined2 *)&this_00->field_0x45 = STField<undefined2>(local_48,0x72);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00->field_0x275 = *(undefined1 *)(local_48 + 0x1e);
    this_00->field_0x276 = STField<undefined1>(local_48,0x79);
    this_00->field_0x277 = STField<undefined1>(local_48,0x7a);
    *(undefined4 *)&this_00->field_0x278 = STField<undefined4>(local_48,0x7b);
    local_40 = st::fn_006AAC70(0x44);
    if (local_40 == nullptr) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    iVar10 = 0;
    do {
      *(int **)(iVar10 + (int)local_40) = PTR_00806774;
      iVar10 = iVar10 + 4;
    } while (iVar10 < 0x44);
    STField<int *>(local_40,0x24) = PTR_00806764;
    local_3c = 0;
    local_38 = 0;
    local_34 = PTR_008073cc;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    st::fn_00404CA5
              ((STT3DSprC *)&this_00->field_01D5,(int *)&local_40,
               (AnonShape_004AD790_77673787 *)((int)puVar13 + 0x83));
    st::fn_006AB060(&local_40);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  if (SVar2 != MESS_SHARED_0003) {
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  st::fn_004021D5((STT3DSprC *)&this_00->field_01D5);
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}

