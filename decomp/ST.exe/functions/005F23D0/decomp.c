#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004B9FA0 -> 005F23D0 @ 004BA77A | 004D32C0 -> 005F23D0 @ 004D3487

   [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=23; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

undefined4 __thiscall
STManBasisC::sub_005F23D0
          (STManBasisC *this,int param_1,int param_2,int param_3,uint param_4,int param_5,
          int param_6)

{
  VisibleClassTy *pVVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int local_EAX_707;
  int iVar5;
  int iVar6;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  STManBasisC *local_c;
  uint local_8;
  iVar4 = param_2;
  iVar6 = param_1;
  local_8 = 0;
  if ((((param_6 == 3) || (param_3 != 0)) || (param_5 == 0x39)) ||
     ((param_5 == 0x4f || (*(int *)(&DAT_007918bc + param_6 * 4 + param_5 * 0xc) != 0)))) {
    return 0;
  }
  local_c = this;
  iVar3 = thunk_FUN_005f13c0(this,param_1,param_2,0,(char)param_4);
  pVVar1 = g_visibleClass_00802A88;
  if (iVar3 == 0) {
    return local_8;
  }
  if (g_visibleClass_00802A88 == nullptr) {
cf_common_exit_005F26AF:
    iVar5 = thunk_FUN_005f15f0(local_c,(ushort)iVar6,(short)param_2,0,(char)param_4,0,'\0');
    if (-1 < iVar5) {
      local_8 = 1;
    }
  }
  else {
    if ((char)param_4 == '\x01') {
      if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
            /* ST_CALLSITE[005F248A]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
            ((VisibleClassTy::sub_00558C00
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar6,iVar4,
                         &param_6,&param_3), pVVar2 = g_visibleClass_00802A88, -1 < param_6 &&
             (((param_6 < pVVar1->field_0030 &&
               (iVar4 = param_3 + g_centeredOffsets5[0], -1 < iVar4)) &&
              (iVar4 < pVVar1->field_0034)))))) &&
           ((pVVar1->field_004C != nullptr &&
            (pVVar1->field_004C[param_6 + iVar4 * pVVar1->field_0030] == 0)))) &&
          (DAT_0080874d != -1)) &&
         ((((g_visibleClass_00802A88->field_00F8 != 0 &&
            /* ST_CALLSITE[005F251A]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
            (VisibleClassTy::sub_00558C00
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar6 + 1,
                        param_2,&param_5,&local_10), pVVar1 = g_visibleClass_00802A88, -1 < param_5)
            ) && ((param_5 < pVVar2->field_0030 &&
                  (((local_10 = local_10 + g_centeredOffsets5[0], -1 < local_10 &&
                    (local_10 < pVVar2->field_0034)) && (pVVar2->field_004C != nullptr)))))) &&
          (((pVVar2->field_004C[param_5 + local_10 * pVVar2->field_0030] == 0 &&
            (DAT_0080874d != -1)) && (g_visibleClass_00802A88->field_00F8 != 0)))))) {
        iVar4 = param_2 + 1;
        /* ST_CALLSITE[005F25AA]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
        VisibleClassTy::sub_00558C00
                  (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar6,iVar4,&local_14
                   ,&local_18);
        iVar3 = param_1;
        pVVar2 = g_visibleClass_00802A88;
        if (((((-1 < local_14) && (local_14 < pVVar1->field_0030)) &&
             ((local_18 = local_18 + g_centeredOffsets5[0], iVar6 = iVar3, -1 < local_18 &&
              ((((local_18 < pVVar1->field_0034 && (pVVar1->field_004C != nullptr)) &&
                (pVVar1->field_004C[local_14 + local_18 * pVVar1->field_0030] == 0)) &&
               ((DAT_0080874d != -1 && (g_visibleClass_00802A88->field_00F8 != 0)))))))) &&
            /* ST_CALLSITE[005F2632]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
            ((VisibleClassTy::sub_00558C00
                        (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_1 + 1,
                         iVar4,&param_1,&local_1c), -1 < param_1 &&
             ((param_1 < pVVar2->field_0030 &&
              (local_1c = g_centeredOffsets5[0] + local_1c, -1 < local_1c)))))) &&
           ((local_1c < pVVar2->field_0034 &&
            ((pVVar2->field_004C != nullptr &&
             (pVVar2->field_004C[param_1 + local_1c * pVVar2->field_0030] == 0))))))
        goto cf_common_exit_005F26AF;
      }
    }
    else {
      /* ST_CALLSITE[005F2675]: CALL 0x00404e5d; direct=00404E5D VisibleClassTy::sub_005F1D80 */
      iVar4 = VisibleClassTy::sub_005F1D80(g_visibleClass_00802A88,iVar6,iVar4,0);
      if (iVar4 == 0) goto cf_common_exit_005F26AF;
    }
    /* ST_CALLSITE[005F2693]: CALL 0x00401465; direct=00401465 STManBasisC::sub_005F14B0 */
    local_EAX_707 = sub_005F14B0(local_c,(short)iVar6,(short)param_2,0,(byte)param_4,0);
    if (-1 < local_EAX_707) {
      return 1;
    }
  }
  return local_8;
}

