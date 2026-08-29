#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=5, scalar_uses=0; sites=0067B263 dereference: CMP byte ptr [EDI + 0x662],0x1
   | 0067B26C dereference: MOV EAX,dword ptr [EDI + 0x6a1] | 0067B279 dereference: MOV ECX,dword ptr
   [EDI + 0x6a1] | 0067B297 dereference: CMP DX,word ptr [EDI + 0x660] | 0067B2B1 dereference: MOV
   byte ptr [EDI + 0x662],0x0 */

void __fastcall FUN_0067b260(RecoveredRecordView_0067B260_B3B2F7BB *param_1)

{
  uint index;
  DArrayTy *array;
  char *pcVar1;

  if (param_1->field_0662 == '\x01') {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    index = *(uint *)(param_1->field_06A1 + 0xc);
    while (index = index - 1, -1 < (int)index) {
      array = (DArrayTy *)param_1->field_06A1;
      if ((((index < array->count) &&
           (pcVar1 = DArrayAt<char>(array, index), pcVar1 != nullptr)
           ) && ((short)*pcVar1 == param_1->field_0660)) && (pcVar1[7] == '\0')) {

        DArrayRemoveAt(array,index);
      }
    }
    param_1->field_0662 = '\0';
  }
  return;
}

