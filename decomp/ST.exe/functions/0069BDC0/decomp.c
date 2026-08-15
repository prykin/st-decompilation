#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=3; incoming_stack_parameter_uses=19; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
CGenerate::sub_0069BDC0
          (CGenerate *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          RecoveredRecord_CGenerate_0069BDC0 *param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  uint uVar5;
  uint local_EAX_838;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int local_7c;
  undefined4 *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int *local_5c;
  int *local_58;
  int local_50;
  int local_48;
  int local_40;
  uint local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d808;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff6c;
  local_40 = 0;
  local_68 = 0;
  local_7c = 0;
  if ((param_2 < 5) || (param_3 < 5)) {
    local_40 = 0;
  }
  else {
    local_48 = param_2 / 2 + param_3 / 2;
    local_48 = local_48 + local_48 / 2;
    uVar6 = ((this->field_5833 - param_2) / param_4 + 2) *
            ((this->field_5837 - param_3) / param_4 + 2);
    ExceptionList = &local_14;
    local_78 = Library::DKW::LIB::MemAlloc(uVar6 * 0x40);
    puVar10 = local_78;
    for (iVar5 = (uVar6 & 0x3ffffff) << 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    local_64 = 0;
    local_2c = 1;
    local_3c = 0;
    local_50 = 0;
    while (iVar5 = 0, (int)local_3c < (int)uVar6) {
      if (this->field_5837 < local_64 + param_3) {
        local_64 = this->field_5837 - param_3;
        local_2c = 0;
      }
      local_24 = 1;
      iVar9 = local_64 + -1;
      iVar7 = local_3c << 6;
      do {
        *(int *)(iVar7 + 0x30 + (int)local_78) = iVar5;
        *(int *)(iVar7 + 0x34 + (int)local_78) = local_64;
        *(int *)(iVar7 + 0x38 + (int)local_78) = param_2 + -1 + iVar5;
        *(int *)(iVar7 + 0x3c + (int)local_78) = iVar9 + param_3;
        puVar1 = (undefined1 *)(iVar7 + (int)local_78);
        if (this->field_5833 + -1 <= *(int *)(puVar1 + 0x38)) {
          local_24 = 0;
        }
        iVar2 = sub_0069B400(this,iVar5,local_64,*(int *)(puVar1 + 0x38),*(int *)(puVar1 + 0x3c),
                             (int)puVar1);
        *(int *)(iVar7 + 0x2c + (int)local_78) = iVar2;
        iVar2 = *(int *)(iVar7 + 0x2c + (int)local_78);
        if (local_50 < iVar2) {
          local_50 = iVar2;
        }
        local_3c = local_3c + 1;
        iVar7 = iVar7 + 0x40;
        iVar5 = iVar5 + param_4;
        iVar2 = this->field_5833;
        if (iVar2 <= iVar5 + param_2) {
          iVar5 = iVar2 - param_2;
        }
      } while ((iVar5 < iVar2) && (local_24 != 0));
      local_64 = local_64 + param_4;
      if ((this->field_5837 <= local_64) ||
         (((-1 < (int)local_3c && (this->field_5837 + -1 <= (int)local_78[local_3c * 0x10 + -1])) ||
          (local_2c == 0)))) break;
    }
    iVar5 = local_40;
    if (-1 < (int)local_3c) {
      iVar5 = param_1 * -4;
      local_5c = (int *)(&stack0xffffff6c + iVar5);
      piVar8 = (int *)(&stack0xffffff6c + iVar5);
      *(undefined4 *)(&stack0xffffff68 + iVar5) = 0x69bfdd;
      local_1c = &stack0xffffff6c;
      local_58 = (int *)&stack0xffffff6c;
      local_8 = 0xffffffff;
      Library::MSVCRT::FUN_00730810((undefined1 *)local_78,local_3c,0x40,thunk_FUN_0069b8d0);
      local_28 = (local_50 * param_5) / 100;
      local_60 = 0;
      if (0 < (int)local_3c) {
        do {
          if ((int)local_78[local_60 * 0x10 + 0xb] < local_28) {
            local_3c = local_60;
            break;
          }
          local_60 = local_60 + 1;
        } while ((int)local_60 < (int)local_3c);
      }
      local_50 = 0;
      for (local_74 = local_3c * param_1 * 0x32; -1 < local_74; local_74 = local_74 + -1) {
        iVar4 = thunk_FUN_0069b910((int)local_78,local_3c,piVar8,param_1,local_48,local_28);
        if (iVar4 == param_1) {
          local_40 = 1;
          iVar3 = thunk_FUN_0069bc10(this,(int)local_78,piVar8,param_1,0x122,&local_6c,&local_20);
          iVar5 = param_1;
          piVar11 = local_58;
          if (local_50 < iVar3) {
            for (; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar11 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar11 = piVar11 + 1;
            }
            local_68 = local_6c;
            local_7c = local_20;
            piVar8 = local_5c;
            local_50 = iVar3;
          }
        }
      }
      iVar5 = local_40;
      if (local_40 != 0) {
        param_7->field_0010 = local_68;
        param_7->field_0014 = local_7c;
        iVar9 = 0;
        iVar5 = param_1;
        if (0 < param_1) {
LAB_0069c0f3:
          uVar5 = Library::MSVCRT::FUN_0072e6c0();
          iVar5 = (int)uVar5 % 3 + 1;
          local_30 = iVar5;
          local_EAX_838 = Library::MSVCRT::FUN_0072e6c0();
          piVar8 = local_58;
          uVar6 = local_EAX_838 & 0x80000007;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
          }
          do {
            local_70 = 0;
            while( true ) {
              if (iVar9 <= local_70) {
                local_78[local_58[iVar9] * 0x10] = iVar5 << 0x10 | uVar6 & 0xffff;
                Library::DKW::TBL::DArrayAppend
                          ((DArrayTy *)param_7->field_0018,local_78 + local_58[iVar9] * 0x10);
                iVar5 = piVar8[iVar9];
                *(short *)(param_6 + iVar9 * 4) =
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     (short)((int)(local_78[iVar5 * 0x10 + 0xe] - local_78[iVar5 * 0x10 + 0xc]) / 2)
                     + *(short *)(local_78 + iVar5 * 0x10 + 0xc);
                iVar5 = piVar8[iVar9];
                *(short *)(param_6 + 2 + iVar9 * 4) =
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     (short)((int)(local_78[iVar5 * 0x10 + 0xf] - local_78[iVar5 * 0x10 + 0xd]) / 2)
                     + *(short *)(local_78 + iVar5 * 0x10 + 0xd);
                iVar9 = iVar9 + 1;
                iVar5 = param_1;
                if (iVar9 < param_1) goto LAB_0069c0f3;
                goto LAB_0069c1df;
              }
              if (*(ushort *)(local_78 + local_58[local_70] * 0x10) == uVar6) break;
              local_70 = local_70 + 1;
            }
            if ((int)uVar6 < 7) {
              uVar6 = uVar6 + 1;
              iVar5 = local_30;
            }
            else {
              uVar6 = 0;
              iVar5 = local_30 + 1;
              local_30 = iVar5;
              if (3 < iVar5) {
                iVar5 = 1;
                local_30 = 1;
              }
            }
          } while( true );
        }
      }
    }
LAB_0069c1df:
    local_40 = iVar5;
    FreeAndNull(&local_78);
  }
  ExceptionList = local_14;
  return local_40;
}

