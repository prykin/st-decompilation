#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=5, scalar_uses=0; sites=004E13A6 dereference: MOV EAX,dword ptr [ESI + 0x24]
   | 004E13A9 dereference: MOV ECX,dword ptr [ESI + 0x23d] | 004E13C0 dereference: MOV CL,byte ptr
   [ESI + 0x24] | 004E13C5 dereference: MOV EAX,dword ptr [ESI + 0x235] | 004E13F6 dereference: MOV
   ESI,dword ptr [ESI + 0x5ac] */

undefined4 __fastcall FUN_004e13a0(void *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uVar4 = 0;
  if (STField<int>(param_1,0x24) != STField<int>(param_1,0x23d)) {
    /* ST_CALLSITE[004E13BB]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar2 = LookupRecordByte((char)STField<int>(param_1,0x23d));
    iVar1 = STField<int>(param_1,0x235);
    /* ST_CALLSITE[004E13E0]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar3 = LookupRecordByte(STField<char>(param_1,0x24));
    if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
      return 0;
    }
  }
  switch(STField<undefined4>(param_1,0x5ac)) {
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x4f:
  case 0x52:
  case 0x5e:
  case 0x5f:
  case 0x60:
    uVar4 = 1;
  }
  return uVar4;
}

