#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=7, scalar_uses=0; sites=004C2E63 dereference: MOV EAX,dword ptr [ESI +
   0x245] | 004C2E79 dereference: CMP dword ptr [ESI + 0x24d],-0x1 | 004C2E86 dereference: MOV
   EAX,dword ptr [ESI + 0x24] | 004C2E89 dereference: MOV ECX,dword ptr [ESI + 0x23d] | 004C2EA0
   dereference: MOV CL,byte ptr [ESI + 0x24] | 004C2EA5 dereference: MOV EAX,dword ptr [ESI + 0x235]
   | 004C2ED6 dereference: MOV EDX,dword ptr [ESI + 0x235] */

undefined4 __fastcall FUN_004c2e60(void *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;

  switch(STField<undefined4>(param_1,0x245)) {
  case 0:
    if (STField<int>(param_1,0x24d) != -1) {
      if (STField<int>(param_1,0x24) != STField<int>(param_1,0x23d)) {
        /* ST_CALLSITE[004C2E9B]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar2 = LookupRecordByte((char)STField<int>(param_1,0x23d));
        iVar1 = STField<int>(param_1,0x235);
        /* ST_CALLSITE[004C2EC0]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
        bVar3 = LookupRecordByte(STField<char>(param_1,0x24));
        if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
          return 0;
        }
      }
      if (*(int *)(&DAT_00794e9c + STField<int>(param_1,0x235) * 4) != 0) {

        thunk_FUN_004c2c10(param_1);
        return 0;
      }
    }
    break;
  case 1:
  case 2:
  case 6:
    if (*(int *)(&DAT_00794e9c + STField<int>(param_1,0x235) * 4) != 0) {

      thunk_FUN_004c2d40(param_1);
    }
  }
  return 0;
}

