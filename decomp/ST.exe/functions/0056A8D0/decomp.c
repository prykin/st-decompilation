#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0056A8D3 MOV EAX,dword ptr [EBP + 0x8];
   first-use mask */

void __thiscall FUN_0056a8d0(void *this,byte param_1,byte param_2,char param_3)

{
  undefined *puVar1;

  puVar1 = (undefined *)(uint)param_1;
  *(char *)((int)this + (int)puVar1 * 8 + param_2 + 0x142f) = param_3;
  if ((g_visibleClass_00802A88 != nullptr) &&
     (param_2 == STField<byte>(this,0x112d))) {
    if (param_3 == '\0') {
      /* ST_CALLSITE[0056A913]: CALL 0x00405f15; direct=00405F15 VisibleClassTy::sub_0055B7F0 */
      VisibleClassTy::sub_0055B7F0(g_visibleClass_00802A88,0,puVar1);
      return;
    }
    if (STField<char>(this,0x1474) != '\0') {
      /* ST_CALLSITE[0056A92D]: CALL 0x00405f15; direct=00405F15 VisibleClassTy::sub_0055B7F0 */
      VisibleClassTy::sub_0055B7F0(g_visibleClass_00802A88,1,puVar1);
    }
  }
  return;
}

