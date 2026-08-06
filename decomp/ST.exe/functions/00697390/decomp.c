#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=3; incoming_this_accesses=12;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall CGenerate::sub_00697390(CGenerate *this)

{
  int iVar2;
  int iVar1;
  uint uVar3;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  bool bVar8;
  uint uVar9;
  int local_60 [9];
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;

  puVar6 = this->field_584F;
  for (iVar3 = (this->field_582F & 0xfffffff) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar6[0] = 0xffff;
    puVar6[1] = 0xffff;
    puVar6 = puVar6 + 2;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (ushort *)((int)puVar6 + 1);
  }
  uVar5 = this->field_582F;
  pbVar7 = this->field_584B;
  memset(pbVar7, 0, uVar5); /* compiler bulk-zero initialization */
  sub_006948E0(this,this->field_5833);
  uVar5 = 0;
  do {
    local_10 = 0;
    if (0 < (int)this->field_582F) {
      do {
        iVar3 = local_10;
        local_18 = sub_00696400(this,local_10,(int)local_60);
        local_20 = iVar3 % this->field_5833;
        local_1c = iVar3 / this->field_5833;
        local_8 = 0;
        local_14 = 0;
        if (local_18 < 1) {
LAB_00697505:
          iVar1 = sub_00698CA0(this,local_20,local_1c,uVar5,(int *)(local_3c + 3),
                               (int *)(local_3c + 2),&local_2c);
          uVar3 = sub_00695C10(this,uVar5,local_3c[2],local_3c[3],iVar1,local_2c);
          sub_00695F70(this,uVar3,iVar3,uVar5);
        }
        else {
          local_c = local_60;
          do {
            iVar3 = *local_c;
            local_28 = (uint)(short)this->field_584F[uVar5 * this->field_582F + iVar3];
            if (-1 < (int)local_28) {
              local_24 = iVar3 % this->field_5833;
              iVar2 = thunk_FUN_00696eb0(this->field_0008,local_20,local_1c,local_24,
                                         iVar3 / this->field_5833,uVar5,0);
              iVar3 = local_8;
              if (iVar2 != 0) {
                bVar8 = local_8 == 1;
                local_3c[local_8] = local_28;
                if (bVar8) {
                  if (local_3c[0] != local_3c[1]) {
                    local_8 = 2;
                    goto LAB_006974d2;
                  }
                }
                else {
                  local_8 = iVar3 + 1;
                  if (local_8 == 2) break;
                }
              }
            }
            local_14 = local_14 + 1;
            local_c = local_c + 1;
          } while (local_14 < local_18);
          iVar3 = local_10;
          if (local_8 == 0) goto LAB_00697505;
LAB_006974d2:
          iVar3 = local_10;
          sub_00695F70(this,local_3c[0],local_10,uVar5);
          if ((local_8 == 2) && (local_3c[0] != local_3c[1])) {
            uVar4 = local_3c[1];
            uVar9 = local_3c[0];
            if ((int)local_3c[0] < (int)local_3c[1]) {
              uVar4 = local_3c[0];
              uVar9 = local_3c[1];
            }
            thunk_FUN_006961b0(this,uVar4,uVar9,uVar5,1);
          }
        }
        local_10 = iVar3 + 1;
      } while (local_10 < (int)this->field_582F);
    }
    uVar5 = uVar5 + 1;
    if (5 < (int)uVar5) {
      return;
    }
  } while( true );
}

