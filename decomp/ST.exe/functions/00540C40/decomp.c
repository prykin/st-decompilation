#include "../../pseudocode_runtime.h"


undefined4 * __cdecl
FUN_00540c40(RecoveredRecord_00540C40_D825DD02 *param_1,uint *param_2,uint *param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  int local_c;
  int local_8;

  uVar4 = 0xffffffff;
  iVar6 = 0;
  pcVar7 = &CHAR_00h_008016a0;
  do {
    pcVar10 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar10 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar10;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  local_8 = 0;
  local_c = 0;
  pcVar7 = pcVar10 + -uVar4;
  pcVar10 = &CHAR_00h_008016f0;
  memmove(pcVar10, pcVar7, uVar4); /* compiler REP MOVS byte copy */
  if ((param_1 != nullptr) && (param_2 != nullptr)) {

    iVar3 = FUN_00711110(param_1,(char *)param_2);
    if (param_4 < iVar3) {
      if (param_3 != nullptr) {

        local_8 = FUN_00711110(param_1,(char *)param_3);
      }
      puVar9 = param_2;
      iVar3 = local_8;
      if (param_4 < local_8) goto LAB_00540d59;
      while (iVar3 < param_4) {
        uVar2 = FUN_00710fb0(param_1,(byte *)puVar9);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar6 = iVar6 + param_1->field_0058 +
                        (int)*(short *)(param_1->field_009A + 0x6a + (uint)uVar2 * 10);
        local_c = local_c + 1;
        puVar9 = (uint *)((int)puVar9 + 1);
        iVar3 = iVar6 + local_8;
      }
      Library::MSVCRT::_strncpy(&CHAR_00h_008016f0,(char *)param_2,local_c - 1);
      uVar4 = 0xffffffff;
      *(undefined1 *)((int)&g_sAMPanel_008016EC + local_c + 3) = 0;
      do {
        puVar9 = param_3;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        puVar9 = (uint *)((int)param_3 + 1);
        uVar5 = *param_3;
        param_3 = puVar9;
      } while ((char)uVar5 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = (char *)((int)puVar9 - uVar4);
      iVar6 = -1;
      pcVar10 = &CHAR_00h_008016f0;
      do {
        pcVar8 = pcVar10;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar8 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar8;
      } while (cVar1 != '\0');
      pcVar8 = pcVar8 + -1;
    }
    else {
      uVar4 = 0xffffffff;
      do {
        puVar9 = param_2;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        puVar9 = (uint *)((int)param_2 + 1);
        uVar5 = *param_2;
        param_2 = puVar9;
      } while ((char)uVar5 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = (char *)((int)puVar9 - uVar4);
      pcVar8 = &CHAR_00h_008016f0;
    }
    memmove(pcVar8, pcVar7, uVar4); /* compiler REP MOVS byte copy */
  }
LAB_00540d59:
  return (undefined4 *)&CHAR_00h_008016f0;
}

