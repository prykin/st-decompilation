#include "../../pseudocode_runtime.h"


int __cdecl
FUN_0058d5e0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  iVar2 = DAT_00811720 + -1;
  if (iVar2 < 0) {
    return 0;
  }
  do {
    puVar1 = (undefined4 *)(&PTR_0081171c->field_0000)[iVar2];
    if ((((param_1 * 0xc9 <= (int)STField<short>(puVar1,0x41)) &&
         ((int)STField<short>(puVar1,0x41) <= param_3 * 0xc9)) &&
        (param_2 * 0xc9 <= (int)STField<short>(puVar1,0x43))) &&
       ((int)STField<short>(puVar1,0x43) <= param_4 * 0xc9)) {
      if (param_6 == 1) {
        if ((puVar1[8] == 0x10e) || (puVar1[8] == 0x118)) {
          /* ST_CALLSITE[0058D676]: CALL dword ptr [EDX] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)*puVar1)(param_5);
          iVar3 = iVar3 + 1;
        }
      }
      else if (((param_6 == 0) && (puVar1[8] != 0x32)) && (puVar1[8] != 0x8c)) goto LAB_0058d697;
      /* ST_CALLSITE[0058D694]: CALL dword ptr [EDX] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)*puVar1)(param_5);
      iVar3 = iVar3 + 1;
    }
LAB_0058d697:
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return iVar3;
    }
  } while( true );
}

