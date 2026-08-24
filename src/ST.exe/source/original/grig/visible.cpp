#include "st/generated.hpp"
// Generated translation unit: source/original/grig/visible.cpp

// 005578D0 VisibleClassTy::InitData
#line 4 "decomp/ST.exe/functions/005578D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::InitData */

void __thiscall st::fn_005578D0(VisibleClassTy *this)

{
  byte bVar1;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar6;
  byte *pbVar7;
  ushort *puVar8;
  void *pvVar9;
  VisibleClassTy_field_00F4DArray *pVVar10;
  VisibleClassTy_field_0110DArray *pVVar11;
  uint uVar12;
  int iVar5;
  uint uVar13;
  int iVar14;
  uint uVar15;
  void **ppvVar16;
  bool bVar17;
  InternalExceptionFrame local_50;
  VisibleClassTy *local_c;
  byte *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pVVar3 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x77,0,iVar4,st::mutable_c_string("%s"),
                               "VisibleClassTy::InitData");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    /* ST_CALLSITE[00557BA7]: CALL 0x0040218f; direct=0040218F VisibleClassTy::sub_00558140 */
    st::fn_0040218F(local_c);
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x79);
    return;
  }
  local_c->field_0020 = (int)g_worldGrid.sizeX;
  iVar14 = local_c->field_0020;
  iVar6 = (int)g_worldGrid.sizeY;
  local_c->field_0024 = iVar6;
  local_c->field_0028 = (iVar14 + iVar6) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_002C = (local_c->field_0024 + iVar14) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_0030 = (local_c->field_0024 + iVar14) * 0xb505 + 0x117878 >> 0x10;
  local_c->field_0034 = (local_c->field_0024 + iVar14) * 0xb505 + 0x117878 >> 0x10;
  if (DAT_0080874d == 0xff) {
    local_c->field_0114 = 0;
    local_c->field_00F8 = 0;
  }
  else {
    local_c->field_0114 = 1;
    pbVar7 = st::pointer_boundary_cast<byte *>(st::fn_006AAC10(st::machine_word_boundary_cast<uint>(local_c->field_0024 * iVar14 * 2)));
    pVVar3->field_0038 = pbVar7;
    pbVar7 = st::pointer_boundary_cast<byte *>(st::fn_006AAC10(pVVar3->field_0030 * pVVar3->field_0034));
    pVVar3->field_004C = pbVar7;
    puVar8 = static_cast<ushort *>(st::fn_006AAC10(st::machine_word_boundary_cast<uint>(pVVar3->field_0030 * pVVar3->field_0034 * 2)));
    pVVar3->field_0050 = puVar8;
    ppvVar16 = pVVar3->field_003C;
    iVar14 = 4;
    do {
      pvVar9 = st::fn_006AAC10(pVVar3->field_0028 * pVVar3->field_002C);
      *ppvVar16 = pvVar9;
      ppvVar16 = ppvVar16 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    pVVar10 = (VisibleClassTy_field_00F4DArray *)
              st::fn_006AE290(nullptr,10,0x1c,10);
    pVVar3->field_00F4 = pVVar10;
    pVVar11 = (VisibleClassTy_field_0110DArray *)
              st::fn_006AE290(nullptr,10,0xc,10);
    pVVar3->field_0110 = pVVar11;
    pVVar3->field_00F8 = (uint)DAT_00808a95;
    pVVar3->field_00FC[DAT_0080874d] = 1;
    if (DAT_00808a94 != '\0') {
      uVar15 = 0;
      local_8 = &g_bulkInitializedRecords_008087C7[0].field_0022;
      do {
        if ((g_playSystem_00802A38 == nullptr) || (*local_8 < 8)) {
          uVar12 = (uint)DAT_0080874d;
          if (uVar15 != uVar12) {
            if (DAT_00808a8f == '\0') {
              if (DAT_0080874d == (byte)uVar15) {
LAB_00557b2d:
                iVar14 = 0;
              }
              else {
                uVar13 = uVar15 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar12][uVar13];
                if ((bVar1 == 0) && (g_playerRelationMatrix[uVar13][uVar12] == 0)) {
                  iVar14 = -2;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar13][uVar12] == 0)) {
                  iVar14 = -1;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar13][uVar12] == 1)) {
                  iVar14 = 1;
                }
                else {
                  if ((bVar1 != 1) || (g_playerRelationMatrix[uVar13][uVar12] != 1))
                  goto LAB_00557b2d;
                  iVar14 = 2;
                }
              }
              bVar17 = iVar14 < 0;
            }
            else {
              bVar17 = g_bulkInitializedRecords_008087C7[uVar15 & 0xff].field_0023 !=
                       g_bulkInitializedRecords_008087C7[uVar12].field_0023;
            }
            if (bVar17) goto LAB_00557b44;
          }
          pVVar3->field_00FC[uVar15] = 1;
        }
LAB_00557b44:
        local_8 = local_8 + 0x51;
        uVar15 = uVar15 + 1;
      } while ((int)local_8 < 0x808a71);
    }
  }
  pVVar3->field_001C = 0x5d4;
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 00557C90 VisibleClassTy::Init
#line 4 "decomp/ST.exe/functions/00557C90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::Init */

void __thiscall st::fn_00557C90(VisibleClassTy *this)

{
  uint uVar1;
  ST3DSMAPContext *pSVar3;
  VisibleClassTy *this_00;
  int iVar4;
  LPSTR pCVar4;
  uint *puVar5;
  uint *puVar6;
  VisibleClassTy_field_0110Element *element_0110;
  int iVar8;
  VisibleClassTy_field_0110DArray *pVVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  byte bVar14;
  byte bVar15;
  short *psVar16;
  InternalExceptionFrame local_54;
  VisibleClassTy *local_10;
  int local_c;
  short *local_8;

  iVar11 = 0;
  local_8 = nullptr;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar11 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0xaa,0,iVar4,st::mutable_c_string("%s"),
                                "VisibleClassTy::Init");
    if (iVar11 == 0) {
      st::fn_0070B600((int *)&local_8);
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0xac);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  DAT_00802a50 = -(uint)(local_10->field_0114 != 0) & 0x403765;
  if (local_10->field_0114 != 0) {
    puVar10 = &local_10->field_01D8;
    do {
      psVar16 = (short *)0x1;
      bVar15 = 0;
      bVar14 = 0x1c;
      pCVar4 = st::fn_006F2C00(st::pointer_boundary_cast<char *>(PTR_DAT_0079aec8),1,iVar11);
      local_8 = st::fn_0070B430(PTR_00806770,pCVar4,bVar14,bVar15,psVar16);
      (&DAT_007c9290)[iVar11] = (int)STField<short>(local_8,9);
      puVar6 = puVar10 + -0x30;
      (&DAT_007c929c)[iVar11] = (int)STField<short>(local_8,0xb);
      puVar5 = (undefined4 *)((int)local_8 + 0x11);
      local_c = 0x10;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
        local_c = local_c + -1;
      } while (local_c != 0);
      st::fn_0070B600((int *)&local_8);
      psVar16 = (short *)0x1;
      bVar15 = 0;
      bVar14 = 0x1c;
      pCVar4 = st::fn_006F2C00(st::pointer_boundary_cast<char *>(PTR_DAT_0079aecc),1,iVar11);
      local_8 = st::fn_0070B430(PTR_00806770,pCVar4,bVar14,bVar15,psVar16);
      puVar6 = (undefined4 *)((int)local_8 + 0x11);
      iVar8 = 0x10;
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar10 = uVar1;
        puVar10 = puVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      st::fn_0070B600((int *)&local_8);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    st::fn_007176F0
              (g_sT3DSMAPContext_00807598,st::pointer_boundary_cast<undefined4 *>(this_00->field_003C),this_00->field_0028,
               this_00->field_002C,(int)this_00->field_0118,(int)this_00->field_004C,
               this_00->field_0030,this_00->field_0034,(int)&this_00->field_01D8,3,0x10,
               st::machine_word_boundary_cast<undefined4>(&DAT_007c9290),st::machine_word_boundary_cast<undefined4>(&DAT_007c929c));
    pVVar9 = this_00->field_0110;
    uVar12 = 0;
    if (0 < (int)pVVar9->count) {
      bVar13 = pVVar9->count != 0;
      do {
        if (bVar13) {
          element_0110 = DArrayAt<VisibleClassTy_field_0110Element>(pVVar9, uVar12);
        }
        else {
          element_0110 = nullptr;
        }
        switch(element_0110->field_0000) {
        case '\0':
          /* ST_CALLSITE[00557E59]: CALL 0x0040388c; direct=0040388C VisibleClassTy::sub_00558DC0 */
          st::fn_0040388C(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,
                       (undefined *)(int)element_0110->field_0006,(int *)(uint)(byte)element_0110->field_0001,
                       (uint)(byte)element_0110->field_0007,st::pointer_boundary_cast<int *>(element_0110->field_0008),0x4001);
          break;
        case '\x01':
          /* ST_CALLSITE[00557E86]: CALL 0x00402c2a; direct=00402C2A VisibleClassTy::sub_005594A0 */
          st::fn_00402C2A(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                       (undefined *)(uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,
                       element_0110->field_0008,2);
          break;
        case '\x02':
          /* ST_CALLSITE[00557EB3]: CALL 0x004020e0; direct=004020E0 VisibleClassTy::SetZoneDes */
          st::fn_004020E0(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                     (uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,element_0110->field_0008,4);
          break;
        case '\x03':
          /* ST_CALLSITE[00557EE0]: CALL 0x0040141f; direct=0040141F VisibleClassTy::SetZoneAst */
          st::fn_0040141F(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                     (uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,element_0110->field_0008,8);
          break;
        case '\x04':
          /* ST_CALLSITE[00557F0A]: CALL 0x00401cb7; direct=00401CB7 VisibleClassTy::SetZoneTsh */
          st::fn_00401CB7(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                     (uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,element_0110->field_0008,0x10);
          break;
        case '\x05':
          /* ST_CALLSITE[00557F34]: CALL 0x0040205e; direct=0040205E VisibleClassTy::SetZoneMin1 */
          st::fn_0040205E(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                      (uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,element_0110->field_0008,0x20);
          break;
        case '\x06':
          /* ST_CALLSITE[00557F5E]: CALL 0x00401848; direct=00401848 VisibleClassTy::SetZoneMin2 */
          st::fn_00401848(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,element_0110->field_0006,
                      (uint)(byte)element_0110->field_0001,(uint)(byte)element_0110->field_0007,element_0110->field_0008,0x40);
        }
        pVVar9 = this_00->field_0110;
        uVar12 = uVar12 + 1;
        bVar13 = uVar12 < pVVar9->count;
      } while ((int)uVar12 < (int)pVVar9->count);
    }
    pSVar3 = g_sT3DSMAPContext_00807598;
    if (this_00->field_0114 != 0) {
      if (this_00->field_00F8 != 0) {
        g_sT3DSMAPContext_00807598->field_0466 = 1;
        pSVar3->field_02D8 = 1;
        g_currentExceptionFrame = local_54.previous;
        return;
      }
      goto LAB_00557fbb;
    }
  }
  this_00->field_00F8 = 0;
LAB_00557fbb:
  pSVar3 = g_sT3DSMAPContext_00807598;
  g_sT3DSMAPContext_00807598->field_0466 = 0;
  pSVar3->field_02D8 = 1;
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 005582A0 VisibleClassTy::PrepareToSave
#line 4 "decomp/ST.exe/functions/005582A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 005582A0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00558A67 */

byte * __thiscall st::fn_005582A0(VisibleClassTy *this,uint *param_1)

{
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar5;
  byte *puVar6;
  int iVar4;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *puVar10;
  byte *puVar11;
  InternalExceptionFrame local_68;
  VisibleClassTy *local_24;
  undefined4 *local_20;
  void **local_1c;
  uint local_18;
  undefined4 *local_14;
  uint local_10;
  undefined4 *local_c;
  AnonShape_005582A0_F54946B9 *local_8;

  local_8 = nullptr;
  local_c = nullptr;
  local_10 = 0;
  local_14 = nullptr;
  local_18 = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_24 = this;
  iVar3 = st::fn_0072D7F0(local_68.jumpBuffer,0);
  pVVar2 = local_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (local_c != nullptr) {
      st::fn_006AB060(&local_c);
    }
    if (local_14 != nullptr) {
      st::fn_006AB060(&local_14);
    }
    if (local_8 != nullptr) {
      st::fn_006AB060(&local_8);
    }
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x105,0,iVar3,st::mutable_c_string("%s"),
                               "VisibleClassTy::PrepareToSave error");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x106);
    return nullptr;
  }
  if (local_24->field_0114 != 0) {
    local_c = st::pointer_boundary_cast<undefined4 *>(st::fn_006B0020(&local_24->field_00F4->flags,(int *)&local_10));
    local_14 = st::pointer_boundary_cast<undefined4 *>(st::fn_006B0020(&pVVar2->field_0110->flags,(int *)&local_18));
    if (pVVar2->field_0114 != 0) {
      iVar5 = st::machine_word_boundary_cast<int>(pVVar2->field_002C * pVVar2->field_0028 * 4);
      goto LAB_0055832e;
    }
  }
  iVar5 = 0;
LAB_0055832e:
  uVar9 = iVar5 + local_18 + 0x81 + local_10;
  *param_1 = uVar9;
  local_8 = static_cast<AnonShape_005582A0_F54946B9 *>(st::fn_006AAC10(uVar9));
  *(undefined4 *)local_8 = 0x50;
  *(undefined4 *)&local_8->field_0x4 = 0xff;
  *(undefined4 *)&local_8->field_0x8 = 2;
  *(undefined4 *)&local_8->field_0x14 = 1;
  local_8->field_0018 = pVVar2->field_0020;
  local_8->field_001C = pVVar2->field_0024;
  local_8->field_0020 = pVVar2->field_0028;
  local_8->field_0024 = pVVar2->field_002C;
  local_8->field_0028 = pVVar2->field_0030;
  local_8->field_002C = pVVar2->field_0034;
  local_8->field_0030 = pVVar2->field_001C;
  local_8->field_0040 = pVVar2->field_0114;
  local_8->field_0044 = pVVar2->field_00F8;
  local_8->field_0034 = (uint)DAT_0080874d;
  local_8->field_0038 = local_10;
  local_8->field_003C = local_18;
  local_8->field_0048 = *STField<undefined4 *>(pVVar2,0xFC);
  local_8->field_004C = *(undefined4 *)(pVVar2->field_00FC + 4);
  if (pVVar2->field_0114 != 0) {
    local_1c = pVVar2->field_003C;
    puVar6 = (byte *)(&local_8[1].field_0030);
    local_20 = (undefined4 *)0x4;
    do {
      if (*local_1c != nullptr) {
        uVar8 = pVVar2->field_0028 * pVVar2->field_002C;
        puVar10 = (byte *)(*local_1c);
        puVar11 = (byte *)(puVar6);
        memmove(puVar11, puVar10, uVar8); /* compiler REP MOVS byte copy */
        uVar9 = 0;
        puVar6 = (byte *)((int)puVar6 + pVVar2->field_0028 * pVVar2->field_002C);
      }
      local_1c = local_1c + 1;
      local_20 = (undefined4 *)((int)local_20 + -1);
    } while (local_20 != nullptr);
    local_20 = nullptr;
    if (local_c != nullptr) {
      puVar10 = (byte *)(local_c);
      puVar11 = (byte *)(puVar6);
      memmove(puVar11, puVar10, local_10); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      local_20 = (undefined4 *)((int)puVar6 + local_10);
      st::fn_006AB060(&local_c);
      puVar6 = (byte *)(local_20);
    }
    if (local_14 != nullptr) {
      puVar10 = (byte *)(local_14);
      memmove(puVar6, puVar10, local_18); /* compiler REP MOVS byte copy */
      st::fn_006AB060(&local_14);
    }
  }
  g_currentExceptionFrame = local_68.previous;
  return (byte *)local_8;
}

// 005585F0 Visible::PrepareAfterSave
#line 4 "decomp/ST.exe/functions/005585F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   Visible::PrepareAfterSave

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00558840 -> 005585F0 @ 00558915 */

void __thiscall st::fn_005585F0(Visible *this,ushort *param_1)

{
  Visible *pVVar2;
  int errorCode;
  uint uVar3;
  uint *puVar4;
  void *pvVar5;
  DArrayTy *pDVar6;
  int iVar9;
  uint uVar7;
  uint *puVar8;
  void **slotStorage;
  int iVar10;
  InternalExceptionFrame local_58;
  Visible *local_14;
  int local_10;
  void **local_c;
  uint *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pVVar2 = local_14;
  if (errorCode == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0020 = *(undefined4 *)(param_1 + 0xc);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0024 = *(undefined4 *)(param_1 + 0xe);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0028 = *(undefined4 *)(param_1 + 0x10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_002C = *(undefined4 *)(param_1 + 0x12);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0030 = *(undefined4 *)(param_1 + 0x14);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0034 = *(undefined4 *)(param_1 + 0x16);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_001C = *(undefined4 *)(param_1 + 0x18);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0114 = *(undefined4 *)(param_1 + 0x20);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_00F8 = *(undefined4 *)(param_1 + 0x22);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_00FC = *(undefined4 *)(param_1 + 0x24);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_14->field_0100 = *(undefined4 *)(param_1 + 0x26);
    if (local_14->field_0114 != 0) {
      local_c = local_14->field_003C;
      uVar3 = local_14->field_002C * local_14->field_0028;
      local_10 = 4;
      local_8 = (uint *)(param_1 + 0x40);
      do {
        puVar4 = static_cast<uint *>(st::fn_006AAC10(uVar3));
        *local_c = puVar4;
        uVar7 = pVVar2->field_002C * pVVar2->field_0028;
        local_c = local_c + 1;
        puVar8 = local_8;
        memmove(puVar4, puVar8, uVar7); /* compiler REP MOVS byte copy */
        uVar3 = pVVar2->field_002C * pVVar2->field_0028;
        puVar8 = (uint *)((int)local_8 + uVar3);
        local_10 = local_10 + -1;
        local_8 = puVar8;
      } while (local_10 != 0);
      pvVar5 = st::fn_006AAC10(st::machine_word_boundary_cast<uint>(pVVar2->field_0020 * pVVar2->field_0024 * 2));
      pVVar2->field_0038 = pvVar5;
      pvVar5 = st::fn_006AAC10(pVVar2->field_0030 * pVVar2->field_0034);
      pVVar2->field_004C = pvVar5;
      pvVar5 = st::fn_006AAC10(st::machine_word_boundary_cast<uint>(pVVar2->field_0030 * pVVar2->field_0034 * 2));
      pVVar2->field_0050 = pvVar5;
      pDVar6 = st::fn_006B0060(nullptr,puVar8);
      pVVar2->field_00F4 = pDVar6;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pDVar6 = st::fn_006B0060(nullptr,(uint *)((int)puVar8 + *(int *)(param_1 + 0x1c)));
      pVVar2->field_0110 = pDVar6;
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar10 = 4;
  slotStorage = local_14->field_003C;
  do {
    if (*slotStorage != nullptr) {
      st::fn_006AB060(slotStorage);
    }
    slotStorage = slotStorage + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x132,0,errorCode,st::mutable_c_string("%s")
                             ,"Visible::PrepareAfterSave error");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x133);
  return;
}

// 00558840 VisibleClassTy::GetMessage
#line 4 "decomp/ST.exe/functions/00558840/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401D48|00558840; family_names=VisibleClassTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:0,1c:1} */

int __thiscall st::fn_00558840(VisibleClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  VisibleClassTy *this_00;
  int local_EAX_34;
  int iVar3;
  VisibleClassTy_field_0110Element *element_0110;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  VisibleClassTy_field_0110DArray *pVVar8;
  ushort *puVar9;
  byte *pbVar10;
  bool bVar11;
  InternalExceptionFrame local_58;
  VisibleClassTy *local_14;
  byte *local_10;
  uint local_c;
  ushort *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  local_EAX_34 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (local_EAX_34 == 0) {
    local_14->field_0108 = g_playSystem_00802A38->field_00E4;
    SVar1 = message->id;
    if (SVar1 < MESS_STSPRGAMEOBJC_0109) {
      if (SVar1 == MESS_SHARED_0108) {
        if (local_14->field_0114 != 0) {
          iVar3 = st::fn_0040581C();
          uVar6 = this_00->field_0030 * this_00->field_0034;
          this_00->field_010C = iVar3;
          puVar9 = this_00->field_0050;
          for (uVar7 = (uVar6 & 0x7fffffff) >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
            puVar9[0] = 0;
            puVar9[1] = 0;
            puVar9 = puVar9 + 2;
          }
          for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar9 = 0;
            puVar9 = (ushort *)((int)puVar9 + 1);
          }
          uVar7 = this_00->field_0030 * this_00->field_0034;
          pbVar10 = this_00->field_004C;
          memset(pbVar10, 0, uVar7); /* compiler bulk-zero initialization */
          pVVar8 = this_00->field_0110;
          uVar6 = 0;
          if (0 < (int)pVVar8->count) {
            bVar11 = pVVar8->count != 0;
            do {
              if (bVar11) {
                element_0110 = DArrayAt<VisibleClassTy_field_0110Element>(pVVar8, uVar6);
              }
              else {
                element_0110 = nullptr;
              }
              if (element_0110->field_0000 == '\0') {
                /* ST_CALLSITE[00558A11]: CALL 0x0040388c; direct=0040388C VisibleClassTy::sub_00558DC0 */
                st::fn_0040388C(this_00,(int)element_0110->field_0002,(int)element_0110->field_0004,
                             (undefined *)(int)element_0110->field_0006,(int *)(uint)(byte)element_0110->field_0001,
                             (uint)(byte)element_0110->field_0007,st::pointer_boundary_cast<int *>(element_0110->field_0008),0x4000);
              }
              pVVar8 = this_00->field_0110;
              uVar6 = uVar6 + 1;
              bVar11 = uVar6 < pVVar8->count;
            } while ((int)uVar6 < (int)pVVar8->count);
          }
        }
      }
      else if (SVar1 == MESS_ID_NONE) {
        if (local_14->field_0114 != 0) {
          /* ST_CALLSITE[00558961]: CALL 0x00404034; direct=00404034 VisibleClassTy::VisHoleExec */
          st::fn_00404034(local_14);
        }
      }
      else if (SVar1 == MESS_ID_CREATE) {
        local_8 = nullptr;
        if (g_cMf32_00806754 != nullptr) {
          local_8 = st::fn_006F2D90
                              (g_cMf32_00806754,PTR_s_VISIBILITY_0079aec4,0,0);
        }
        if ((local_8 == nullptr) || (*(int *)(local_8 + 10) == 0)) {
          /* ST_CALLSITE[0055891E]: CALL 0x00404a5c; direct=00404A5C VisibleClassTy::InitData */
          st::fn_00404A5C(this_00);
        }
        else {
          /* ST_CALLSITE[00558915]: CALL 0x004051f0; direct=004051F0 Visible::PrepareAfterSave */
          st::fn_004051F0((Visible *)this_00,local_8);
        }
        /* ST_CALLSITE[00558925]: CALL 0x00405bff; direct=00405BFF VisibleClassTy::Init */
        st::fn_00405BFF(this_00);
        if ((g_cMf32_00806754 != nullptr) && (local_8 != nullptr)) {
          st::fn_006F20E0(g_cMf32_00806754,(uint *)&local_8);
        }
      }
      else if (SVar1 == MESS_SHARED_0003) {
        /* ST_CALLSITE[005588B6]: CALL 0x0040218f; direct=0040218F VisibleClassTy::sub_00558140 */
        st::fn_0040218F(local_14);
        if (this_00->field_0114 != 0) {
          st::fn_00717870(g_sT3DSMAPContext_00807598);
        }
        st::fn_00402A5E();
        g_visibleClass_00802A88 = nullptr;
      }
    }
    else if (SVar1 == MESS_SHARED_010F) {
      local_c = 0;
      /* ST_CALLSITE[00558A4B]: CALL 0x00403224; direct=00403224 VisibleClassTy::PrepareToSave */
      local_10 = st::fn_00403224(local_14,&local_c);
      /* ST_CALLSITE[00558A67]: CALL 0x00401078; direct=00401078 STPlaySystemC::SaveObjData */
      st::fn_00401078
                (g_playSystem_00802A38,PTR_s_VISIBILITY_0079aec4,local_10,local_c,0xc);
      if (local_10 != nullptr) {
        st::fn_006AB060(&local_10);
      }
    }
    else if (SVar1 == MESS_ID_ALLCREATE) {
      local_14->field_0104 = 0;
    }
    st::fn_006E5FD0(this_00,message);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x186,0,local_EAX_34,
                             st::mutable_c_string("VisibleClassTy::GetMessage error mess->id == %lX"),message->id);
  if (iVar4 == 0) {
    st::fn_006A5E40(local_EAX_34,0,st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x187);
    return 0xffff;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005597A0 VisibleClassTy::SetZoneDes
#line 4 "decomp/ST.exe/functions/005597A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::SetZoneDes

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041CFF0 -> 005597A0 @ 0041D023; MOVSX at 0041D010 establishes signed source width 2 |
   00557C90 -> 005597A0 @ 00557EB3; MOVSX at 00557E9C establishes signed source width 1

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 005597A0 -> 0055BB00 @ 00559860 */

void __thiscall
st::fn_005597A0
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          uint param_6,uint param_7)

{
  char cVar1;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_60;
  int local_18;
  VisibleClassTy *local_14;
  int local_10;
  int local_c;
  byte *local_8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    local_14 = this;
    if (this->field_003C[param_4 + 6] == nullptr) {
      local_60.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_60;
      iVar4 = st::fn_0072D7F0(local_60.jumpBuffer,0);
      this = local_14;
      if (iVar4 != 0) {
        g_currentExceptionFrame = local_60.previous;
        iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x293,0,iVar4,
                                   st::mutable_c_string("%s"),"VisibleClassTy::SetZoneDes");
        if (iVar4 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      pvVar5 = st::fn_006AAC10(local_14->field_0024 * local_14->field_0020);
      this->field_003C[param_4 + 6] = pvVar5;
      g_currentExceptionFrame = local_60.previous;
    }
    if ((param_7 & 0x1000) != 0) {
      /* ST_CALLSITE[00559860]: CALL 0x00403b02; direct=00403B02 VisibleClassTy::sub_0055BB00 */
      st::fn_00403B02(this,2,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    }
    if ((param_7 & 4) != 0) {
      if (param_5 < 0) {
        param_5 = CASE_0;
      }
      local_c = param_5 * 2 + 1;
      local_18 = param_1 - param_5;
      iVar4 = param_2 - param_5;
      pbVar6 = st::fn_004028BF(param_5);
      if (0 < local_c) {
        local_10 = local_c;
        local_8 = pbVar6;
        do {
          iVar7 = 0;
          iVar9 = local_18;
          do {
            if ((pbVar6 == nullptr) || (local_8[iVar7] != 0)) {
              if ((iVar9 < 0) ||
                 (((this->field_0020 <= iVar9 || (iVar4 < 0)) || (this->field_0024 <= iVar4)))) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                iVar8 = st::machine_word_boundary_cast<int>(this->field_0020 * iVar4);
                cVar1 = *(char *)((int)this->field_003C[param_4 + 6] + iVar9 + iVar8);
                if (cVar1 != -1) {
                  *(char *)((int)this->field_003C[param_4 + 6] + iVar9 + iVar8) = cVar1 + '\x01';
                }
              }
            }
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar7 < local_c);
          local_8 = local_8 + local_c;
          iVar4 = iVar4 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
  }
  return;
}

// 00559B30 VisibleClassTy::SetZoneAst
#line 4 "decomp/ST.exe/functions/00559B30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::SetZoneAst

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041C3F0 -> 00559B30 @ 0041C4ED; /TLOEmbryoTy+0x5f; MOVSX at 0041C4CA establishes
   signed source width 2 | 0041D1A0 -> 00559B30 @ 0041D1D3; /STMineSetC+0x5f; MOVSX at 0041D1C0
   establishes signed source width 2 | 00557C90 -> 00559B30 @ 00557EE0; MOVSX at 00557EC9
   establishes signed source width 1

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0041D1A0 -> 00559B30 @ 0041D1D3; /STMineSetC+0x18 | 00624920 -> 00559B30 @ 00624FF4;
   /STMineSetC+0x18 */

void __thiscall
st::fn_00559B30
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          uint param_6,uint param_7)

{
  byte bVar1;
  bool bVar3;
  int iVar4;
  byte *pbVar6;
  byte *pbVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_60;
  int local_18;
  VisibleClassTy *local_14;
  int local_10;
  int local_c;
  byte *local_8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    local_14 = this;
    if (this->field_0074[param_4] == nullptr) {
      local_60.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_60;
      iVar4 = st::fn_0072D7F0(local_60.jumpBuffer,0);
      this = local_14;
      if (iVar4 != 0) {
        g_currentExceptionFrame = local_60.previous;
        iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x2d7,0,iVar4,
                                   st::mutable_c_string("%s"),"VisibleClassTy::SetZoneAst");
        if (iVar4 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      pbVar6 = st::pointer_boundary_cast<byte *>(st::fn_006AAC10(local_14->field_0024 * local_14->field_0020));
      this->field_0074[param_4] = pbVar6;
      g_currentExceptionFrame = local_60.previous;
    }
    if ((param_7 & 0x1000) != 0) {
      /* ST_CALLSITE[00559BF0]: CALL 0x00403b02; direct=00403B02 VisibleClassTy::sub_0055BB00 */
      st::fn_00403B02(this,3,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    }
    if ((param_7 & 8) != 0) {
      if (param_5 < 0) {
        param_5 = CASE_0;
      }
      local_c = param_5 * 2 + 1;
      local_18 = param_1 - param_5;
      iVar4 = param_2 - param_5;
      pbVar5 = st::fn_004028BF(param_5);
      if (0 < local_c) {
        local_10 = local_c;
        local_8 = pbVar5;
        do {
          iVar7 = 0;
          iVar9 = local_18;
          do {
            if ((pbVar5 == nullptr) || (local_8[iVar7] != 0)) {
              if ((iVar9 < 0) ||
                 (((this->field_0020 <= iVar9 || (iVar4 < 0)) || (this->field_0024 <= iVar4)))) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                iVar8 = st::machine_word_boundary_cast<int>(this->field_0020 * iVar4);
                bVar1 = this->field_0074[param_4][iVar9 + iVar8];
                if (bVar1 != 0xff) {
                  this->field_0074[param_4][iVar9 + iVar8] = bVar1 + 1;
                }
              }
            }
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar7 < local_c);
          local_8 = local_8 + local_c;
          iVar4 = iVar4 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
  }
  return;
}

// 00559EC0 VisibleClassTy::SetZoneTsh
#line 4 "decomp/ST.exe/functions/00559EC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::SetZoneTsh

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0041D3E0 -> 00559EC0 @ 0041D413; MOVSX at 0041D400 establishes signed source width 2 |
   00557C90 -> 00559EC0 @ 00557F0A; MOVSX at 00557EF3 establishes signed source width 1

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 00559EC0 -> 0055BB00 @ 00559F86 */

void __thiscall
st::fn_00559EC0
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          uint param_6,uint param_7)

{
  byte bVar1;
  bool bVar3;
  int iVar4;
  byte *pbVar6;
  byte *pbVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_60;
  int local_18;
  VisibleClassTy *local_14;
  int local_10;
  int local_c;
  byte *local_8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    local_14 = this;
    if (this->field_0094[param_4] == nullptr) {
      local_60.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_60;
      iVar4 = st::fn_0072D7F0(local_60.jumpBuffer,0);
      this = local_14;
      if (iVar4 != 0) {
        g_currentExceptionFrame = local_60.previous;
        iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x31b,0,iVar4,
                                   st::mutable_c_string("%s"),"VisibleClassTy::SetZoneTsh");
        if (iVar4 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      pbVar6 = st::pointer_boundary_cast<byte *>(st::fn_006AAC10(local_14->field_0024 * local_14->field_0020));
      this->field_0094[param_4] = pbVar6;
      g_currentExceptionFrame = local_60.previous;
    }
    if ((param_7 & 0x1000) != 0) {
      /* ST_CALLSITE[00559F86]: CALL 0x00403b02; direct=00403B02 VisibleClassTy::sub_0055BB00 */
      st::fn_00403B02(this,4,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    }
    if ((param_7 & 0x10) != 0) {
      if (param_5 < 0) {
        param_5 = CASE_0;
      }
      local_c = param_5 * 2 + 1;
      local_18 = param_1 - param_5;
      iVar4 = param_2 - param_5;
      pbVar5 = st::fn_004028BF(param_5);
      if (0 < local_c) {
        local_10 = local_c;
        local_8 = pbVar5;
        do {
          iVar7 = 0;
          iVar9 = local_18;
          do {
            if ((pbVar5 == nullptr) || (local_8[iVar7] != 0)) {
              if ((iVar9 < 0) ||
                 (((this->field_0020 <= iVar9 || (iVar4 < 0)) || (this->field_0024 <= iVar4)))) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                iVar8 = st::machine_word_boundary_cast<int>(this->field_0020 * iVar4);
                bVar1 = this->field_0094[param_4][iVar9 + iVar8];
                if (bVar1 != 0xff) {
                  this->field_0094[param_4][iVar9 + iVar8] = bVar1 + 1;
                }
              }
            }
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar7 < local_c);
          local_8 = local_8 + local_c;
          iVar4 = iVar4 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
  }
  return;
}

// 0055A270 VisibleClassTy::SetZoneMin1
#line 4 "decomp/ST.exe/functions/0055A270/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::SetZoneMin1

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00494AE0 -> 0055A270 @ 00494C1D; MOVSX at 00494C0D establishes signed source width 2 |
   00494DF0 -> 0055A270 @ 00494E5E; MOVSX at 00494E4E establishes signed source width 2 | 00557C90
   -> 0055A270 @ 00557F34; MOVSX at 00557F1D establishes signed source width 1

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0055A270 -> 0055BB00 @ 0055A336 */

void __thiscall
st::fn_0055A270
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          uint param_6,uint param_7)

{
  byte bVar1;
  bool bVar3;
  int iVar4;
  byte *pbVar6;
  byte *pbVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_60;
  int local_18;
  VisibleClassTy *local_14;
  int local_10;
  int local_c;
  byte *local_8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    local_14 = this;
    if (this->field_00B4[param_4] == nullptr) {
      local_60.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_60;
      iVar4 = st::fn_0072D7F0(local_60.jumpBuffer,0);
      this = local_14;
      if (iVar4 != 0) {
        g_currentExceptionFrame = local_60.previous;
        iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x35f,0,iVar4,
                                   st::mutable_c_string("%s"),"VisibleClassTy::SetZoneMin1");
        if (iVar4 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      pbVar6 = st::pointer_boundary_cast<byte *>(st::fn_006AAC10(local_14->field_0024 * local_14->field_0020));
      this->field_00B4[param_4] = pbVar6;
      g_currentExceptionFrame = local_60.previous;
    }
    if ((param_7 & 0x1000) != 0) {
      /* ST_CALLSITE[0055A336]: CALL 0x00403b02; direct=00403B02 VisibleClassTy::sub_0055BB00 */
      st::fn_00403B02(this,5,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    }
    if ((param_7 & 0x20) != 0) {
      if (param_5 < 0) {
        param_5 = CASE_0;
      }
      local_c = param_5 * 2 + 1;
      local_18 = param_1 - param_5;
      iVar4 = param_2 - param_5;
      pbVar5 = st::fn_004028BF(param_5);
      if (0 < local_c) {
        local_10 = local_c;
        local_8 = pbVar5;
        do {
          iVar7 = 0;
          iVar9 = local_18;
          do {
            if ((pbVar5 == nullptr) || (local_8[iVar7] != 0)) {
              if ((iVar9 < 0) ||
                 (((this->field_0020 <= iVar9 || (iVar4 < 0)) || (this->field_0024 <= iVar4)))) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                iVar8 = st::machine_word_boundary_cast<int>(this->field_0020 * iVar4);
                bVar1 = this->field_00B4[param_4][iVar9 + iVar8];
                if (bVar1 != 0xff) {
                  this->field_00B4[param_4][iVar9 + iVar8] = bVar1 + 1;
                }
              }
            }
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar7 < local_c);
          local_8 = local_8 + local_c;
          iVar4 = iVar4 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
  }
  return;
}

// 0055A620 VisibleClassTy::SetZoneMin2
#line 4 "decomp/ST.exe/functions/0055A620/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::SetZoneMin2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00494AE0 -> 0055A620 @ 00494D39; MOVSX at 00494D29 establishes signed source width 2 |
   00494DF0 -> 0055A620 @ 00494EAD; MOVSX at 00494E9D establishes signed source width 2 | 00557C90
   -> 0055A620 @ 00557F5E; MOVSX at 00557F47 establishes signed source width 1

   [STPrototypeApplier] Propagated parameter 6.
   Evidence: 0055A620 -> 0055BB00 @ 0055A6E6 */

void __thiscall
st::fn_0055A620
          (VisibleClassTy *this,int param_1,int param_2,char param_3,uint param_4,int param_5,
          uint param_6,uint param_7)

{
  byte bVar1;
  bool bVar3;
  int iVar4;
  byte *pbVar6;
  byte *pbVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_60;
  int local_18;
  VisibleClassTy *local_14;
  int local_10;
  int local_c;
  byte *local_8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((g_playSystem_00802A38 == nullptr ||
      (g_bulkInitializedRecords_008087C7[param_4].field_0022 < 8)))) {
    local_14 = this;
    if (this->field_00D4[param_4] == nullptr) {
      local_60.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_60;
      iVar4 = st::fn_0072D7F0(local_60.jumpBuffer,0);
      this = local_14;
      if (iVar4 != 0) {
        g_currentExceptionFrame = local_60.previous;
        iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x3a3,0,iVar4,
                                   st::mutable_c_string("%s"),"VisibleClassTy::SetZoneMin2");
        if (iVar4 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      pbVar6 = st::pointer_boundary_cast<byte *>(st::fn_006AAC10(local_14->field_0024 * local_14->field_0020));
      this->field_00D4[param_4] = pbVar6;
      g_currentExceptionFrame = local_60.previous;
    }
    if ((param_7 & 0x1000) != 0) {
      /* ST_CALLSITE[0055A6E6]: CALL 0x00403b02; direct=00403B02 VisibleClassTy::sub_0055BB00 */
      st::fn_00403B02(this,6,(short)param_1,(short)param_2,param_3,param_4,(byte)param_5,param_6);
    }
    if ((param_7 & 0x40) != 0) {
      if (param_5 < 0) {
        param_5 = CASE_0;
      }
      local_c = param_5 * 2 + 1;
      local_18 = param_1 - param_5;
      iVar4 = param_2 - param_5;
      pbVar5 = st::fn_004028BF(param_5);
      if (0 < local_c) {
        local_10 = local_c;
        local_8 = pbVar5;
        do {
          iVar7 = 0;
          iVar9 = local_18;
          do {
            if ((pbVar5 == nullptr) || (local_8[iVar7] != 0)) {
              if ((iVar9 < 0) ||
                 (((this->field_0020 <= iVar9 || (iVar4 < 0)) || (this->field_0024 <= iVar4)))) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                iVar8 = st::machine_word_boundary_cast<int>(this->field_0020 * iVar4);
                bVar1 = this->field_00D4[param_4][iVar9 + iVar8];
                if (bVar1 != 0xff) {
                  this->field_00D4[param_4][iVar9 + iVar8] = bVar1 + 1;
                }
              }
            }
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar7 < local_c);
          local_8 = local_8 + local_c;
          iVar4 = iVar4 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
  }
  return;
}

// 0055A9D0 VisibleClassTy::VisHoleCreate
#line 4 "decomp/ST.exe/functions/0055A9D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::VisHoleCreate */

uint __thiscall
st::fn_0055A9D0
          (VisibleClassTy *this,int param_1,int param_2,undefined *param_3,uint param_4,
          undefined *param_5,undefined4 param_6)

{
  VisibleClassTy_field_00F4DArray *array;
  VisibleClassTy *this_00;
  int iVar2;
  int iVar3;
  uint uVar2;
  InternalExceptionFrame local_6c;
  int local_28 [2];
  undefined *local_20;
  undefined *local_1c;
  int *local_18;
  uint local_14;
  undefined4 local_10;
  VisibleClassTy *local_c;
  uint local_8;

  local_8 = 0xffffffff;
  if ((this->field_0114 != 0) && (-1 < (int)param_5)) {
    local_6c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_6c;
    local_c = this;
    iVar2 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
    this_00 = local_c;
    if (iVar2 == 0) {
      array = local_c->field_00F4;
      if (array != nullptr) {
        memset(local_28, 0, 0x1c); /* compiler bulk-zero initialization */
        local_28[1] = param_2;
        local_28[0] = param_1;
        local_18 = (int *)param_4;
        local_20 = param_3;
        local_10 = param_6;
        local_1c = param_5;
        local_14 = this_00->field_0108;
        local_8 = st::fn_006AE1C0((DArrayTy *)array,local_28);
        /* ST_CALLSITE[0055AA8F]: CALL 0x0040388c; direct=0040388C VisibleClassTy::sub_00558DC0 */
        st::fn_0040388C(this_00,local_28[0],local_28[1],local_20,local_18,(uint)local_1c,
                     (int *)0xfffffffa,0xffffffff);
      }
      g_currentExceptionFrame = local_6c.previous;
      return local_8;
    }
    g_currentExceptionFrame = local_6c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x3f0,0,iVar2,st::mutable_c_string("%s"),
                               "VisibleClassTy::VisHoleCreate error");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x3f1);
  }
  return 0xffffffff;
}

// 0055AB50 VisibleClassTy::VisHoleExec
#line 4 "decomp/ST.exe/functions/0055AB50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::VisHoleExec
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall VisHoleExec(VisibleClassTy * this) Evidence: every machine RET purges exactly 0
   explicit stack bytes; current signature describes 4; removed trailing parameter slots have no
   listing references; ret_sites=0055AC44 RET | 0055AC9C RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_0055AB50(VisibleClassTy *this)

{
  VisibleClassTy_field_00F4DArray *pVVar1;
  VisibleClassTy *this_00;
  uint uVar3;
  int errorCode;
  uint uVar4;
  int iVar5;
  VisibleClassTy_field_00F4Element *element_00f4;
  InternalExceptionFrame local_50;
  VisibleClassTy *local_c;
  uint local_8;

  if (this->field_0114 != 0) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (errorCode == 0) {
      local_8 = local_c->field_00F4->count;
      while (local_8 = local_8 - 1, -1 < (int)local_8) {
        pVVar1 = this_00->field_00F4;
        if (local_8 < pVVar1->count) {
          element_00f4 = DArrayAt<VisibleClassTy_field_00F4Element>(pVVar1, local_8);
        }
        else {
          element_00f4 = nullptr;
        }
        if (((uint)(element_00f4->field_0014 + element_00f4->field_0018) <= this_00->field_0108) &&
           (((this_00->field_0108 - element_00f4->field_0014) - element_00f4->field_0018) % 7 == 0)) {
          /* ST_CALLSITE[0055AC00]: CALL 0x004018f2; direct=004018F2 VisibleClassTy::sub_00559110 */
          st::fn_004018F2(this_00,element_00f4->field_0000,(undefined *)element_00f4->field_0004,element_00f4->index,element_00f4->index_0010,element_00f4->field_000C,-6,
                       0xffffffff);
          uVar3 = local_8;
          uVar4 = st::machine_word_boundary_cast<uint>(element_00f4->field_000C - 1);
          element_00f4->field_000C = uVar4;
          if ((int)uVar4 < 0) {
            st::fn_006B0C70((DArrayTy *)this_00->field_00F4,local_8);
            local_8 = uVar3;
          }
          else {
            /* ST_CALLSITE[0055AC24]: CALL 0x0040388c; direct=0040388C VisibleClassTy::sub_00558DC0 */
            st::fn_0040388C(this_00,element_00f4->field_0000,element_00f4->field_0004,(undefined *)element_00f4->index,(int *)element_00f4->index_0010,uVar4,
                         (int *)0xfffffffa,0xffffffff);
          }
        }
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x40a,0,errorCode,
                               st::mutable_c_string("%s"),"VisibleClassTy::VisHoleExec error");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\grig\\visible.cpp"),0x40b);
  }
  return;
}

