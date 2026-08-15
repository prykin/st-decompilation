#include "../../pseudocode_runtime.h"


undefined4 * __cdecl
FUN_00649ff0(uint *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  byte stack_bytes_neg_330[0x318]; /* exact EBP-relative stack object */
  char cVar1;
  uint *puVar2;
  int *piVar3;
  HINSTANCE module;
  char *pcVar4_mg0;
  DArrayTy *array;
  int iVar6;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar11;
  char *pcVar12;
  bool bVar13;
  char local_22c [532];
  uint local_18;
  Global_sub_0068CDA0_param_2Enum local_14;
  DArrayTy *local_10;
  uint local_c;
  DArrayTy *local_8;

  module = g_hINSTANCE_00807618;
  local_14 = 0;
  memset(&DAT_008117c0, 0, 0x104); /* compiler bulk-zero initialization */
  iVar5 = 0;
  memset(stack_bytes_neg_330, 0, 0x318); /* compiler bulk-zero initialization */
  local_8 = nullptr;
  local_c = DAT_00807dd5 >> 0x10 & 0xff;
  local_18 = DAT_00807dd5 & 0xffff;
  uVar8 = DAT_00807dd5 >> 0x18;
  pcVar4_mg0 = LoadResourceString(100,module);
  uVar6 = 0xffffffff;
  do {
    pcVar9 = pcVar4_mg0;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar4_mg0 + 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar9 + -uVar6;
  pcVar12 = (char *)&DAT_008117c0;
  memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  uVar6 = 0xffffffff;
  pcVar9 = &CHAR_00h_00807680;
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = local_22c;
  memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  uVar6 = 0xffffffff;
  pcVar9 = PTR_DAT_0079d65c;
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar5 = -1;
  pcVar9 = local_22c;
  do {
    pcVar11 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar11 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar11;
  } while (cVar1 != '\0');
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = pcVar11 + -1;
  memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  uVar6 = 0xffffffff;
  pcVar9 = &CHAR_00h_00807680;
  do {
    pcVar12 = pcVar9;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar12 = pcVar9 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar12;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar9 = pcVar12 + -uVar6;
  pcVar12 = stack_bytes_neg_330;
  memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
  FUN_006b78c0(stack_bytes_neg_330,stack_bytes_neg_330);
  array = (DArrayTy *)
          thunk_FUN_00683c70((LPCSTR)param_1,(AnonShape_00683C70_22193481 *)stack_bytes_neg_330,
                             &local_14,param_4,nullptr);
  if (array != nullptr) {
    if (local_14 != CASE_A) {
      local_8 = array;
      thunk_FUN_0068cda0((int *)&local_8,local_14);
      return nullptr;
    }
    local_8 = nullptr;
    uVar6 = array->count;
    local_10 = array;
    if (uVar6 != 0) {
      while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
        if (uVar6 < array->count) {
          pcVar9 = DArrayAt<char>(array, uVar6);
        }
        else {
          pcVar9 = nullptr;
        }
        if (((*pcVar9 != '\0') &&
            (iVar6 = Library::MSVCRT::__strcmpi((char *)&DAT_008117c0,pcVar9), iVar6 != 0)) ||
           (uVar8 != *(uint *)(pcVar9 + 0x104))) {
          DArrayRemoveAt(array,uVar6);
        }
      }
      uVar6 = array->count;
      if (uVar6 != 0) {
        uVar8 = 0xffffffff;
        uVar7 = 0;
        param_1 = (uint *)0xffffffff;
        param_4 = (int *)0xffffffff;
        if (0 < (int)uVar6) {
          bVar13 = uVar6 != 0;
          do {
            if (((bVar13) &&
                (pvVar4 = DArrayAt<void>(array, uVar7),
                pvVar4 != nullptr)) &&
               ((STField<int>(pvVar4,0x108) < 0 &&
                ((puVar2 = STField<uint *>(pvVar4,0x110), (int)local_c <= (int)puVar2 &&
                 (piVar3 = STField<int *>(pvVar4,0x10c), (int)piVar3 <= (int)local_c)))))) {
              if ((int)param_4 < (int)piVar3) {
                uVar8 = uVar7;
                param_4 = piVar3;
              }
              if ((int)param_1 < (int)puVar2) {
                uVar8 = uVar7;
                param_1 = puVar2;
              }
            }
            uVar6 = array->count;
            uVar7 = uVar7 + 1;
            bVar13 = uVar7 < uVar6;
          } while ((int)uVar7 < (int)uVar6);
          if (((-1 < (int)uVar8) && (uVar8 < uVar6)) &&
             (pvVar4 = DArrayAt<void>(array, uVar8),
             pvVar4 != nullptr)) {
            uVar6 = 0xffffffff;
            pcVar9 = (char *)((int)pvVar4 + 0x114);
            do {
              pcVar12 = pcVar9;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar12 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar12;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar9 = pcVar12 + -uVar6;
            pcVar12 = (char *)&DAT_008117c0;
            memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
            uVar6 = 0;
            if (param_2 != nullptr) {
              *param_2 = STField<undefined4>(pvVar4,0x218);
            }
            if (param_3 != nullptr) {
              *param_3 = 1;
            }
            goto LAB_0064a336;
          }
        }
        uVar8 = 0xffffffff;
        uVar7 = 0;
        param_1 = (uint *)0xffffffff;
        param_4 = (int *)0xffffffff;
        if (0 < (int)uVar6) {
          bVar13 = uVar6 != 0;
          do {
            if (((bVar13) &&
                (pvVar4 = DArrayAt<void>(array, uVar7),
                pvVar4 != nullptr)) &&
               ((STField<uint>(pvVar4,0x108) == local_c &&
                ((puVar2 = STField<uint *>(pvVar4,0x110), (int)local_18 <= (int)puVar2 &&
                 (piVar3 = STField<int *>(pvVar4,0x10c), (int)piVar3 <= (int)local_18)))))) {
              if ((int)param_4 < (int)piVar3) {
                uVar8 = uVar7;
                param_4 = piVar3;
              }
              if ((int)param_1 < (int)puVar2) {
                uVar8 = uVar7;
                param_1 = puVar2;
              }
            }
            uVar6 = array->count;
            uVar7 = uVar7 + 1;
            bVar13 = uVar7 < uVar6;
          } while ((int)uVar7 < (int)uVar6);
          if (((-1 < (int)uVar8) && (uVar8 < uVar6)) &&
             (pvVar4 = DArrayAt<void>(array, uVar8),
             pvVar4 != nullptr)) {
            uVar6 = 0xffffffff;
            pcVar9 = (char *)((int)pvVar4 + 0x114);
            do {
              pcVar12 = pcVar9;
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              pcVar12 = pcVar9 + 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar12;
            } while (cVar1 != '\0');
            uVar6 = ~uVar6;
            pcVar9 = pcVar12 + -uVar6;
            pcVar12 = (char *)&DAT_008117c0;
            memmove(pcVar12, pcVar9, uVar6); /* compiler REP MOVS byte copy */
            if (param_2 != nullptr) {
              *param_2 = STField<undefined4>(pvVar4,0x218);
            }
            if (param_3 != nullptr) {
              *param_3 = 2;
            }
LAB_0064a336:
            if (local_10 != nullptr) {
              DArrayDestroy(local_10);
            }
            return &DAT_008117c0;
          }
        }
        if (array == nullptr) {
          return nullptr;
        }
      }
    }
    DArrayDestroy(array);
  }
  return nullptr;
}

