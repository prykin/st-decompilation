#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: complete mutable byte-buffer machine proof: direct_calls=2, byte_reads=6,
   byte_writes=12, rep_movs_transports=0, wide_dereferences=1, escapes=0; byte_read_sites=006D0FCA
   MOV DL,byte ptr [EDI] | 006D0FE1 MOV DL,byte ptr [EDI] | 006D0FF8 MOV DL,byte ptr [EDI] |
   006D100F MOV DL,byte ptr [EDI] | 006D1071 MOV AL,byte ptr [EDI] | 006D10C8 MOV CL,byte ptr [EAX];
   byte_write_sites=006D0FCF MOV byte ptr [EDI],AL | 006D0FE6 MOV byte ptr [EDI],AL | 006D0FFD MOV
   byte ptr [EDI],AL | 006D1014 MOV byte ptr [EDI],AL | 006D1030 MOV byte ptr [EDI],DL | 006D1033
   MOV byte ptr [EDI],CL | 006D1045 MOV byte ptr [EDI],DL | 006D1048 MOV byte ptr [EDI],AL | ... +4;
   wide_sites=006D101D MOV EAX,dword ptr [EDI] operand=DWORD PTR [EDI] width=4
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:6: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=2,
   pointer_dereferences=9, scalar_uses=0; sites=006D0FCC dereference: MOV AL,byte ptr [EBX +
   EDX*0x1] | 006D0FE3 dereference: MOV AL,byte ptr [EBX + EDX*0x1] | 006D0FFA dereference: MOV
   AL,byte ptr [EBX + EDX*0x1] | 006D1011 dereference: MOV AL,byte ptr [EBX + EDX*0x1] | 006D1027
   dereference: MOV DL,byte ptr [EBX + EDX*0x1] | 006D102A dereference: MOV CL,byte ptr [EBX +
   ECX*0x1] | 006D103E dereference: MOV DL,byte ptr [EBX + EDX*0x1] | 006D1041 dereference: MOV
   AL,byte ptr [EBX + ECX*0x1] | 006D1073 dereference: MOV AL,byte ptr [EBX + EAX*0x1] */

void FUN_006d0f50(byte *param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6,
                 void *param_7,byte param_8,uint param_9)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  if (0 < (int)param_5) {
    if (param_9 != 0xffffffff) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _param_8 = CONCAT13(param_8,CONCAT12(param_8,CONCAT11(param_8,param_8)));
      /* ST_PSEUDO[stack_slot_reuse,packed_or_unaligned_piece]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; expected named packed member, bit extract/compose, or unaligned load */
      param_9 = CONCAT13((byte)param_9,CONCAT12((byte)param_9,CONCAT11((byte)param_9,(byte)param_9))
                        );
      do {
        uVar6 = param_5 >> 2;
        if (param_5 >> 2 != 0) {
          do {
            while( true ) {
              uVar5 = *param_3;
              param_3 = param_3 + 1;
              if (uVar5 == _param_8) break;
              if (uVar5 == param_9) {
                param_1 = (byte *)((int)param_1 + 4);
                uVar5 = uVar6 - 1;
                bVar2 = (int)uVar6 < 1;
                uVar6 = uVar5;
                if (uVar5 == 0 || bVar2) goto LAB_006d105f;
              }
              else {
                if ((byte)uVar5 != (byte)param_9) {
                  if ((byte)uVar5 == param_8) {
                    uVar5 = STReplaceLowByte((uint32_t)(uVar5), (uint8_t)(*(undefined1 *)((int)param_7 + (uint)(byte)*(uint *)param_1)));
                  }
                  *param_1 = (byte)uVar5;
                }
                uVar4 = uVar5 >> 8;
                bVar3 = (byte)(uVar5 >> 8);
                if (bVar3 != (byte)param_9) {
                  if (bVar3 == param_8) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar4 = (uint)CONCAT21((short)(uVar5 >> 0x10),
                                           *(undefined1 *)
                                            ((int)param_7 + (uint)STField<byte>(param_1,1)));
                  }
                  STField<byte>(param_1,1) = (byte)uVar4;
                }
                uVar5 = uVar4 >> 8;
                bVar3 = (byte)(uVar4 >> 8);
                if (bVar3 != (byte)param_9) {
                  if (bVar3 == param_8) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar5 = (uint)CONCAT21((short)(uVar4 >> 0x10),
                                           *(undefined1 *)
                                            ((int)param_7 + (uint)STField<byte>(param_1,2)));
                  }
                  STField<byte>(param_1,2) = (byte)uVar5;
                }
                bVar3 = (byte)(uVar5 >> 8);
                if (bVar3 != (byte)param_9) {
                  if (bVar3 == param_8) {
                    bVar3 = *(byte *)((int)param_7 + (uint)STField<byte>(param_1,3));
                  }
                  STField<byte>(param_1,3) = bVar3;
                }
                param_1 = (byte *)((int)param_1 + 4);
                uVar5 = uVar6 - 1;
                bVar2 = (int)uVar6 < 1;
                uVar6 = uVar5;
                if (uVar5 == 0 || bVar2) goto LAB_006d105f;
              }
            }
            uVar5 = *(uint *)param_1;
            bVar3 = *(byte *)((int)param_7 + (uVar5 >> 8 & 0xff));
            *param_1 = *(byte *)((int)param_7 + (uVar5 & 0xff));
            STField<byte>(param_1,1) = bVar3;
            bVar3 = *(byte *)((int)param_7 + (uVar5 >> 0x18));
            STField<byte>(param_1,2) = *(byte *)((int)param_7 + (uVar5 >> 0x10 & 0xff));
            STField<byte>(param_1,3) = bVar3;
            param_1 = (byte *)((int)param_1 + 4);
            uVar5 = uVar6 - 1;
            bVar2 = 0 < (int)uVar6;
            uVar6 = uVar5;
          } while (uVar5 != 0 && bVar2);
        }
LAB_006d105f:
        uVar6 = param_5 & 3;
        if ((param_5 & 3) != 0) {
          do {
            while( true ) {
              bVar3 = (byte)*param_3;
              param_3 = (uint *)((int)param_3 + 1);
              if (bVar3 != param_8) break;
              *param_1 = *(byte *)((int)param_7 + (uint)(byte)*(uint *)param_1);
              param_1 = (byte *)((int)param_1 + 1);
              uVar5 = uVar6 - 1;
              bVar2 = (int)uVar6 < 1;
              uVar6 = uVar5;
              if (uVar5 == 0 || bVar2) goto LAB_006d1089;
            }
            if (bVar3 != (byte)param_9) {
              *param_1 = bVar3;
            }
            param_1 = (byte *)((int)param_1 + 1);
            uVar5 = uVar6 - 1;
            bVar2 = 0 < (int)uVar6;
            uVar6 = uVar5;
          } while (uVar5 != 0 && bVar2);
        }
LAB_006d1089:
        param_3 = (uint *)((int)param_3 + (param_4 - param_5));
        param_1 = (byte *)((int)param_1 + (param_2 - param_5));
        iVar1 = param_6 + -1;
        bVar2 = param_6 < 1;
        param_6 = iVar1;
        if (iVar1 == 0 || bVar2) {
          return;
        }
      } while( true );
    }
    if (0 < param_6) {
      auto param_9_after_write = param_6; /* compiler stack-slot lifetime split */
      do {
        uVar6 = param_5;
        if (0 < (int)param_5) {
          do {
            uVar5 = *param_3;
            param_3 = (uint *)((int)param_3 + 1);
            if ((byte)uVar5 == param_8) {
              *param_1 = *(byte *)((uint)*param_1 + (int)param_7);
            }
            else {
              *param_1 = (byte)uVar5;
            }
            param_1 = param_1 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        param_3 = (uint *)((int)param_3 + (param_4 - param_5));
        param_1 = param_1 + (param_2 - param_5);
        param_9_after_write = param_9_after_write - 1;
      } while (param_9_after_write != 0);
    }
  }
  return;
}

