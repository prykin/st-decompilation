#include "../../pseudocode_runtime.h"


void __fastcall FUN_00621a70(AnonShape_00621A70_2531BB4B *param_1)

{
  int iVar1;
  uint index;
  char *pcVar2;
  int local_c;
  int local_8;

  index = 0;
  local_8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1->field_010A != 0) && (local_c = *(int *)(param_1->field_010A + 0xc), 0 < local_c)) {
    do {
      iVar1 = param_1->field_010A;
      if ((index < *(uint *)(iVar1 + 0xc)) &&
         (pcVar2 = (char *)(*(int *)(iVar1 + 8) * index + *(int *)(iVar1 + 0x1c)),
         pcVar2 != nullptr)) {
        if (((param_1->field_0105 != '\0') && (*pcVar2 == '\0')) &&
           (9 < g_playSystem_00802A38->field_00E4 - param_1->field_0106)) {
          SndUnderAttMenegC::sub_00621780((SndUnderAttMenegC *)param_1,index);
        }
        if (*(uint *)(pcVar2 + 1) < 0x5dd) {
          index = index + 1;
        }
        else {
          DArrayRemoveAt((DArrayTy *)param_1->field_010A,index);
        }
        if (*pcVar2 != '\0') {
          local_8 = local_8 + 1;
        }
      }
      local_c = local_c + -1;
    } while (local_c != 0);
    if (local_8 != 0) {
      return;
    }
  }
  param_1->field_0105 = 0;
  return;
}

