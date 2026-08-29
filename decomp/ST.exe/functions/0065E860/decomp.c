#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:0: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0065E885 MOV ECX,dword ptr [EBP + 0x8];
   first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=0065E8AF MOV ECX,dword ptr [EBP + 0xc];
   first-use mask
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:3: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=4, scalar_uses=0; sites=0065E88E dereference: MOV dword ptr [ESI +
   EDX*0x4],0x14 | 0065E8A0 dereference: MOV dword ptr [ESI + EAX*0x4 + 0x4],ECX | 0065E8B8
   dereference: MOV dword ptr [ESI + EDX*0x4 + 0xc],EDI | 0065E8C7 dereference: MOV dword ptr [ESI +
   EAX*0x4 + 0x10],ECX */

undefined4 __cdecl
FUN_0065e860(ushort param_1,ushort param_2,int param_3,
            RecoveredRecordView_0065E860_255BDC19 *param_4)

{
  uint uVar1;

  if (param_4 != nullptr) {

    uVar1 = thunk_FUN_00423120((RecoveredRecord_00423120_79B5B62D *)param_3);
    if ((uVar1 & 0x10) == 0) {
      *(undefined4 *)(param_4 + DAT_00811900) = 0x14;
      param_4[DAT_00811900].field_0004 = (uint)param_1;
      param_4[DAT_00811900].field_000C = param_3;
      param_4[DAT_00811900].field_0010 = (uint)param_2;
      DAT_00811900 = DAT_00811900 + 1;
    }
  }
  return 0;
}

