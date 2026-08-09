#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/0060.cpp

// 00600110 FUN_00600110
#line 4 "decomp/ST.exe/functions/00600110/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00600110 -> 00568DD0 @ 00600196 */

void __thiscall st::fn_00600110(void *this,int param_1,int param_2,int soundId)

{
  short sVar1;
  SoundPosition local_10;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                             (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                             (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = STField<int>(this,0x18);
  st::fn_00404BD8((SoundClassTy *)&g_sound,SOUND_MODE_2,nullptr,soundId,&local_10,0);
  return;
}

// 006001E0 FUN_006001e0
#line 4 "decomp/ST.exe/functions/006001E0/decomp.c"
uint __thiscall st::fn_006001E0(void *this,int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_18;
  undefined2 local_14 [2];
  undefined2 local_10 [2];
  undefined2 local_c [2];
  short local_8;
  short local_6;

  uVar4 = 0;
  iVar5 = param_1 * 0x52;
  *(undefined2 *)(iVar5 + STField<int>(this,0x233) + 0x12) =
       *(undefined2 *)(iVar5 + 6 + STField<int>(this,0x233));
  *(undefined2 *)(iVar5 + STField<int>(this,0x233) + 0x14) =
       *(undefined2 *)(iVar5 + 8 + STField<int>(this,0x233));
  *(undefined2 *)(iVar5 + STField<int>(this,0x233) + 0x16) =
       *(undefined2 *)(iVar5 + 10 + STField<int>(this,0x233));
  if (((g_playSystem_00802A38->field_00E4 & 1) == 0) &&
     (iVar3 = STField<int>(this,0x233) + iVar5,
     0x31 < (int)*(short *)(iVar3 + 4) - (int)*(short *)(iVar3 + 10))) {
    st::fn_00401433
              (g_traksClass_00802A7C,1,1,0,(int)*(short *)(iVar3 + 0x12),
               (int)*(short *)(iVar3 + 0x14),(int)*(short *)(iVar3 + 0x16),0,0,0,0,0,0,-1,0,0);
  }
  iVar3 = STField<int>(this,0x233);
  psVar1 = (short *)(iVar5 + iVar3);
  iVar2 = *(int *)(iVar5 + 0x4a + iVar3);
  if (iVar2 < *(int *)(iVar5 + 0x46 + iVar3)) {
    psVar1[3] = *(short *)(*(int *)(psVar1 + 0x27) + iVar2 * 6);
    iVar3 = STField<int>(this,0x233) + iVar5;
    *(undefined2 *)(iVar3 + 8) =
         *(undefined2 *)(*(int *)(iVar3 + 0x4e) + 2 + *(int *)(iVar3 + 0x4a) * 6);
    iVar3 = STField<int>(this,0x233);
    *(undefined2 *)(iVar5 + iVar3 + 10) =
         *(undefined2 *)(*(int *)(iVar5 + 0x4e + iVar3) + 4 + *(int *)(iVar5 + 0x4a + iVar3) * 6);
  }
  else {
    iVar3 = st::fn_00403328(psVar1,g_playSystem_00802A38->field_00E4,(int *)local_c,
                               (int *)local_10,(int *)local_14);
    if (iVar3 == 0) goto LAB_0060033c;
    *(undefined2 *)(iVar5 + 6 + STField<int>(this,0x233)) = local_c[0];
    *(undefined2 *)(iVar5 + 8 + STField<int>(this,0x233)) = local_10[0];
    *(undefined2 *)(iVar5 + 10 + STField<int>(this,0x233)) = local_14[0];
  }
  *(int *)(iVar5 + 0x4a + STField<int>(this,0x233)) =
       *(int *)(iVar5 + 0x4a + STField<int>(this,0x233)) + 1;
LAB_0060033c:
  iVar3 = STField<int>(this,0x233) + iVar5;
  if ((99 < (int)*(short *)(iVar3 + 4) - (int)*(short *)(iVar3 + 10)) &&
     (uVar4 = st::fn_00404516
                        ((AnonReceiver_00601500 *)((int)this + 0x1d5),(int)*(short *)(iVar3 + 6),
                         (int)*(short *)(iVar3 + 8),(int)*(short *)(iVar3 + 10),
                         (int)*(short *)(iVar3 + 0x12),(int)*(short *)(iVar3 + 0x14),
                         (int)*(short *)(iVar3 + 0x16),STField<int>(this,0x20a),
                         STField<int>(this,0x22a),STField<int>(this,0x220),
                         STField<ushort>(this,0x224),0xa9,0,0), uVar4 != 0)) {
    if (uVar4 == 1) {
      *(undefined2 *)(iVar5 + 6 + STField<int>(this,0x233)) = STField<undefined2>(this,0x1f5);
      *(undefined2 *)(iVar5 + 8 + STField<int>(this,0x233)) = STField<undefined2>(this,0x1f9);
      *(undefined2 *)(iVar5 + 10 + STField<int>(this,0x233)) = STField<undefined2>(this,0x1fd);
      STField<undefined4>(this,0x1e9) = 0;
      return 1;
    }
    if (uVar4 != 5) {
      if (uVar4 != 2) {
        return uVar4;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((STField<int *>(this,0x1e9) != nullptr) &&
         (iVar3 = (**(code **)(*STField<int *>(this,0x1e9) + 0xe0))
                            (STField<undefined4>(this,0x1ed),(int)&param_1 + 2,&local_6,&local_8,
                             &local_18), iVar3 == 0)) {
        STField<int>(this,0x1f5) = (int)STPiece<2,2>(param_1);
        STField<int>(this,0x1f9) = (int)local_6;
        STField<int>(this,0x1fd) = (int)local_8;
        *(undefined2 *)(iVar5 + 6 + STField<int>(this,0x233)) =
             STField<undefined2>(this,0x1f5);
        *(undefined2 *)(iVar5 + 8 + STField<int>(this,0x233)) =
             STField<undefined2>(this,0x1f9);
        *(undefined2 *)(iVar5 + 10 + STField<int>(this,0x233)) =
             STField<undefined2>(this,0x1fd);
        STField<undefined4>(this,0x1f1) = local_18;
        return 2;
      }
    }
    st::fn_00403C10(this);
  }
  return uVar4;
}

// 00600580 FUN_00600580
#line 4 "decomp/ST.exe/functions/00600580/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:6: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x1c, direct_reads=1, scalar_operations=8, signed_comparisons=1, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=false; sites=00600665 incoming load: MOV EDX,dword ptr [EBP +
   0x1c] | 00600671 scalar operation: IMUL EDX | 00600673 scalar operation: SAR EDX,0x6 | 00600678
   scalar operation: SHR EAX,0x1f | 0060067B scalar operation: ADD EDX,EAX | 00600682 scalar
   operation: IMUL EDX | 00600684 scalar operation: SAR EDX,0x6 | 00600689 scalar operation: SHR
   EAX,0x1f | 0060068C scalar operation: ADD EDX,EAX */

undefined4
st::fn_00600580(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            undefined4 *param_8,undefined4 *param_9)

{
  short sVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                     (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                          (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar5 = (short)(((short)(param_2 / 0xc9) + sVar1) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar6 = (short)(((short)(param_3 / 200) + sVar1) -
                   (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(param_3 / 200) + sVar1) -
                        (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  sVar1 = (short)(param_4 >> 0x1f);
  if (param_4 < 0) {
    iVar8 = (short)(((short)(param_4 / 0xc9) + sVar1) -
                   (short)((longlong)param_4 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar8 = (int)(short)(((short)(param_4 / 0xc9) + sVar1) -
                        (short)((longlong)param_4 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_5 >> 0x1f);
  if (param_5 < 0) {
    iVar3 = (short)(((short)(param_5 / 0xc9) + sVar1) -
                   (short)((longlong)param_5 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar3 = (int)(short)(((short)(param_5 / 0xc9) + sVar1) -
                        (short)((longlong)param_5 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_6 >> 0x1f);
  if (param_6 < 0) {
    iVar2 = (short)(((short)(param_6 / 200) + sVar1) -
                   (short)((longlong)param_6 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar2 = (int)(short)(((short)(param_6 / 200) + sVar1) -
                        (short)((longlong)param_6 * 0x51eb851f >> 0x3f));
  }
  uVar7 = iVar6 - iVar2;
  if ((int)uVar7 < 1) {
    if (iVar2 == 4) {
      *(undefined4 *)param_7 = 0xffffffff;
      *param_8 = 0xffffffff;
      *param_9 = 0xffffffff;
    }
  }
  else {
    iVar4 = st::fn_006ACFD0(iVar8,iVar3,param_1,iVar5);
    if (iVar4 < (int)((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f))) {
      return 1;
    }
  }
  return 0;
}

// 00600750 FUN_00600750
#line 4 "decomp/ST.exe/functions/00600750/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_00600750(AnonShape_00600750_A7773F7A *param_1)

{
  short sVar1;
  STT3DSprC *pSVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  uint uVar8;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  STT3DSprC *local_c;
  int local_8;

  local_18 = 0;
  local_8 = 0;
  if (0 < param_1->field_0226) {
    do {
      iVar6 = local_8;
      iVar8 = local_8 * 0x52;
      iVar5 = iVar8 + param_1->field_0233;
      local_c = (STT3DSprC *)iVar8;
      switch(*(undefined4 *)(iVar8 + 0x39 + param_1->field_0233)) {
      case 1:
        uVar8 = st::fn_00404F75(param_1,local_8);
        pVVar3 = g_visibleClass_00802A88;
        if (uVar8 == 0) {
          if (param_1->field_0232 != '\0') {
            local_c = *(STT3DSprC **)(iVar8 + 0x42 + param_1->field_0233);
            iVar5 = iVar8 + param_1->field_0233;
            if (g_visibleClass_00802A88 != nullptr) {
              sVar1 = *(short *)(iVar5 + 10);
              if (sVar1 < 0) {
                local_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                       (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) - 1;
              }
              else {
                local_10 = (uint)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                        (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
              }
              sVar1 = *(short *)(iVar5 + 8);
              if (sVar1 < 0) {
                iVar6 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                               (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar6 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                    (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
              }
              sVar1 = *(short *)(iVar5 + 6);
              if (sVar1 < 0) {
                iVar5 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                               (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar5 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                    (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
              }
              if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                  (((st::fn_00403F53
                               (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,
                                iVar6,&local_1c,&local_24), (int)local_10 < 0 ||
                    ((4 < (int)local_10 || (local_1c < 0)))) ||
                   ((int)pVVar3->field_0030 <= local_1c)))) ||
                 ((((iVar5 = local_24 + g_centeredOffsets5[local_10], iVar5 < 0 ||
                    (pVVar3->field_0034 <= iVar5)) || (pVVar3->field_004C == nullptr)) ||
                  (pVVar3->field_004C[iVar5 * pVVar3->field_0030 + local_1c] != 0)))) {
                if (*(char *)(iVar8 + 0x41 + param_1->field_0233) == '\0') {
                  st::fn_00402982(local_c,0);
                  *(undefined1 *)(iVar8 + 0x41 + param_1->field_0233) = 1;
                }
              }
              else if (*(char *)(iVar8 + 0x41 + param_1->field_0233) != '\0') {
                st::fn_00403D0F(local_c);
                *(undefined1 *)(iVar8 + 0x41 + param_1->field_0233) = 0;
              }
            }
            iVar8 = param_1->field_0233 + iVar8;
            local_14 = (uint)*(short *)(iVar8 + 6);
            st::fn_004045D9
                      (local_c,(float)(int)local_14 * _DAT_007904f8 * _DAT_007904f0,
                       (float)(int)*(short *)(iVar8 + 8) * _DAT_007904f8 * _DAT_007904f0,
                       (float)(int)*(short *)(iVar8 + 10) * _DAT_007904f8 * _DAT_007904f0 +
                       _DAT_007904fc);
          }
        }
        else {
          *(undefined4 *)(iVar8 + 0x39 + param_1->field_0233) = 3;
          if ((param_1->field_0232 == '\0') ||
             (iVar5 = st::fn_00403E27((AnonReceiver_005FDB50 *)param_1,1,iVar6), iVar5 != 0)) {
LAB_00600928:
            st::fn_004035A8(param_1,iVar6);
          }
          else {
            sVar1 = *(short *)(iVar8 + 8 + param_1->field_0233);
            iVar8 = iVar8 + param_1->field_0233;
            pSVar2 = *(STT3DSprC **)(iVar8 + 0x42);
            if (sVar1 < 0) {
              iVar5 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            sVar1 = *(short *)(iVar8 + 6);
            if (sVar1 < 0) {
              iVar8 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar8 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            st::fn_00404610(param_1,iVar8,iVar5,0x460);
            iVar5 = param_1->field_01E9;
            if (iVar5 != 0) {
              if (param_1->field_01F1 == 0) {
                st::fn_006EA460
                          (g_sT3DSMAPContext_00807598,pSVar2->field_0018,*(int *)(iVar5 + 0x1ed));
              }
              else {
                st::fn_006EA3E0
                          (g_sT3DSMAPContext_00807598,pSVar2->field_0018,*(int *)(iVar5 + 0x1ed));
              }
            }
            uVar11 = 0x53;
            uVar10 = 0x5a;
            iVar5 = 1;
            uVar9 = st::fn_004052CC(pSVar2);
            st::fn_006EA4E0
                      (g_sT3DSMAPContext_00807598,uVar9,iVar5,uVar10,uVar11);
          }
        }
        break;
      case 2:
        if (((*(uint *)(iVar5 + 0x3d) <= g_playSystem_00802A38->field_00E4) &&
            (iVar4 = st::fn_00403751(param_1,local_8,3,param_1->field_022E), -1 < iVar4)) &&
           (iVar5 = st::fn_004028CE(param_1,local_8,iVar4), iVar6 = local_8, iVar5 != 0)) {
          iVar5 = st::fn_00403E27
                            ((AnonReceiver_005FDB50 *)param_1,0,local_8);
          if (iVar5 != 0) goto LAB_00600928;
          *(undefined4 *)(iVar8 + 0x39 + param_1->field_0233) = 1;
        }
        break;
      case 3:
        if (param_1->field_0232 == '\0') {
          st::fn_004035A8(param_1,local_8);
        }
        else {
          pSVar2 = *(STT3DSprC **)(iVar5 + 0x42);
          local_14 = st::fn_004042AF(pSVar2,'\r');
          local_28 = st::fn_004042AF(pSVar2,'\x0e');
          if (0x15 < (int)local_14) {
            if (local_14 == 0x16) {
              st::fn_00405240(pSVar2,0xf,g_playSystem_00802A38->field_00E4);
            }
            local_10 = st::fn_004042AF(pSVar2,'\x0f');
            st::fn_004030BC(pSVar2,'\x0f');
            iVar5 = st::fn_004022AC(pSVar2,'\x0f');
            if ((int)local_10 < iVar5) {
              local_10 = local_10 + 1;
            }
            st::fn_00401064(pSVar2,'\x0f',local_10);
          }
          if (*(char *)(iVar8 + 0x28 + param_1->field_0233) != '\0') {
            iVar5 = st::fn_004022AC(pSVar2,'\x0e');
            iVar8 = st::fn_004042AF(pSVar2,'\x0e');
            if (iVar5 + -1 == iVar8) {
              st::fn_00404264(pSVar2,0xe);
            }
          }
          iVar5 = st::fn_004022AC(pSVar2,'\r');
          iVar8 = st::fn_004042AF(pSVar2,'\r');
          if (iVar5 + -1 == iVar8) {
            st::fn_00404264(pSVar2,0xd);
          }
          iVar5 = st::fn_004022AC(pSVar2,'\x0f');
          iVar8 = st::fn_004042AF(pSVar2,'\x0f');
          if (iVar5 + -1 == iVar8) {
            *(undefined4 *)((int)local_c + 0x39 + param_1->field_0233) = 4;
          }
          iVar5 = st::fn_004022AC(pSVar2,'\r');
          uVar9 = local_14;
          if ((int)local_14 < iVar5) {
            uVar9 = local_14 + 1;
          }
          iVar5 = st::fn_004022AC(pSVar2,'\x0e');
          uVar7 = local_28;
          if ((int)local_28 < iVar5) {
            uVar7 = local_28 + 1;
          }
          st::fn_00401064(pSVar2,'\x0e',uVar7);
          st::fn_004030BC(pSVar2,'\x0e');
          st::fn_00401064(pSVar2,'\r',uVar9);
          st::fn_004030BC(pSVar2,'\r');
          iVar5 = (int)local_c + param_1->field_0233;
          local_28 = (uint)*(short *)(iVar5 + 6);
          st::fn_004045D9
                    (pSVar2,(float)(int)local_28 * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)(iVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
                     (float)(int)*(short *)((int)local_c + 10 + param_1->field_0233) * _DAT_007904f8
                     * _DAT_007904f0 + _DAT_007904fc);
          pVVar3 = g_visibleClass_00802A88;
          if (g_visibleClass_00802A88 != nullptr) {
            sVar1 = *(short *)((int)local_c + 10 + param_1->field_0233);
            iVar5 = (int)local_c + param_1->field_0233;
            if (sVar1 < 0) {
              local_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                     (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) - 1;
            }
            else {
              local_10 = (uint)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                                      (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
            }
            sVar1 = *(short *)(iVar5 + 8);
            if (sVar1 < 0) {
              iVar8 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar8 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            sVar1 = *(short *)(iVar5 + 6);
            if (sVar1 < 0) {
              iVar5 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                             (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                                  (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
            }
            if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                 (st::fn_00403F53
                            (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar8
                             ,&local_20,&local_2c), (int)local_10 < 0)) ||
                (((4 < (int)local_10 || (local_20 < 0)) ||
                 (((int)pVVar3->field_0030 <= local_20 ||
                  ((iVar5 = g_centeredOffsets5[local_10] + local_2c, iVar5 < 0 ||
                   (pVVar3->field_0034 <= iVar5)))))))) ||
               ((pVVar3->field_004C == nullptr ||
                (pVVar3->field_004C[local_20 + iVar5 * pVVar3->field_0030] != 0)))) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(char *)((int)local_c + 0x41 + param_1->field_0233) == '\0') {
                st::fn_00402982(pSVar2,0);
                *(undefined1 *)((int)local_c + 0x41 + param_1->field_0233) = 1;
              }
            }
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            else if (*(char *)((int)local_c + 0x41 + param_1->field_0233) != '\0') {
              st::fn_00403D0F(pSVar2);
              *(undefined1 *)((int)local_c + 0x41 + param_1->field_0233) = 0;
            }
          }
        }
        break;
      case 4:
        st::fn_004035A8(param_1,local_8);
        break;
      case 5:
        local_18 = local_18 + 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1->field_0226);
  }
  if (local_18 != param_1->field_0226) {
    return 0;
  }
  return 1;
}

// 006010A0 FUN_006010a0
#line 4 "decomp/ST.exe/functions/006010A0/decomp.c"
int __thiscall st::fn_006010A0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar5;
  void *pvVar3;
  byte *puVar4;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *puVar10;
  undefined4 *puVar11;
  int local_10;
  int local_c;
  int local_8;

  puVar10 = (byte *)(param_1);
  puVar4 = (byte *)((int)this + 0x206);
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *puVar10;
    puVar10 = (byte *)(puVar10 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
  local_8 = 0;
  if (((STField<int>(this,0x233) != 0) && (iVar5 = st::fn_0040227F(this), -1 < iVar5)) &&
     (local_10 = 0, 0 < STField<int>(this,0x226))) {
    local_c = 0;
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar6 = *(int *)((int)param_1 + local_8 + 0x3d);
      puVar10 = (byte *)((int)param_1 + local_8 + 0x41);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar1 = *(undefined4 *)(local_c + 0x42 + STField<int>(this,0x233));
      puVar4 = (byte *)(puVar10);
      puVar11 = (undefined4 *)(local_c + STField<int>(this,0x233));
      for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar4;
        puVar4 = (byte *)(puVar4 + 1);
        puVar11 = puVar11 + 1;
      }
      *(undefined2 *)puVar11 = *(undefined2 *)puVar4;
      *(undefined4 *)(local_c + 0x42 + STField<int>(this,0x233)) = uVar1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar2 = *(int *)(local_c + 0x39 + STField<int>(this,0x233));
      iVar7 = local_c + STField<int>(this,0x233);
      if ((iVar2 == 3) || (iVar2 == 4)) {
        *(undefined4 *)(iVar7 + 0x4e) = 0;
        *(undefined4 *)(local_c + 0x46 + STField<int>(this,0x233)) = 0;
        *(undefined4 *)(local_c + 0x39 + STField<int>(this,0x233)) = 5;
        *(undefined4 *)(local_c + 0x42 + STField<int>(this,0x233)) = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 0x46);
        if (iVar7 != 0) {
          pvVar3 = st::fn_006AAC70(iVar7 * 6);
          *(void **)(local_c + 0x4e + STField<int>(this,0x233)) = pvVar3;
          iVar7 = STField<int>(this,0x233) + local_c;
          uVar8 = *(int *)(iVar7 + 0x46) * 6;
          puVar10 = (byte *)((int)puVar10 + 0x52);
          puVar4 = (byte *)(*(undefined4 **)(iVar7 + 0x4e));
          memmove(puVar4, puVar10, uVar8); /* compiler REP MOVS byte copy */
        }
      }
      local_8 = local_8 + iVar6;
      local_10 = local_10 + 1;
      local_c = local_c + 0x52;
    } while (local_10 < STField<int>(this,0x226));
  }
  if (STField<int>(this,0x237) == 0) {
    return local_8 + 0x41;
  }
  uVar9 = STField<int>(this,0x237) * 0x18;
  puVar4 = (byte *)(st::fn_006AAC70(uVar9));
  STField<undefined4 *>(this,0x23b) = puVar4;
  puVar10 = (byte *)(local_8 + 0x41 + (int)param_1);
  for (iVar6 = (STField<int>(this,0x237) * 3 & 0x1fffffffU) << 1; iVar6 != 0; iVar6 = iVar6 + -1)
  {
    *puVar4 = *puVar10;
    puVar10 = (byte *)(puVar10 + 1);
    puVar4 = (byte *)(puVar4 + 1);
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar10;
    puVar10 = (byte *)((int)puVar10 + 1);
    puVar4 = (byte *)((int)puVar4 + 1);
  }
  uVar8 = STField<int>(this,0x237) * 4;
  pvVar3 = st::fn_006AAC70(uVar8);
  STField<void *>(this,0x23f) = pvVar3;
  return local_8 + 0x41 + uVar9 + uVar8;
}

// 006012D0 FUN_006012d0
#line 4 "decomp/ST.exe/functions/006012D0/decomp.c"
undefined4 * __thiscall st::fn_006012D0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *puVar7;
  int iVar8;
  byte *puVar9;
  undefined4 *puVar10;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_10 = 0;
  local_c = st::fn_006AAC70(0x3d);
  STField<undefined4>(this,0x212) = 2;
  puVar7 = (byte *)((int)this + 0x206);
  puVar9 = (byte *)(local_c);
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = *puVar7;
    puVar7 = (byte *)(puVar7 + 1);
    puVar9 = (byte *)(puVar9 + 1);
  }
  *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
  iVar4 = STField<int>(this,0x233);
  iVar3 = 0;
  local_8 = 0;
  if ((iVar4 != 0) && (iVar2 = 0, 0 < STField<int>(this,0x226))) {
    iVar8 = 0;
    do {
      if (*(int *)(iVar8 + 0x4e + iVar4) == 0) {
        *(undefined4 *)(iVar8 + 0x46 + iVar4) = 0;
      }
      iVar4 = STField<int>(this,0x233);
      iVar2 = iVar2 + 1;
      iVar1 = iVar8 + 0x46;
      iVar8 = iVar8 + 0x52;
      iVar3 = iVar3 + 0x56 + *(int *)(iVar1 + iVar4) * 6;
      local_8 = iVar3;
    } while (iVar2 < STField<int>(this,0x226));
  }
  if (STField<int>(this,0x237) != 0) {
    local_10 = STField<int>(this,0x237) * 0x1c + 4;
  }
  if (local_8 + local_10 != 0) {
    local_c = st::fn_006ACF50(local_c,local_8 + 0x3d + local_10);
    iVar3 = 0;
    local_14 = 0;
    local_18 = 0;
    if (0 < STField<int>(this,0x226)) {
      do {
        iVar4 = *(int *)(STField<int>(this,0x233) + 0x46 + iVar3) * 6 + 0x56;
        *(int *)((int)local_c + local_14 + 0x3d) = iVar4;
        puVar7 = (byte *)((int)local_c + local_14 + 0x41);
        puVar9 = (byte *)(STField<int>(this,0x233) + iVar3);
        puVar10 = puVar7;
        for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar10 = *puVar9;
          puVar9 = (byte *)(puVar9 + 1);
          puVar10 = puVar10 + 1;
        }
        *(undefined2 *)puVar10 = *(undefined2 *)puVar9;
        iVar2 = STField<int>(this,0x233) + iVar3;
        puVar9 = (byte *)(*(undefined4 **)(iVar2 + 0x4e));
        if (puVar9 != nullptr) {
          uVar5 = *(int *)(iVar2 + 0x46) * 6;
          puVar7 = (byte *)((int)puVar7 + 0x52);
          memmove(puVar7, puVar9, uVar5); /* compiler REP MOVS byte copy */
        }
        local_14 = local_14 + iVar4;
        local_18 = local_18 + 1;
        iVar3 = iVar3 + 0x52;
      } while (local_18 < STField<int>(this,0x226));
    }
    if (local_10 != 0) {
      *(int *)(local_8 + 0x3d + (int)local_c) = local_10;
      puVar7 = (byte *)(local_8 + 0x41 + (int)local_c);
      puVar9 = (byte *)(STField<undefined4 *>(this,0x23b));
      puVar10 = puVar7;
      for (iVar3 = (STField<int>(this,0x237) * 3 & 0x1fffffffU) << 1; iVar3 != 0;
          iVar3 = iVar3 + -1) {
        *puVar10 = *puVar9;
        puVar9 = (byte *)(puVar9 + 1);
        puVar10 = puVar10 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (byte *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      iVar3 = STField<int>(this,0x237);
      puVar9 = (byte *)(STField<undefined4 *>(this,0x23f));
      puVar7 = (byte *)(puVar7 + iVar3 * 6);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar9;
        puVar9 = (byte *)(puVar9 + 1);
        puVar7 = (byte *)(puVar7 + 1);
      }
    }
  }
  *param_1 = local_8 + 0x3d + local_10;
  return local_c;
}

// 00601D10 FUN_00601d10
#line 4 "decomp/ST.exe/functions/00601D10/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00601500 -> 00601D10 @ 00601B22;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500 parameter param_7 |
   00615FD0 -> 00601D10 @ 0061608F; MOVSX at 0061607F establishes signed source width 2 | 00615FD0
   -> 00601D10 @ 006160D0; MOVSX at 006160C0 establishes signed source width 2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 005F5700 -> 00601D10 @ 005F5980; unproven partial register write at 005F594A | 00601500
   -> 00601D10 @ 00601B22;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500 parameter param_10 |
   00615FD0 -> 00601D10 @ 0061608F; unproven partial register write at 0061605A | 00615FD0 ->
   00601D10 @ 006160D0; unproven partial register write at 0061609B | 00625730 -> 00601D10 @
   00625A8B; literal 65535 at 00625A76 | 00625730 -> 00601D10 @ 00625DCD; literal 65535 at 00625DB8
   | 0063E700 -> 00601D10 @ 0063E819; unproven partial register write at 0063E7FB | 0063E700 ->
   00601D10 @ 0063E8B6; unproven partial register write at 0063E898 | 0063E9C0 -> 00601D10 @
   0063ED56; unproven partial register write at 0063ED2B | 0063E9C0 -> 00601D10 @ 0063EDDD; unproven
   partial register write at 0063EDB2 | 0063E9C0 -> 00601D10 @ 0063EF70; unproven partial register
   write at 0063EF45

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00601500 -> 00601D10 @ 00601B22;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500 parameter param_8

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00601500 -> 00601D10 @ 00601B22;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500 parameter param_9

   [STPrototypeApplier] Propagated parameter 5.
   Evidence: 00601500 -> 00601D10 @ 00601B22;
   SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00601500::FUN_00601500 parameter param_11 */

void st::fn_00601D10(int param_1,int param_2,int param_3,short param_4,ushort param_5,int param_6,
                 undefined4 param_7)

{
  int iVar1;
  undefined4 local_40 [5];
  int *local_2c;
  int local_20 [3];
  ushort local_14;
  short local_12;

  if (param_3 != 0) {
    memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
    iVar1 = 0;
    memset(local_40, 0, 0x20); /* compiler bulk-zero initialization */
    local_20[2] = param_1;
    local_20[0] = param_2;
    local_14 = param_5;
    local_12 = param_4;
    local_40[2] = *(undefined4 *)(param_3 + 8);
    local_20[1] = param_6;
    local_2c = local_20;
    local_40[3] = 2;
    local_40[4] = param_7;
    (*g_playSystem_00802A38->vtable->SendMessage)
              ((SystemWithNamedObjClassTy *)g_playSystem_00802A38,(int)local_40);
  }
  return;
}

// 00601DB0 FUN_00601db0
#line 4 "decomp/ST.exe/functions/00601DB0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00601DB0_param_1Enum. Cases:
   CASE_0=0;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189;CASE_DC=220;CASE_DD=221;CASE_DE=222;CASE_DF=223;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

undefined4 st::fn_00601DB0(Global_sub_00601DB0_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_0:
    return 0;
  default:
    return 1;
  case CASE_A6:
  case CASE_A7:
  case CASE_AF:
  case CASE_BD:
    return 3;
  case CASE_DC:
  case CASE_DD:
  case CASE_DE:
  case CASE_DF:
  case CASE_E0:
    return 4;
  case CASE_FD:
    return 2;
  case CASE_FE:
    return 5;
  }
}

// 006023C0 CreateSTDest
#line 4 "decomp/ST.exe/functions/006023C0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CAA14>00404124

   [STObjectFactoryApplier] Central object factory for 0x015A (ST_OBJECT_ST_DEST).
   Evidence: registry[94] at 007CAA10 stores type 0x015A and executable pointer 00404124; allocation
   size 943 uniquely matches /STDestC */

STDestC * __cdecl st::fn_006023C0(void)

{
  STDestC *pSVar1;

  pSVar1 = (STDestC *)st::fn_006B04D0(0x3af);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_0040445D(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 00602700 FUN_00602700
#line 4 "decomp/ST.exe/functions/00602700/decomp.c"
void __thiscall st::fn_00602700(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;

  uVar2 = 0xffffffff;
  pcVar4 = (char *)((int)this + 0x25b);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  memmove(param_1, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 00602740 FUN_00602740
#line 4 "decomp/ST.exe/functions/00602740/decomp.c"
void __thiscall st::fn_00602740(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg1;
  char *pcVar4_mg0;

  uVar2 = 0xffffffff;
  pcVar4_mg0 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar4_mg0 + 1;
  } while (cVar1 != '\0');
  if (0xe < ~uVar2 - 1) {
    st::fn_0072E340((char *)((int)this + 0x25b),param_1,0xe);
    STField<undefined1>(this,0x269) = 0;
    return;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4_mg1 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4_mg1 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4_mg1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4_mg1 + -uVar2;
  pcVar5 = (char *)((int)this + 0x25b);
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 006027F0 FUN_006027f0
#line 4 "decomp/ST.exe/functions/006027F0/decomp.c"
void __thiscall st::fn_006027F0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar4_mg1;
  char *pcVar4_mg0;

  uVar2 = 0xffffffff;
  pcVar4_mg0 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar4_mg0 + 1;
  } while (cVar1 != '\0');
  if (0x103 < ~uVar2 - 1) {
    st::fn_0072E340((char *)((int)this + 0x26a),param_1,0x103);
    STField<undefined1>(this,0x36d) = 0;
    return;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar4_mg1 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar4_mg1 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar4_mg1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar4_mg1 + -uVar2;
  pcVar5 = (char *)((int)this + 0x26a);
  memmove(pcVar5, pcVar4, uVar2); /* compiler REP MOVS byte copy */
  return;
}

// 00602880 FUN_00602880
#line 4 "decomp/ST.exe/functions/00602880/decomp.c"
undefined4 st::fn_00602880(void)

{
  return 0xff;
}

// 006028A0 FUN_006028a0
#line 4 "decomp/ST.exe/functions/006028A0/decomp.c"
int __thiscall st::fn_006028A0(void *this,int param_1,int param_2,int param_3)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  int iVar3;
  void *local_8;

  iVar3 = param_2;
  iVar2 = STField<int>(this,0x211);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((((*(int *)(iVar2 + 0x48) <= param_1) && (param_1 <= *(int *)(iVar2 + 0x58))) &&
      (*(int *)(iVar2 + 0x44) <= param_2)) && (param_2 <= *(int *)(iVar2 + 0x54))) {
    local_8 = this;
    iVar2 = st::fn_006DDBD0();
    pVVar1 = g_visibleClass_00802A88;
    if (iVar2 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == nullptr) {
      return iVar2;
    }
    if (DAT_0080874d == -1) {
      return iVar2;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return iVar2;
    }
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_1,iVar3,&param_2,
               (int *)&local_8);
    if (param_3 < 0) {
      return iVar2;
    }
    if (4 < param_3) {
      return iVar2;
    }
    if (param_2 < 0) {
      return iVar2;
    }
    if ((int)pVVar1->field_0030 <= param_2) {
      return iVar2;
    }
    iVar3 = g_centeredOffsets5[param_3] + (int)local_8;
    if (iVar3 < 0) {
      return iVar2;
    }
    if (pVVar1->field_0034 <= iVar3) {
      return iVar2;
    }
    if (pVVar1->field_004C == nullptr) {
      return iVar2;
    }
    if (pVVar1->field_004C[param_2 + iVar3 * pVVar1->field_0030] != 0) {
      return iVar2;
    }
  }
  return 0;
}

// 006029C0 FUN_006029c0
#line 4 "decomp/ST.exe/functions/006029C0/decomp.c"
undefined4 st::fn_006029C0(void)

{
  undefined1 *this;
  short sVar1;
  int local_EAX_41;
  char *text;
  int iVar3;
  int iVar2;
  InternalExceptionFrame local_50;
  AnonShape_006029C0_E1371936 *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_EAX_41 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (local_EAX_41 == 0) {
    if (local_c->field_0241 == 1) {
      text = (&PTR_s_Dest4_0_007cec00)[local_c->field_0372];
    }
    else {
      text = (&PTR_s_Dest1_0_007cebec)[local_c->field_0372];
    }
    this = &local_c->field_0x1d5;
    iVar3 = st::fn_00404183((STT3DSprC *)this,0xe,PTR_00806774,text,CASE_1D);
    if (iVar3 == 0) {
      st::fn_00405AA6(this,'\x0e');
      st::fn_00401064((STT3DSprC *)this,'\x0e',local_c->field_0387);
      st::fn_00405240((STT3DSprC *)this,0xe,g_playSystem_00802A38->field_00E4);
      st::fn_00405CA9((STT3DSprC *)this,PTR_008073cc);
      local_c->field_037A = 1;
      if (-1 < local_c->field_0249) {
        iVar3 = st::fn_00404183
                          ((STT3DSprC *)this,0xc,PTR_00806774,
                           (&PTR_s_dest0s0_007cec3c)[local_c->field_0249 + local_c->field_0372 * 8],
                           CASE_1D);
        if (iVar3 != 0) {
          return local_8;
        }
        st::fn_00401064((STT3DSprC *)this,'\f',local_c->field_038F);
        st::fn_00405AA6(this,'\f');
        st::fn_004030BC((STT3DSprC *)this,'\f');
        st::fn_00405240((STT3DSprC *)this,0xc,g_playSystem_00802A38->field_00E4);
        st::fn_006E9EF0(local_c->field_0211,local_c->field_01ED,0xc,1,0,0,30000);
      }
      local_c->field_036E = 2;
      sVar1 = PTR_00806724->entryCount;
      local_c->field_039F = 0xff;
      local_c->field_0397 = sVar1 + -1;
      iVar2 = st::fn_004052CC((STT3DSprC *)this);
      local_c->field_039B = iVar2;
      g_currentExceptionFrame = local_50.previous;
      return 1;
    }
  }
  else {
    g_currentExceptionFrame = local_50.previous;
  }
  return local_8;
}

// 00603090 FUN_00603090
#line 4 "decomp/ST.exe/functions/00603090/decomp.c"
void __thiscall st::fn_00603090(void *this,int param_1)

{
  short sVar1;

  if ((STField<int>(this,0x36e) == 0) && (param_1 != 0)) {
    sVar1 = PTR_00806724->entryCount;
    STField<undefined1>(this,0x39f) = 0xff;
    STField<int>(this,0x397) = sVar1 + -1;
    STField<undefined4>(this,0x36e) = 2;
  }
  if ((STField<int>(this,0x36e) == 1) && (param_1 == 0)) {
    STField<undefined4>(this,0x397) = 0;
    STField<undefined1>(this,0x39f) = 1;
    STField<undefined4>(this,0x36e) = 2;
  }
  return;
}

// 006033D0 FUN_006033d0
#line 4 "decomp/ST.exe/functions/006033D0/decomp.c"
void __thiscall st::fn_006033D0(void *this,undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;

  if (STField<int>(this,0x36e) != 0) {
    *param_1 = 4;
    param_1[1] = STField<undefined1>(this,0x21d);
    param_1[2] = 1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (**(code **)(*(int *)this + 0x2c))();
    *(undefined4 *)(param_1 + 3) = uVar2;
    bVar1 = st::fn_004049B7(STField<char>(this,0x24));
    param_1[7] = bVar1;
    *(undefined4 *)(param_1 + 8) = STField<undefined4>(this,0x18);
  }
  st::fn_0072E340(param_1 + 0xc,(char *)((int)this + 0x25b),0xe);
  param_1[0x1b] = 100;
  if (STField<int>(this,0x36e) != 0) {
    param_1[0x1d] = 1;
  }
  return;
}

// 00603470 FUN_00603470
#line 4 "decomp/ST.exe/functions/00603470/decomp.c"
void __thiscall st::fn_00603470(void *this,AnonShape_00603470_D413D02D *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)param_1 = uVar3;
  bVar2 = st::fn_004049B7(STField<char>(this,0x24));
  param_1->field_0x4 = bVar2;
  param_1->field_0005 = 4;
  uVar1 = STField<undefined1>(this,0x21d);
  param_1->field_0006 = 0;
  *(undefined1 *)(param_1 + 1) = uVar1;
  if (STField<int>(this,0x36e) != 0) {
    param_1->field_0007 = 1;
  }
  return;
}

// 006034E0 FUN_006034e0
#line 4 "decomp/ST.exe/functions/006034E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0064DDA0 -> 006034E0 @ 0064DE5A; AiEventClassTy::_CreateDest parameter param_3; MOVSX
   at 0064DE10 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=0060353F MOV DX,word ptr
   [EBP + 0xc]

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=00603549 MOV AX,word ptr
   [EBP + 0x10]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0064DDA0 -> 006034E0 @ 0064DE5A; AiEventClassTy::_CreateDest parameter param_2; MOVSX
   at 0064DE51 establishes signed source width 2 */

void __cdecl
st::fn_006034E0(short param_1,ushort param_2,ushort param_3,int param_4,int param_5,char *param_6,
            char *param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar7;
  uint local_144 [5];
  int local_130;
  int local_12c;
  undefined4 local_128;
  undefined4 local_124;
  short local_120;
  ushort local_11e;
  ushort local_11c;
  char local_11a [14];
  undefined1 local_10c;
  char local_10b [259];
  undefined1 local_8;
  char *pcVar5_mg1;
  char *pcVar5_mg0;
  char *pcVar5_mg4;
  char *pcVar5_mg3;

  memset(local_144, 0, 0x13d); /* compiler bulk-zero initialization */
  local_144[3] = 1;
  local_144[0] = 0x1b8;
  local_144[1] = 0;
  local_144[2] = 0;
  local_130 = param_4;
  local_144[4] = (uint)(param_4 == 0);
  local_12c = param_5;
  local_120 = param_1;
  local_11e = param_2;
  local_11c = param_3;
  local_124 = param_8;
  uVar3 = 0xffffffff;
  pcVar5_mg0 = param_6;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5_mg0;
    pcVar5_mg0 = pcVar5_mg0 + 1;
  } while (cVar1 != '\0');
  local_128 = 0;
  if (~uVar3 - 1 < 0xf) {
    uVar3 = 0xffffffff;
    do {
      pcVar5_mg1 = param_6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5_mg1 = param_6 + 1;
      cVar1 = *param_6;
      param_6 = pcVar5_mg1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5_mg1 + -uVar3;
    pcVar7 = local_11a;
    memmove(pcVar7, pcVar5, uVar3); /* compiler REP MOVS byte copy */
    uVar4 = 0;
  }
  else {
    st::fn_0072E340(local_11a,param_6,0xe);
    local_10c = 0;
  }
  uVar3 = 0xffffffff;
  pcVar5_mg3 = param_7;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5_mg3;
    pcVar5_mg3 = pcVar5_mg3 + 1;
  } while (cVar1 != '\0');
  if (~uVar3 - 1 < 0x104) {
    uVar3 = 0xffffffff;
    do {
      pcVar5_mg4 = param_7;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5_mg4 = param_7 + 1;
      cVar1 = *param_7;
      param_7 = pcVar5_mg4;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar5_mg4 + -uVar3;
    pcVar7 = local_10b;
    memmove(pcVar7, pcVar5, uVar3); /* compiler REP MOVS byte copy */
  }
  else {
    st::fn_0072E340(local_10b,param_7,0x103);
    local_8 = 0;
  }
  g_playSystem_00802A38->vfunc_08(0x15a,0,0,(short)local_144,0);
  return;
}

// 006036A0 FUN_006036a0
#line 4 "decomp/ST.exe/functions/006036A0/decomp.c"
undefined4 __cdecl st::fn_006036A0(short param_1,short param_2,short param_3,int param_4)

{
  int iVar1;

  iVar1 = st::fn_00404D3B(param_1,param_2,param_3);
  if (iVar1 != 0) {
    if (param_4 == 0) {
      return 1;
    }
    iVar1 = st::fn_00404D3B(param_1,param_2 + 1,param_3);
    if (iVar1 != 0) {
      iVar1 = st::fn_00404D3B(param_1 + 1,param_2,param_3);
      if ((iVar1 != 0) && (iVar1 = st::fn_00404D3B(param_1 + 1,param_2 + 1,param_3), iVar1 != 0))
      {
        return 1;
      }
    }
  }
  return 0;
}

// 00604050 CreateSTExplosion
#line 4 "decomp/ST.exe/functions/00604050/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA7CC>00405079

   [STObjectFactoryApplier] Central object factory for 0x0124 (ST_OBJECT_ST_EXPLOSION).
   Evidence: registry[21] at 007CA7C8 stores type 0x0124 and executable pointer 00405079; allocation
   size 703 uniquely matches /STExplosion */

STExplosion * __cdecl st::fn_00604050(void)

{
  STExplosion *pSVar1;

  pSVar1 = (STExplosion *)st::fn_006B04D0(0x2bf);
  if (pSVar1 != nullptr) {
    pSVar1 = st::fn_004053CB(pSVar1);
    return pSVar1;
  }
  return nullptr;
}

// 00604160 FUN_00604160
#line 4 "decomp/ST.exe/functions/00604160/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 00604160 returns return of sub_006E60A0 @ 00604186 */

int __fastcall st::fn_00604160(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 006042D0 FUN_006042d0
#line 4 "decomp/ST.exe/functions/006042D0/decomp.c"
void __thiscall st::fn_006042D0(void *this,STMessageId param_1)

{
  int iVar1;
  int iVar2;
  STMessage *pSVar3;
  undefined4 *puVar4;
  STMessage local_24;

  iVar2 = 0;
  pSVar3 = &local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    pSVar3->unknown_00 = 0;
    pSVar3 = (STMessage *)&pSVar3->unknown_04;
  }
  local_24.id = param_1;
  if (0 < STField<int>(this,0x269)) {
    puVar4 = (undefined4 *)((int)this + 0x219);
    do {
      if ((STParticleC *)*puVar4 != nullptr) {
        st::fn_00405C9A((STParticleC *)*puVar4,&local_24);
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 < STField<int>(this,0x269));
  }
  return;
}

// 00604820 FUN_00604820
#line 4 "decomp/ST.exe/functions/00604820/decomp.c"
void __fastcall st::fn_00604820(int param_1)

{
  undefined4 *puVar1;
  int iVar2;

  iVar2 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (0 < *(int *)(param_1 + 0x269)) {
    puVar1 = (undefined4 *)(param_1 + 0x219);
    do {
      if ((STParticleC *)*puVar1 != nullptr) {
        st::fn_004058D0((STParticleC *)*puVar1,1);
      }
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    } while (iVar2 < *(int *)(param_1 + 0x269));
  }
  return;
}

// 00604870 FUN_00604870
#line 4 "decomp/ST.exe/functions/00604870/decomp.c"
uint __thiscall st::fn_00604870(void *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;

  if (STField<int>(this,0x215) == 0) {
    pDVar1 = st::fn_006AE290(nullptr,10,0x20,0x14);
    STField<DArrayTy *>(this,0x215) = pDVar1;
  }
  if (STField<DArrayTy *>(this,0x215) != nullptr) {
    uVar2 = st::fn_006AE1C0(STField<DArrayTy *>(this,0x215),param_1);
    return uVar2;
  }
  return 0xffffffff;
}

// 006048E0 FUN_006048e0
#line 4 "decomp/ST.exe/functions/006048E0/decomp.c"
int __fastcall st::fn_006048E0(AnonShape_006048E0_C1705B76 *param_1)

{
  uint index;
  DArrayTy *pDVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;

  iVar4 = 0;
  if ((param_1->field_0215 != nullptr) &&
     (index = param_1->field_0215->count, 0 < (int)index)) {
    while (index = index - 1, -1 < (int)index) {
      pDVar1 = param_1->field_0215;
      if (index < pDVar1->count) {
        pvVar2 = DArrayAt<void>(pDVar1, index);
      }
      else {
        pvVar2 = nullptr;
      }
      if ((STField<int>(pvVar2,0x10) == 10) &&
         (iVar3 = st::fn_00404C37(param_1,STField<int>(pvVar2,0x14)), iVar3 != 0)) {
        iVar4 = iVar4 + 1;
      }
      st::fn_006B0C70(param_1->field_0215,index);
    }
  }
  return iVar4;
}

// 00604A00 FUN_00604a00
#line 4 "decomp/ST.exe/functions/00604A00/decomp.c"
undefined4 __thiscall st::fn_00604A00(void *this,int param_1)

{
  STParticleC *this_00;
  undefined4 uVar1;
  int iVar2;
  STMessage *pSVar3;
  STMessage local_24;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((-1 < param_1) && (param_1 <= STField<int>(this,0x269))) &&
     (this_00 = *(STParticleC **)((int)this + param_1 * 4 + 0x219), this_00 != nullptr))
  {
    pSVar3 = &local_24;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      pSVar3->unknown_00 = 0;
      pSVar3 = (STMessage *)&pSVar3->unknown_04;
    }
    local_24.id = MESS_SHARED_0003;
    st::fn_00405C9A(this_00,&local_24);
    st::fn_0072E2B0((HoloTy *)this_00);
    uVar1 = 1;
    *(undefined4 *)((int)this + param_1 * 4 + 0x219) = 0;
  }
  return uVar1;
}

// 00604EE0 FUN_00604ee0
#line 4 "decomp/ST.exe/functions/00604EE0/decomp.c"
int __thiscall st::fn_00604EE0(void *this,int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  STMessage *pSVar4;
  int *piVar5;
  STMessage local_2c;
  void *local_c;
  int local_8;

  piVar5 = param_1;
  pSVar4 = &local_2c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    pSVar4->unknown_00 = 0;
    pSVar4 = (STMessage *)&pSVar4->unknown_04;
  }
  iVar2 = 0;
  local_8 = 0;
  local_2c.id = MESS_ID_CREATE;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = nullptr;
  if (0 < STField<int>(this,0x269)) {
    piVar3 = (int *)((int)this + 0x219);
    local_c = this;
    do {
      if (*piVar3 != 0) {
        puVar1 = st::fn_0040257C();
        *piVar3 = (int)puVar1;
        STField<void *>(puVar1,0xce) = this;
        *(int **)(*piVar3 + 0xd2) = param_1;
        iVar2 = *piVar5;
        local_8 = local_8 + 4 + iVar2;
        local_2c.arg0.ptr = piVar5 + 1;
        st::fn_00405C9A((STParticleC *)*piVar3,&local_2c);
        piVar5 = (int *)((int)(piVar5 + 1) + iVar2);
        iVar2 = local_8;
        this = local_c;
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (int *)((int)param_1 + 1);
      piVar3 = piVar3 + 1;
    } while ((int)param_1 < STField<int>(this,0x269));
    return iVar2;
  }
  return 0;
}

// 00604FC0 FUN_00604fc0
#line 4 "decomp/ST.exe/functions/00604FC0/decomp.c"
undefined4 __thiscall st::fn_00604FC0(void *this,AnonShape_00604A90_035626E6 *param_1)

{
  DArrayTy *pDVar1;
  int *piVar2;
  int iVar3;
  AnonShape_00604A90_035626E6 *pAVar5;
  byte *puVar6;
  uint uVar7;
  byte *puVar8;
  int *piVar9;
  int *piVar10;

  pAVar5 = param_1;
  puVar6 = (byte *)((int)this + 0x1d5);
  memmove(puVar6, pAVar5, 0x40); /* compiler REP MOVS byte copy */
  iVar3 = 0;
  STField<undefined4>(this,0x215) = *(undefined4 *)&param_1->field_0x40;
  puVar6 = (byte *)&param_1->field_0x44;
  puVar8 = (byte *)((int)this + 0x219);
  memmove(puVar8, puVar6, 0x50); /* compiler REP MOVS byte copy */
  piVar9 = (int *)&param_1->field_0xe2;
  STField<undefined4>(this,0x269) = *(undefined4 *)&param_1->field_0x94;
  STField<undefined1>(this,0x26d) = param_1->field_0x98;
  STField<undefined4>(this,0x26e) = param_1->field_0099;
  STField<undefined4>(this,0x2b7) = param_1->field_00DE;
  STField<undefined4>(this,699) = 0;
  STField<undefined4>(this,0x272) = param_1->field_009D;
  STField<undefined4>(this,0x276) = param_1->field_00A1;
  STField<undefined4>(this,0x27a) = param_1->field_00A5;
  STField<undefined4>(this,0x27e) = param_1->field_00A9;
  if (STField<int>(this,0x215) != 0) {
    iVar3 = *piVar9;
    pDVar1 = st::fn_006B0060(nullptr,(uint *)&param_1[1].field_0x2);
    STField<DArrayTy *>(this,0x215) = pDVar1;
    piVar9 = (int *)(&param_1[1].field_0x2 + iVar3);
  }
  iVar3 = STField<int>(this,0x269);
  if (iVar3 != 0) {
    uVar7 = 0;
    if (0 < iVar3) {
      piVar2 = (int *)((int)this + 0x219);
      piVar10 = piVar9;
      do {
        if (*piVar2 != 0) {
          uVar7 = uVar7 + 4 + *piVar10;
          piVar10 = (int *)((int)piVar10 + *piVar10 + 4);
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (uVar7 != 0) {
        piVar2 = st::fn_006AAC70(uVar7);
        STField<int *>(this,0x2b3) = piVar2;
        memmove(piVar2, piVar9, uVar7); /* compiler REP MOVS byte copy */
      }
    }
  }
  return 0;
}

// 006057C0 FUN_006057c0
#line 4 "decomp/ST.exe/functions/006057C0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall st::fn_006057C0(STExplosionC *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;

  pVVar4 = g_visibleClass_00802A88;
  if (param_1->field_02AF != nullptr) {
    if (g_visibleClass_00802A88 != nullptr) {
      iVar6 = param_1->field_0292;
      sVar3 = (short)(iVar6 >> 0x1f);
      if (iVar6 < 0) {
        local_8 = (short)(((short)(iVar6 / 200) + sVar3) -
                         (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        local_8 = (int)(short)(((short)(iVar6 / 200) + sVar3) -
                              (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
      }
      iVar6 = param_1->field_028E;
      sVar3 = (short)(iVar6 >> 0x1f);
      if (iVar6 < 0) {
        iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar3) -
                       (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar3) -
                            (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
      }
      iVar5 = param_1->field_028A;
      sVar3 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            (st::fn_00403F53
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar6,
                        &local_c,&local_10), local_8 < 0)) || ((4 < local_8 || (local_c < 0)))) ||
          (((int)pVVar4->field_0030 <= local_c ||
           ((local_10 = g_centeredOffsets5[local_8] + local_10, local_10 < 0 ||
            (pVVar4->field_0034 <= local_10)))))) ||
         ((pVVar4->field_004C == nullptr ||
          (pVVar4->field_004C[local_c + local_10 * pVVar4->field_0030] != 0)))) {
        if (param_1->field_0286 == 0) {
          st::fn_00402982(param_1->field_02AF,0);
          param_1->field_0286 = 1;
        }
      }
      else if (param_1->field_0286 != 0) {
        st::fn_00403D0F(param_1->field_02AF);
        param_1->field_0286 = 0;
      }
    }
    if (param_1->field_0286 == 1) {
      uVar2 = param_1->field_0296;
      puVar1 = &param_1->field_0282;
      if ((int)uVar2 < (int)(&DAT_007cee44)[param_1->field_0282]) {
        st::fn_00401064(param_1->field_02AF,'\r',uVar2);
        st::fn_004030BC(param_1->field_02AF,'\r');
        st::fn_004045D9
                  (param_1->field_02AF,(float)param_1->field_028A * _DAT_007904f8 * _DAT_007904f0,
                   (float)param_1->field_028E * _DAT_007904f8 * _DAT_007904f0,
                   (float)param_1->field_0292 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      }
      else if (uVar2 == (&DAT_007cee44)[param_1->field_0282]) {
        st::fn_00404264(param_1->field_02AF,0xd);
      }
      iVar6 = param_1->field_0296 + 1;
      param_1->field_0296 = iVar6;
      if (*(int *)(&DAT_007cedf4 + *puVar1 * 4) <= iVar6) {
        if ((iVar6 == *(int *)(&DAT_007cedf4 + *puVar1 * 4)) &&
           (iVar6 = st::fn_00405BDC(param_1,puVar1,0,'\x01'), iVar6 == 0)) {
          param_1->field_029E = 1;
        }
        if (param_1->field_029E != '\0') {
          st::fn_00401064(param_1->field_02AF,'\x0f',param_1->field_029F);
          st::fn_004030BC(param_1->field_02AF,'\x0f');
          if ((g_playSystem_00802A38->field_00E4 & 1) != 0) {
            param_1->field_029F = param_1->field_029F + 1;
          }
          if (param_1->field_02A3 <= (int)param_1->field_029F) {
            param_1->field_029F = 0;
            param_1->field_029E = 0;
            st::fn_00404264(param_1->field_02AF,0xf);
          }
        }
      }
      if (*(int *)(&DAT_007cee1c + *puVar1 * 4) <= param_1->field_0296) {
        st::fn_0040514B((STExplosion *)param_1);
      }
    }
    return;
  }
  return;
}

// 00605B60 FUN_00605b60
#line 4 "decomp/ST.exe/functions/00605B60/decomp.c"
int __thiscall st::fn_00605B60(void *this,uint param_1,uint param_2,int *param_3,int param_4)

{
  void *this_00;
  int local_EAX_24;
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  STMessage *pSVar9;
  undefined4 *puVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  char in_stack_00000020;
  int local_ec [20];
  STMessage local_9c;
  undefined4 local_7c;
  undefined4 local_78 [5];
  undefined1 *local_64;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  byte local_37;
  int local_36;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  int local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_EAX_24 = st::fn_004049B7(in_stack_00000020);
  local_24 = (int)(byte)local_EAX_24;
  local_c = (uint)param_3 & 0xffff;
  uVar5 = (uint)param_3 >> 0x10;
  local_18 = param_2 & 0xffff;
  uVar1 = param_2 >> 0x10;
  local_20 = param_1 >> 0x10;
  local_2c = st::fn_006ACF0D(local_20,uVar1,uVar5,param_1 & 0xffff,local_18,local_c);
  st::fn_00404B0B(param_4,&local_30,&local_7c,&local_1c,&local_14);
  if (param_4 == 0x15) {
    local_7c = 0;
    local_1c = 0;
  }
  uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar4;
  piVar8 = (int *)((uVar4 >> 0x10) % (local_30 - 1U) + 2);
  local_28 = piVar8;
  piVar2 = (int *)st::fn_00403D8C(this,(int)piVar8);
  STField<int *>(this,0x269) = piVar2;
  if (piVar2 == piVar8) {
    if (0 < (int)piVar8) {
      piVar2 = local_ec;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = piVar8;
      do {
        uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (int *)((int)param_3 + -1);
        *piVar2 = (uVar4 >> 0x10) % 6 + 10;
        piVar2 = piVar2 + 1;
      } while (param_3 != nullptr);
    }
    pSVar9 = &local_9c;
    for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
      pSVar9->unknown_00 = 0;
      pSVar9 = (STMessage *)&pSVar9->unknown_04;
    }
    local_9c.id = MESS_ID_CREATE;
    local_8 = 0;
    if (0 < (int)piVar8) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = local_ec;
      local_10 = (undefined4 *)((int)this + 0x219);
      do {
        iVar6 = local_8;
        memset(local_78, 0, 0x46); /* compiler bulk-zero initialization */
        iVar7 = local_2c;
        local_78[0] = 100;
        local_64 = (undefined1 *)*param_3;
        local_78[2] = 0;
        local_78[3] = 0;
        if (local_64 < &DAT_0000000b) {
          if ((byte)local_64 < 5) {
            local_37 = 1;
          }
          else {
            iVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
            STField<int>(this,0x1c) = iVar3;
            local_37 = (byte)((uint)iVar3 >> 0x10) & 1;
          }
        }
        else {
          local_37 = 0;
        }
        if (local_24 == 0) {
          local_5c = local_14;
        }
        else {
          local_5c = local_24;
        }
        if (param_4 == 9) {
          local_5c = 4;
        }
        else if (param_4 == 0x15) {
          local_5c = 2;
        }
        local_36 = iVar6;
        if (local_2c != 0) {
          local_4c = st::fn_006C82A3(local_64,(int)((uVar5 - local_c) * 10000) / local_2c);
          uVar4 = st::fn_006AFF5B(local_4c);
          this_00 = (void *)((int)(uVar4 * iVar7) / 10000);
          if (this_00 == nullptr) {
            local_48 = 0;
          }
          else {
            local_48 = st::fn_006C8290(this_00,(int)((uVar1 - local_18) * 10000) / (int)this_00);
          }
        }
        puVar10 = local_10;
        uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar4;
        local_4c = local_4c + (-0x46 - (uVar4 >> 0x10) % 0x29);
        uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar4;
        local_48 = local_48 + (0x14 - (uVar4 >> 0x10) % 0x29);
        local_58 = local_20;
        switch(local_64) {
        case nullptr:
        case (undefined1 *)0x1:
        case (undefined1 *)0x2:
          local_40 = 1000;
          uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(this,0x1c) = uVar4;
          local_44 = (uVar4 >> 0x10) % 3 + 6;
          break;
        case (undefined1 *)0x3:
        case (undefined1 *)0x4:
        case (undefined1 *)0x5:
          local_40 = 0xfa;
          uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(this,0x1c) = uVar4;
          local_44 = (uVar4 >> 0x10 & 3) + 6;
          break;
        case (undefined1 *)0x6:
        case (undefined1 *)0x7:
        case (undefined1 *)0x8:
        case (undefined1 *)0x9:
          uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(this,0x1c) = uVar4;
          local_40 = 0x15e;
          local_44 = (uVar4 >> 0x10) % 5 + 6;
          break;
        case (undefined1 *)0xa:
        case (undefined1 *)0xb:
        case (undefined1 *)0xc:
        case (undefined1 *)0xd:
        case (undefined1 *)0xe:
        case (undefined1 *)0xf:
          local_40 = 0x1c2;
          uVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(this,0x1c) = uVar4;
          local_44 = (uVar4 >> 0x10 & 3) + 9;
        }
        local_9c.arg0.ptr = local_78;
        local_54 = uVar1;
        local_50 = uVar5;
        st::fn_00405C9A((STParticleC *)*local_10,&local_9c);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 1;
        local_8 = local_8 + 1;
        local_10 = puVar10 + 1;
        piVar8 = local_28;
      } while (local_8 < (int)local_28);
    }
    return (int)piVar8;
  }
  return -1;
}

// 00606A50 FUN_00606a50
#line 4 "decomp/ST.exe/functions/00606A50/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00606A50_param_1Enum. Cases:
   CASE_1E=30;CASE_2D=45;CASE_3C=60;CASE_4B=75;CASE_5A=90;CASE_69=105;CASE_78=120;CASE_87=135;CASE_96=150;CASE_A5=165;CASE_C3=195;CASE_D2=210;CASE_E1=225;CASE_F0=240;CASE_FF=255;CASE_10E=270;CASE_11D=285;CASE_12C=300;CASE_13B=315;CASE_14A=330
    */

undefined4 st::fn_00606A50(Global_sub_00606A50_param_1Enum param_1)

{
  if (0xb4 < (int)param_1) {
    switch(param_1) {
    case CASE_C3:
      goto switchD_00606a6e_caseD_a5;
    default:
switchD_00606a6e_caseD_0:
      return 0;
    case CASE_D2:
    case CASE_E1:
    case CASE_F0:
      return 5;
    case CASE_FF:
    case CASE_10E:
    case CASE_11D:
      return 6;
    case CASE_12C:
    case CASE_13B:
    case CASE_14A:
      return 7;
    }
  }
  if (param_1 != 0xb4) {
    switch(param_1) {
    default:
      goto switchD_00606a6e_caseD_0;
    case CASE_1E:
    case CASE_2D:
    case CASE_3C:
      return 1;
    case CASE_4B:
    case CASE_5A:
    case CASE_69:
      return 2;
    case CASE_78:
    case CASE_87:
    case CASE_96:
      return 3;
    case CASE_A5:
      break;
    }
  }
switchD_00606a6e_caseD_a5:
  return 4;
}

// 00606CD0 FUN_00606cd0
#line 4 "decomp/ST.exe/functions/00606CD0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00606CD0_param_1Enum. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_70=112;CASE_71=113;CASE_78=120
    */

undefined4
st::fn_00606CD0(Global_sub_00606CD0_param_1Enum param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5)

{
  switch(param_1) {
  case CASE_32:
  case CASE_33:
  case CASE_34:
  case CASE_35:
  case CASE_37:
  case CASE_3B:
  case CASE_3C:
  case CASE_3D:
    *param_2 = 0xb;
    *param_3 = 5;
    *param_4 = 6;
    *param_5 = 1;
    return 0xbe;
  case CASE_36:
  case CASE_38:
  case CASE_39:
  case CASE_3A:
    *param_2 = 5;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 1;
    return 100;
  case CASE_3E:
  case CASE_3F:
  case CASE_40:
  case CASE_42:
  case CASE_44:
  case CASE_45:
    *param_2 = 5;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 1;
    return 100;
  case CASE_41:
  case CASE_43:
    *param_2 = 10;
    *param_3 = 4;
    *param_4 = 5;
    *param_5 = 1;
    return 0xbe;
  case CASE_46:
  case CASE_47:
  case CASE_49:
  case CASE_4A:
  case CASE_4B:
  case CASE_4C:
  case CASE_4E:
  case CASE_4F:
  case CASE_50:
  case CASE_51:
    *param_2 = 5;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 2;
    return 100;
  case CASE_48:
  case CASE_4D:
  case CASE_52:
  case CASE_78:
    *param_2 = 0xb;
    *param_3 = 4;
    *param_4 = 6;
    *param_5 = 2;
    return 0xbe;
  case CASE_53:
  case CASE_5C:
  case CASE_5D:
  case CASE_63:
  case CASE_64:
  case CASE_6E:
    *param_2 = 4;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 3;
    return 0xbe;
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
  case CASE_5E:
  case CASE_61:
  case CASE_65:
  case CASE_66:
  case CASE_67:
  case CASE_68:
  case CASE_69:
  case CASE_6A:
  case CASE_6B:
  case CASE_6C:
  case CASE_70:
  case CASE_71:
    *param_2 = 3;
    *param_3 = 0;
    *param_4 = 3;
    *param_5 = 3;
    return 0x5a;
  case CASE_5B:
  case CASE_5F:
  case CASE_60:
  case CASE_62:
  case CASE_6D:
    *param_2 = 3;
    *param_3 = 1;
    *param_4 = 3;
    *param_5 = 3;
    return 0x78;
  default:
    *param_2 = 5;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 2;
    return 100;
  }
}

// 00606FD0 FUN_00606fd0
#line 4 "decomp/ST.exe/functions/00606FD0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00606FD0_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24
    */

undefined4
st::fn_00606FD0(Global_sub_00606FD0_param_1Enum param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5)

{
  switch(param_1) {
  case CASE_1:
    *param_2 = 4;
    *param_3 = 0;
    *param_4 = 5;
    *param_5 = 1;
    return 0x50;
  case CASE_2:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 1;
    return 0x78;
  case CASE_3:
  case CASE_4:
  case CASE_6:
  case CASE_7:
  case CASE_8:
  case CASE_C:
    *param_2 = 7;
    *param_3 = 3;
    *param_4 = 5;
    *param_5 = 1;
    return 0xd2;
  case CASE_5:
  case CASE_A:
  case CASE_B:
    *param_2 = 7;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 1;
    return 0xb4;
  default:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 2;
    return 0x28;
  case CASE_D:
  case CASE_E:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 2;
    return 0x78;
  case CASE_F:
  case CASE_11:
  case CASE_12:
  case CASE_13:
  case CASE_14:
  case CASE_15:
  case CASE_16:
  case CASE_18:
    *param_2 = 7;
    *param_3 = 3;
    *param_4 = 5;
    *param_5 = 2;
    return 0xd2;
  case CASE_10:
  case CASE_17:
    *param_2 = 6;
    *param_3 = 2;
    *param_4 = 3;
    *param_5 = 2;
    return 0xb4;
  }
}

// 00607200 FUN_00607200
#line 4 "decomp/ST.exe/functions/00607200/decomp.c"
int __thiscall
st::fn_00607200(void *this,int param_1,int param_2,int param_3,Global_sub_00606CD0_param_1Enum param_4)

{
  int local_EAX_23;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  STMessage *pSVar9;
  undefined4 *puVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  char in_stack_00000020;
  uint local_10c [20];
  STMessage local_bc;
  int local_9c [8];
  int local_7c;
  int local_78;
  uint local_74;
  int local_70;
  int local_6c;
  undefined4 local_68 [5];
  uint local_54;
  Global_sub_00606CD0_param_1Enum local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  byte local_27;
  int local_26;
  undefined4 *local_20;
  int local_1c;
  uint *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_EAX_23 = st::fn_004049B7(in_stack_00000020);
  local_10 = (int)(byte)local_EAX_23;
  local_14 = st::fn_00401221(param_4,&local_6c,&local_78,&local_1c,&local_7c);
  uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar1;
  iVar7 = (uVar1 >> 0x10) % (local_6c + 1U) + 9;
  local_c = iVar7;
  iVar2 = st::fn_00403D8C(this,iVar7);
  STField<int>(this,0x269) = iVar2;
  if (iVar2 != iVar7) {
    return -1;
  }
  memset(local_9c, 0, 0x20); /* compiler bulk-zero initialization */
  local_8 = 0;
  if (0 < local_78) {
    puVar4 = local_10c;
    local_8 = local_78;
    iVar7 = local_78;
    do {
      uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar1;
      uVar1 = (uVar1 >> 0x10) % 7;
      if (0 < local_9c[uVar1]) {
        iVar3 = 0;
        do {
          if (6 < iVar3) break;
          uVar1 = uVar1 + 1;
          if (6 < (int)uVar1) {
            uVar1 = 0;
          }
          iVar3 = iVar3 + 1;
        } while (local_9c[uVar1] != 0);
      }
      iVar3 = local_9c[uVar1];
      *puVar4 = uVar1;
      local_9c[uVar1] = iVar3 + 1;
      if (local_10 == 1) {
        uVar1 = uVar1 | 0x800;
LAB_0060731e:
        *puVar4 = uVar1;
      }
      else {
        if (local_10 == 2) {
          uVar1 = uVar1 | 0x200;
          goto LAB_0060731e;
        }
        if (local_10 == 3) {
          uVar1 = uVar1 | 0x4000;
          goto LAB_0060731e;
        }
      }
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = 0;
  if (0 < local_1c) {
    puVar4 = local_10c + local_8;
    do {
      iVar3 = local_10;
      if (local_8 == local_c) break;
      *puVar4 = 0;
      if (iVar3 == 1) {
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar1 = (uint)CONCAT11(8,(char)((uVar1 >> 0x10) % 9) + '\a');
LAB_0060740b:
        *puVar4 = uVar1;
      }
      else {
        if (iVar3 == 2) {
          uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(this,0x1c) = uVar1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          uVar1 = (uint)CONCAT11(2,(char)((uVar1 >> 0x10) % 9) + '\a');
          goto LAB_0060740b;
        }
        if (iVar3 == 3) {
          uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(this,0x1c) = uVar1;
          if ((uVar1 & 0x30000) != 0) {
            uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
            STField<uint>(this,0x1c) = uVar1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            uVar1 = (uint)CONCAT11(0x20,(char)((uVar1 >> 0x10) % 5) + '\x05');
            goto LAB_0060740b;
          }
          iVar3 = uVar1 * 0x41c64e6d + 0x3039;
          STField<int>(this,0x1c) = iVar3;
          *puVar4 = (uint)CONCAT11(0x40,((byte)((uint)iVar3 >> 0x10) & 1) + 7);
        }
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_1c);
  }
  iVar7 = 0;
  puVar4 = local_10c + local_8;
  do {
    if (local_8 == local_c) break;
    if (local_10 == 3) {
      uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar1;
      if ((uVar1 >> 0x10) % 3 != 0) {
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar1 = (uint)CONCAT11(0x10,(char)((ulonglong)(uVar1 >> 0x10) % 3));
        goto LAB_006074c8;
      }
      iVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<int>(this,0x1c) = iVar3;
      *puVar4 = (uint)CONCAT11(0x20,((byte)((uint)iVar3 >> 0x10) & 3) + 6);
    }
    else {
      uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar1;
      uVar1 = (uVar1 >> 0x10) % 7 + 9;
LAB_006074c8:
      *puVar4 = uVar1;
    }
    puVar4 = puVar4 + 1;
    local_8 = local_8 + 1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x14);
  pSVar9 = &local_bc;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    pSVar9->unknown_00 = 0;
    pSVar9 = (STMessage *)&pSVar9->unknown_04;
  }
  local_bc.id = MESS_ID_CREATE;
  local_8 = 0;
  if (0 < local_c) {
    local_18 = local_10c;
    local_20 = (undefined4 *)((int)this + 0x219);
    do {
      iVar7 = local_8;
      memset(local_68, 0, 0x46); /* compiler bulk-zero initialization */
      local_68[2] = 0;
      local_68[3] = 0;
      local_54 = *local_18;
      local_68[0] = 100;
      local_50 = param_4;
      if ((byte)local_54 < 0xb) {
        if ((byte)local_54 < 5) {
          local_27 = 1;
        }
        else {
          iVar3 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<int>(this,0x1c) = iVar3;
          local_27 = (byte)((uint)iVar3 >> 0x10) & 1;
        }
      }
      else {
        local_27 = 0;
      }
      uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar1;
      local_38 = (uVar1 >> 0x10) % 0x169;
      if (local_10 == 0) {
        local_4c = local_7c;
      }
      else {
        local_4c = local_10;
      }
      local_26 = iVar7;
      if ((iVar7 < 6) || (iVar7 % 3 != 0)) {
        local_74 = st::fn_006AFF5B(local_38);
        local_70 = st::fn_006AFF50(local_38);
        uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar5;
        uVar1 = ((int)(local_14 + (local_14 >> 0x1f & 7U)) >> 3) + 1;
        uVar6 = (int)(((uVar5 >> 0x10) % uVar1 + local_14 / 2) * local_70) / 10000;
        uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar5;
        uVar1 = (int)(((uVar5 >> 0x10) % uVar1 + local_14 / 2) * local_74) / 10000;
        uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar5;
        local_3c = (uVar5 >> 0x10) % 0x29;
        iVar7 = 0x14;
      }
      else {
        st::fn_006AFF5B(local_38);
        st::fn_006AFF50(local_38);
        uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar5;
        uVar1 = ((int)(local_14 + (local_14 >> 0x1f & 7U)) >> 3) + 1;
        uVar6 = (uVar5 >> 0x10) % uVar1;
        uVar5 = uVar5 * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar5;
        uVar1 = (uVar5 >> 0x10) % uVar1;
        uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar5;
        local_3c = (uVar5 >> 0x10) % 0x1f;
        iVar7 = 0x82;
      }
      puVar10 = local_20;
      local_44 = uVar1 + param_2;
      local_48 = uVar6 + param_1;
      local_3c = iVar7 - local_3c;
      uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      local_40 = param_3;
      STField<uint>(this,0x1c) = uVar1;
      local_2c = uVar1 >> 0x10 & 7;
      switch(local_54) {
      case 0:
      case 1:
      case 2:
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar1;
        local_30 = 0x7d;
        local_34 = (uVar1 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        local_30 = 0x87;
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar1;
        local_34 = (uVar1 >> 0x10 & 3) + 1;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar1;
        local_30 = 0x91;
        local_34 = (uVar1 >> 0x10) % 5;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        local_30 = 0x96;
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar1;
        local_34 = (uVar1 >> 0x10) % 3 + 4;
      }
      iVar7 = (local_3c ^ (int)local_3c >> 0x1f) - ((int)local_3c >> 0x1f);
      if (iVar7 < 0x14) {
        if (iVar7 < 10) {
          local_34 = local_34 + 5;
          local_40 = param_3 + 0x5a;
        }
        else {
          local_34 = local_34 + 3;
          local_40 = param_3 + 0x50;
        }
      }
      local_bc.arg0.ptr = local_68;
      st::fn_00405C9A((STParticleC *)*local_20,&local_bc);
      local_8 = local_8 + 1;
      local_18 = local_18 + 1;
      local_20 = puVar10 + 1;
    } while (local_8 < local_c);
  }
  return local_c;
}

// 00607A60 FUN_00607a60
#line 4 "decomp/ST.exe/functions/00607A60/decomp.c"
int __thiscall st::fn_00607A60(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_EAX_23;
  int iVar2;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  STMessage *pSVar6;
  undefined4 *puVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  char in_stack_00000020;
  int local_d0 [20];
  STMessage local_80;
  undefined4 local_60 [5];
  int local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  byte local_1f;
  int local_1e;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_EAX_23 = st::fn_004049B7(in_stack_00000020);
  local_14 = (int)(byte)local_EAX_23;
  uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar2;
  iVar4 = (uVar2 >> 0x10) % 0xb + 9;
  local_c = iVar4;
  iVar2 = st::fn_00403D8C(this,iVar4);
  STField<int>(this,0x269) = iVar2;
  if (iVar2 != iVar4) {
    return -1;
  }
  iVar3 = 0;
  piVar5 = local_d0;
  do {
    if (iVar3 == iVar4) break;
    uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar2;
    iVar3 = iVar3 + 1;
    *piVar5 = (uVar2 >> 0x10) % 5 + 5;
    iVar4 = local_c;
    piVar5 = piVar5 + 1;
  } while (iVar3 < 5);
  local_8 = 0;
  piVar5 = local_d0 + iVar3;
  do {
    iVar1 = local_c;
    if (iVar3 == iVar4) break;
    uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar2;
    iVar3 = iVar3 + 1;
    *piVar5 = (uVar2 >> 0x10) % 7 + 9;
    local_8 = local_8 + 1;
    iVar4 = iVar1;
    piVar5 = piVar5 + 1;
  } while (local_8 < 0x14);
  if ((local_14 < 2) || (2 < local_14)) {
    local_14 = 1;
  }
  local_8 = 0;
  pSVar6 = &local_80;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pSVar6->unknown_00 = 0;
    pSVar6 = (STMessage *)&pSVar6->unknown_04;
  }
  local_80.id = MESS_ID_CREATE;
  if (0 < iVar4) {
    local_10 = local_d0;
    local_18 = (undefined4 *)((int)this + 0x219);
    do {
      iVar4 = local_8;
      memset(local_60, 0, 0x46); /* compiler bulk-zero initialization */
      puVar7 = local_18;
      local_60[2] = 0;
      local_60[3] = 0;
      local_60[0] = 100;
      local_1e = iVar4;
      local_4c = *local_10;
      if ((byte)local_4c < 0xb) {
        if ((byte)local_4c < 5) {
          local_1f = 1;
        }
        else {
          iVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<int>(this,0x1c) = iVar4;
          local_1f = (byte)((uint)iVar4 >> 0x10) & 1;
        }
      }
      else {
        local_1f = 0;
      }
      iVar4 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      local_44 = local_14;
      STField<int>(this,0x1c) = iVar4;
      uVar2 = iVar4 * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar2;
      local_38 = (param_3 - (uVar2 >> 0x10) % 0xb5) + 0x5a;
      uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar2;
      local_40 = (param_1 - (uVar2 >> 0x10) % 0x29) + 0x14;
      uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar2;
      local_3c = (param_2 - (uVar2 >> 0x10) % 0x29) + 0x14;
      uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar2;
      local_30 = (uVar2 >> 0x10) % 0x169;
      uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      STField<uint>(this,0x1c) = uVar2;
      local_34 = 0xf - (uVar2 >> 0x10) % 0x1f;
      switch(local_4c) {
      case 0:
      case 1:
      case 2:
        uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar2;
        local_28 = 0x7d;
        local_2c = (uVar2 >> 0x10) % 3;
        break;
      case 3:
      case 4:
      case 5:
        local_28 = 0x87;
        uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar2;
        local_2c = (uVar2 >> 0x10 & 3) + 2;
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar2;
        local_28 = 0x91;
        local_2c = (uVar2 >> 0x10) % 5 + 3;
        break;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
        local_28 = 0x96;
        uVar2 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar2;
        local_2c = (uVar2 >> 0x10 & 3) + 5;
      }
      local_80.arg0.ptr = local_60;
      st::fn_00405C9A((STParticleC *)*local_18,&local_80);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      local_18 = puVar7 + 1;
      iVar4 = local_c;
    } while (local_8 < local_c);
  }
  return iVar4;
}

// 00607EE0 FUN_00607ee0
#line 4 "decomp/ST.exe/functions/00607EE0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00607EE0_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16;CASE_11=17;CASE_12=18;CASE_13=19;CASE_14=20;CASE_15=21;CASE_16=22;CASE_17=23;CASE_18=24;CASE_19=25;CASE_1A=26;CASE_1B=27;CASE_1C=28;CASE_1D=29;CASE_1E=30;CASE_1F=31;CASE_20=32;CASE_21=33;CASE_22=34;CASE_23=35;CASE_24=36;CASE_26=38;CASE_27=39;CASE_28=40;CASE_2B=43;CASE_FD=253;CASE_FE=254
    */

undefined4
st::fn_00607EE0(Global_sub_00607EE0_param_1Enum param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5,undefined4 *param_6)

{
  *param_6 = 0xffffffff;
  switch(param_1) {
  case CASE_1:
    *param_2 = &DAT_007cee70;
    *param_3 = 4;
    *param_4 = 0;
    *param_5 = 5;
    *param_6 = 1;
    return 0x50;
  case CASE_2:
    *param_3 = 6;
    *param_4 = 0;
    *param_5 = 4;
    *param_6 = 1;
    *param_2 = &DAT_007cee98;
    return 0x78;
  case CASE_3:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 1;
    *param_2 = &DAT_007ceec0;
    return 0xd2;
  case CASE_4:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 1;
    *param_2 = &DAT_007ceee8;
    return 0xd2;
  case CASE_5:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 4;
    *param_6 = 1;
    *param_2 = &DAT_007cef10;
    return 0xb4;
  case CASE_6:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 1;
    *param_2 = &DAT_007cef38;
    return 0xd2;
  case CASE_7:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 6;
    *param_6 = 1;
    *param_2 = &DAT_007cef60;
    return 0xd2;
  case CASE_8:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 6;
    *param_6 = 1;
    *param_2 = &DAT_007cef88;
    return 0xd2;
  case CASE_9:
    *param_3 = 5;
    *param_4 = 0;
    *param_5 = 0;
    *param_2 = &DAT_007cefb0;
    return 0;
  case CASE_A:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 3;
    *param_6 = 1;
    *param_2 = &DAT_007cefd8;
    return 0xb4;
  case CASE_B:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 4;
    *param_6 = 1;
    *param_2 = &DAT_007cf000;
    return 0xb4;
  case CASE_C:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 1;
    *param_2 = &DAT_007cf028;
    return 0xd2;
  case CASE_D:
    *param_3 = 6;
    *param_4 = 1;
    *param_5 = 4;
    *param_6 = 2;
    *param_2 = &DAT_007cf050;
    return 0x78;
  case CASE_E:
    *param_3 = 6;
    *param_4 = 0;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf078;
    return 0x78;
  case CASE_F:
    *param_3 = 7;
    *param_4 = 1;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf0a0;
    return 0xd2;
  case CASE_10:
    *param_3 = 6;
    *param_4 = 2;
    *param_5 = 3;
    *param_6 = 2;
    *param_2 = &DAT_007cf0c8;
    return 0xb4;
  case CASE_11:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf0f0;
    return 0xd2;
  case CASE_12:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf118;
    return 0xd2;
  case CASE_13:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf140;
    return 0xd2;
  case CASE_14:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf168;
    return 0xd2;
  case CASE_15:
    *param_3 = 7;
    *param_4 = 0;
    *param_5 = 3;
    *param_6 = 2;
    *param_2 = &DAT_007cf190;
    return 0xd2;
  case CASE_16:
    *param_3 = 7;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 2;
    *param_2 = &DAT_007cf1b8;
    return 0xd2;
  case CASE_17:
    *param_3 = 6;
    *param_4 = 2;
    *param_5 = 4;
    *param_6 = 2;
    *param_2 = &DAT_007cf1e0;
    return 0xb4;
  case CASE_18:
    *param_3 = 7;
    *param_4 = 2;
    break;
  case CASE_19:
    *param_3 = 3;
    *param_4 = 1;
    *param_5 = 4;
    *param_6 = 3;
    *param_2 = &DAT_007cf230;
    return 0xb4;
  case CASE_1A:
    *param_3 = 4;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 3;
    *param_2 = &DAT_007cf258;
    return 0xaa;
  case CASE_1B:
    *param_3 = 4;
    *param_4 = 3;
    *param_5 = 4;
    *param_6 = 3;
    *param_2 = &DAT_007cf280;
    return 0xd2;
  case CASE_1C:
    *param_3 = 3;
    *param_4 = 0;
    *param_5 = 3;
    *param_6 = 3;
    *param_2 = &DAT_007cf2a8;
    return 0x96;
  case CASE_1D:
    *param_3 = 4;
    *param_4 = 4;
    *param_5 = 3;
    *param_6 = 3;
    *param_2 = &DAT_007cf2d0;
    return 200;
  case CASE_1E:
    *param_3 = 3;
    *param_4 = 0;
    *param_5 = 2;
    *param_6 = 3;
    *param_2 = &DAT_007cf2f8;
    return 0x8c;
  case CASE_1F:
    *param_3 = 4;
    *param_4 = 3;
    *param_5 = 5;
    *param_6 = 3;
    *param_2 = &DAT_007cf320;
    return 0xd2;
  case CASE_20:
  case CASE_2B:
    *param_3 = 4;
    *param_4 = 1;
    *param_5 = 5;
    *param_6 = 3;
    *param_2 = &DAT_007cf348;
    return 0xaf;
  case CASE_21:
    *param_3 = 4;
    *param_4 = 2;
    *param_5 = 5;
    *param_6 = 3;
    *param_2 = &DAT_007cf370;
    return 200;
  case CASE_22:
    *param_3 = 3;
    *param_4 = 2;
    *param_5 = 3;
    *param_6 = 3;
    *param_2 = &DAT_007cf398;
    return 0xaa;
  case CASE_23:
    *param_3 = 3;
    *param_4 = 1;
    *param_5 = 5;
    *param_6 = 3;
    *param_2 = &DAT_007cf3c0;
    return 0xaf;
  case CASE_24:
    *param_3 = 3;
    *param_4 = 0;
    *param_5 = 4;
    *param_6 = 3;
    *param_2 = &DAT_007cf3e8;
    return 0x8c;
  default:
    *param_3 = 7;
    *param_4 = 1;
    break;
  case CASE_26:
    *param_3 = 9;
    *param_4 = 0;
    *param_5 = 1;
    *param_6 = 1;
    *param_2 = &DAT_007cee70;
    return 0xd2;
  case CASE_27:
    *param_3 = 9;
    *param_4 = 0;
    *param_5 = 1;
    *param_6 = 2;
    *param_2 = &DAT_007cf050;
    return 0xd2;
  case CASE_28:
    *param_3 = 9;
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 3;
    *param_2 = &DAT_007cf3c0;
    return 0xd2;
  case CASE_FD:
  case CASE_FE:
    *param_3 = 7;
    *param_4 = 0;
  }
  *param_5 = 5;
  *param_6 = 2;
  *param_2 = &DAT_007cf208;
  return 0xd2;
}

// 00608B50 FUN_00608b50
#line 4 "decomp/ST.exe/functions/00608B50/decomp.c"
int __thiscall
st::fn_00608B50(void *this,uint param_1,uint *param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined1 param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  STMessage *pSVar6;
  uint local_cc [20];
  STMessage local_7c;
  undefined4 local_5c [5];
  uint local_48;
  int local_44;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  int local_1a;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;

  local_14 = (uint)param_2 & 0xffff;
  local_10 = param_1 & 0xffff;
  local_c = (param_3 & 0xffff) - 0x32;
  iVar5 = 0;
  local_8 = 0;
  st::fn_006ACF0D(local_10,local_14,local_c,local_10,local_14,param_3 & 0xffff);
  iVar3 = STField<int>(this,0x1fd);
  if (iVar3 == 0) {
    iVar5 = 3;
    local_8 = 2;
  }
  else if (iVar3 == 1) {
    iVar5 = 1;
    local_8 = 0;
  }
  else if (iVar3 != 2) {
    iVar5 = 9;
    local_8 = 5;
  }
  if (iVar3 == 0) {
    uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
    STField<uint>(this,0x1c) = uVar1;
    iVar5 = (uVar1 >> 0x10) % (iVar5 - 1U) + iVar5;
  }
  pSVar6 = &local_7c;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pSVar6->unknown_00 = 0;
    pSVar6 = (STMessage *)&pSVar6->unknown_04;
  }
  local_7c.id = MESS_ID_CREATE;
  iVar2 = st::fn_00403D8C(this,iVar5);
  if (iVar2 == iVar5) {
    if (0 < local_8) {
      puVar4 = local_cc;
      iVar3 = local_8;
      do {
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar1;
        iVar3 = iVar3 + -1;
        *puVar4 = (uVar1 >> 0x10) % 3;
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0);
    }
    if (local_8 < iVar2) {
      iVar3 = iVar2 - local_8;
      puVar4 = local_cc + local_8;
      do {
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar1;
        iVar3 = iVar3 + -1;
        *puVar4 = (uVar1 >> 0x10) % 3 + 3;
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0);
    }
    iVar3 = 0;
    if (0 < iVar2) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = local_cc;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = (int)this + 0x219;
      do {
        memset(local_5c, 0, 0x46); /* compiler bulk-zero initialization */
        local_1c = param_9;
        local_5c[0] = 100;
        local_5c[1] = 0xff;
        local_5c[2] = 0;
        local_5c[3] = 0;
        if (0 < param_6) {
          local_44 = param_6;
        }
        local_48 = *param_2 | 0x400;
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar1;
        local_20 = uVar1 >> 0x10 & 3;
        local_1b = 1;
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        local_24 = 0x9c4;
        STField<uint>(this,0x1c) = uVar1;
        local_30 = 0x78 - (uVar1 >> 0x10) % 0x3d;
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar1;
        local_2c = (uVar1 >> 0x10) % 0x169;
        local_38 = local_14;
        local_34 = local_c;
        local_3c = local_10;
        uVar1 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
        STField<uint>(this,0x1c) = uVar1;
        local_28 = (uVar1 >> 0x10 & 3) + 9;
        local_7c.arg0.ptr = local_5c;
        local_1a = iVar3;
        st::fn_00405C9A(*(STParticleC **)param_3,&local_7c);
        iVar3 = iVar3 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 4;
      } while (iVar3 < iVar2);
    }
    return iVar2;
  }
  return -1;
}

// 00608E90 FUN_00608e90
#line 4 "decomp/ST.exe/functions/00608E90/decomp.c"
undefined4 __thiscall st::fn_00608E90(void *this,AnonShape_00608E90_523B07BC *param_1)

{
  uint uVar1;
  short sVar2;
  int local_EAX_15;
  int local_EAX_871;
  uint uVar3;
  undefined4 uVar4;
  int iVar2;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  byte *puVar9;
  byte *local_c;
  AnonShape_0060EA30_DCEB68AD *local_8;

  local_EAX_15 = st::fn_00403EBD(this,(STMessage *)param_1);
  if (local_EAX_15 == 0xffff) {
    return 0xffff;
  }
  uVar1 = param_1->field_0010;
  if (3 < uVar1) {
    if (uVar1 == 0x10f) {
      local_c = (byte *)st::fn_00401F6E(this,(uint *)&local_8);
      if (local_c == nullptr) {
        return 0;
      }
      st::fn_004025F9(g_playSystem_00802A38,STField<int *>(this,0x18),local_c,local_8);
      st::fn_006AB060(&local_c);
      return 0;
    }
    if (uVar1 != 0x111) {
      return 0;
    }
    st::fn_004027CF(this);
    return 0;
  }
  if (uVar1 == 3) {
    if (STField<int>(this,0x1f5) == 0x4d) {
      iVar6 = STField<int>(this,0x1f9);
      sVar2 = (short)(iVar6 >> 0x1f);
      if (iVar6 < 0) {
        iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar2) -
                       (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar2) -
                            (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
      }
      iVar7 = STField<int>(this,0x1ed);
      sVar2 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar2) -
                       (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar2) -
                            (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
      }
      iVar5 = STField<int>(this,0x1e9);
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      st::fn_00402554(iVar5,iVar7,iVar6,STField<int>(this,0x18));
    }
    if (STField<int>(this,0x23c) != 0) {
      st::fn_00404BA6((int)this);
    }
    st::fn_004012FD(this);
    return 0;
  }
  if (uVar1 == 0) {
    if ((STField<int>(this,0x221) == 0) &&
       (st::fn_004027CF(this), STField<int>(this,0x221) == 0)) {
      st::fn_00401CC1(this);
      return 0;
    }
    if (STField<int>(this,0x248) == 1) {
      if (STField<uint>(this,0x250) <= g_playSystem_00802A38->field_00E4) {
        if ((STField<int>(this,0x20d) == 5) && (iVar6 = st::fn_0040202C(this), iVar6 == 0)) {
          st::fn_00401CC1(this);
        }
        STField<undefined1>(this,0x22f) = 0;
        STField<undefined4>(this,0x248) = 2;
      }
    }
    else if (STField<int>(this,0x248) == 2) {
      switch(STField<undefined4>(this,0x20d)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        st::fn_00401140(this);
        if ((STField<int>(this,0x1f5) == 0x4d) && ((STField<byte>(this,0x254) & 0x1f) == 0)) {
          if (STField<int>(this,0x209) == 0) {
            st::fn_004027E8(this,0);
          }
          else {
            st::fn_00403E54(this);
          }
        }
        if ((STField<int>(this,0x1f5) == 0x4c) && ((STField<byte>(this,0x254) & 0x3f) == 0)) {
          st::fn_004038E6(this);
        }
        break;
      case 5:
        iVar6 = st::fn_00402351(this);
        if ((0 < iVar6) && (iVar6 == 2)) {
          st::fn_00404F57((int)this);
          uVar1 = g_playSystem_00802A38->field_00E4;
          STField<undefined4>(this,0x248) = 1;
          STField<uint>(this,0x250) = uVar1 + 200;
        }
        break;
      case 6:
        iVar6 = st::fn_00402D47(this);
        if ((0 < iVar6) && (iVar6 == 2)) {
          st::fn_00404BA6((int)this);
          st::fn_00401CC1(this);
        }
      }
      if (STField<char>(this,0x22e) != '\0') {
        if (STField<char>(this,0x225) != '\0') {
          uVar4 = st::fn_00404A02(this);
          STField<char>(this,0x225) = (char)uVar4;
          STField<int>(this,0x254) = STField<int>(this,0x254) + 1;
          return 0;
        }
        iVar2 = st::fn_0040563C(this);
        STField<char>(this,0x225) = (char)iVar2;
        if ((char)iVar2 != '\0') {
          st::fn_00403580(this,0);
          STField<int>(this,0x254) = STField<int>(this,0x254) + 1;
          return 0;
        }
      }
    }
    STField<int>(this,0x254) = STField<int>(this,0x254) + 1;
    return 0;
  }
  if (uVar1 != 2) {
    return 0;
  }
  puVar8 = (byte *)(param_1->field_0014);
  puVar9 = (byte *)((int)this + 0x1d5);
  memmove(puVar9, puVar8, 0x50); /* compiler REP MOVS byte copy */
  if (STField<int>(this,0x1e1) == 2) {
    st::fn_00402A04(this,param_1->field_0014);
    return 0;
  }
  iVar6 = STField<int>(this,0x1f9) / 0xc9;
  STField<int>(this,0x24c) = iVar6;
  switch(STField<undefined4>(this,0x1f5)) {
  case 0x3d:
    STField<undefined4>(this,0x20d) = 3;
    STField<undefined4>(this,0x219) = 0x19;
    STField<undefined4>(this,0x211) = 0;
    STField<undefined4>(this,0x215) = 1;
    STField<undefined1>(this,0x225) = 0;
    break;
  case 0x41:
    STField<undefined4>(this,0x20d) = 3;
    STField<undefined4>(this,0x219) = 0x19;
    STField<undefined4>(this,0x211) = 0;
    STField<undefined4>(this,0x215) = 1;
    STField<undefined1>(this,0x225) = 0;
    STField<undefined1>(this,0x22e) = 0;
    break;
  case 0x42:
    STField<undefined4>(this,0x20d) = 0;
    STField<undefined4>(this,0x219) = 0x19;
    STField<undefined4>(this,0x211) = 2;
    STField<undefined4>(this,0x215) = 1;
    goto LAB_006091f5;
  case 0x43:
    STField<undefined4>(this,0x20d) = 0;
    STField<undefined4>(this,0x211) = 1;
    STField<undefined4>(this,0x215) = 1;
    STField<undefined4>(this,0x219) = 0x19;
    STField<int>(this,0x1e9) = STField<int>(this,0x1e9) + 100;
    STField<int>(this,0x1ed) = STField<int>(this,0x1ed) + 100;
    goto LAB_006091f5;
  case 0x4c:
    STField<undefined4>(this,0x20d) = 3;
    STField<undefined4>(this,0x219) = 0x4b;
    STField<undefined4>(this,0x211) = 0;
    STField<undefined4>(this,0x215) = 1;
    STField<undefined1>(this,0x225) = 0;
    goto LAB_00609202;
  case 0x4d:
    STField<undefined4>(this,0x20d) = 3;
    STField<undefined4>(this,0x21d) = 2;
    STField<undefined4>(this,0x219) = 0x6e;
    STField<undefined4>(this,0x211) = 7;
    STField<undefined4>(this,0x215) = 6;
    STField<undefined1>(this,0x22e) = 1;
    STField<undefined1>(this,0x225) = 0;
    if (STField<int>(this,0x209) == 0) {
LAB_00609164:
      st::fn_00401CC1(this);
    }
    else {
      iVar6 = (int)(short)iVar6;
      if (STField<int>(this,0x1f9) < 0) {
        iVar6 = iVar6 + -1;
      }
      iVar7 = STField<int>(this,0x1ed);
      sVar2 = (short)(iVar7 >> 0x1f);
      if (iVar7 < 0) {
        iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar2) -
                       (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar2) -
                            (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
      }
      iVar5 = STField<int>(this,0x1e9);
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      st::fn_00402CE8(iVar5,iVar7,STField<uint>(this,0x1d9),iVar6,STField<uint>(this,0x18),
                         this);
      if (STField<int>(this,0x209) != 0) {
        if ((STField<int>(this,0x221) == 0) &&
           (st::fn_004027CF(this), STField<int>(this,0x221) == 0)) goto LAB_00609164;
        st::fn_00403E54(this);
      }
    }
    break;
  case 0x58:
    STField<undefined4>(this,0x20d) = 6;
    STField<undefined4>(this,0x219) = 100;
    STField<undefined4>(this,0x211) = 4;
    STField<undefined4>(this,0x215) = 0;
    goto LAB_006091f5;
  case 0x65:
    STField<undefined4>(this,0x20d) = 5;
    STField<undefined4>(this,0x219) = 1;
    STField<undefined4>(this,0x211) = 2;
    STField<undefined4>(this,0x215) = 1;
LAB_006091f5:
    local_EAX_871 = st::fn_0040563C(this);
    STField<char>(this,0x225) = (char)local_EAX_871;
LAB_00609202:
    STField<undefined1>(this,0x22e) = 1;
    break;
  case 0x73:
    STField<undefined4>(this,0x20d) = 3;
    STField<int>(this,0x1e9) = STField<int>(this,0x1e9) + 100;
    STField<int>(this,0x1ed) = STField<int>(this,0x1ed) + 100;
    STField<undefined4>(this,0x219) = 0x24;
    STField<undefined4>(this,0x211) = 4;
    STField<undefined4>(this,0x215) = 1;
    STField<undefined1>(this,0x225) = 0;
    goto LAB_00609202;
  }
  switch(STField<undefined4>(this,0x20d)) {
  case 2:
    STField<int>(this,0x219) = STField<int>(this,0x219) << 1;
    break;
  case 4:
    iVar6 = STField<int>(this,0x219);
    if (iVar6 != 0) {
      STField<float>(this,0x22a) =
           (float)((STField<int>(this,0x1f9) - STField<int>(this,0x1fd)) / iVar6);
    }
    STField<undefined1>(this,0x22e) = 1;
    STField<int>(this,0x219) = iVar6 * 2;
    break;
  case 5:
    iVar6 = st::fn_0040576D(this,6);
    if (iVar6 != 0) {
      iVar6 = st::fn_0040202C(this);
joined_r0x0060929e:
      if (iVar6 != 0) break;
    }
    goto LAB_006092a0;
  case 6:
    iVar6 = st::fn_0040576D(this,5);
    if (iVar6 != 0) {
      iVar6 = st::fn_00402135(this,5,0x14);
      goto joined_r0x0060929e;
    }
LAB_006092a0:
    st::fn_00401CC1(this);
  }
  uVar3 = st::fn_004017B7(this,STField<uint>(this,0x219));
  if ((int)uVar3 < 1) {
    return 0xffff;
  }
  switch(STField<undefined4>(this,0x20d)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    st::fn_004039DB(this);
    if (STField<int>(this,0x1f5) == 0x4d) {
      STField<undefined4>(this,0x248) = 2;
      goto switchD_006092d2_default;
    }
    break;
  case 5:
    st::fn_004039DB(this);
    STField<undefined4>(this,0x248) = 2;
    goto switchD_006092d2_default;
  case 6:
    iVar6 = st::fn_0040179E(this);
    if (iVar6 == 0) {
      st::fn_00401CC1(this);
      goto switchD_006092d2_default;
    }
    break;
  default:
    goto switchD_006092d2_default;
  }
  STField<undefined4>(this,0x248) = 1;
switchD_006092d2_default:
  if (STField<char>(this,0x225) == '\0') {
    return 0;
  }
  st::fn_004010F5(this);
  return 0;
}

// 00609920 FUN_00609920
#line 4 "decomp/ST.exe/functions/00609920/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA93C>00401172

   [STObjectFactoryApplier] Central object factory for 0x0134 (ST_OBJECT_TYPE_0134).
   Evidence: registry[67] at 007CA938 stores type 0x0134 and executable pointer 00401172; allocation
   size 600 has no unique current class-layout match */

void * __cdecl st::fn_00609920(void)

{
  STGroupBoatC *pSVar1;
  undefined4 *puVar2;

  pSVar1 = (STGroupBoatC *)st::fn_006B04D0(600);
  if (pSVar1 != nullptr) {
    puVar2 = st::fn_00401ABE(pSVar1);
    return puVar2;
  }
  return nullptr;
}

// 00609950 FUN_00609950
#line 4 "decomp/ST.exe/functions/00609950/decomp.c"
undefined4 * __fastcall st::fn_00609950(STGroupBoatC *param_1)

{
  undefined4 *puVar2;

  st::fn_00401933((STGameObjC *)param_1);
  param_1->vtable = (STGroupBoatCVTable *)&st_global_0079CC28;
  if (param_1 == nullptr) {
    puVar2 = nullptr;
  }
  else {
    puVar2 = (undefined4 *)&param_1->field_0x1d5;
  }
  memset(puVar2, 0, 0x83); /* compiler bulk-zero initialization */
  puVar2 = (undefined4 *)((byte *)puVar2 + 0x80);
  param_1->field_0x225 = 1;
  return &param_1->vtable;
}

// 006099A0 FUN_006099a0
#line 4 "decomp/ST.exe/functions/006099A0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006099A0 returns return of sub_006E60A0 @ 006099C6 */

int __fastcall st::fn_006099A0(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 0060A000 FUN_0060a000
#line 4 "decomp/ST.exe/functions/0060A000/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_0060A000(AnonShape_0060A000_715F6478 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_02;
  longlong lVar7;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;

  local_18 = 0;
  if (param_1->field_0234 != 0) {
    local_14 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_8 = *(int *)(param_1->field_0234 + 0xc);
    switch(param_1->field_020D) {
    case 0:
    case 3:
      if (param_1->field_01F5 == 0x4d) {
        local_8 = local_8 / param_1->field_021D;
        local_18 = (int)(0x3ed / (longlong)param_1->field_021D);
      }
      fVar6 = (float10)_DAT_0079c5a4 / (float10)local_8;
      if (param_1->field_020D == 3) {
        param_1->field_01FD = param_1->field_01F9;
      }
      break;
    default:
      fVar6 = (float10)_DAT_0079c5a4 / (float10)local_8;
      break;
    case 2:
    case 4:
      fVar6 = (float10)_DAT_0079cd28 / (float10)local_8;
      local_14 = local_8 / 2;
    }
    local_10 = 0;
    param_1->field_0226 = param_1->field_01FD;
    param_1->field_0230 = 1;
    local_c = 0;
    if (0 < local_8) {
      do {
        if (param_1->field_01F5 == 0x4d) {
          iVar4 = 0;
          if (0 < param_1->field_021D) {
            do {
              uVar3 = iVar4 * local_8 + local_c;
              iVar1 = param_1->field_0234;
              if ((uVar3 < *(uint *)(iVar1 + 0xc)) &&
                 (puVar5 = (undefined4 *)(*(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c)),
                 puVar5 != nullptr)) {
                puVar5[0xb] = (float)((float10)(int)local_c * fVar6);
                fcos((float10)(int)local_c * fVar6);
                lVar7 = st::fn_0072E288();
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                fsin(extraout_ST0);
                puVar5[3] = (int)lVar7 + param_1->field_01E9;
                lVar7 = st::fn_0072E288();
                puVar5[4] = (int)lVar7 + param_1->field_01ED;
                puVar5[5] = iVar4 * local_18 + param_1->field_01F1;
                puVar5[6] = param_1->field_01E9;
                puVar5[7] = param_1->field_01ED;
                puVar5[8] = param_1->field_01F1;
                puVar5[1] = 0xffffffff;
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                fVar6 = extraout_ST0_00;
                if (iVar4 == 0) {
                  uVar2 = param_1->field_0215;
                  puVar5[9] = local_10;
                  *puVar5 = uVar2;
                  puVar5[10] = 7;
                  if ((int)local_c % 3 == 0) {
                    puVar5[1] = 0;
                  }
                }
                else {
                  uVar2 = param_1->field_0211;
                  puVar5[10] = 0;
                  *puVar5 = uVar2;
                  iVar1 = param_1->field_01FD;
                  uVar3 = param_1->field_001C * 0x41c64e6d + 0x3039;
                  param_1->field_001C = uVar3;
                  puVar5[9] = 0;
                  puVar5[0xd] = 0;
                  puVar5[0xc] = (float)((uVar3 >> 0x10) % (iVar1 - 99U) + 200);
                }
              }
              local_10 = local_10 + 1;
              if (6 < local_10) {
                local_10 = 0;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < param_1->field_021D);
          }
        }
        else {
          iVar4 = param_1->field_0234;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((local_c < *(uint *)(iVar4 + 0xc)) &&
             (puVar5 = (undefined4 *)(*(int *)(iVar4 + 8) * local_c + *(int *)(iVar4 + 0x1c)),
             puVar5 != nullptr)) {
            puVar5[0xb] = (float)((float10)(int)local_c * fVar6);
            fcos((float10)(int)local_c * fVar6);
            lVar7 = st::fn_0072E288();
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fsin(extraout_ST0_01);
            puVar5[3] = (int)lVar7 + param_1->field_01E9;
            lVar7 = st::fn_0072E288();
            puVar5[4] = (int)lVar7 + param_1->field_01ED;
            puVar5[5] = param_1->field_01F1;
            iVar4 = param_1->field_01E9;
            puVar5[6] = iVar4;
            puVar5[7] = param_1->field_01ED;
            if (param_1->field_01F5 == 0x4d) {
              puVar5[6] = iVar4 + 100;
              puVar5[7] = puVar5[7] + 100;
            }
            puVar5[8] = param_1->field_01F1;
            if ((param_1->field_020D == 4) && ((int)local_c <= local_14)) {
              puVar5[0xc] = (float)(int)local_c * param_1->field_022A;
            }
            if ((local_14 < 1) || ((int)local_c <= local_14)) {
              *puVar5 = param_1->field_0211;
            }
            else {
              *puVar5 = param_1->field_0215;
            }
            puVar5[10] = 0;
            puVar5[9] = local_10;
            local_10 = local_10 + 1;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            fVar6 = extraout_ST0_02;
            if (-1 < local_10) {
              local_10 = 0;
            }
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < local_8);
    }
    param_1->field_0254 = 0;
    return 0;
  }
  return 0;
}

// 0060A430 FUN_0060a430
#line 4 "decomp/ST.exe/functions/0060A430/decomp.c"
void __thiscall st::fn_0060A430(void *this,int param_1)

{
  undefined4 uVar1;

  st::fn_00405C1D(this,param_1);
  uVar1 = st::fn_00404A02(this);
  STField<char>(this,0x225) = (char)uVar1;
  STField<undefined1>(this,0x22e) = 1;
  return;
}

// 0060A470 FUN_0060a470
#line 4 "decomp/ST.exe/functions/0060A470/decomp.c"
void __fastcall st::fn_0060A470(AnonShape_0060A470_93FA2EC1 *param_1)

{
  if (param_1->field_01F5 == 0x4d) {
    st::fn_00403C8D(param_1,1);
    return;
  }
  st::fn_004033EB((AnonShape_0060A940_933574B2 *)param_1);
  param_1->field_0225 = 0;
  param_1->field_022E = 0;
  return;
}

// 0060A4B0 FUN_0060a4b0
#line 4 "decomp/ST.exe/functions/0060A4B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_0060A4B0(AnonShape_0060A4B0_7BF9A20C *param_1)

{
  int iVar1;
  AnonNested_0060A4B0_0234_BD227FFA *pAVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_20;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  AnonShape_0060A4B0_7BF9A20C *local_10;
  int local_c;
  int local_8;

  local_18 = 0;
  if (param_1->field_0234 != nullptr) {
    iVar1 = param_1->field_0234->field_000C;
    local_14 = 0;
    local_10 = param_1;
    if (0 < iVar1) {
      do {
        pVVar4 = g_visibleClass_00802A88;
        pAVar2 = param_1->field_0234;
        if ((((local_14 < (uint)pAVar2->field_000C) &&
             (iVar7 = pAVar2->field_0008 * local_14 + pAVar2->field_001C, iVar7 != 0)) &&
            (-1 < *(int *)(iVar7 + 0x3c))) && (*(int *)(iVar7 + 4) != -1)) {
          local_c = 1;
          if (g_visibleClass_00802A88 != nullptr) {
            iVar6 = *(int *)(iVar7 + 0x14);
            sVar3 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              local_8 = (short)(((short)(iVar6 / 200) + sVar3) -
                               (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              local_8 = (int)(short)(((short)(iVar6 / 200) + sVar3) -
                                    (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
            }
            iVar6 = *(int *)(iVar7 + 0x10);
            sVar3 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar3) -
                             (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
            }
            iVar5 = *(int *)(iVar7 + 0xc);
            sVar3 = (short)(iVar5 >> 0x1f);
            if (iVar5 < 0) {
              iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) -
                             (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                                  (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
            }
            if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                ((st::fn_00403F53
                            (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar6
                             ,&local_1c,&local_20), local_8 < 0 || ((4 < local_8 || (local_1c < 0)))
                 ))) || (((int)pVVar4->field_0030 <= local_1c ||
                         ((((iVar6 = g_centeredOffsets5[local_8] + local_20, iVar6 < 0 ||
                            (pVVar4->field_0034 <= iVar6)) || (pVVar4->field_004C == nullptr))
                          || (pVVar4->field_004C[local_1c + iVar6 * pVVar4->field_0030] != 0)))))) {
              if (*(int *)(iVar7 + 4) == 0) {
                st::fn_006EAAA0
                          (g_sT3DSMAPContext_00807598,*(uint *)(iVar7 + 0x3c),0);
                *(undefined4 *)(iVar7 + 4) = 1;
              }
            }
            else if (*(int *)(iVar7 + 4) == 1) {
              st::fn_006EAB60(g_sT3DSMAPContext_00807598,*(uint *)(iVar7 + 0x3c));
              *(undefined4 *)(iVar7 + 4) = 0;
              local_c = 0;
            }
          }
          param_1 = local_10;
          if (*(int *)(iVar7 + 0x28) != 0) {
            if (*(int *)(iVar7 + 0x24) < *(int *)(iVar7 + 0x28)) {
              *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + 1;
            }
            else {
              *(undefined4 *)(iVar7 + 0x24) = 0;
            }
          }
          if (local_c != 0) {
            if (*(int *)&local_10[1].field_0x10 == 1) {
              if (*(int *)(iVar7 + 4) != 0) {
                st::fn_006EAB60
                          (g_sT3DSMAPContext_00807598,*(uint *)(iVar7 + 0x3c));
                *(undefined4 *)(iVar7 + 4) = 0;
              }
            }
            else {
              st::fn_006EA270
                        (g_sT3DSMAPContext_00807598,*(uint *)(iVar7 + 0x3c),0,
                         *(uint *)(iVar7 + 0x24));
              st::fn_006EA960
                        (g_sT3DSMAPContext_00807598,*(uint *)(iVar7 + 0x3c),
                         (float)*(int *)(iVar7 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(iVar7 + 0x10) * _DAT_007904f8 * _DAT_007904f0,
                         (float)*(int *)(iVar7 + 0x14) * _DAT_007904f8 * _DAT_007904f0 +
                         _DAT_007904fc);
              local_18 = 1;
            }
          }
        }
        local_14 = local_14 + 1;
      } while ((int)local_14 < iVar1);
    }
    return local_18;
  }
  return 0;
}

// 0060A800 FUN_0060a800
#line 4 "decomp/ST.exe/functions/0060A800/decomp.c"
int __thiscall st::fn_0060A800(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  iVar3 = STField<int>(this,0x234);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
    uVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = STField<int>(this,0x234);
        if (((uVar5 < *(uint *)(iVar3 + 0xc)) &&
            (iVar4 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c), iVar4 != 0)) &&
           (uVar2 = *(uint *)(iVar4 + 0x3c), -1 < (int)uVar2)) {
          if (param_1 == 0) {
            iVar3 = st::fn_006EAAA0(g_sT3DSMAPContext_00807598,uVar2,0);
            *(undefined4 *)(iVar4 + 4) = 1;
          }
          else if ((int)uVar5 < iVar1 / STField<int>(this,0x21d)) {
            iVar3 = (int)uVar5 / 3;
            if ((int)uVar5 % 3 != 0) {
              st::fn_006EAB60(g_sT3DSMAPContext_00807598,uVar2);
              *(undefined4 *)(iVar4 + 4) = 0xffffffff;
              iVar3 = st::fn_006E8BA0
                                (g_sT3DSMAPContext_00807598,*(uint *)(iVar4 + 0x3c));
              *(undefined4 *)(iVar4 + 0x3c) = 0xffffffff;
            }
          }
          else {
            st::fn_006EAB60(g_sT3DSMAPContext_00807598,uVar2);
            *(undefined4 *)(iVar4 + 4) = 0xffffffff;
            iVar3 = st::fn_006E8BA0
                              (g_sT3DSMAPContext_00807598,*(uint *)(iVar4 + 0x3c));
            *(undefined4 *)(iVar4 + 0x3c) = 0xffffffff;
          }
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < iVar1);
    }
  }
  return iVar3;
}

// 0060A940 FUN_0060a940
#line 4 "decomp/ST.exe/functions/0060A940/decomp.c"
void __fastcall st::fn_0060A940(AnonShape_0060A940_933574B2 *param_1)

{
  AnonNested_0060A940_0234_EAD23A7B *pAVar1;
  int iVar2;
  int iVar3;
  uint uVar4;

  iVar2 = 0;
  if (param_1->field_0234 != nullptr) {
    iVar2 = param_1->field_0234->field_000C;
  }
  uVar4 = 0;
  if (0 < iVar2) {
    do {
      pAVar1 = param_1->field_0234;
      if (((uVar4 < (uint)pAVar1->field_000C) &&
          (iVar3 = pAVar1->field_0008 * uVar4 + pAVar1->field_001C, iVar3 != 0)) &&
         (-1 < (int)*(uint *)(iVar3 + 0x3c))) {
        st::fn_006E8BA0(g_sT3DSMAPContext_00807598,*(uint *)(iVar3 + 0x3c));
        *(undefined4 *)(iVar3 + 0x3c) = 0xffffffff;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar2);
  }
  return;
}

// 0060A9D0 FUN_0060a9d0
#line 4 "decomp/ST.exe/functions/0060A9D0/decomp.c"
void __fastcall st::fn_0060A9D0(AnonShape_0060A940_933574B2 *param_1)

{
  st::fn_004033EB(param_1);
  st::fn_006AE110((DArrayTy *)param_1->field_0234);
  param_1->field_0234 = nullptr;
  return;
}

// 0060AA00 FUN_0060aa00
#line 4 "decomp/ST.exe/functions/0060AA00/decomp.c"
void __fastcall st::fn_0060AA00(AnonShape_0060AA00_19A5DB50 *param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST0_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST1;
  longlong lVar8;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  float local_8;

  local_8 = 0.0;
  local_14 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_10 = *(int *)(param_1->field_0234 + 0xc);
  switch(param_1->field_020D) {
  case 1:
  case 3:
    if (param_1->field_01F5 == 0x4d) {
      local_8 = 0.0072;
      local_10 = local_10 / param_1->field_021D;
    }
    else if (param_1->field_01F5 == 0x4c) {
      local_8 = 0.009;
    }
    else {
      local_8 = 0.36;
    }
    break;
  case 2:
  case 4:
    local_8 = 0.36;
    local_14 = local_10 / 2;
  }
  local_1c = 0;
  if (0 < local_10) {
    do {
      if (param_1->field_01F5 == 0x4d) {
        local_18 = 0;
        if (0 < param_1->field_021D) {
          do {
            iVar6 = param_1->field_0234;
            uVar3 = local_18 * local_10 + local_1c;
            if ((uVar3 < *(uint *)(iVar6 + 0xc)) &&
               (iVar6 = *(int *)(iVar6 + 8) * uVar3 + *(int *)(iVar6 + 0x1c), iVar6 != 0)) {
              fVar7 = (float10)*(float *)(iVar6 + 0x2c) - (float10)local_8;
              *(float *)(iVar6 + 0x2c) = (float)fVar7;
              if (local_18 != 0) {
                uVar3 = *(int *)(iVar6 + 0x34) + 1;
                *(uint *)(iVar6 + 0x34) = uVar3;
                *(float *)(iVar6 + 0x30) = (float)((uVar3 >> 1) + 10) + *(float *)(iVar6 + 0x30);
                lVar8 = st::fn_0072E288();
                *(int *)(iVar6 + 0x24) = (int)lVar8;
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                if ((float10)(param_1->field_01FD + 100) <= extraout_ST0) {
                  *(undefined4 *)(iVar6 + 0x30) = 0x43480000;
                  *(undefined4 *)(iVar6 + 0x34) = 0;
                }
                st::fn_0072E288();
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                fVar7 = extraout_ST0_00;
              }
              fcos(fVar7);
              lVar8 = st::fn_0072E288();
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              fsin(extraout_ST1);
              iVar1 = (int)lVar8 + *(int *)(iVar6 + 0x18);
              *(int *)(iVar6 + 0xc) = iVar1;
              lVar8 = st::fn_0072E288();
              iVar4 = (int)lVar8 + *(int *)(iVar6 + 0x1c);
              *(int *)(iVar6 + 0x10) = iVar4;
              st::fn_006E3210
                        (g_sT3DSMAPContext_00807598,
                         (iVar1 * g_sT3DSMAPContext_00807598->field_0380) / 0xc9,
                         (iVar4 * g_sT3DSMAPContext_00807598->field_0380) / 0xc9);
              lVar8 = st::fn_0072E288();
              *(int *)(iVar6 + 0x14) = (short)lVar8 + 0x2d;
            }
            local_18 = local_18 + 1;
          } while (local_18 < param_1->field_021D);
        }
      }
      else {
        iVar6 = param_1->field_0234;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((local_1c < *(uint *)(iVar6 + 0xc)) &&
           (iVar6 = *(int *)(iVar6 + 8) * local_1c + *(int *)(iVar6 + 0x1c), iVar6 != 0)) {
          if (param_1->field_020D == 3) {
            *(float *)(iVar6 + 0x2c) = *(float *)(iVar6 + 0x2c) - local_8;
          }
          else if ((param_1->field_020D == 4) && ((int)local_1c <= local_14)) {
            *(float *)(iVar6 + 0x2c) = *(float *)(iVar6 + 0x2c) - local_8;
            st::fn_0072E288();
            fVar2 = param_1->field_022A + *(float *)(iVar6 + 0x30);
            *(float *)(iVar6 + 0x30) = fVar2;
            if ((float)param_1->field_01F9 <= fVar2) {
              *(float *)(iVar6 + 0x30) = (float)(int)param_1->field_01FD;
            }
          }
          else {
            *(float *)(iVar6 + 0x2c) = local_8 + *(float *)(iVar6 + 0x2c);
          }
          fcos((float10)*(float *)(iVar6 + 0x2c));
          lVar8 = st::fn_0072E288();
          fsin((float10)*(float *)(iVar6 + 0x2c));
          *(int *)(iVar6 + 0xc) = (int)lVar8 + *(int *)(iVar6 + 0x18);
          lVar8 = st::fn_0072E288();
          *(int *)(iVar6 + 0x10) = (int)lVar8 + *(int *)(iVar6 + 0x1c);
        }
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < local_10);
  }
  if ((param_1->field_020D != 4) && (param_1->field_020D != 3)) {
    param_1->field_022A = (float)(param_1->field_0230 * 0x1e);
    lVar8 = st::fn_0072E288();
    iVar6 = (int)lVar8;
    param_1->field_0226 = iVar6;
    if (iVar6 < param_1->field_01F9) {
      if (iVar6 <= (int)param_1->field_01FD) {
        param_1->field_0230 = 1;
      }
    }
    else {
      param_1->field_0226 = param_1->field_01FD;
      uVar3 = g_playSystem_00802A38->field_00E4;
      param_1->field_0248 = 1;
      param_1->field_0250 = uVar3 + 0x1e;
    }
  }
  uVar3 = param_1->field_0226 - param_1->field_01F9 / 2;
  uVar5 = (int)uVar3 >> 0x1f;
  if ((((float)(int)((uVar3 ^ uVar5) - uVar5) < param_1->field_022A) &&
      (param_1->field_022F == '\0')) &&
     ((param_1->field_01F5 == 0x43 || (param_1->field_01F5 == 0x42)))) {
    st::fn_004038E6(param_1);
    param_1->field_022F = 1;
  }
  return;
}

// 0060AEF0 FUN_0060aef0
#line 4 "decomp/ST.exe/functions/0060AEF0/decomp.c"
int __fastcall st::fn_0060AEF0(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int *piVar6;
  undefined4 uVar7;
  void *this;
  VisibleClassTy *pVVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  short sVar11;
  int iVar13;
  dword dVar14;
  undefined4 uVar16;
  int local_EAX_1165;
  int iVar12;
  int uVar15;
  int iVar19;
  int local_EAX_2543;
  uint uVar17;
  int local_EAX_2593;
  short sVar18;
  short sVar19;
  int iVar20;
  STFishC *pSVar21;
  int iVar22;
  bool bVar23;
  int local_d8;
  int local_d4 [3];
  byte local_c8;
  undefined3 uStack_c7;
  byte local_c4;
  undefined3 uStack_c3;
  byte local_b8;
  undefined3 uStack_b7;
  byte local_b4;
  undefined3 uStack_b3;
  undefined1 *local_ac;
  undefined1 *local_a8;
  int local_a4;
  short local_a0 [2];
  short local_9c [2];
  int local_98;
  int local_94 [2];
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined1 *local_74;
  short local_70 [2];
  int local_6c;
  int local_68;
  short local_60 [4];
  undefined4 local_58;
  uint local_50;
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  short local_34 [6];
  short local_28 [2];
  int local_24;
  short local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079cd38;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffef8;
  local_88 = 0;
  local_4c = 0;
  local_74 = nullptr;
  local_ac = nullptr;
  ExceptionList = &local_14;
  puVar9 = &stack0xfffffef8;
  if (STField<int>(param_1,0x1f5) == 0x42) {
    ExceptionList = &local_14;
    iVar13 = st::fn_0040186B(STField<int>(param_1,0x1d9),0x1c);
    if (iVar13 == 0) {
      iVar13 = DAT_007950ec / 0xc9;
    }
    else {
      iVar13 = DAT_007950ec / 0xc9 + 2;
    }
    STField<int>(param_1,0x24c) = iVar13;
    puVar9 = local_1c;
  }
  local_1c = puVar9;
  iVar13 = STField<int>(param_1,0x1e9);
  sVar19 = (short)(iVar13 >> 0x1f);
  if (iVar13 < 0) {
    local_7c = (short)(((short)(iVar13 / 0xc9) + sVar19) -
                      (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_7c = (int)(short)(((short)(iVar13 / 0xc9) + sVar19) -
                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
  }
  iVar13 = STField<int>(param_1,0x1ed);
  sVar19 = (short)(iVar13 >> 0x1f);
  if (iVar13 < 0) {
    local_8c = (short)(((short)(iVar13 / 0xc9) + sVar19) -
                      (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8c = (int)(short)(((short)(iVar13 / 0xc9) + sVar19) -
                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
  }
  iVar13 = STField<int>(param_1,0x24c);
  iVar20 = local_8c - iVar13;
  if (iVar20 < 0) {
    iVar20 = 0;
  }
  local_24 = local_7c - iVar13;
  if (local_24 < 0) {
    local_24 = 0;
  }
  iVar22 = iVar13 + 1 + local_8c;
  if (g_worldGrid.sizeY < iVar22) {
    iVar22 = (int)g_worldGrid.sizeY;
  }
  local_68 = iVar13 + 1 + local_7c;
  if (g_worldGrid.sizeX < local_68) {
    local_68 = (int)g_worldGrid.sizeX;
  }
  local_8 = 0;
  local_78 = iVar22;
  st::fn_0072DA40();
  local_a8 = &stack0xfffffef8;
  if (STField<int>(param_1,0x1f5) == 0x43) {
    local_8 = 1;
    local_a8 = &stack0xfffffef8;
    local_1c = &stack0xfffffef8;
    st::fn_0072DA40();
    local_74 = &stack0xfffffef8;
  }
  local_1c = &stack0xfffffef8;
  local_8 = 0xffffffff;
  local_a4 = 0;
  local_40 = iVar20;
  if (iVar20 < iVar22) {
    do {
      local_98 = local_24;
      if (local_24 < local_68) {
        do {
          local_3c = 0;
          do {
            sVar19 = (short)local_98;
            if (((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) ||
                 (sVar18 = (short)local_40, sVar18 < 0)) ||
                ((g_worldGrid.sizeY <= sVar18 || (sVar11 = (short)local_3c, sVar11 < 0)))) ||
               (g_worldGrid.sizeZ <= sVar11)) {
              pSVar21 = nullptr;
            }
            else {
              pSVar21 = (STFishC *)
                        STGridAt3D(g_worldGrid, sVar19, sVar18, sVar11).objects[0];
            }
            if ((pSVar21 != nullptr) &&
               (iVar13 = pSVar21->vfunc_F0(), iVar13 != 0)) {
              if ((*(int *)&pSVar21->field_0x20 == 1000) &&
                 (dVar14 = pSVar21->slot_2C(),
                 *(int *)(&DAT_00791d68 + dVar14 * 4) == 1)) {
                bVar23 = false;
                iVar13 = 0;
                if (0 < local_a4) {
                  do {
                    if (*(int *)(local_a8 + iVar13 * 4) == pSVar21->field_0018) {
                      bVar23 = true;
                      break;
                    }
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < local_a4);
                }
                if (bVar23) goto cf_continue_loop_0060B649;
                *(undefined4 *)(local_a8 + local_a4 * 4) = pSVar21->field_0018;
                local_a4 = local_a4 + 1;
              }
              uVar17 = pSVar21->field_0024;
              if (STField<int>(param_1,0x1f5) == 0x43) {
                if ((uVar17 < 8) &&
                   ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[uVar17].field_0022 < 8)))) {
                  bVar3 = *(byte *)&pSVar21->field_0024;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_b8 = CONCAT31(uStack_b7,bVar3);
                  bVar4 = STField<byte>(param_1,0x1d9);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_b4 = CONCAT31(uStack_b3,bVar4);
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == bVar4) {
LAB_0060b2ce:
                      iVar13 = 0;
                    }
                    else {
                      bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                      if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar13 = -2;
                      }
                      else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar13 = -1;
                      }
                      else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                        iVar13 = 1;
                      }
                      else {
                        if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                        goto LAB_0060b2ce;
                        iVar13 = 2;
                      }
                    }
                    bVar23 = iVar13 < 0;
                  }
                  else {
                    bVar23 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                  }
                  if ((bVar23) && (iVar13 = (*pSVar21->vtable->vfunc_F8)(), iVar13 != 0)) {
                    puVar1 = (undefined4 *)(local_74 + local_88 * 0xc);
                    *puVar1 = pSVar21;
                    uVar16 = (*pSVar21->vtable->vfunc_78)();
                    puVar1[1] = uVar16;
                    iVar13 = STField<int>(param_1,0x1ed);
                    sVar19 = (short)(iVar13 >> 0x1f);
                    if (iVar13 < 0) {
                      iVar13 = (short)(((short)(iVar13 / 0xc9) + sVar19) -
                                      (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar13 = (int)(short)(((short)(iVar13 / 0xc9) + sVar19) -
                                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
                    }
                    iVar20 = STField<int>(param_1,0x1e9);
                    sVar19 = (short)(iVar20 >> 0x1f);
                    if (iVar20 < 0) {
                      iVar20 = (short)(((short)(iVar20 / 0xc9) + sVar19) -
                                      (short)((longlong)iVar20 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar20 = (int)(short)(((short)(iVar20 / 0xc9) + sVar19) -
                                           (short)((longlong)iVar20 * 0x28c1979 >> 0x3f));
                    }
                    local_EAX_1165 = st::fn_006ACF90(local_98,local_40,iVar20,iVar13);
                    puVar1[2] = local_EAX_1165;
                    dVar14 = pSVar21->slot_2C();
                    if (dVar14 == 0x23) {
                      local_4c = local_4c + 1;
                    }
                    goto LAB_0060b643;
                  }
                }
              }
              else {
                if ((uVar17 < 8) &&
                   ((g_playSystem_00802A38 == nullptr ||
                    (g_bulkInitializedRecords_008087C7[uVar17].field_0022 < 8)))) {
                  bVar3 = *(byte *)&pSVar21->field_0024;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_c8 = CONCAT31(uStack_c7,bVar3);
                  bVar4 = STField<byte>(param_1,0x1d9);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_c4 = CONCAT31(uStack_c3,bVar4);
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == bVar4) {
LAB_0060b48b:
                      iVar13 = 0;
                    }
                    else {
                      bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                      if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar13 = -2;
                      }
                      else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar13 = -1;
                      }
                      else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                        iVar13 = 1;
                      }
                      else {
                        if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                        goto LAB_0060b48b;
                        iVar13 = 2;
                      }
                    }
                    bVar23 = iVar13 < 0;
                  }
                  else {
                    bVar23 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                  }
                  if (bVar23) {
                    iVar13 = (*pSVar21->vtable->vfunc_F8)();
                    if ((iVar13 != 0) && (STField<int>(param_1,0x1f5) != 0x4c)) {
                      st::fn_00403FE4(param_1,&pSVar21->vtable);
                      goto LAB_0060b643;
                    }
                    goto cf_continue_loop_0060B649;
                  }
                }
                if (STField<int>(param_1,0x1f5) == 0x4c) {
                  st::fn_00403FE4(param_1,&pSVar21->vtable);
                  iVar12 = st::fn_006ACF90(local_7c,local_8c,local_98,local_40);
                  uVar17 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
                  STField<uint>(param_1,0x1c) = uVar17;
                  iVar13 = iVar12 + (uVar17 >> 0x10) % (iVar12 * 3 + 1U);
                  st::fn_004018C5(pSVar21,local_70,local_a0,local_34);
                  pVVar8 = g_visibleClass_00802A88;
                  if (g_visibleClass_00802A88 != nullptr) {
                    iVar20 = (int)local_34[0];
                    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                        (st::fn_00403F53
                                   (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                    (int)local_70[0],(int)local_a0[0],local_d4,&local_d8),
                        iVar20 < 0)) || (4 < iVar20)) {
                      bVar23 = true;
                    }
                    else {
                      if (((local_d4[0] < 0) || ((int)pVVar8->field_0030 <= local_d4[0])) ||
                         ((local_d8 + g_centeredOffsets5[iVar20] < 0 ||
                          (pVVar8->field_0034 <= local_d8 + g_centeredOffsets5[iVar20])))) {
                        bVar23 = false;
                      }
                      else {
                        bVar23 = true;
                      }
                      if ((bVar23) && (pVVar8->field_004C != nullptr)) {
                        bVar23 = pVVar8->field_004C
                                 [local_d4[0] +
                                  (g_centeredOffsets5[iVar20] + local_d8) * pVVar8->field_0030] != 0
                        ;
                      }
                      else {
                        bVar23 = true;
                      }
                    }
                    if (bVar23) {
                      dVar14 = pSVar21->slot_2C();
                      uVar17 = (uint)(*(int *)(&DAT_00791d68 + dVar14 * 4) == 1);
                      uVar15 = st::fn_004052CC((STT3DSprC *)&pSVar21->field_01D5);
                      st::fn_00405CDB(uVar15,uVar17,iVar13);
                    }
                  }
LAB_0060b643:
                  local_88 = local_88 + 1;
                }
              }
            }
cf_continue_loop_0060B649:
            local_3c = local_3c + 1;
          } while (local_3c < 5);
          local_98 = local_98 + 1;
          iVar22 = local_78;
        } while (local_98 < local_68);
      }
      local_40 = local_40 + 1;
    } while (local_40 < iVar22);
  }
  if (STField<int>(param_1,0x1f5) == 0x43) {
    if (local_4c != 0) {
      local_8 = 2;
      st::fn_0072DA40();
      local_8 = 0xffffffff;
      iVar13 = 0;
      local_4c = 0;
      local_6c = 0;
      local_ac = &stack0xfffffef8;
      puVar9 = &stack0xfffffef8;
      local_1c = &stack0xfffffef8;
      puVar10 = &stack0xfffffef8;
      if (0 < local_88) {
        do {
          local_1c = puVar10;
          local_ac = puVar9;
          puVar1 = (undefined4 *)(local_74 + local_6c * 0xc);
          piVar6 = (int *)*puVar1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar20 = (**(code **)(*piVar6 + 0x2c))();
          if (iVar20 == 0x23) {
            puVar1[2] = 0;
            st::fn_00403FE4(param_1,piVar6);
            puVar2 = (undefined4 *)(local_ac + iVar13 * 0xc);
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            puVar2[2] = puVar1[2];
            iVar13 = iVar13 + 1;
            local_4c = iVar13;
          }
          local_6c = local_6c + 1;
          puVar9 = local_ac;
          puVar10 = local_1c;
        } while (local_6c < local_88);
      }
    }
    iVar13 = 0;
    if (0 < local_88) {
      do {
        local_80 = 0;
        if (0 < iVar13) {
          do {
            puVar1 = (undefined4 *)(local_74 + iVar13 * 0xc);
            puVar2 = (undefined4 *)(local_74 + local_80 * 0xc);
            iVar20 = puVar2[2];
            if ((int)puVar1[2] < iVar20) {
              uVar16 = puVar2[1];
              uVar7 = *puVar2;
              puVar2[2] = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = *puVar1;
              puVar1[2] = iVar20;
              puVar1[1] = uVar16;
              *puVar1 = uVar7;
              local_58 = uVar16;
            }
            local_80 = local_80 + 1;
          } while (local_80 < iVar13);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_88);
    }
    local_84 = 0;
    local_6c = 0;
    if (0 < local_88) {
      do {
        pSVar21 = *(STFishC **)(local_74 + local_6c * 0xc);
        local_48 = 1;
        dVar14 = pSVar21->slot_2C();
        if (((dVar14 != 0x23) && (local_4c != 0)) && (iVar13 = 0, 0 < local_4c)) {
          do {
            this = *(void **)(local_ac + iVar13 * 0xc);
            if ((STField<int>(this,0x24) == pSVar21->field_0024) &&
               (STField<int>(this,0x72e) != 0)) {
              st::fn_004031E3(pSVar21,&local_50,local_94,local_20);
              st::fn_004031E3(this,(uint *)local_60,(int *)local_9c,local_28);
              iVar19 = st::fn_006ACF0D((int)(short)local_50,(int)(short)local_94[0],(int)local_20[0],
                                    (int)local_60[0],(int)local_9c[0],(int)local_28[0]);
              if (iVar19 < 0x3ee) {
                local_48 = 0;
                break;
              }
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < local_4c);
        }
        if ((local_48 != 0) && (*(int *)(local_74 + local_6c * 0xc + 8) != 0)) {
          st::fn_004018C5(pSVar21,(short *)&local_50,(short *)local_94,local_20);
          local_EAX_2543 =
               st::fn_006ACF90(local_7c,local_8c,(int)(short)local_50,(int)(short)local_94[0]);
          uVar17 = STField<int>(param_1,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(param_1,0x1c) = uVar17;
          iVar13 = local_EAX_2543 + (uVar17 >> 0x10) % (local_EAX_2543 * 3 + 1U);
          local_EAX_2593 = st::fn_004052CC((STT3DSprC *)&pSVar21->field_01D5);
          st::fn_0040123F(local_EAX_2593,iVar13);
          st::fn_00403FE4(param_1,&pSVar21->vtable);
          if (DAT_00811798 != nullptr) {
            pSVar21->slot_2C();
            st::fn_00401BBD(DAT_00811798,local_7c,local_8c,pSVar21->field_0024);
          }
          local_84 = local_84 + 1;
          if (9 < local_84) {
            ExceptionList = local_14;
            return local_88;
          }
        }
        local_6c = local_6c + 1;
      } while (local_6c < local_88);
    }
  }
  ExceptionList = local_14;
  return local_88;
}

// 0060BC80 FUN_0060bc80
#line 4 "decomp/ST.exe/functions/0060BC80/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0060BC83 MOV EAX,dword ptr [EBP + 0xc];
   first-use mask */

void __thiscall st::fn_0060BC80(void *this,undefined4 param_1,ushort param_2)

{
  STField<undefined4>(this,0x1d9) = param_1;
  STField<uint>(this,0x205) = (uint)param_2;
  return;
}

// 0060BCB0 FUN_0060bcb0
#line 4 "decomp/ST.exe/functions/0060BCB0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0060BCB0(void *this,int param_1)

{
  int local_24 [8];

  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  if (param_1 < 0) {
    param_1 = 0;
  }
  if (STField<undefined4 *>(this,0x221) != nullptr) {
    local_24[2] = STField<undefined4>(this,0x201);
    local_24[3] = 4;
    local_24[4] = 0x123;
    local_24[5] = param_1;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*STField<undefined4 *>(this,0x221))(local_24);
  }
  return;
}

// 0060BD30 FUN_0060bd30
#line 4 "decomp/ST.exe/functions/0060BD30/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0060BD30(void *this,undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 **ppuVar2;
  undefined4 *local_40 [8];
  undefined4 local_20 [3];
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_c;

  ppuVar2 = local_40;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppuVar2 = nullptr;
    ppuVar2 = ppuVar2 + 1;
  }
  memset(local_20, 0, 0x1c); /* compiler bulk-zero initialization */
  local_40[3] = (undefined4 *)0x4;
  local_c = 0;
  local_40[4] = (undefined4 *)0x110;
  local_40[2] = (undefined4 *)param_1[6];
  local_20[2] = STField<undefined4>(this,0x1d9);
  local_14 = STField<undefined2>(this,0x205);
  local_12 = STField<undefined2>(this,0x201);
  local_20[1] = STField<undefined4>(this,0x1f5);
  local_20[0] = param_2;
  local_40[5] = local_20;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)*param_1)(local_40);
  return;
}

// 0060BDD0 FUN_0060bdd0
#line 4 "decomp/ST.exe/functions/0060BDD0/decomp.c"
undefined4 __thiscall st::fn_0060BDD0(void *this,undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  int **ppiVar3;
  int *local_58 [6];
  undefined4 local_40;
  int local_38 [3];
  undefined2 local_2c;
  undefined2 local_2a;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  ppiVar3 = local_58;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppiVar3 = nullptr;
    ppiVar3 = ppiVar3 + 1;
  }
  memset(local_38, 0, 0x1c); /* compiler bulk-zero initialization */
  local_58[3] = (int *)0x4;
  local_58[2] = (int *)param_1[6];
  local_38[1] = STField<undefined4>(this,0x1f5);
  switch(local_38[1]) {
  case 0x42:
    local_38[2] = STField<undefined4>(this,0x1d9);
    local_38[0] = DAT_007e67b0;
    local_38[1] = 0x42;
    bVar1 = st::fn_004049B7(*(char *)(param_1 + 9));
    if (bVar1 == 3) {
      iVar2 = st::fn_0040186B(param_1[9],0x6a);
    }
    else {
      iVar2 = st::fn_0040186B(param_1[9],0x2d);
    }
    if (iVar2 != 0) {
      local_38[0] = local_38[0] - ((int)(local_38[0] + (local_38[0] >> 0x1f & 3U)) >> 2);
    }
    local_2c = STField<undefined2>(this,0x205);
    local_2a = STField<undefined2>(this,0x201);
    local_58[5] = local_38;
    local_58[4] = (int *)0x110;
    break;
  case 0x43:
    local_10 = STField<int>(this,0x1d9);
    local_c = 100;
    local_8 = 0;
    local_58[4] = (int *)0x121;
    local_58[5] = &local_10;
    break;
  case 0x4c:
    local_1c = STField<int>(this,0x1d9);
    local_58[5] = &local_1c;
    local_14 = 0x19;
    local_18 = 0x41;
    local_58[4] = (int *)0x122;
    break;
  case 0x65:
    local_38[2] = STField<undefined4>(this,0x1d9);
    local_2c = STField<undefined2>(this,0x205);
    local_2a = STField<undefined2>(this,0x201);
    local_38[0] = DAT_007e67c4;
    local_38[1] = 0x65;
    local_58[4] = (int *)0x110;
    local_58[5] = local_38;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)*param_1)(local_58);
  return local_40;
}

// 0060C020 FUN_0060c020
#line 4 "decomp/ST.exe/functions/0060C020/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0060C020 returns return of Library::DKW::LIB::FUN_006acf50 @ 0060C147 */

int __thiscall st::fn_0060C020(void *this,uint *param_1)

{
  undefined4 *allocation;
  int iVar1;
  uint uVar2;
  byte *puVar3;
  uint *puVar4;
  byte *puVar5;
  uint *puVar6;
  uint *local_1c;
  AnonShape_0060C020_72526BDF *local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_8 = 0x83;
  local_18 = this;
  allocation = st::fn_006AAC70(0x83);
  STField<undefined4>(this,0x1e1) = 2;
  if (this == nullptr) {
    puVar3 = nullptr;
  }
  else {
    puVar3 = (byte *)((int)this + 0x1d5);
  }
  puVar5 = (byte *)(allocation);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = (byte *)(puVar3 + 1);
    puVar5 = (byte *)(puVar5 + 1);
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar3;
  STField<undefined1>(puVar5,2) = STField<undefined1>(puVar3,2);
  if (local_18->field_0234 != nullptr) {
    local_14 = (undefined4 *)st::fn_006B0020(local_18->field_0234,(int *)&local_c);
    uVar2 = local_c + 0x87;
    local_8 = uVar2;
    allocation = st::fn_006ACF50(allocation,uVar2);
    *(uint *)((int)allocation + uVar2 + (-4 - local_c)) = local_c;
    puVar3 = (byte *)(local_14);
    puVar5 = (byte *)((int)allocation + (local_8 - local_c));
    memmove(puVar5, puVar3, local_c); /* compiler REP MOVS byte copy */
    st::fn_006AB060(&local_14);
    if ((local_18->field_023C != 0) && (local_18->field_0244 != 0)) {
      local_1c = (uint *)st::fn_0040479B(local_18,&local_10);
      if (local_1c != nullptr) {
        uVar2 = local_8 + 4 + local_10;
        local_8 = uVar2;
        allocation = st::fn_006ACF50(allocation,uVar2);
        puVar6 = (uint *)((int)allocation + uVar2 + (-4 - local_10));
        *puVar6 = local_10;
        puVar4 = local_1c;
        for (uVar2 = local_10 >> 2; puVar6 = puVar6 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
        }
        for (local_10 = local_10 & 3; local_10 != 0; local_10 = local_10 - 1) {
          *(char *)puVar6 = (char)*puVar4;
          puVar4 = (uint *)((int)puVar4 + 1);
          puVar6 = (uint *)((int)puVar6 + 1);
        }
        st::fn_006AB060(&local_1c);
      }
    }
  }
  if (param_1 != nullptr) {
    *param_1 = local_8;
  }
  return (int)allocation;
}

// 0060C2D0 FUN_0060c2d0
#line 4 "decomp/ST.exe/functions/0060C2D0/decomp.c"
void __fastcall st::fn_0060C2D0(STJellyGunC *param_1)

{
  int iVar1;
  STJellyGunC *local_8;

  local_8 = param_1;
  iVar1 = st::fn_006E62D0
                    (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_0201,
                     (int *)&local_8);
  if ((iVar1 != -4) && (local_8 != nullptr)) {
    param_1->field_0221 = local_8;
    return;
  }
  st::fn_00401CC1(param_1);
  return;
}

// 0060C320 FUN_0060c320
#line 4 "decomp/ST.exe/functions/0060C320/decomp.c"
int __fastcall st::fn_0060C320(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar13;
  short sVar12;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  STWorldObject *pSVar18;
  short sVar19;
  bool bVar20;
  short local_80 [2];
  int local_7c;
  int local_74;
  int local_6c;
  undefined1 *local_68;
  int local_64;
  int local_5c;
  int local_58;
  short local_54 [4];
  undefined4 local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_2c;
  short local_28 [4];
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079cd68;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff60;
  iVar16 = 0;
  local_74 = 0;
  local_2c = 0;
  iVar14 = STField<int>(param_1,0x1e9);
  sVar19 = (short)(iVar14 >> 0x1f);
  if (iVar14 < 0) {
    local_5c = (short)(((short)(iVar14 / 0xc9) + sVar19) -
                      (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_5c = (int)(short)(((short)(iVar14 / 0xc9) + sVar19) -
                           (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
  }
  iVar14 = STField<int>(param_1,0x1ed);
  sVar19 = (short)(iVar14 >> 0x1f);
  if (iVar14 < 0) {
    local_6c = (short)(((short)(iVar14 / 0xc9) + sVar19) -
                      (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_6c = (int)(short)(((short)(iVar14 / 0xc9) + sVar19) -
                           (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
  }
  iVar14 = STField<int>(param_1,0x24c);
  iVar17 = local_6c - iVar14;
  if (iVar17 < 0) {
    iVar16 = -iVar17;
    iVar17 = 0;
  }
  local_20 = local_5c - iVar14;
  if (local_20 < 0) {
    local_44 = -local_20;
    local_20 = 0;
  }
  else {
    local_44 = 0;
  }
  local_6c = iVar14 + 1 + local_6c;
  if (g_worldGrid.sizeY < local_6c) {
    local_6c = (int)g_worldGrid.sizeY;
  }
  local_5c = iVar14 + 1 + local_5c;
  if (g_worldGrid.sizeX < local_5c) {
    local_5c = (int)g_worldGrid.sizeX;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  st::fn_0072DA40();
  local_8 = 0xffffffff;
  local_68 = &stack0xffffff60;
  puVar8 = &stack0xffffff60;
  local_64 = iVar16;
  local_40 = iVar17;
  local_1c = &stack0xffffff60;
  puVar9 = &stack0xffffff60;
  if (iVar17 < local_6c) {
    do {
      local_7c = local_20;
      local_58 = local_44;
      iVar14 = local_20;
      local_40 = iVar17;
      if (local_20 < local_5c) {
        do {
          local_3c = 0;
          local_7c = iVar14;
          do {
            iVar16 = local_3c;
            if ((&DAT_007abc64)[local_64 + local_58 * 0xf] != '\0') {
              sVar19 = (short)iVar14;
              if (((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) ||
                   (sVar12 = (short)iVar17, sVar12 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar12 || (sVar15 = (short)local_3c, sVar15 < 0)))) ||
                 (g_worldGrid.sizeZ <= sVar15)) {
                pSVar18 = nullptr;
              }
              else {
                pSVar18 = STGridAt3D(g_worldGrid, sVar19, sVar12, sVar15).objects[0];
              }
              if (((pSVar18 != nullptr) &&
                  (iVar10 = (*pSVar18->vtable[5].slots_00_28[0])(), iVar17 = local_40, iVar10 != 0))
                 && ((pSVar18[1].vtable < (STWorldObjectVTable *)0x8 &&
                     ((g_playSystem_00802A38 == nullptr ||
                      (g_bulkInitializedRecords_008087C7[(int)pSVar18[1].vtable].field_0022 < 8)))))
                 ) {
                bVar3 = *(byte *)&pSVar18[1].vtable;
                bVar4 = STField<byte>(param_1,0x1d9);
                if (DAT_00808a8f == '\0') {
                  if (bVar3 == bVar4) {
LAB_0060c5f5:
                    iVar10 = 0;
                  }
                  else {
                    bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                    if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                      iVar10 = -2;
                    }
                    else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                      iVar10 = -1;
                    }
                    else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                      iVar10 = 1;
                    }
                    else {
                      if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                      goto LAB_0060c5f5;
                      iVar10 = 2;
                    }
                  }
                  bVar20 = iVar10 < 0;
                }
                else {
                  bVar20 = g_bulkInitializedRecords_008087C7[bVar4].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                }
                if ((bVar20) &&
                   (iVar11 = (*pSVar18->vtable[5].slots_00_28[2])(), iVar10 = local_74,
                   iVar17 = local_40, iVar11 != 0)) {
                  puVar1 = (undefined4 *)(local_68 + local_74 * 0xc);
                  *puVar1 = pSVar18;
                  iVar11 = (*pSVar18->vtable[2].slots_00_28[6])();
                  iVar11 = iVar11 + 1;
                  iVar17 = local_40;
                  iVar16 = local_3c;
                  iVar14 = local_7c;
                  if (0 < iVar11) {
                    puVar1[1] = iVar11;
                    iVar14 = STField<int>(param_1,0x1ed);
                    sVar19 = (short)(iVar14 >> 0x1f);
                    if (iVar14 < 0) {
                      iVar14 = (short)(((short)(iVar14 / 0xc9) + sVar19) -
                                      (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar14 = (int)(short)(((short)(iVar14 / 0xc9) + sVar19) -
                                           (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
                    }
                    iVar16 = STField<int>(param_1,0x1e9);
                    sVar19 = (short)(iVar16 >> 0x1f);
                    if (iVar16 < 0) {
                      iVar16 = (short)(((short)(iVar16 / 0xc9) + sVar19) -
                                      (short)((longlong)iVar16 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar16 = (int)(short)(((short)(iVar16 / 0xc9) + sVar19) -
                                           (short)((longlong)iVar16 * 0x28c1979 >> 0x3f));
                    }
                    iVar13 = st::fn_006ACF90(local_7c,local_40,iVar16,iVar14);
                    puVar1[2] = iVar13;
                    local_2c = local_2c + iVar11;
                    local_74 = iVar10 + 1;
                    iVar17 = local_40;
                    iVar16 = local_3c;
                    iVar14 = local_7c;
                  }
                }
              }
            }
            local_3c = iVar16 + 1;
          } while (local_3c < 5);
          iVar14 = iVar14 + 1;
          local_58 = local_58 + 1;
          local_7c = iVar14;
        } while (iVar14 < local_5c);
      }
      iVar17 = iVar17 + 1;
      local_64 = local_64 + 1;
      puVar8 = local_68;
      local_40 = iVar17;
      puVar9 = local_1c;
    } while (iVar17 < local_6c);
  }
  local_1c = puVar9;
  local_68 = puVar8;
  if (local_2c != 0) {
    iVar14 = 0;
    if (0 < local_74) {
      do {
        local_64 = 0;
        if (0 < iVar14) {
          do {
            puVar1 = (undefined4 *)(local_68 + iVar14 * 0xc);
            puVar2 = (undefined4 *)(local_68 + local_64 * 0xc);
            iVar16 = puVar2[2];
            if (iVar16 < (int)puVar1[2]) {
              uVar6 = puVar2[1];
              uVar7 = *puVar2;
              puVar2[2] = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = *puVar1;
              puVar1[2] = iVar16;
              puVar1[1] = uVar6;
              *puVar1 = uVar7;
              local_4c = uVar6;
            }
            local_64 = local_64 + 1;
          } while (local_64 < iVar14);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < local_74);
    }
    local_58 = 0;
    if (0 < local_74) {
      do {
        iVar14 = *(int *)((int)(local_68 + local_58 * 0xc) + 4);
        iVar16 = STField<int>(param_1,0x209);
        bVar20 = iVar16 <= iVar14;
        if (bVar20) {
          iVar14 = iVar14 - iVar16;
        }
        puVar1 = *(undefined4 **)(local_68 + local_58 * 0xc);
        st::fn_004031E3(puVar1,(uint *)local_54,(int *)local_80,local_28);
        st::fn_00402A86(STField<undefined4>(param_1,0x1d9),
                           (short)STField<undefined4>(param_1,0x1e9) + 100,
                           (short)STField<undefined4>(param_1,0x1ed) + 100,
                           (short)STField<undefined4>(param_1,0x1f1) + 0xb4,local_54[0],
                           local_80[0],local_28[0]);
        if (bVar20) {
          st::fn_004044F8(param_1,puVar1,iVar14);
          STField<undefined4>(param_1,0x209) = 0;
        }
        else {
          st::fn_004044F8(param_1,puVar1,iVar14 * 5);
          STField<int>(param_1,0x209) = STField<int>(param_1,0x209) - iVar14;
        }
      } while ((STField<int>(param_1,0x209) != 0) &&
              (local_58 = local_58 + 1, local_58 < local_74));
    }
    st::fn_004027E8(param_1,STField<int>(param_1,0x209));
  }
  ExceptionList = local_14;
  return local_74;
}

// 0060CA20 FUN_0060ca20
#line 4 "decomp/ST.exe/functions/0060CA20/decomp.c"
undefined4 __fastcall st::fn_0060CA20(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x209);
}

// 0060CA40 FUN_0060ca40
#line 4 "decomp/ST.exe/functions/0060CA40/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=0,
   ignored=3, unknown=1 */

void __thiscall st::fn_0060CA40(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = STField<int>(this,0x209) - param_1;
  STField<int>(this,0x209) = iVar4;
  st::fn_004027E8(this,iVar4);
  if (STField<int>(this,0x209) == 0) {
    iVar4 = STField<int>(this,0x1f9);
    STField<undefined4>(this,0x209) = 0;
    sVar1 = (short)(iVar4 >> 0x1f);
    if (iVar4 < 0) {
      iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar1) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar1) -
                          (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
    }
    iVar3 = STField<int>(this,0x1ed);
    sVar1 = (short)(iVar3 >> 0x1f);
    if (iVar3 < 0) {
      iVar3 = (short)(((short)(iVar3 / 0xc9) + sVar1) - (short)((longlong)iVar3 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar3 = (int)(short)(((short)(iVar3 / 0xc9) + sVar1) -
                          (short)((longlong)iVar3 * 0x28c1979 >> 0x3f));
    }
    iVar2 = STField<int>(this,0x1e9);
    sVar1 = (short)(iVar2 >> 0x1f);
    if (iVar2 < 0) {
      iVar2 = (short)(((short)(iVar2 / 0xc9) + sVar1) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f)
                     ) + -1;
    }
    else {
      iVar2 = (int)(short)(((short)(iVar2 / 0xc9) + sVar1) -
                          (short)((longlong)iVar2 * 0x28c1979 >> 0x3f));
    }
    st::fn_00402554(iVar2,iVar3,iVar4,STField<int>(this,0x18));
  }
  return;
}

// 0060CB60 FUN_0060cb60
#line 4 "decomp/ST.exe/functions/0060CB60/decomp.c"
undefined4 __thiscall st::fn_0060CB60(void *this,int param_1)

{
  undefined4 *puVar1;

  puVar1 = st::fn_006AAC70(param_1 * 0x44);
  STField<undefined4 *>(this,0x244) = puVar1;
  *puVar1 = 0;
  if (STField<int>(this,0x244) != 0) {
    STField<int>(this,0x23c) = param_1;
    STField<undefined4>(this,0x238) = 10;
    return 1;
  }
  STField<undefined4>(this,0x238) = 10;
  return 0;
}

// 0060CBE0 FUN_0060cbe0
#line 4 "decomp/ST.exe/functions/0060CBE0/decomp.c"
undefined2 * st::fn_0060CBE0(undefined2 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_2c = 0;
  iVar2 = (int)param_1 / 2;
  local_18 = 0;
  local_8 = 0;
  iVar1 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  local_28 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  local_24 = iVar2 / 2;
  local_10 = iVar1 * -2 - iVar1 / 2;
  local_20 = (int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 3U)) >> 2;
  local_1c = iVar2 + -1;
  local_14 = (int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 3U)) >> 2;
  local_c = local_14;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = st::fn_006AAC70(iVar2 * 4);
  iVar1 = st::fn_00405B3C(&local_2c,&local_18,5,(int)param_1,iVar2);
  if (iVar1 == 0) {
    *param_2 = iVar2;
    return param_1;
  }
  st::fn_006AB060(&param_1);
  return nullptr;
}

// 0060CCF0 FUN_0060ccf0
#line 4 "decomp/ST.exe/functions/0060CCF0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=0060CEF0 @ 0060CFCF
   -> TEST TEST EAX,EAX */

int __thiscall
st::fn_0060CCF0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  uint uVar1;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;

  uVar1 = 0;
  if (((STField<int>(this,0x244) != 0) && (param_1 < STField<int>(this,0x23c))) &&
     (-1 < param_1)) {
    iVar4 = param_1 * 0x44;
    *(int *)(iVar4 + 0xc + STField<int>(this,0x244)) = param_5;
    *(int *)(iVar4 + 0x10 + STField<int>(this,0x244)) = param_6;
    *(int *)(iVar4 + 0x14 + STField<int>(this,0x244)) = param_7;
    *(int *)(iVar4 + 0x18 + STField<int>(this,0x244)) = param_2;
    *(int *)(iVar4 + 0x1c + STField<int>(this,0x244)) = param_3;
    *(int *)(iVar4 + 0x20 + STField<int>(this,0x244)) = param_4;
    *(int *)(iVar4 + 0x24 + STField<int>(this,0x244)) = param_5 - param_2;
    *(int *)(iVar4 + 0x28 + STField<int>(this,0x244)) = param_6 - param_3;
    *(int *)(iVar4 + 0x2c + STField<int>(this,0x244)) = param_7 - param_4;
    *(undefined4 *)(iVar4 + 0x30 + STField<int>(this,0x244)) = 0;
    *(undefined4 *)(iVar4 + 0x34 + STField<int>(this,0x244)) = 10;
    *(undefined4 *)(iVar4 + 0x38 + STField<int>(this,0x244)) = 0x14;
    puVar2 = (undefined2 *)st::fn_006AADD0(param_2,param_3,param_4,param_5,param_6,param_7);
    puVar2 = st::fn_0040489A(puVar2,(int *)(iVar4 + 4 + STField<int>(this,0x244)));
    *(undefined2 **)(iVar4 + 8 + STField<int>(this,0x244)) = puVar2;
    piVar3 = st::fn_00405137(param_2,param_3,param_4,param_5,param_6,param_7,0,0,7,0x1e0);
    *(int **)(iVar4 + 0x40 + STField<int>(this,0x244)) = piVar3;
    uVar1 = (uint)(*(int *)(iVar4 + 8 + STField<int>(this,0x244)) != 0);
    *(uint *)(iVar4 + STField<int>(this,0x244) + 0x3c) = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)(iVar4 + STField<int>(this,0x244)) = 1;
  }
  return uVar1;
}

// 0060CEF0 FUN_0060cef0
#line 4 "decomp/ST.exe/functions/0060CEF0/decomp.c"
undefined4 __fastcall st::fn_0060CEF0(AnonShape_0060CEF0_8FC1D59C *param_1)

{
  int iVar1;
  int iVar3;
  uint uVar4;
  int iVar2;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;

  iVar1 = param_1->field_023C;
  local_c = 0;
  local_10 = 0;
  if (0 < iVar1) {
    local_8 = 0;
    do {
      iVar3 = st::fn_006AFF50(local_8);
      uVar4 = st::fn_006AFF5B(local_8);
      iVar5 = (param_1->field_01FD * iVar3) / 10000 + param_1->field_01E9;
      iVar6 = (int)(param_1->field_01FD * uVar4) / 10000 + param_1->field_01ED;
      iVar2 = st::fn_004040CF(param_1,local_10,iVar5,iVar6,param_1->field_01F1,
                                 (param_1->field_01F9 * iVar3) / 10000 + iVar5,
                                 (int)(param_1->field_01F9 * uVar4) / 10000 + iVar6,
                                 param_1->field_01F1);
      if (iVar2 != 0) {
        local_c = local_c + 1;
      }
      local_8 = local_8 + (int)(0x168 / (longlong)iVar1);
      local_10 = local_10 + 1;
    } while (local_10 < param_1->field_023C);
  }
  if (local_c != param_1->field_023C) {
    return 0;
  }
  return 1;
}

// 0060D070 FUN_0060d070
#line 4 "decomp/ST.exe/functions/0060D070/decomp.c"
undefined4 __fastcall st::fn_0060D070(AnonShape_0060D070_1487100A *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short local_24 [12];
  int local_c;
  int local_8;

  local_c = 0;
  if ((param_1->field_0244 != 0) && (local_8 = 0, 0 < param_1->field_023C)) {
    do {
      iVar1 = param_1->field_0244;
      iVar5 = local_8 * 0x44;
      if (*(int *)(iVar5 + iVar1) != 0) {
        iVar6 = (g_playSystem_00802A38->field_00E4 - *(int *)(iVar5 + 0x3c + iVar1)) *
                *(int *)(iVar5 + 0x38 + iVar1);
        if (iVar6 < *(int *)(iVar5 + 4 + iVar1)) {
          if (((param_1->field_022F == '\0') && (local_8 == 0)) &&
             (uVar3 = iVar6 - *(int *)(iVar1 + 4) / 2, uVar4 = (int)uVar3 >> 0x1f,
             (int)((uVar3 ^ uVar4) - uVar4) < *(int *)(iVar1 + 0x38))) {
            st::fn_004038E6(param_1);
            param_1->field_022F = 1;
          }
          local_c = local_c + 1;
          iVar1 = iVar5 + param_1->field_0244;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar5 = *(int *)(iVar5 + 0x34 + param_1->field_0244) + *(int *)(iVar1 + 0x30);
          if (0x168 < iVar5) {
            iVar5 = iVar5 + -0x168;
          }
          iVar2 = *(int *)(iVar1 + 4);
          st::fn_00402333(*(AnonShape_0062CAC0_4BF74422 **)(iVar1 + 0x40),
                             (*(int *)(iVar1 + 0x24) * iVar6) / iVar2 + *(int *)(iVar1 + 0x18),
                             (*(int *)(iVar1 + 0x28) * iVar6) / iVar2 + *(int *)(iVar1 + 0x1c),
                             (*(int *)(iVar1 + 0x2c) * iVar6) / iVar2 + *(int *)(iVar1 + 0x20),iVar5
                             ,*(int *)(iVar1 + 8),iVar6,local_24);
        }
        else {
          st::fn_00404F57((int)param_1);
          *(undefined4 *)(iVar5 + param_1->field_0244) = 0;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1->field_023C);
    if (local_c != 0) {
      return 1;
    }
  }
  return 2;
}

// 0060D220 FUN_0060d220
#line 4 "decomp/ST.exe/functions/0060D220/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0060D220(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x240) == 0) {
    iVar3 = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (0 < *(int *)(param_1 + 0x23c)) {
      iVar4 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar1 = *(int *)(param_1 + 0x244) + iVar4;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)(*(int *)(param_1 + 0x244) + iVar4) != 0) {
          if (*(int *)(iVar1 + 0x40) != 0) {
            st::fn_00405B5A((int *)(iVar1 + 0x40));
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(*(int *)(param_1 + 0x244) + 8 + iVar4) != 0) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            st::fn_006AB060((void *)(*(int *)(param_1 + 0x244) + 8 + iVar4));
          }
          *(undefined4 *)(*(int *)(param_1 + 0x244) + iVar4) = 0;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x44;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while (iVar3 < *(int *)(param_1 + 0x23c));
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  else if ((*(int *)(param_1 + 0x240) == 1) && (piVar2 = *(int **)(param_1 + 0x244), *piVar2 != 0))
  {
    if (piVar2[2] != 0) {
      st::fn_006AB060(piVar2 + 2);
    }
    **(undefined4 **)(param_1 + 0x244) = 0;
    return;
  }
  return;
}

// 0060D300 FUN_0060d300
#line 4 "decomp/ST.exe/functions/0060D300/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __fastcall st::fn_0060D300(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x244) != 0) {
    st::fn_00404F57(param_1);
    st::fn_006AB060((void *)(param_1 + 0x244));
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  return;
}

// 0060D340 FUN_0060d340
#line 4 "decomp/ST.exe/functions/0060D340/decomp.c"
undefined4 __fastcall st::fn_0060D340(AnonShape_0060D340_D77FEBE7 *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (((param_1->field_0244 != 0) && (param_1->field_020D == 5)) && (param_1->field_0248 == 1)) {
    uVar1 = 1;
    param_1->field_0250 = g_playSystem_00802A38->field_00E4;
  }
  return uVar1;
}

// 0060D390 FUN_0060d390
#line 4 "decomp/ST.exe/functions/0060D390/decomp.c"
void __thiscall st::fn_0060D390(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int local_58;
  undefined4 *local_3c;
  int *local_38;
  int local_34;
  uint local_30;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  puStack_c = &DAT_0079cd78;
  puStack_10 = &st_image_0072D964;
  local_14 = ExceptionList;
  piVar8 = (int *)&stack0xffffff98;
  puVar3 = (uint *)&stack0xffffff98;
  local_30 = 0;
  local_3c = nullptr;
  if ((STField<int>(this,0x240) == 0) && (STField<int>(this,0x244) != 0)) {
    local_8 = 0;
    iVar11 = STField<int>(this,0x23c);
    ExceptionList = &local_14;
    st::fn_0072DA40();
    local_8 = 0xffffffff;
    uVar7 = iVar11 * 0x44;
    uVar1 = st::fn_00403413();
    iVar11 = 0;
    local_30 = uVar7;
    if (0 < STField<int>(this,0x23c)) {
      iVar6 = 0;
      do {
        *puVar3 = 0;
        if (*(int *)(iVar6 + 0x40 + STField<int>(this,0x244)) != 0) {
          uVar7 = uVar7 + uVar1;
          *puVar3 = uVar1;
          local_30 = uVar7;
        }
        iVar2 = STField<int>(this,0x244) + iVar6;
        if (*(int *)(iVar2 + 8) != 0) {
          *puVar3 = *puVar3 + *(int *)(iVar2 + 4) * 4;
          uVar7 = uVar7 + *(int *)(iVar6 + 4 + STField<int>(this,0x244)) * 4;
          local_30 = uVar7;
        }
        if (*puVar3 != 0) {
          *puVar3 = *puVar3 + 4;
          uVar7 = uVar7 + 4;
          local_30 = uVar7;
        }
        iVar11 = iVar11 + 1;
        iVar6 = iVar6 + 0x44;
        puVar3 = puVar3 + 1;
      } while (iVar11 < STField<int>(this,0x23c));
    }
    if ((uVar7 != 0) &&
       (local_3c = st::fn_006AAC70(local_30), local_3c != nullptr)) {
      puVar10 = STField<undefined4 *>(this,0x244);
      puVar12 = local_3c;
      for (uVar7 = STField<int>(this,0x23c) * 0x11 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      piVar5 = local_3c + STField<int>(this,0x23c) * 0x11;
      local_34 = 0;
      if (0 < STField<int>(this,0x23c)) {
        local_58 = 0;
        local_38 = piVar5;
        do {
          if (*piVar8 != 0) {
            *piVar5 = *piVar8;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            piVar9 = *(int **)(local_58 + 0x40 + STField<int>(this,0x244));
            piVar4 = piVar5;
            if (piVar9 != nullptr) {
              piVar4 = piVar5 + 1;
              memmove(piVar4, piVar9, uVar1); /* compiler REP MOVS byte copy */
              uVar7 = 0;
              iVar11 = STField<int>(this,0x244) + local_58;
              puVar10 = *(undefined4 **)(iVar11 + 8);
              piVar4 = local_38;
              if (puVar10 != nullptr) {
                puVar12 = (undefined4 *)((int)(piVar5 + 1) + uVar1);
                for (uVar7 = *(uint *)(iVar11 + 4) & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
                  *puVar12 = *puVar10;
                  puVar10 = puVar10 + 1;
                  puVar12 = puVar12 + 1;
                }
                for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
                  *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                  puVar10 = (undefined4 *)((int)puVar10 + 1);
                  puVar12 = (undefined4 *)((int)puVar12 + 1);
                }
              }
            }
            piVar5 = (int *)((int)piVar4 + *piVar8);
            local_38 = piVar5;
          }
          local_34 = local_34 + 1;
          local_58 = local_58 + 0x44;
          piVar8 = piVar8 + 1;
        } while (local_34 < STField<int>(this,0x23c));
      }
    }
  }
  *param_1 = -(uint)(local_3c != nullptr) & local_30;
  ExceptionList = local_14;
  return;
}

// 0060D810 FUN_0060d810
#line 4 "decomp/ST.exe/functions/0060D810/decomp.c"
void __thiscall st::fn_0060D810(void *this,undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;

  if (STField<undefined4 *>(this,0x244) != nullptr) {
    memset(STField<undefined4 *>(this,0x244), 0, 0x2c); /* compiler bulk-zero initialization */
    iVar2 = 0;
    *STField<undefined4 *>(this,0x244) = 0;
    *(undefined4 *)(STField<int>(this,0x244) + 4) = 0x33;
    pvVar1 = st::fn_006AAC70(0xcc);
    *(void **)(STField<int>(this,0x244) + 8) = pvVar1;
    puVar3 = (byte *)(&DAT_007cf730);
    puVar4 = (byte *)(*(undefined4 **)(STField<int>(this,0x244) + 8));
    memmove(puVar4, puVar3, 0xcc); /* compiler REP MOVS byte copy */
    *(undefined4 *)(STField<int>(this,0x244) + 0xc) = param_1;
    *(undefined4 *)(STField<int>(this,0x244) + 0x10) = param_2;
    *(undefined4 *)(STField<int>(this,0x244) + 0x14) = STField<undefined4>(this,0x1fd);
    *(undefined4 *)(STField<int>(this,0x244) + 0x18) = 0x1e;
    *(undefined4 *)(STField<int>(this,0x244) + 0x1c) = 0x7d;
    *(uint *)(STField<int>(this,0x244) + 0x28) = g_playSystem_00802A38->field_00E4;
    *STField<undefined4 *>(this,0x244) = 1;
    *(undefined4 *)(STField<int>(this,0x244) + 0x24) = 0x14;
    *(undefined4 *)(STField<int>(this,0x244) + 0x20) = 0;
    STField<undefined4>(this,0x240) = 1;
  }
  return;
}

// 0060D940 FUN_0060d940
#line 4 "decomp/ST.exe/functions/0060D940/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_0060D940(AnonShape_0060D940_4FDF4902 *param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1_00;
  longlong lVar9;
  int local_c;
  int local_8;

  fVar8 = (float10)_DAT_0079034c;
  iVar4 = param_1->field_0244;
  if (iVar4 == 0) {
    return 0;
  }
  local_8 = 0;
  fVar2 = _DAT_0079c5a4 / (float)*(int *)(iVar4 + 0xc);
  if (0 < *(int *)(iVar4 + 0xc)) {
    do {
      fcos(fVar8 + (float10)fVar2);
      iVar4 = *(int *)(iVar4 + 0x10);
      uVar6 = iVar4 * local_8;
      lVar9 = st::fn_0072E288();
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fsin(extraout_ST1);
      iVar7 = (int)lVar9 + param_1->field_01E9;
      lVar9 = st::fn_0072E288();
      iVar3 = (int)lVar9 + param_1->field_01ED;
      local_c = 0;
      if (0 < iVar4) {
        do {
          iVar4 = param_1->field_0234;
          if ((uVar6 < *(uint *)(iVar4 + 0xc)) &&
             (puVar5 = (undefined4 *)(*(int *)(iVar4 + 8) * uVar6 + *(int *)(iVar4 + 0x1c)),
             puVar5 != nullptr)) {
            puVar5[6] = iVar7;
            puVar5[7] = iVar3;
            uVar1 = param_1->field_01F1;
            puVar5[3] = iVar7;
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            puVar5[0xb] = (float)extraout_ST1_00;
            puVar5[8] = uVar1;
            puVar5[4] = iVar3;
            puVar5[5] = uVar1;
            puVar5[10] = 0x14;
            puVar5[9] = 0;
            *puVar5 = param_1->field_0211;
          }
          local_c = local_c + 1;
          uVar6 = uVar6 + 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while (local_c < *(int *)(param_1->field_0244 + 0x10));
      }
      iVar4 = param_1->field_0244;
      local_8 = local_8 + 1;
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      fVar8 = extraout_ST1_00;
    } while (local_8 < *(int *)(iVar4 + 0xc));
  }
  return 1;
}

// 0060DAB0 FUN_0060dab0
#line 4 "decomp/ST.exe/functions/0060DAB0/decomp.c"
undefined4 __fastcall st::fn_0060DAB0(AnonShape_0060DAB0_7A3B9916 *param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  iVar8 = param_1->field_0244;
  uVar6 = 2;
  if ((iVar8 != 0) && (param_1->field_0240 == 1)) {
    iVar7 = g_playSystem_00802A38->field_00E4 - *(int *)(iVar8 + 0x28);
    *(int *)(iVar8 + 0x1c) = *(int *)(iVar8 + 0x1c) + 6;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar9 = *(int *)(param_1->field_0244 + 0x18) * iVar7;
    *(int *)(param_1->field_0244 + 0x14) = param_1->field_01FD + iVar9;
    iVar8 = param_1->field_0244;
    if (iVar9 < *(int *)(iVar8 + 0x1c)) {
      local_14 = (*(int *)(iVar8 + 0x10) * iVar9) / *(int *)(iVar8 + 0x1c);
    }
    else {
      local_14 = *(int *)(iVar8 + 0x10);
    }
    *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
    iVar8 = param_1->field_0244;
    if (*(int *)(iVar8 + 0x20) <= *(int *)(iVar8 + 0x24)) {
      *(undefined4 *)(iVar8 + 0x20) = 0;
    }
    iVar8 = param_1->field_0244;
    local_18 = 0;
    if (0 < *(int *)(iVar8 + 0xc)) {
      do {
        iVar8 = *(int *)(iVar8 + 0x10);
        local_c = 0;
        if (0 < local_14) {
          local_10 = 0;
          do {
            iVar9 = param_1->field_0234;
            uVar10 = local_c + iVar8 * local_18;
            if ((uVar10 < *(uint *)(iVar9 + 0xc)) &&
               (iVar9 = *(int *)(iVar9 + 8) * uVar10 + *(int *)(iVar9 + 0x1c), iVar9 != 0)) {
              iVar4 = param_1->field_0244;
              iVar5 = *(int *)(iVar4 + 0x14);
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              psVar1 = (short *)(*(int *)(iVar4 + 8) + (local_10 / *(int *)(iVar4 + 0x10)) * 4);
              iVar4 = *(int *)(iVar4 + 0x1c);
              sVar2 = *psVar1;
              fcos((float10)*(float *)(iVar9 + 0x2c));
              sVar3 = psVar1[1];
              lVar11 = st::fn_0072E288();
              fsin((float10)*(float *)(iVar9 + 0x2c));
              *(int *)(iVar9 + 0xc) = (int)lVar11 + *(int *)(iVar9 + 0x18);
              lVar11 = st::fn_0072E288();
              *(int *)(iVar9 + 0x10) = (int)lVar11 + *(int *)(iVar9 + 0x1c);
              *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x20) + (int)sVar3 / (iVar7 * 0x50 + 200);
              if (iVar5 - (iVar4 * sVar2) / 10000 < param_1->field_01F9) {
                if ((*(int *)(iVar9 + 4) == 0) && (-1 < (int)*(uint *)(iVar9 + 0x3c))) {
                  *(int *)(iVar9 + 0x24) = *(int *)(param_1->field_0244 + 0x20) + local_c;
                  st::fn_006EAAA0
                            (g_sT3DSMAPContext_00807598,*(uint *)(iVar9 + 0x3c),0);
                  *(undefined4 *)(iVar9 + 4) = 1;
                }
                if (*(int *)(iVar9 + 0x28) < *(int *)(iVar9 + 0x24)) {
                  *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) % *(int *)(iVar9 + 0x28);
                }
              }
              else if ((*(int *)(iVar9 + 4) != 0) && (-1 < (int)*(uint *)(iVar9 + 0x3c))) {
                st::fn_006EAB60
                          (g_sT3DSMAPContext_00807598,*(uint *)(iVar9 + 0x3c));
                *(undefined4 *)(iVar9 + 4) = 0xffffffff;
              }
            }
            local_c = local_c + 1;
            local_10 = local_10 + 0x33;
          } while (local_c < local_14);
        }
        iVar8 = param_1->field_0244;
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(iVar8 + 0xc));
    }
    uVar6 = 1;
  }
  return uVar6;
}

// 0060DD70 FUN_0060dd70
#line 4 "decomp/ST.exe/functions/0060DD70/decomp.c"
int __fastcall st::fn_0060DD70(AnonShape_0060DD70_701DD710 *param_1)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar5 = param_1->field_01E9;
  sVar1 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar1) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar1) -
                        (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
  }
  iVar6 = param_1->field_01ED;
  sVar1 = (short)(iVar6 >> 0x1f);
  if (iVar6 < 0) {
    iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar1) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar1) -
                        (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
  }
  iVar4 = param_1->field_01F1;
  sVar1 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    local_8 = (short)(((short)(iVar4 / 200) + sVar1) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_8 = (int)(short)(((short)(iVar4 / 200) + sVar1) -
                          (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
  }
  iVar4 = param_1->field_024C;
  if ((((g_sT3DSMAPContext_00807598->field_0048 <= iVar4 + iVar5) &&
       (iVar5 - iVar4 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= iVar4 + iVar6)) &&
     (iVar6 - iVar4 <= g_sT3DSMAPContext_00807598->field_0054)) {
    local_14 = st::fn_006DDBD0();
    pVVar2 = g_visibleClass_00802A88;
    if (local_14 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == nullptr) {
      return local_14;
    }
    iVar4 = param_1->field_024C;
    local_18 = iVar6 - iVar4;
    if (local_18 < 0) {
      local_18 = 0;
    }
    local_c = iVar5 - iVar4;
    if (local_c < 0) {
      local_c = 0;
    }
    local_1c = iVar4 + 1 + iVar6;
    if (g_worldGrid.sizeY < local_1c) {
      local_1c = (int)g_worldGrid.sizeY;
    }
    local_10 = iVar4 + 1 + iVar5;
    if (g_worldGrid.sizeX < local_10) {
      local_10 = (int)g_worldGrid.sizeX;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar6,&local_20,
               &local_24);
    iVar6 = local_8;
    iVar5 = local_18;
    pVVar3 = g_visibleClass_00802A88;
    if (local_8 < 0) {
      return local_14;
    }
    if (4 < local_8) {
      return local_14;
    }
    if (local_20 < 0) {
      return local_14;
    }
    if ((int)pVVar2->field_0030 <= local_20) {
      return local_14;
    }
    iVar4 = g_centeredOffsets5[local_8] + local_24;
    if (iVar4 < 0) {
      return local_14;
    }
    if (pVVar2->field_0034 <= iVar4) {
      return local_14;
    }
    if (pVVar2->field_004C == nullptr) {
      return local_14;
    }
    if (pVVar2->field_004C[local_20 + iVar4 * pVVar2->field_0030] != 0) {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c,local_18,
               &local_24,&local_20);
    pVVar2 = g_visibleClass_00802A88;
    if (local_24 < 0) {
      return local_14;
    }
    if ((int)pVVar3->field_0030 <= local_24) {
      return local_14;
    }
    iVar6 = g_centeredOffsets5[iVar6] + local_20;
    if (iVar6 < 0) {
      return local_14;
    }
    if (pVVar3->field_0034 <= iVar6) {
      return local_14;
    }
    if (pVVar3->field_004C == nullptr) {
      return local_14;
    }
    if (pVVar3->field_004C[local_24 + iVar6 * pVVar3->field_0030] != 0) {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_10,iVar5,&local_24,
               &local_20);
    iVar6 = local_8;
    iVar5 = local_1c;
    pVVar3 = g_visibleClass_00802A88;
    if (local_24 < 0) {
      return local_14;
    }
    if ((int)pVVar2->field_0030 <= local_24) {
      return local_14;
    }
    iVar4 = g_centeredOffsets5[local_8] + local_20;
    if (iVar4 < 0) {
      return local_14;
    }
    if (pVVar2->field_0034 <= iVar4) {
      return local_14;
    }
    if (pVVar2->field_004C == nullptr) {
      return local_14;
    }
    if (pVVar2->field_004C[local_24 + iVar4 * pVVar2->field_0030] != 0) {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c,local_1c,
               &local_24,&local_20);
    if (local_24 < 0) {
      return local_14;
    }
    if ((int)pVVar3->field_0030 <= local_24) {
      return local_14;
    }
    local_20 = g_centeredOffsets5[iVar6] + local_20;
    if (local_20 < 0) {
      return local_14;
    }
    if (pVVar3->field_0034 <= local_20) {
      return local_14;
    }
    if (pVVar3->field_004C == nullptr) {
      return local_14;
    }
    if (pVVar3->field_004C[local_24 + local_20 * pVVar3->field_0030] != 0) {
      return local_14;
    }
    iVar5 = st::fn_00404E5D(g_visibleClass_00802A88,local_10,iVar5,local_8);
    if (iVar5 == 1) {
      return local_14;
    }
  }
  return 0;
}

// 0060E210 FUN_0060e210
#line 4 "decomp/ST.exe/functions/0060E210/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0060CBE0 -> 0060E210 @ 0060CC81 | 00614C80 -> 0060E210 @ 00614DB0 | 00615430 ->
   0060E210 @ 006156C1

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0060E2EC FILD dword ptr [EAX + ESI*0x4] classifies dword parameter loaded at 0060E2DF |
   0060E35B FILD dword ptr [EDX] classifies dword parameter loaded at 0060E34F */

undefined4 st::fn_0060E210(void *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  float10 fVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  float10 extraout_ST1;
  longlong lVar8;

  iVar1 = param_3;
  pdVar2 = st::fn_006AAC70(param_3 * 8);
  if (pdVar2 != nullptr) {
    iVar6 = param_3 + -1;
    *(undefined4 *)pdVar2 = 0;
    STField<undefined4>(pdVar2,4) = 0x3ff00000;
    *(undefined4 *)(pdVar2 + iVar6) = 0;
    *(undefined4 *)((int)pdVar2 + iVar6 * 8 + 4) = 0x3ff00000;
    iVar4 = param_3 + -3;
    fVar7 = (float10)_DAT_0079cd88 / (float10)(param_5 + -1);
    iVar3 = 0;
    pdVar5 = pdVar2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = iVar6;
    if (-1 < iVar4) {
      do {
        iVar3 = iVar3 + 1;
        pdVar5[1] = ((double)param_3 * *pdVar5) / (double)iVar3;
        pdVar5 = pdVar5 + 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + -1;
      } while (iVar3 <= iVar4);
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = 0;
    if (0 < param_5) {
      do {
        if ((float10)_DAT_007901c0 < (float10)param_3 * fVar7) {
          if (1 < iVar6) {
            iVar4 = iVar1 + -2;
            do {
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          iVar4 = iVar6;
          if (0 < iVar6) {
            do {
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          if (1 < iVar6) {
            iVar4 = iVar1 + -2;
            do {
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          if (-1 < iVar1 + -2) {
            iVar4 = iVar1 + -1;
            do {
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        lVar8 = st::fn_0072E288();
        *(short *)param_4 = (short)lVar8;
        lVar8 = st::fn_0072E288();
        *(short *)(param_4 + 2) = (short)lVar8;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_4 + 4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = param_3 + 1;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        fVar7 = extraout_ST1;
      } while (param_3 < param_5);
    }
    st::fn_006A5E90((short *)pdVar2);
    return 0;
  }
  return 0xfffffffe;
}

// 0060E470 FUN_0060e470
#line 4 "decomp/ST.exe/functions/0060E470/decomp.c"
undefined4 __cdecl
st::fn_0060E470(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,undefined4 param_9,int *param_10,int *param_11,int *param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;

  iVar1 = param_4;
  if (0x22a748 <
      (param_8 - param_5) * (param_8 - param_5) + (param_7 - param_4) * (param_7 - param_4)) {
    *param_10 = param_4;
    *param_11 = param_5;
    *param_12 = param_6;
    return 0;
  }
  if (0x22a749 <
      (param_8 - param_2) * (param_8 - param_2) + (param_7 - param_1) * (param_7 - param_1)) {
    iVar4 = (param_4 - param_1) / 2 + param_1;
    iVar5 = (param_5 - param_2) / 2 + param_2;
    iVar3 = (param_6 - param_3) / 2 + param_3;
    local_8 = param_3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_4 = 3;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = iVar1;
    do {
      iVar1 = iVar4;
      iVar2 = iVar5;
      if (0x22a749 < (iVar5 - param_8) * (iVar5 - param_8) + (iVar4 - param_7) * (iVar4 - param_7))
      {
        iVar1 = param_1;
        iVar2 = param_2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = iVar4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_5 = iVar5;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_6 = iVar3;
        iVar3 = local_8;
      }
      local_8 = iVar3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = iVar2;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = iVar1;
      iVar4 = (param_1 - param_3) / 2 + param_3;
      iVar5 = (param_2 - param_5) / 2 + param_5;
      iVar3 = (local_8 - param_6) / 2 + param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    *param_10 = iVar4;
    *param_11 = iVar5;
    *param_12 = iVar3;
    return 1;
  }
  *param_10 = ((int)((param_4 - param_1) + (param_4 - param_1 >> 0x1f & 7U)) >> 3) + param_1;
  *param_11 = ((int)((param_5 - param_2) + (param_5 - param_2 >> 0x1f & 7U)) >> 3) + param_2;
  *param_12 = ((int)((param_6 - param_3) + (param_6 - param_3 >> 0x1f & 7U)) >> 3) + param_3;
  return 1;
}

// 0060E680 FUN_0060e680
#line 4 "decomp/ST.exe/functions/0060E680/decomp.c"
undefined4 __cdecl
st::fn_0060E680(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            int *param_7,int param_8,uint *param_9,uint *param_10,uint *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_10;
  uint local_c;
  uint local_8;

  uVar6 = param_4;
  iVar3 = *param_7;
  iVar5 = (param_4 ^ (int)param_4 >> 0x1f) - ((int)param_4 >> 0x1f);
  if ((iVar5 < iVar3) &&
     (iVar1 = (param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f), iVar1 < iVar3)) {
    iVar2 = (param_6 ^ (int)param_6 >> 0x1f) - ((int)param_6 >> 0x1f);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((iVar2 < param_7[2]) &&
       (param_7[2] * iVar2 * iVar2 + iVar3 * iVar5 * iVar5 + param_7[1] * iVar1 * iVar1 <
        *(int *)(param_8 + 0xc))) {
      iVar3 = st::fn_006ACF0D(param_4,param_5,param_6,param_1,param_2,param_3);
      if (0xc9 < iVar3) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int)((param_1 - param_4) * 0xc9) / iVar3 + param_4;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (int)((param_2 - param_5) * 0xc9) / iVar3 + param_5;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_3 = (int)((param_3 - param_6) * 0xc9) / iVar3 + param_6;
      }
      iVar3 = *param_7;
      iVar5 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
      if ((iVar5 < iVar3) &&
         (iVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f), iVar1 < iVar3)) {
        iVar2 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((iVar2 < param_7[2]) &&
           (param_7[2] * iVar2 * iVar2 + iVar3 * iVar5 * iVar5 + param_7[1] * iVar1 * iVar1 <
            *(int *)(param_8 + 0xc))) {
          *param_9 = ((int)((param_4 - param_1) + ((int)(param_4 - param_1) >> 0x1f & 7U)) >> 3) +
                     param_1;
          *param_10 = ((int)((param_5 - param_2) + ((int)(param_5 - param_2) >> 0x1f & 7U)) >> 3) +
                      param_2;
          *param_11 = ((int)((param_6 - param_3) + ((int)(param_6 - param_3) >> 0x1f & 7U)) >> 3) +
                      param_3;
          return 1;
        }
      }
      uVar8 = (int)(param_5 - param_2) / 2 + param_2;
      uVar7 = (int)(param_4 - param_1) / 2 + param_1;
      uVar4 = (int)(param_6 - param_3) / 2 + param_3;
      local_c = param_2;
      local_10 = param_3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_4;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_5;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = 7;
      local_8 = param_1;
      do {
        iVar5 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f);
        if ((iVar5 < iVar3) &&
           (iVar1 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f), iVar1 < iVar3)) {
          iVar2 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if ((iVar2 < param_7[2]) &&
             (uVar6 = param_3,
             param_7[2] * iVar2 * iVar2 + iVar3 * iVar5 * iVar5 + param_7[1] * iVar1 * iVar1 <
             *(int *)(param_8 + 0xc))) {
            uVar6 = uVar7;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = uVar8;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_3 = uVar7;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_6 = uVar4;
            uVar4 = local_10;
            uVar8 = local_c;
            uVar7 = local_8;
          }
        }
        local_8 = uVar7;
        local_c = uVar8;
        local_10 = uVar4;
        uVar8 = (int)(local_c - param_2) / 2 + param_2;
        uVar7 = (int)(local_8 - uVar6) / 2 + uVar6;
        uVar4 = (int)(local_10 - param_6) / 2 + param_6;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_4 = param_4 - 1;
      } while (param_4 != 0);
      *param_9 = uVar7;
      *param_10 = uVar8;
      *param_11 = uVar4;
      return 1;
    }
  }
  *param_9 = param_4;
  *param_10 = param_5;
  *param_11 = param_6;
  return 0;
}

// 0060EA30 FUN_0060ea30
#line 4 "decomp/ST.exe/functions/0060EA30/decomp.c"
undefined4 __thiscall st::fn_0060EA30(void *this,AnonShape_0060EA30_DCEB68AD *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte *puVar5;
  byte *puVar6;
  byte *local_8;

  uVar1 = param_1->field_0010;
  local_8 = this;
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      st::fn_00401F9B(this);
      return 0;
    }
    if (uVar1 == 0) {
      iVar3 = st::fn_00404525(this);
      if (iVar3 != 0) {
        st::fn_0040463D(this);
        STField<undefined4>(this,0x20c) = 9;
        return 0;
      }
    }
    else if (uVar1 == 2) {
      puVar5 = (byte *)param_1->field_0014;
      if (puVar5[3] != 2) {
        puVar6 = (byte *)((int)this + 0x1d5);
        memmove(puVar6, puVar5, 0x14); /* compiler REP MOVS byte copy */
        STField<undefined4>(this,0x1d5) = 0x15e;
        STField<undefined4>(this,0x24) = STField<undefined4>(this,0x1d9);
        st::fn_004042EB(this,(AnonShape_00614400_1B90EA7E *)param_1->field_0014);
        st::fn_00404566(this);
        uVar2 = st::fn_00405475();
        STField<char>(this,0x2e9) = (char)uVar2;
        return 0;
      }
      st::fn_00402FF9(this,puVar5);
      memset((void *)((int)this + 0x2eb), 0, 0x2d); /* compiler bulk-zero initialization */
      iVar4 = 0;
      if (((STField<int>(this,0x20c) != 7) && (STField<int>(this,0x20c) != 9)) &&
         (iVar4 = st::fn_00405993(this,1,0), iVar4 != 0)) {
        return 0;
      }
      st::fn_0040463D(this);
      STField<undefined4>(this,0x20c) = 9;
      return 0;
    }
  }
  else if ((uVar1 == 0x10f) &&
          (local_8 = (byte *)st::fn_00402275(this,(int *)&param_1), local_8 != nullptr)) {
    st::fn_004025F9(g_playSystem_00802A38,STField<int *>(this,0x18),local_8,param_1);
    st::fn_006AB060(&local_8);
  }
  return 0;
}

// 0060EC00 FUN_0060ec00
#line 4 "decomp/ST.exe/functions/0060EC00/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 0060EC00 returns return of sub_006E60A0 @ 0060EC26 */

int __fastcall st::fn_0060EC00(void *param_1)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = STField<undefined4>(param_1,8);
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(param_1,local_24);
  return iVar1;
}

// 0060EC40 FUN_0060ec40
#line 4 "decomp/ST.exe/functions/0060EC40/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA9AC>00404755

   [STObjectFactoryApplier] Central object factory for 0x0147 (ST_OBJECT_TYPE_0147).
   Evidence: registry[81] at 007CA9A8 stores type 0x0147 and executable pointer 00404755; allocation
   size 792 has no unique current class-layout match */

void * __cdecl st::fn_0060EC40(void)

{
  undefined4 *puVar1;

  puVar1 = st::fn_006B04D0(0x318);
  if (puVar1 != nullptr) {
    puVar1 = st::fn_00401924(puVar1);
    return puVar1;
  }
  return nullptr;
}

// 0060EC70 FUN_0060ec70
#line 4 "decomp/ST.exe/functions/0060EC70/decomp.c"
undefined4 * __fastcall st::fn_0060EC70(undefined4 *param_1)

{

  st::fn_00401933((STGameObjC *)param_1);
  *param_1 = &st_global_0079CD94;
  if (param_1 != nullptr) {
    memset((void *)((int)param_1 + 0x1d5), 0, 0x116); /* compiler bulk-zero initialization */
    return param_1;
  }
  memset(nullptr, 0, 0x116); /* compiler bulk-zero initialization */
  return nullptr;
}

// 0060ECC0 FUN_0060ecc0
#line 4 "decomp/ST.exe/functions/0060ECC0/decomp.c"
undefined4 st::fn_0060ECC0(void)

{
  return 1;
}

// 0060ECE0 FUN_0060ece0
#line 4 "decomp/ST.exe/functions/0060ECE0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_0060ECE0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short *psVar4;

  STField<int>(this,0x256) = param_8;
  STField<short>(this,0x25a) = (short)param_2;
  STField<short>(this,0x260) = (short)param_2;
  STField<short>(this,0x25e) = (short)param_4;
  STField<short>(this,0x264) = (short)param_4;
  STField<short>(this,0x25c) = (short)param_3;
  STField<short>(this,0x262) = (short)param_3;
  STField<short>(this,0x266) = (short)(param_5 % 0xc9);
  STField<short>(this,0x268) = (short)(param_6 % 0xc9);
  STField<short>(this,0x26a) = (short)(param_7 % 200);
  if (param_8 == 2) {
    iVar2 = st::fn_006ACF0D(param_2,param_3,param_4,param_5,param_6,param_7);
    STField<int>(this,0x28c) = iVar2;
    STField<int>(this,0x27c) = ((param_5 - param_2) * 10000) / iVar2;
    STField<int>(this,0x280) = ((param_6 - param_3) * 10000) / iVar2;
    STField<int>(this,0x284) = ((param_7 - param_4) * 10000) / iVar2;
  }
  else {
    STField<undefined4>(this,0x28c) = 0;
    if (((STField<int>(this,0x2dd) != 0) && (1 < STField<int>(this,0x2d5))) &&
       (param_1 < STField<int>(this,0x2d5))) {
      iVar3 = param_1 * 0x1c;
      do {
        psVar4 = (short *)(STField<int>(this,0x2dd) + iVar3);
        *psVar4 = *psVar4 * 0xc9 + STField<short>(this,0x266);
        *(short *)(STField<int>(this,0x2dd) + 2 + iVar3) =
             *(short *)(STField<int>(this,0x2dd) + 2 + iVar3) * 0xc9 +
             STField<short>(this,0x268);
        psVar4 = (short *)(STField<int>(this,0x2dd) + 4 + iVar3);
        psVar1 = (short *)(STField<int>(this,0x2dd) + 4 + iVar3);
        param_1 = param_1 + 1;
        iVar3 = iVar3 + 0x1c;
        *psVar1 = *psVar4 * 200 + STField<short>(this,0x26a);
      } while (param_1 < STField<int>(this,0x2d5));
    }
  }
  STField<undefined4>(this,0x288) = 0x21;
  STField<uint>(this,0x294) = g_playSystem_00802A38->field_00E4;
  STField<uint>(this,0x298) = g_playSystem_00802A38->field_00E4;
  return;
}

// 0060F940 FUN_0060f940
#line 4 "decomp/ST.exe/functions/0060F940/decomp.c"
undefined4
st::fn_0060F940(int param_1,int param_2,AnonShape_0060F940_1CCED7C8 *param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
            int param_13,int *param_14,int *param_15)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int local_EAX_433;
  int iVar6;
  int iVar7;
  int local_EAX_1611;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_8;

  local_8 = 0xffffffff;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == 0) {
    iVar6 = st::fn_006ACF0D(param_5,param_6,param_7,param_8,param_9,param_10);
    iVar7 = st::fn_006ACF0D(param_8,param_9,param_10,param_11,param_12,param_13);
    if ((iVar6 != 0) && (iVar7 != 0)) {
      iVar8 = (param_13 - param_10) * (param_10 - param_7) +
              (param_12 - param_9) * (param_9 - param_6) +
              (param_11 - param_8) * (param_8 - param_5);
      if (iVar6 < iVar7) {
        iVar8 = ((iVar8 / iVar6) * 10000) / iVar7;
      }
      else {
        iVar8 = ((iVar8 / iVar7) * 10000) / iVar6;
      }
      *param_14 = iVar8;
      *param_15 = iVar7;
      param_3->field_0008 = iVar6;
      if (iVar8 != 0) {
        iVar8 = (iVar6 * 10000) / iVar8;
        param_3->field_000C = (param_8 - param_5) * 10 - ((param_11 - param_8) * iVar8 * 10) / iVar7
        ;
        param_3->field_0010 = (param_9 - param_6) * 10 - ((param_12 - param_9) * iVar8 * 10) / iVar7
        ;
        param_3->field_0014 =
             (param_10 - param_7) * 10 - ((param_13 - param_10) * iVar8 * 10) / iVar7;
      }
      local_EAX_1611 =
           st::fn_006ACF0D(param_3->field_000C,param_3->field_0010,param_3->field_0014,0,0,0);
      if (local_EAX_1611 != 0) {
        local_8 = 8;
        param_3->field_000C = (param_3->field_000C * 10000) / local_EAX_1611;
        param_3->field_0010 = (param_3->field_0010 * 10000) / local_EAX_1611;
        param_3->field_0014 = (param_3->field_0014 * 10000) / local_EAX_1611;
      }
      return local_8;
    }
    return 0xffffffff;
  }
  if (param_1 == param_2) {
    return 0;
  }
  psVar1 = &SHORT_007ed574 + param_1 * 4;
  psVar2 = &SHORT_007ed572 + param_1 * 4;
  psVar3 = &SHORT_007ed570 + param_1 * 4;
  iVar8 = *(int *)(&DAT_007cfe74 + param_1 * 4);
  iVar5 = (((((int)*psVar1 * (int)(&SHORT_007ed574)[param_2 * 4] +
              (int)*psVar2 * (int)(&SHORT_007ed572)[param_2 * 4] +
             (int)*psVar3 * (int)(&SHORT_007ed570)[param_2 * 4]) * 1000000) / iVar8) * 10000) /
          *(int *)(&DAT_007cfe74 + param_2 * 4);
  if ((iVar5 < 0) && (iVar5 < -0xdac)) {
    return 0xffffffff;
  }
  iVar4 = iVar5 >> 0x1f;
  iVar9 = iVar5 / 10 + iVar4;
  iVar10 = iVar9 - iVar4;
  if (iVar10 < 0x1f5) {
    if (iVar10 == 500) {
      local_8 = 4;
    }
    else {
      if (iVar10 == -0x14d) {
        local_8 = 7;
        param_3->field_0008 = (iVar8 * 0xc9) / 1000;
        iVar5 = (*(int *)(&DAT_007cfe74 + param_1 * 4) * 10000) / iVar5;
        param_3->field_000C =
             *psVar3 * 1000 -
             ((&SHORT_007ed570)[param_2 * 4] * iVar5 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
        param_3->field_0010 =
             *psVar2 * 1000 -
             ((&SHORT_007ed572)[param_2 * 4] * iVar5 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
        iVar8 = *psVar1 * 1000 -
                ((&SHORT_007ed574)[param_2 * 4] * iVar5 * 1000) /
                *(int *)(&DAT_007cfe74 + param_2 * 4);
        param_3->field_0014 = iVar8;
        iVar5 = st::fn_006ACF0D(param_3->field_000C,param_3->field_0010,iVar8,0,0,0);
        param_3->field_000C = (param_3->field_000C * -10000) / iVar5;
        param_3->field_0010 = (param_3->field_0010 * -10000) / iVar5;
        iVar8 = param_3->field_0014 * -5;
        goto LAB_0060fe02;
      }
      if (iVar9 == iVar4) {
        param_3->field_0008 = (iVar8 * 0xc9) / 1000;
        param_3->field_000C = (&SHORT_007ed570)[param_2 * 4] * -10000;
        param_3->field_0010 = (&SHORT_007ed572)[param_2 * 4] * -10000;
        iVar8 = (&SHORT_007ed574)[param_2 * 4] * -10000;
        param_3->field_0014 = iVar8;
        local_EAX_433 = st::fn_006ACF0D(param_3->field_000C,param_3->field_0010,iVar8,0,0,0);
        param_3->field_000C = (param_3->field_000C * 10000) / local_EAX_433;
        param_3->field_0010 = (param_3->field_0010 * 10000) / local_EAX_433;
        param_3->field_0014 = (param_3->field_0014 * 10000) / local_EAX_433;
        return 6;
      }
      if (iVar10 != 0x14d) {
        return 0xffffffff;
      }
      local_8 = 5;
    }
  }
  else if (iVar10 == 0x241) {
    local_8 = 3;
  }
  else if (iVar10 == 0x2c3) {
    local_8 = 2;
  }
  else {
    if (iVar10 != 0x330) {
      return 0xffffffff;
    }
    local_8 = 1;
  }
  param_3->field_0008 = (iVar8 * 0xc9) / 1000;
  iVar5 = (*(int *)(&DAT_007cfe74 + param_1 * 4) * 10000) / iVar5;
  param_3->field_000C =
       *psVar3 * 1000 -
       ((&SHORT_007ed570)[param_2 * 4] * iVar5 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
  param_3->field_0010 =
       *psVar2 * 1000 -
       ((&SHORT_007ed572)[param_2 * 4] * iVar5 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
  iVar8 = *psVar1 * 1000 -
          ((&SHORT_007ed574)[param_2 * 4] * iVar5 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
  param_3->field_0014 = iVar8;
  iVar5 = st::fn_006ACF0D(param_3->field_000C,param_3->field_0010,iVar8,0,0,0);
  param_3->field_000C = (param_3->field_000C * 10000) / iVar5;
  param_3->field_0010 = (param_3->field_0010 * 10000) / iVar5;
  iVar8 = param_3->field_0014 * 5;
LAB_0060fe02:
  param_3->field_0014 = (iVar8 * 2000) / iVar5;
  return local_8;
}

