#include "../../pseudocode_runtime.h"


int __fastcall FUN_00720d30(AnonShape_00720D30_DF382E7D *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_8;

  iVar6 = 0;
  iVar5 = param_1->field_0138;
  if ((iVar5 == 0) || (*(int *)(iVar5 + 8) == 0)) {
    return 0;
  }
  local_8 = 0;
  *(undefined4 *)(iVar5 + 4) = param_1->field_0144;
  do {
    iVar5 = param_1->field_0138;
    if (*(int *)(iVar5 + 8) <= *(int *)(iVar5 + 4)) {
      return local_8;
    }
    iVar3 = *(int *)(iVar5 + 4) + 1;
    pcVar2 = *(char **)(*(int *)(iVar5 + 0x14) + -4 + iVar3 * 4);
    *(int *)(iVar5 + 4) = iVar3;
    if (pcVar2 == nullptr) {
      return local_8;
    }
    iVar5 = -1;
    pcVar7 = pcVar2;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    pcVar7 = PTR_DAT_007f0afc;
    if ((iVar5 != -2) && (pcVar7 = pcVar2, (param_1->field_0020 & 0x20) != 0)) {
      pcVar7 = PTR_DAT_007f0b00;
    }
    iVar4 = FUN_007111c0((void *)param_1->field_0214,pcVar7);
    if (param_1->field_0030 < iVar4 + iVar6) {
      return local_8;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar6 = iVar6 + *(int *)(param_1->field_0214 + 0x5c) + iVar4;
    local_8 = local_8 + 1;
  } while( true );
}

