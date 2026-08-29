#include "../../pseudocode_runtime.h"


void __cdecl FUN_006a5990(undefined4 *param_1)

{
  RecoveredRecord_006A5BE0_E638A786 *pRVar2;
  int iVar3;
  uint uVar4;
  RecoveredRecord_006A5BE0_E638A786 *pRVar5;

  pRVar5 = nullptr;

  iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,"%s");
  if (iVar3 == 1) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pRVar2 = (RecoveredRecord_006A5BE0_E638A786 *)PTR_0085496c;
  if (param_1 != nullptr) {
    pRVar5 = (RecoveredRecord_006A5BE0_E638A786 *)*param_1;
  }
  do {
    if ((pRVar2 == nullptr) || (pRVar2 == pRVar5)) {

      iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,"%s");
      if (iVar3 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      return;
    }
    uVar4 = *(uint *)(pRVar2 + 1) & 0xffff;
    if (((uVar4 != 3) && (uVar4 != 0)) && ((uVar4 != 2 || ((DAT_007ec178 & 0x10) != 0)))) {
      if (*(void **)&pRVar2->field_0x8 != nullptr) {

        iVar3 = thunk_FUN_006a55d0(*(void **)&pRVar2->field_0x8,1,0);
        if (iVar3 == 0) {

          iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)"#File Error#(%d) : ");
          if (iVar3 == 1) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
        else {

          iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)"%hs(%d) : ");
          if (iVar3 == 1) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
        }
      }

      iVar3 = Library::MSVCRT::FUN_00730fa0(0,0,0,0,(byte *)"{%ld} ");
      if (iVar3 == 1) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      uVar4 = *(uint *)(pRVar2 + 1) & 0xffff;
      if (uVar4 == 4) {

        iVar3 = Library::MSVCRT::FUN_00730fa0
                          (0,0,0,0,(byte *)"client block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar3 == 1) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        if (DAT_0085751c != nullptr) {
          /* ST_CALLSITE[006A5AC3]: CALL EAX */
          (*DAT_0085751c)(&pRVar2[1].field_0xc,pRVar2->field_0010);
          goto cf_continue_loop_006A5B2E;
        }
      }
      else if (*(uint *)(pRVar2 + 1) == 1) {

        iVar3 = Library::MSVCRT::FUN_00730fa0
                          (0,0,0,0,(byte *)"normal block at 0x%08X, %u bytes long.\n");
        if (iVar3 == 1) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      else {
        if (uVar4 != 2) goto cf_continue_loop_006A5B2E;

        iVar3 = Library::MSVCRT::FUN_00730fa0
                          (0,0,0,0,(byte *)"crt block at 0x%08X, subtype %x, %u bytes long.\n");
        if (iVar3 == 1) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
      }
      FUN_006a5be0(pRVar2);
    }
cf_continue_loop_006A5B2E:
    pRVar2 = *(RecoveredRecord_006A5BE0_E638A786 **)pRVar2;
  } while( true );
}

