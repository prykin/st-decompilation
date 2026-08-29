#include "../../pseudocode_runtime.h"


undefined4 __cdecl FUN_0069fd70(AnonShape_0069FD70_008BB09C *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char local_cc [200];

  uVar3 = 0;
  if (param_1 != nullptr) {
    /* ST_CALLSITE[0069FD93]: CALL 0x0072ea70; direct=0072EA70 Library::MSVCRT::FUN_0072ea70; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/int; signature=__cdecl;pointer:/int;/winnt.h/LPCSTR;pointer:/char */
    piVar1 = Library::MSVCRT::FUN_0072ea70("ResRand.dat",&DAT_007d1d98);
    if (piVar1 != nullptr) {

      iVar2 = Library::MSVCRT::FUN_00730050(piVar1,&DAT_007d1d88);
      if (0 < iVar2) {
        param_1->field_0004 = (int)param_1;
        Library::MSVCRT::FUN_00730b10(local_cc,200,piVar1);

        iVar2 = Library::MSVCRT::FUN_00730050(piVar1,&DAT_007d1d88);
        if (0 < iVar2) {
          param_1->field_0008 = (int)param_1;
          Library::MSVCRT::FUN_00730b10(local_cc,200,piVar1);

          iVar2 = Library::MSVCRT::FUN_00730050(piVar1,&DAT_007d1d88);
          if (0 < iVar2) {
            param_1->field_0014 = (int)param_1;
            Library::MSVCRT::FUN_00730b10(local_cc,200,piVar1);

            iVar2 = Library::MSVCRT::FUN_00730050(piVar1,&DAT_007d1d88);
            if (0 < iVar2) {
              param_1->field_000C = (int)param_1;
              Library::MSVCRT::FUN_00730b10(local_cc,200,piVar1);

              iVar2 = Library::MSVCRT::FUN_00730050(piVar1,&DAT_007d1d88);
              if (0 < iVar2) {
                param_1->field_0018 = (int)param_1;
                Library::MSVCRT::FUN_00730b10(local_cc,200,piVar1);

                iVar2 = Library::MSVCRT::FUN_00730050(piVar1,&DAT_007d1d88);
                if (0 < iVar2) {
                  param_1->field_0010 = (int)param_1;
                  Library::MSVCRT::FUN_00730b10(local_cc,200,piVar1);

                  iVar2 = Library::MSVCRT::FUN_00730050(piVar1,&DAT_007d1d88);
                  if (0 < iVar2) {
                    param_1->field_001C = (int)param_1;
                    Library::MSVCRT::FUN_00730b10(local_cc,200,piVar1);
                    uVar3 = 1;
                  }
                }
              }
            }
          }
        }
      }

      Library::MSVCRT::FUN_0072ea90(piVar1);
    }
    return uVar3;
  }
  return 0;
}

