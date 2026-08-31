#include "st/generated.hpp"
// Generated translation unit: source/original/Maps/CntLib.cpp

// 00691690 FUN_00691690
#line 4 "decomp/ST.exe/functions/00691690/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Maps\CntLib.cpp
   Diagnostic line evidence: 78 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00691690 parameter used as this of cMf32::RecMemFree @ 006916D3

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00691690 parameter used as this of cMf32::RecChk @ 00691857 | 00691690 parameter used
   as this of cMf32::RecChk @ 006918C9 */

void __thiscall
st::fn_00691690(void *this,cMf32 *param_1,cMf32 *param_2,int param_3,undefined *param_4)

{
  int scalar_local_1c;

  short *psVar1;
  int *piVar2;
  void *pvVar3;
  byte *puVar4;
  char *pcVar5;
  RecoveredRecord_00692BA0_C4D2C982 *pRVar6;
  AnonShape_006DBCA0_EF06575F *pAVar7;
  ST3DSMAPContext *this_00;
  int iVar8;
  int iVar15;
  uint uVar9;
  ushort *puVar9_mg2;
  ushort *puVar9_mg3;
  uint *puVar10;
  ushort *puVar9_mg4;
  ushort *puVar9_mg5;
  ushort *puVar9_mg6;
  ushort *puVar9_mg7;
  int iVar11;
  byte *pbVar12;
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *pRVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  CHAR local_190 [260];
  RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 local_8c;
  RecoveredRecordView_006B4B20_F20E56A6 *local_3c;
  byte *local_38;
  RecoveredRecordView_006B4B20_F20E56A6 *local_34;
  byte *local_30;
  RecoveredRecordView_006B4B20_F20E56A6 *local_2c;
  int *local_28;
  char *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  void *local_14;
  int *local_10;
  int local_c;
  uint local_8;

  local_14 = this;
  local_38 = st::fn_006F2D90(param_1,st::mutable_c_string("2D_CLT"),0,0);
  if (local_38 != nullptr) {
    pbVar12 = local_38;
    puVar4 = (byte *)((int)this + 0x37ac);
    memmove(puVar4, pbVar12, 0x3c); /* compiler REP MOVS byte copy */
    st::fn_006F20E0(param_1,reinterpret_cast<uint *>(&local_38));
  }
  local_30 = st::fn_006F2D90(param_1,st::mutable_c_string("CLR_COVER"),0,0);
  if (local_30 != nullptr) {
    puVar4 = reinterpret_cast<byte *>((&DAT_007d5934));
    pbVar12 = local_30;
    do {
      uVar15 = *(undefined4 *)pbVar12;
      pbVar12 = pbVar12 + 4;
      *puVar4 = uVar15;
      puVar4 = reinterpret_cast<byte *>((puVar4 + 2));
    } while ((int)puVar4 < 0x7d595c);
    st::fn_006F20E0(param_1,reinterpret_cast<uint *>(&local_30));
  }
  local_20 = 0;
  do {
    iVar11 = local_20;
    if (param_3 != 0) {
      iVar16 = 1;
      bVar14 = 2;
      pcVar5 = st::fn_0040456B(reinterpret_cast<char *>(&DAT_007d59a4),local_20);
      /* ST_CALLSITE[00691741]: CALL 0x00725c60; direct=00725C60 Library::Ourlib::MFSPR::mfSSprLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00692BA0_C4D2C982; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00692BA0_C4D2C982;pointer:/cMf32;pointer:/char;/byte;/int */
      pRVar6 = st::pointer_boundary_cast<RecoveredRecord_00692BA0_C4D2C982 *>(st::fn_00725C60(param_2,pcVar5,bVar14,iVar16));
      *(RecoveredRecord_00692BA0_C4D2C982 **)((int)this + iVar11 * 0x248 + 0x1950) = pRVar6;
      st::fn_0040272F(pRVar6);
    }
    /* ST_CALLSITE[00691763]: CALL 0x006b04d0; direct=006B04D0 FUN_006b04d0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006DBCA0_EF06575F; signature=__stdcall;pointer:/SubmarineTitans/Recovered/PointerShapes/AnonShape_006DBCA0_EF06575F;/uint */
    pAVar7 = st::pointer_boundary_cast<AnonShape_006DBCA0_EF06575F *>(st::fn_006B04D0(0x4f2));
    if (pAVar7 == nullptr) {
      this_00 = nullptr;
LAB_0069177d:
      st::fn_006A5E40
                (-2,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Maps\\CntLib.cpp"),0x4e);
    }
    else {
      this_00 = reinterpret_cast<ST3DSMAPContext *>(st::fn_006DBCA0(pAVar7));
      if (this_00 == nullptr) goto LAB_0069177d;
    }
    iVar11 = local_20;
    iVar16 = (int)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + local_20 * 4));
    st::fn_006DC050
              (this_00,nullptr,0,0,iVar16,iVar16,-10.0,10.0,-10.0,10.0,10.0,
               9.965999793052674,0);
    st::fn_006DD610(this_00,4,10.0,10.0);
    this_00->field_0128 = 0;
    st::fn_006DD790(this_00,149.97069);
    st::fn_006DD800(this_00,200.19933);
    local_c = 0;
    do {
      local_8 = 0;
      do {
        if (((param_3 == 0) || (local_c != 0)) || (local_8 != 0)) {
          if (param_4 != nullptr) {
            /* ST_CALLSITE[00691910]: CALL ECX */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (*(code *)param_4)(0);
          }
          uVar9 = local_8;
          if (local_c == 0) {
            uVar9 = local_8 + 1;
          }
          pcVar5 = st::fn_00404EAD(1,local_c,uVar9,1,0);
          puVar9_mg2 = st::fn_006F0CD0(st::machine_word_boundary_cast<undefined4>(param_1),pcVar5,0);
          if (puVar9_mg2 != nullptr) {

            puVar4 = reinterpret_cast<byte *>((st::fn_006AAC70(0xa9)));
            scalar_local_1c = local_c * 6; /* split integer lifetime from pointer-typed SSA storage */
            local_28 = (int *)((int)local_14 +
                              (scalar_local_1c + local_8 + iVar11 * 0x49) * 8 + 0x1954);
            *local_28 = (int)puVar4;
            for (iVar16 = 0x2a; iVar16 != 0; iVar16 = iVar16 + -1) {
              *puVar4 = 0;
              puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
            }
            *(undefined1 *)puVar4 = 0;
            *(undefined2 *)(*local_28 + 0x23) = 0;
            local_18 = 0;
            local_24 = nullptr;
            *(short *)(*local_28 + 0x29) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            *(short *)(*local_28 + 0x2b) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            do {
              local_10 = nullptr;
              do {
                uVar9 = local_8;
                if (local_c == 0) {
                  uVar9 = local_8 + 1;
                }
                pcVar5 = st::fn_00404EAD(1,local_c,uVar9,local_18 + 1,(uint)local_10);
                pRVar13 = &local_8c;
                for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
                  pRVar13->next = nullptr;
                  pRVar13 = reinterpret_cast<RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *>(&pRVar13->field_0004);
                }
                puVar9_mg3 = st::fn_006F0CD0(st::machine_word_boundary_cast<undefined4>(param_1),pcVar5,0);
                if (puVar9_mg3 == nullptr) {
                  *(short *)(*local_28 + 0x23) = *(short *)(*local_28 + 0x23) + 1;
                }
                else {
                  if (local_c == 0) {
                    iVar16 = (int)local_10 * 0x10 + (local_18 + local_8 * 2) * 0xf0 + 0x2028;
LAB_00691a65:
                    puVar4 = (byte *)(iVar16 + (int)local_14);
                    *puVar4 = *(undefined4 *)(puVar9_mg3 + 2);
                    puVar4[1] = *(undefined4 *)(puVar9_mg3 + 4);
                    puVar4[2] = *(undefined4 *)(puVar9_mg3 + 6);
                    puVar4[3] = *(undefined4 *)(puVar9_mg3 + 8);
                  }
                  else if (local_c == 1) {
                    iVar16 = (int)local_10 * 0x10 + (local_18 + local_8 * 2) * 0xf0 + 0x2b68;
                    goto LAB_00691a65;
                  }
                  local_8c.field_001C = (uint)(short)*puVar9_mg3;
                  local_8c.field_0020 = (int)(puVar9_mg3 + 10);
                  local_8c.field_0024 = (short)puVar9_mg3[1];
                  local_8c.field_0028 = (int)(puVar9_mg3 + (short)*puVar9_mg3 * 6 + 10);
                  local_8c.field_0048 = (byte)local_8;
                  if (local_c == 0) {
                    local_8c.field_0008 = (short)(byte)local_8;
                  }
                  else {
                    local_8c.field_0008 = ((byte)local_8 - 1) + (short)local_c;
                  }
                  local_8c.next = this_00->field_0140;
                  this_00->field_013C = this_00->field_013C + 1;
                  this_00->field_0140 = &local_8c;
                  st::fn_006DDBE0(this_00);
                  this_00->field_0124 = 5;
                  st::fn_006DDD50(this_00);
                  this_00->field_0140 = nullptr;
                  this_00->field_013C = 0;
                  if (param_3 != 0) {
                    puVar4 = (byte *)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
                    local_3c = st::fn_004054BB(param_2,(undefined4 *)this_00->field_000C,reinterpret_cast<undefined4 *>(puVar4),
                                                  puVar4,1);
                    piVar2 = local_28;

                    st::fn_006B4B20((int *)(*local_28 + 0x2d + (int)(local_24 + (int)local_10) * 4),
                                 local_3c,0,0);
                    st::fn_006AB060(&local_3c);
                    psVar1 = (short *)(*piVar2 + 0x23);
                    *psVar1 = *psVar1 + 1;
                    *(undefined4 *)(*piVar2 + 0x25) = 0;
                  }
                  if (iVar11 == 0) {

                    puVar10 = static_cast<uint *>(st::fn_006AAC70(0x640));
                    *(undefined4 **)
                     ((int)local_14 +
                     (int)local_10 * 4 + (local_18 + (scalar_local_1c + local_8) * 2) * 0x3c) =
                         puVar10;
                    puVar4 = (byte *)this_00->field_000C;
                    for (iVar16 = 400; iVar11 = local_20, iVar16 != 0; iVar16 = iVar16 + -1) {
                      *puVar10 = *puVar4;
                      puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
                      puVar10 = puVar10 + 1;
                    }
                  }
                }
                local_10 = (int *)((int)local_10 + 1);
              } while ((int)local_10 < 0xf);
              local_18 = local_18 + 1;
              local_24 = local_24 + 0xf;
            } while ((int)local_24 < 0x1e);
          }
          uVar9 = local_8;
          if (local_c == 0) {
            uVar9 = local_8 + 1;
          }
          pcVar5 = st::fn_00404EAD(0,local_c,uVar9,0,1);
          puVar9_mg4 = st::fn_006F0CD0(st::machine_word_boundary_cast<undefined4>(param_1),pcVar5,0);
          if (puVar9_mg4 != nullptr) {

            puVar4 = reinterpret_cast<byte *>((st::fn_006AAC70(0x59)));
            local_18 = local_c * 6 + iVar11 * 0x92;
            piVar2 = (int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1a74);
            *piVar2 = (int)puVar4;
            for (iVar16 = 0x16; iVar16 != 0; iVar16 = iVar16 + -1) {
              *puVar4 = 0;
              puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
            }
            *(undefined1 *)puVar4 = 0;
            local_10 = nullptr;
            *(undefined2 *)(*piVar2 + 0x23) = 0;
            *(short *)(*piVar2 + 0x29) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            *(short *)(*piVar2 + 0x2b) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            *(undefined4 *)(*piVar2 + 0x25) = 0;
            do {
              uVar9 = local_8;
              if (local_c == 0) {
                uVar9 = local_8 + 1;
              }
              local_1c = (int *)((int)local_10 + 1);
              pcVar5 = st::fn_00404EAD(0,local_c,uVar9,0,(uint)local_1c);
              pRVar13 = &local_8c;
              for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
                pRVar13->next = nullptr;
                pRVar13 = reinterpret_cast<RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *>(&pRVar13->field_0004);
              }
              puVar9_mg5 = st::fn_006F0CD0(st::machine_word_boundary_cast<undefined4>(param_1),pcVar5,0);
              if (puVar9_mg5 == nullptr) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                psVar1 = (short *)(*(int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1a74) +
                                  0x23);
                *psVar1 = *psVar1 + 1;
              }
              else {
                local_8c.field_001C = (uint)(short)*puVar9_mg5;
                local_8c.field_0020 = (int)(puVar9_mg5 + 10);
                local_8c.field_0024 = (short)puVar9_mg5[1];
                local_8c.field_0028 = (int)(puVar9_mg5 + (short)*puVar9_mg5 * 6 + 10);
                local_8c.field_0048 = (byte)local_8;
                if (local_c == 0) {
                  local_8c.field_0008 = (short)(byte)local_8;
                }
                else {
                  local_8c.field_0008 = ((byte)local_8 - 1) + (short)local_c;
                }
                local_8c.next = this_00->field_0140;
                this_00->field_013C = this_00->field_013C + 1;
                this_00->field_0140 = &local_8c;
                st::fn_006DDBE0(this_00);
                this_00->field_0124 = 5;
                st::fn_006DDD50(this_00);
                pvVar3 = local_14;
                this_00->field_0140 = nullptr;
                this_00->field_013C = 0;
                if (param_3 != 0) {
                  puVar4 = (byte *)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
                  local_2c = st::fn_004054BB(param_2,(undefined4 *)this_00->field_000C,reinterpret_cast<undefined4 *>(puVar4),
                                                puVar4,1);
                  iVar16 = local_18 + local_8;

                  st::fn_006B4B20((int *)(*(int *)((int)pvVar3 + iVar16 * 4 + 0x1a74) + 0x2d +
                                      (int)local_10 * 4),local_2c,0,0);
                  st::fn_006AB060(&local_2c);
                  psVar1 = (short *)(*(int *)((int)pvVar3 + iVar16 * 4 + 0x1a74) + 0x23);
                  *psVar1 = *psVar1 + 1;
                }
                if (iVar11 == 0) {

                  puVar10 = static_cast<uint *>(st::fn_006AAC70(0x640));
                  *(undefined4 **)
                   ((int)local_14 + ((int)local_10 + (local_8 + (local_c * 3 + 0x36) * 2) * 10) * 4)
                       = puVar10;
                  puVar4 = (byte *)this_00->field_000C;
                  for (iVar16 = 400; iVar11 = local_20, iVar16 != 0; iVar16 = iVar16 + -1) {
                    *puVar10 = *puVar4;
                    puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
                    puVar10 = puVar10 + 1;
                  }
                }
              }
              local_10 = local_1c;
            } while ((int)local_1c < 10);
          }
          uVar9 = local_8;
          if (local_c == 0) {
            uVar9 = local_8 + 1;
          }
          pcVar5 = st::fn_00404EAD(3,local_c,uVar9,1,1);
          puVar9_mg6 = st::fn_006F0CD0(st::machine_word_boundary_cast<undefined4>(param_1),pcVar5,0);
          if (puVar9_mg6 != nullptr) {

            puVar4 = reinterpret_cast<byte *>((st::fn_006AAC70(0x45)));
            local_18 = local_c * 6 + iVar11 * 0x92;
            local_1c = (int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1b08);
            *local_1c = (int)puVar4;
            for (iVar16 = 0x11; iVar16 != 0; iVar16 = iVar16 + -1) {
              *puVar4 = 0;
              puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
            }
            *(undefined1 *)puVar4 = 0;
            local_10 = nullptr;
            *(undefined2 *)(*local_1c + 0x23) = 0;
            *(short *)(*local_1c + 0x29) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            *(short *)(*local_1c + 0x2b) =
                 (short)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
            *(undefined4 *)(*local_1c + 0x25) = 0;
            do {
              uVar9 = local_8;
              if (local_c == 0) {
                uVar9 = local_8 + 1;
              }
              pcVar5 = st::fn_00404EAD(3,local_c,uVar9,1,(uint)local_10);
              puVar9_mg7 = st::fn_006F0CD0(st::machine_word_boundary_cast<undefined4>(param_1),pcVar5,0);
              pRVar13 = &local_8c;
              for (iVar16 = 0x14; iVar16 != 0; iVar16 = iVar16 + -1) {
                pRVar13->next = nullptr;
                pRVar13 = reinterpret_cast<RecursiveNode_ST3DSMAPContext_0140_DDDC9F89 *>(&pRVar13->field_0004);
              }
              if (puVar9_mg7 == nullptr) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                psVar1 = (short *)(*(int *)((int)local_14 + (local_18 + local_8) * 4 + 0x1b08) +
                                  0x23);
                *psVar1 = *psVar1 + 1;
              }
              else {
                local_8c.field_001C = (uint)(short)*puVar9_mg7;
                local_8c.field_0020 = (int)(puVar9_mg7 + 10);
                local_8c.field_0024 = (short)puVar9_mg7[1];
                local_8c.field_0048 = (byte)local_8;
                local_8c.field_0028 = (int)(puVar9_mg7 + (short)*puVar9_mg7 * 6 + 10);
                if (local_c == 0) {
                  local_8c.field_0008 = (short)(byte)local_8;
                }
                else {
                  local_8c.field_0008 = ((byte)local_8 - 1) + (short)local_c;
                }
                local_8c.next = this_00->field_0140;
                this_00->field_013C = this_00->field_013C + 1;
                this_00->field_0140 = &local_8c;
                st::fn_006DDBE0(this_00);
                this_00->field_0124 = 5;
                st::fn_006DDD50(this_00);
                pvVar3 = local_14;
                this_00->field_0140 = nullptr;
                this_00->field_013C = 0;
                if (param_3 != 0) {
                  puVar4 = (byte *)(0x28 / (longlong)*(int *)(&DAT_007dfa90 + iVar11 * 4));
                  local_34 = st::fn_004054BB(param_2,(undefined4 *)this_00->field_000C,reinterpret_cast<undefined4 *>(puVar4),
                                                puVar4,1);
                  iVar16 = local_18 + local_8;

                  st::fn_006B4B20((int *)(*(int *)((int)pvVar3 + iVar16 * 4 + 0x1b08) + 0x2d +
                                      (int)local_10 * 4),local_34,0,0);
                  st::fn_006AB060(&local_34);
                  psVar1 = (short *)(*(int *)((int)pvVar3 + iVar16 * 4 + 0x1b08) + 0x23);
                  *psVar1 = *psVar1 + 1;
                }
                if (iVar11 == 0) {

                  puVar10 = static_cast<uint *>(st::fn_006AAC70(0x640));
                  *(undefined4 **)
                   ((int)local_14 + ((int)local_10 + (local_8 + (local_c * 3 + 0x90) * 2) * 5) * 4)
                       = puVar10;
                  puVar4 = (byte *)this_00->field_000C;
                  for (iVar16 = 400; iVar11 = local_20, iVar16 != 0; iVar16 = iVar16 + -1) {
                    *puVar10 = *puVar4;
                    puVar4 = reinterpret_cast<byte *>((puVar4 + 1));
                    puVar10 = puVar10 + 1;
                  }
                }
              }
              local_10 = (int *)((int)local_10 + 1);
            } while ((int)local_10 < 5);
          }
        }
        else {
          iVar16 = 0;
          do {
            local_24 = st::fn_00402EAA(0,0,iVar16,iVar11);

            iVar8 = st::fn_006F21C0(param_2,7,local_24);
            if (iVar8 != 0) break;
            /* ST_CALLSITE[0069186C]: CALL 0x00725c60; direct=00725C60 Library::Ourlib::MFSPR::mfSSprLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00692BA0_C4D2C982; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00692BA0_C4D2C982;pointer:/cMf32;pointer:/char;/byte;/int */
            pRVar6 = st::pointer_boundary_cast<RecoveredRecord_00692BA0_C4D2C982 *>(st::fn_00725C60(param_2,local_24,2,1));
            *(RecoveredRecord_00692BA0_C4D2C982 **)
             ((int)local_14 + (iVar16 + iVar11 * 0x92) * 4 + 0x1954) = pRVar6;
            st::fn_0040272F(pRVar6);
            iVar16 = iVar16 + 1;
          } while (iVar16 < 2);
          pvVar3 = local_14;
          uVar17 = 0;
          uVar15 = 0;
          pcVar5 = st::fn_0040456B(st::mutable_c_string("STONE"),iVar11);
          /* ST_CALLSITE[006918B4]: CALL dword ptr [0x0085bde8] */
          st::external_00000080(reinterpret_cast<LPSTR>(local_190),st::mutable_c_string("%s%u%u"),pcVar5,uVar15,uVar17);

          iVar15 = st::fn_006F21C0(param_2,7,reinterpret_cast<char *>(local_190));
          if (iVar15 == 0) {
            /* ST_CALLSITE[006918E5]: CALL 0x00725c60; direct=00725C60 Library::Ourlib::MFSPR::mfSSprLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00692BA0_C4D2C982; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00692BA0_C4D2C982;pointer:/cMf32;pointer:/char;/byte;/int */
            pRVar6 = st::pointer_boundary_cast<RecoveredRecord_00692BA0_C4D2C982 *>(st::fn_00725C60(param_2,reinterpret_cast<char *>(local_190),2,1));
            *(RecoveredRecord_00692BA0_C4D2C982 **)((int)pvVar3 + iVar11 * 0x248 + 0x1a74) = pRVar6;
            st::fn_0040272F(pRVar6);
          }
        }
        pvVar3 = local_14;
        local_8 = local_8 + 1;
      } while ((int)local_8 < 6);
      local_c = local_c + 1;
    } while (local_c < 6);
    if (param_3 != 0) {
      iVar16 = 1;
      bVar14 = 2;
      pcVar5 = st::fn_0040456B(st::mutable_c_string("CRACK"),iVar11);
      /* ST_CALLSITE[006920A0]: CALL 0x00725c60; direct=00725C60 Library::Ourlib::MFSPR::mfSSprLoad; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00692BA0_C4D2C982; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecord_00692BA0_C4D2C982;pointer:/cMf32;pointer:/char;/byte;/int */
      pRVar6 = st::pointer_boundary_cast<RecoveredRecord_00692BA0_C4D2C982 *>(st::fn_00725C60(param_2,pcVar5,bVar14,iVar16));
      *(RecoveredRecord_00692BA0_C4D2C982 **)((int)pvVar3 + iVar11 * 0x248 + 0x1b04) = pRVar6;
      st::fn_0040272F(pRVar6);
    }
    if (this_00 != nullptr) {
      st::fn_006DBCF0(this_00);
      st::fn_0072E2B0(reinterpret_cast<HoloTy *>(this_00));
    }
    local_20 = iVar11 + 1;
    this = local_14;
    if (2 < local_20) {
      return;
    }
  } while( true );
}
