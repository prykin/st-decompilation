#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (7), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00478640 @ 00478846 -> read as EAX on
   every CFG path | 00478640 @ 00478985 -> read as EAX on every CFG path | 00478640 @ 00478B52 ->
   read as EAX on every CFG path | 00478640 @ 00478CD9 -> read as EAX on every CFG path | 00478640 @
   00478E2D -> read as EAX on every CFG path | 00478640 @ 00479032 -> read as EAX on every CFG path
   | 00478640 @ 00479222 -> read as EAX on every CFG path */

int __thiscall FUN_004934b0(void *this,short *param_1,short *param_2,short *param_3,int *param_4)

{
  DArrayTy *array;
  dword dVar1;
  int iVar3;
  int iVar2;
  int iVar4;
  int iVar5;
  uint local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;

  iVar4 = 0;
  iVar5 = 1000000;
  array = g_packedRecords_A62x8[STField<int>(this,0x24)].field1969_0x9da;
  *param_3 = -1;
  *param_2 = -1;
  *param_1 = -1;
  if (array != nullptr) {
    dVar1 = array->count;
    local_14 = 0;
    if (0 < (int)dVar1) {
      do {

        DArrayGetElement(array,local_14,&local_10);
        if ((local_10 != nullptr) &&
           /* ST_CALLSITE[00493528]: CALL dword ptr [EDX + 0xf8] */
           (iVar3 = local_10->vfunc_F8(), iVar3 == 1)) {
          /* ST_CALLSITE[00493542]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
          STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);

          iVar2 = FUN_006aadd0((int)STField<short>(this,0x47),(int)STField<short>(this,0x49),
                               (int)STField<short>(this,0x4b),(int)local_6,(int)local_8,
                               (int)local_a);
          if (iVar2 < iVar5) {
            *param_1 = local_6;
            iVar4 = 1;
            *param_2 = local_8;
            *param_3 = local_a;
            *param_4 = local_10->field_0018;
            iVar5 = iVar2;
          }
        }
        local_14 = local_14 + 1;
      } while ((int)local_14 < (int)dVar1);
    }
  }
  return iVar4;
}

