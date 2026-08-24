#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00746BAB -> EXTERNAL:000000D0 @ 00746BC9

   [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 00746BAB -> EXTERNAL:000000D0 @ 00746BC9 */

HRESULT FUN_00746bab(LPUNKNOWN pUnkOuter,IID *param_2,void **param_3,LPVOID *ppv)

{
  LPVOID *ppvVar1;
  HRESULT HVar2;

  ppvVar1 = ppv;
  *ppv = (LPVOID)0x0;
  /* ST_CALLSITE[00746BC9]: CALL dword ptr [0x0085c0e4] */
  HVar2 = CoCreateInstance((IID *)&DAT_007a1ab0,pUnkOuter,1,(IID *)&DAT_007a22b8,&ppv);
  if (-1 < HVar2) {
    /* ST_CALLSITE[00746BE2]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    HVar2 = (**(code **)*ppv)(ppv,&DAT_007a1aa0,&pUnkOuter);
    if (-1 < HVar2) {
      /* ST_CALLSITE[00746BFB]: CALL dword ptr [ECX + 0xc] */
      HVar2 = (*pUnkOuter->lpVtbl[1].QueryInterface)(pUnkOuter,param_2,param_3);
      /* ST_CALLSITE[00746C06]: CALL dword ptr [ECX + 0x8] */
      (*pUnkOuter->lpVtbl->Release)(pUnkOuter);
      if (-1 < HVar2) {
        *ppvVar1 = ppv;
        return 0;
      }
    }
    /* ST_CALLSITE[00746C13]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)((int)*ppv + 8))(ppv);
  }
  return HVar2;
}

