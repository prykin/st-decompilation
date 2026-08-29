#include "../../pseudocode_runtime.h"


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:3: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=10, scalar_uses=0; sites=007286E5 dereference: MOV AL,byte ptr [EBP +
   EDX*0x1] | 007286FE dereference: MOV BL,byte ptr [EBP + EDX*0x1] | 00728705 dereference: MOV
   BH,byte ptr [EBP + EAX*0x1] | 0072871A dereference: MOV BL,byte ptr [EBP + EDX*0x1] | 00728721
   dereference: MOV BH,byte ptr [EBP + EAX*0x1] | 0072872B dereference: MOV BL,byte ptr [EBP +
   EDX*0x1] | 00728732 dereference: MOV BH,byte ptr [EBP + EAX*0x1] | 0072874B dereference: MOV
   AL,byte ptr [EBP + EDX*0x1] | 00728757 dereference: MOV AL,byte ptr [EBP + EDX*0x1] | 00728764
   dereference: MOV AL,byte ptr [EBP + EDX*0x1] */

void __thiscall FUN_00728640(void *this,int param_1,int param_2,void *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  byte *pbVar9;
  uint *puVar10;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_c;
  int local_8;

  local_c = STField<int>(this,0x28);
  auto param_1_after_write = param_1 + g_runtimeRecords_00857110[g_runtimeRecordCount_00857114].field_0002 * param_2; /* compiler stack-slot lifetime split */
  local_8 = g_runtimeRecords_00857110[g_runtimeRecordCount_00857114].field_0002 * local_c +
            STField<int>(this,0xc);
  local_28 = 1;

  iVar5 = FUN_007287e0(&local_28,g_runtimeRecordCount_00857114);
  if (iVar5 != 0) {
    local_44 = -1;

    iVar5 = FUN_007287e0(&local_44,g_runtimeRecordCount_00857114);
    if (iVar5 != 0) {
      do {
        iVar6 = local_1c >> 0x10;
        iVar5 = (local_38 >> 0x10) - iVar6;
        if (iVar5 != 0 && iVar6 <= local_38 >> 0x10) {
          puVar10 = (uint *)(param_1_after_write + iVar6);
          pbVar9 = (byte *)(local_8 + iVar6);
          uVar7 = 0;
          if (2 < iVar5) {
            uVar7 = (uint)*pbVar9;
            if (((uint)puVar10 & 1) != 0) {
              pbVar9 = pbVar9 + 1;
              *(undefined1 *)puVar10 = *(undefined1 *)((int)param_3 + uVar7);
              puVar10 = (uint *)((int)puVar10 + 1);
              iVar5 = iVar5 + -1;
              uVar7 = (uint)*pbVar9;
            }
            if (((uint)puVar10 & 2) != 0) {
              pbVar1 = pbVar9 + 1;
              pbVar9 = pbVar9 + 2;
              iVar5 = iVar5 + -2;
              *(ushort *)puVar10 =
                   /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                   CONCAT11(*(undefined1 *)((int)param_3 + (uint)*pbVar1),
                            *(undefined1 *)((int)param_3 + uVar7));
              uVar7 = (uint)*pbVar9;
              puVar10 = (uint *)((int)puVar10 + 2);
            }
            while (3 < iVar5) {
              pbVar1 = pbVar9 + 2;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              uVar8 = CONCAT11(*(undefined1 *)((int)param_3 + (uint)pbVar9[1]),
                               *(undefined1 *)((int)param_3 + uVar7));
              pbVar2 = pbVar9 + 3;
              pbVar9 = pbVar9 + 4;
              *puVar10 = (uint)uVar8 |
                         /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                         CONCAT22(uVar8,CONCAT11(*(undefined1 *)((int)param_3 + (uint)*pbVar2),
                                                 *(undefined1 *)((int)param_3 + (uint)*pbVar1))) <<
                         0x10;
              uVar7 = (uint)*pbVar9;
              puVar10 = puVar10 + 1;
              iVar5 = iVar5 + -4;
            }
            if (iVar5 == 0) goto LAB_0072876c;
          }
          bVar3 = pbVar9[1];
          *(undefined1 *)puVar10 = *(undefined1 *)((int)param_3 + uVar7);
          if (iVar5 != 1) {
            bVar4 = pbVar9[2];
            STField<undefined1>(puVar10,1) = *(undefined1 *)((int)param_3 + (uint)bVar3);
            if (iVar5 != 2) {
              STField<undefined1>(puVar10,2) = *(undefined1 *)((int)param_3 + (uint)bVar4);
            }
          }
        }
LAB_0072876c:
        local_24 = local_24 + -1;
        if (local_24 == 0) {

          iVar5 = FUN_007287e0(&local_28,local_20);
          if (iVar5 == 0) {
            return;
          }
        }
        else {
          local_1c = local_1c + local_18;
        }
        local_40 = local_40 + -1;
        if (local_40 == 0) {

          iVar5 = FUN_007287e0(&local_44,local_3c);
          if (iVar5 == 0) {
            return;
          }
        }
        else {
          local_38 = local_38 + local_34;
        }
        param_1_after_write = param_1_after_write + param_2;
        local_8 = local_8 + local_c;
      } while( true );
    }
  }
  return;
}

