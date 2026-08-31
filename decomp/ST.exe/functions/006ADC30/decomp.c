#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_006adc30(int *param_1)

{
  uint *puVar2;
  uint puVar1;
  uint uVar3;
  bool bVar4;

  PTR_00854eb0 = ExceptionList;
  if (*(int *)*param_1 == -0x7ffffffd) {
    return 0;
  }
  g_int_00854A9C = g_int_00854EB4;
  if (g_int_00854EB4 != nullptr) {
    puVar2 = ExceptionList;
    if (DAT_007ed79c != 0) {

      Library::MSVCRT::FUN_00733f70(g_int_00854EB4,"\n%d ===========================================  %02d.%02d.%d  %d:%02d:%02d.%03d\n");
      DAT_007ed79c = 0;
      puVar2 = PTR_00854eb0;
    }
    do {
      PTR_00854eb0 = puVar2;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((PTR_00854eb0 == nullptr) || (*(uint **)(param_1[1] + 0xc4) <= PTR_00854eb0)) break;
      puVar2 = (uint *)*PTR_00854eb0;
    } while (PTR_00854eb0 < (uint *)*PTR_00854eb0);

    Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"\n=============================== Exception %X\n");

    Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"%08X ");
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(*param_1 + 0x10) != 0) {

      Library::MSVCRT::FUN_00733f70(g_int_00854A9C,&DAT_007ed984);
      DAT_00854aa0 = 0;

      Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"%08X");
      DAT_00854aa0 = DAT_00854aa0 + 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((int)DAT_00854aa0 < *(int *)(*param_1 + 0x10)) {
        do {

          Library::MSVCRT::FUN_00733f70(g_int_00854A9C,&DAT_007ed978);

          Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"%08X");
          DAT_00854aa0 = DAT_00854aa0 + 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)DAT_00854aa0 < *(int *)(*param_1 + 0x10));
      }

      Library::MSVCRT::FUN_00733f70(g_int_00854A9C,&DAT_007ed974);
    }

    Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"----------------\n");

    Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"%08X  %08X  %08X  %08X  %08X  %08X  %08X  %08X\n");

    Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"%08X  %08X  %08X  %08X  %08X  %08X            %08X\n");

    Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"----------------\n");
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DAT_00854ea4 = *(uint **)(param_1[1] + 0xb4);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((*(uint **)(param_1[1] + 0xc4) <= DAT_00854ea4) && (DAT_00854ea4 < PTR_00854eb0)) {
      DAT_00854aa0 = 0;

      Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"%08X  ");
      _DAT_00854ea8 = DAT_00854ea4;
      puVar1 = *DAT_00854ea4;
      bVar4 = DAT_00854ea4 < puVar1;
      DAT_00854ea4 = (uint *)puVar1;
      if (bVar4) {
        do {
          DAT_00854ea4 = (uint *)puVar1;
          if (PTR_00854eb0 <= puVar1) break;
          DAT_00854aa0 = DAT_00854aa0 + 1;
          uVar3 = DAT_00854aa0 & 0x80000007;
          bVar4 = uVar3 == 0;
          if ((int)uVar3 < 0) {
            bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
          }
          if (bVar4) {

            Library::MSVCRT::FUN_00733f70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
          }

          Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"%08X  ");
          _DAT_00854ea8 = DAT_00854ea4;
          puVar1 = *DAT_00854ea4;
          bVar4 = DAT_00854ea4 < puVar1;
          DAT_00854ea4 = (uint *)puVar1;
        } while (bVar4);
      }
      uVar3 = DAT_00854aa0 & 0x80000007;
      bVar4 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
      }
      if (!bVar4) {

        Library::MSVCRT::FUN_00733f70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
      }
    }

    Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"----------------\n");
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    DAT_00854a80 = *(undefined4 **)(param_1[1] + 0xc4);
    DAT_00854aa0 = 0;
    do {
      if (PTR_00854eb0 <= DAT_00854a80) break;

      Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"%08X  ");
      DAT_00854a80 = DAT_00854a80 + 1;
      DAT_00854aa0 = DAT_00854aa0 + 1;
      uVar3 = DAT_00854aa0 & 0x80000007;
      bVar4 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
      }
      if (bVar4) {

        Library::MSVCRT::FUN_00733f70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
      }
    } while ((int)DAT_00854aa0 < 400);
    uVar3 = DAT_00854aa0 & 0x80000007;
    bVar4 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar4) {

      Library::MSVCRT::FUN_00733f70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
    }

    Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"----------------\n");
    DAT_00854aa0 = 0;
    if (0 < DAT_00858ddc) {
      do {

        Library::MSVCRT::FUN_00733f70(g_int_00854A9C,"%08X  ");
        DAT_00854aa0 = DAT_00854aa0 + 1;
        uVar3 = DAT_00854aa0 & 0x80000007;
        bVar4 = uVar3 == 0;
        if ((int)uVar3 < 0) {
          bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (bVar4) {

          Library::MSVCRT::FUN_00733f70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
        }
      } while ((int)DAT_00854aa0 < DAT_00858ddc);
    }
    uVar3 = DAT_00854aa0 & 0x80000007;
    bVar4 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar4 = (uVar3 - 1 | 0xfffffff8) == 0xffffffff;
    }
    if (!bVar4) {

      Library::MSVCRT::FUN_00733f70(g_int_00854A9C,&CHAR_0Ah_007c8ff4);
    }
    DAT_00858ddc = 0;

    Library::MSVCRT::FUN_00733d60(g_int_00854A9C);
    if (g_int_00854EB4 == nullptr) {

      Library::MSVCRT::FUN_0072ea90(g_int_00854A9C);
    }
  }
  return 1;
}

