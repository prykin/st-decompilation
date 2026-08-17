#include "../../pseudocode_runtime.h"


void __cdecl FUN_0052af50(byte param_1,float param_2,float param_3)

{
  if ((param_1 < 2) && (g_cPanel_00801688 != nullptr)) {
    /* ST_CALLSITE[0052AF6D]: CALL 0x00401ad2; direct=00401AD2 CPanelTy::sub_0052AFE0 */
    CPanelTy::sub_0052AFE0(g_cPanel_00801688,param_1,param_2,param_3);
  }
  return;
}

