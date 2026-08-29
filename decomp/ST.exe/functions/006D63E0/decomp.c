#include "../../pseudocode_runtime.h"


/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/RecoveredReceiver_006CEC40.
   Evidence: incoming_receiver_captures=1; receiver_accesses=17; incoming_edx_uses=0; calls=1;
   ecx_pointer_setup=1; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=3; adopt_untyped_existing_thiscall;
   single_call_corroborated_by_receiver_family */

int __thiscall
SubmarineTitans::Recovered::HiddenThis::RecoveredReceiver_006CEC40::FUN_006d63e0
          (RecoveredReceiver_006CEC40 *this,int *param_1)

{
  ushort uVar1;
  BITMAPINFO *pBVar2;
  AnonPointee_SubmarineTitans__Recovered__HiddenThis__RecoveredReceiver_006CEC40_0288 *pAVar3;
  code *pcVar4;
  int *piVar5;
  void *pvVar6;
  HRGN hrgn;
  int iVar7;
  uint uVar8;
  BOOL BVar9;
  int iVar10;
  LONG *lpbmi;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  uint *local_bc;
  int local_b8;
  HDC local_b4 [3];
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  uint local_98 [4];
  int local_88;
  ushort *local_74;
  byte *local_1c;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079dd90;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff0c;
  pBVar2 = this->field_0284;
  lpbmi = &pBVar2[1].bmiHeader.biWidth;
  local_b4[0] = (HDC)0x0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(uint *)(this->field_0288->field_0028 + 0xc) & 0x100) == 0) {
    ExceptionList = &local_14;
    /* ST_CALLSITE[006D6444]: CALL dword ptr [EDX + 0xc] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar7 = (**(code **)(*param_1 + 0xc))(param_1,&local_bc);
    if (iVar7 < 0) {
      ExceptionList = local_14;
      return iVar7;
    }
    iVar7 = this->field_0288->field_0028;
    if ((STField<uint>(iVar7,0x8) & 0x4000000) != 0) {
      /* ST_CALLSITE[006D6467]: CALL dword ptr [0x0085bb8c] */
      EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x4f0));
    }
    pAVar3 = this->field_0288;
    if (((pAVar3->field_0004 & 8) == 0) &&
       (((pAVar3->field_0004 & 4) == 0 ||
        ((pAVar3->field_0020 == pAVar3->field_0010 && (pAVar3->field_0024 == pAVar3->field_0014)))))
       ) {
      iVar7 = *(int *)&pAVar3->field_0x18;
      iVar10 = *(int *)&pAVar3->field_0x1c;
      local_a0 = pAVar3->field_0020;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pcVar4 = *(code **)(pAVar3->field_0028 + 0x4e4);
      if (pcVar4 != nullptr) {
        /* ST_CALLSITE[006D64C2]: CALL ECX */
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        (*pcVar4)(*(undefined4 *)(pAVar3->field_0028 + 0x4ec),iVar7,iVar10,local_a0,
                  pAVar3->field_0024);
      }
      pAVar3 = this->field_0288;

      Library::DKW::DDX::FUN_006b42d0
                ((DDXContext *)pAVar3->field_0028,iVar7,iVar10,(BITMAPINFO *)lpbmi,local_bc,
                 pAVar3->field_0008,pAVar3->field_000C,pAVar3->field_0010,pAVar3->field_0014);
    }
    else {
      if ((((byte)pAVar3->field_0004 & 8) == 0) &&
         ((pAVar3->field_0020 != pAVar3->field_0010 * 2 ||
          (pAVar3->field_0024 != pAVar3->field_0014 * 2)))) {
        local_c0 = 0;
      }
      else {
        local_c0 = 1;
      }
      iVar7 = *(int *)&pAVar3->field_0x18;
      local_a4 = *(int *)&pAVar3->field_0x1c;
      local_a0 = pAVar3->field_0020;
      local_9c = pAVar3->field_0024;
      iVar10 = pAVar3->field_0028;
      piVar5 = *(int **)(iVar10 + 0x40);
      local_a8 = iVar7;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      if (*(code **)(iVar10 + 0x4e4) != nullptr) {
        /* ST_CALLSITE[006D6571]: CALL ECX */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(iVar10 + 0x4e4))
                  (STField<undefined4>(iVar10,0x4EC),iVar7,local_a4,local_a0,local_9c);
      }
      pAVar3 = this->field_0288;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((*(int *)(pAVar3->field_0028 + 0x20) < 0x11) &&
         (uVar1 = *(ushort *)((int)&pBVar2[1].bmiHeader.biCompression + 2), uVar1 < 0x11)) {
        uVar8 = (uint)uVar1 * pBVar2[1].bmiHeader.biHeight + 0x1f >> 3 & 0x1ffffffc;
        /* ST_CALLSITE[006D65C9]: CALL dword ptr [0x0085bbb8] */
        BVar9 = IsBadReadPtr((uint *)(((*(int *)&pBVar2[1].bmiHeader.biPlanes - pAVar3->field_000C)
                                      - pAVar3->field_0014) * uVar8 + (int)local_bc),
                             uVar8 * pAVar3->field_0014);
        if (BVar9 == 0) {
          local_cc = local_a4;
          local_c8 = iVar7 + local_a0;
          local_c4 = local_a4 + local_9c;
          memset(local_98, 0, 0x7c); /* compiler bulk-zero initialization */
          local_98[0] = 0x7c;
          iVar10 = 0;
          local_d0 = iVar7;
          do {
            /* ST_CALLSITE[006D663B]: CALL dword ptr [ECX + 0x64] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar7 = (**(code **)(*piVar5 + 100))(piVar5,&local_d0,local_98,0x21,0);
            if (iVar7 == 0) goto LAB_006d666f;
            if (iVar7 != -0x7789fe3e) break;
            FUN_006cec40((AnonShape_006CEC40_BB23E716 *)this->field_0288->field_0028);
            iVar10 = iVar10 + 1;
          } while (iVar10 < 2);
          if (iVar7 == 0) {
LAB_006d666f:
            local_8 = 0;
            pAVar3 = this->field_0288;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)(pAVar3->field_0028 + 0x20) == 8) {
              uVar8 = (uint)*(ushort *)((int)&pBVar2[1].bmiHeader.biCompression + 2) *
                      pBVar2[1].bmiHeader.biHeight + 0x1f >> 3 & 0x1ffffffc;
              iVar7 = ((*(int *)&pBVar2[1].bmiHeader.biPlanes - pAVar3->field_000C) + -1) * uVar8 +
                      pAVar3->field_0008;
              if (local_c0 == 0) {
                FUN_006db310((undefined4 *)local_74,local_88,local_a0,local_9c,iVar7 + (int)local_bc
                             ,-uVar8,pAVar3->field_0010,pAVar3->field_0014);
              }
              else {
                FUN_006db450((undefined4 *)local_74,local_88,
                             (RecoveredRecord_006DB450_97F2DDBC *)(iVar7 + (int)local_bc),-uVar8,
                             pAVar3->field_0010,pAVar3->field_0014);
              }
            }
            else {
              uVar1 = *(ushort *)((int)&pBVar2[1].bmiHeader.biCompression + 2);
              if (uVar1 == 8) {
                uVar8 = pBVar2[1].bmiHeader.biHeight * 8 + 0x1fU >> 3 & 0x1ffffffc;
                iVar7 = ((*(int *)&pBVar2[1].bmiHeader.biPlanes - pAVar3->field_000C) + -1) * uVar8
                        + pAVar3->field_0008;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                pvVar6 = *(void **)(pAVar3->field_0028 + 0x4c0);
                if (local_c0 == 0) {
                  FUN_006db0d0((undefined4 *)local_74,local_88,local_a0,local_9c,
                               iVar7 + (int)local_bc,-uVar8,pAVar3->field_0010,pAVar3->field_0014,
                               pvVar6);
                }
                else {
                  FUN_006db1f0(local_74,local_88,(byte *)(iVar7 + (int)local_bc),-uVar8,
                               pAVar3->field_0010,pAVar3->field_0014,pvVar6);
                }
              }
              else {
                uVar8 = (uint)uVar1 * pBVar2[1].bmiHeader.biHeight + 0x1f >> 3 & 0x1ffffffc;
                iVar7 = ((*(int *)&pBVar2[1].bmiHeader.biPlanes - pAVar3->field_000C) + -1) * uVar8
                        + pAVar3->field_0008 * 2;
                if (local_c0 == 0) {
                  FUN_006daed0((undefined4 *)local_74,local_88,local_a0,local_9c,
                               iVar7 + (int)local_bc,-uVar8,pAVar3->field_0010,pAVar3->field_0014);
                }
                else {
                  FUN_006dafd0(local_74,local_88,(ushort *)(iVar7 + (int)local_bc),-uVar8,
                               pAVar3->field_0010,pAVar3->field_0014);
                }
              }
            }
            local_8 = 0xffffffff;
          }
        }
        /* ST_CALLSITE[006D685A]: CALL dword ptr [ECX + 0x80] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar5 + 0x80))(piVar5,0);
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        piVar5 = *(int **)(pAVar3->field_0028 + 0x40);
        local_b8 = 0;
        do {
          /* ST_CALLSITE[006D687C]: CALL dword ptr [EDX + 0x44] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar7 = (**(code **)(*piVar5 + 0x44))(piVar5,local_b4);
          if (iVar7 == 0) goto LAB_006d68c8;
          if (iVar7 == -0x7789fe3e) {
            FUN_006cec40((AnonShape_006CEC40_BB23E716 *)this->field_0288->field_0028);
          }
          else if (iVar7 != -0x7789fde4) break;
          local_b8 = local_b8 + 1;
        } while (local_b8 < 40000);
        if (iVar7 == 0) {
LAB_006d68c8:
          iVar7 = this->field_0288->field_0028;
          /* ST_CALLSITE[006D68E8]: CALL dword ptr [0x0085bab0] */
          SetViewportOrgEx(local_b4[0],STField<int>(iVar7,0x10),STField<int>(iVar7,0x14),(LPPOINT)0x0);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          hrgn = *(HRGN *)(this->field_0288->field_0028 + 0x494);
          if (hrgn != (HRGN)0x0) {
            /* ST_CALLSITE[006D6909]: CALL dword ptr [0x0085baac] */
            SelectClipRgn(local_b4[0],hrgn);
          }
          *(HDC **)(this->field_0288->field_0028 + 0x47c) = local_b4;
          *(int **)(this->field_0288->field_0028 + 0x480) = piVar5;
          pAVar3 = this->field_0288;
          /* ST_CALLSITE[006D697B]: CALL dword ptr [0x0085baa4] */
          StretchDIBits(local_b4[0],local_a8,local_a4,local_a0,local_9c,pAVar3->field_0008,
                        pAVar3->field_000C,pAVar3->field_0010,pAVar3->field_0014,local_bc,
                        (BITMAPINFO *)lpbmi,0,0xcc0020);
          iVar7 = 0;
          do {
            /* ST_CALLSITE[006D698D]: CALL dword ptr [EAX + 0x68] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            iVar10 = (**(code **)(*piVar5 + 0x68))(piVar5,local_b4[0]);
            if (iVar10 == 0) break;
            if (iVar10 == -0x7789fe3e) {
              FUN_006cec40((AnonShape_006CEC40_BB23E716 *)this->field_0288->field_0028);
            }
            else if (iVar10 != -0x7789fde4) break;
            iVar7 = iVar7 + 1;
          } while (iVar7 < 40000);
        }
        *(undefined4 *)(this->field_0288->field_0028 + 0x47c) = 0;
      }
    }
    iVar7 = this->field_0288->field_0028;
    if ((STField<uint>(iVar7,0x8) & 0x4000000) != 0) {
      /* ST_CALLSITE[006D69F5]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x4f0));
    }
  }
  ExceptionList = local_14;
  return 0;
}

