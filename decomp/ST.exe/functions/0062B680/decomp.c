#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B696 MOV EAX,dword ptr [EBP + 0x8];
   first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B6B2 MOV EAX,dword ptr [EBP + 0xc];
   first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B6CB MOV EAX,dword ptr [EBP +
   0x10]; first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:3: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B699 MOV ECX,dword ptr [EBP +
   0x14]; first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:4: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B6AC MOV ECX,dword ptr [EBP +
   0x18]; first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:5: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0062B6C5 MOV ECX,dword ptr [EBP +
   0x1c]; first-use mask */

void __cdecl
FUN_0062b680(ushort param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
            ushort param_6,undefined4 param_7,int param_8)

{
  undefined4 local_44 [6];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  memset(local_44, 0, 0x40); /* compiler bulk-zero initialization */
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_28 = CONCAT22(param_1,param_4);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_24 = CONCAT22(param_2,param_5);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_20 = CONCAT22(param_3,param_6);
  local_1c = param_7;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_18 = *(undefined4 *)(param_8 + 0x18);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_14 = *(undefined4 *)(param_8 + 0x24);
  local_44[0] = 0xd2;
  local_44[1] = 0xff;
  local_44[2] = 0;
  local_44[3] = 0;
  local_2c = 3;
  local_10 = 0;
  g_playSystem_00802A38->vfunc_08(0x124,0,0,(short)local_44,0);
  return;
}

