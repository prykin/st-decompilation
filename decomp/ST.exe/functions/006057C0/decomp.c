#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006057c0(STExplosionC *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  int local_8;

  pVVar4 = g_visibleClass_00802A88;
  if (param_1->field_02AF != nullptr) {
    if (g_visibleClass_00802A88 != nullptr) {
      iVar6 = param_1->field_0292;
      local_8 = STBiasedDiv16(iVar6, 200); /* exact signed 16-bit grid-index division */
      iVar6 = param_1->field_028E;
      iVar6 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
      iVar5 = param_1->field_028A;
      iVar5 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
      if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            /* ST_CALLSITE[0060589F]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
            (VisibleClassTy::sub_00558C00
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar6,
                        &local_c,&local_10), local_8 < 0)) || ((4 < local_8 || (local_c < 0)))) ||
          (((int)pVVar4->field_0030 <= local_c ||
           ((local_10 = g_centeredOffsets5[local_8] + local_10, local_10 < 0 ||
            (pVVar4->field_0034 <= local_10)))))) ||
         ((pVVar4->field_004C == nullptr ||
          (pVVar4->field_004C[local_c + local_10 * pVVar4->field_0030] != 0)))) {
        if (param_1->field_0286 == 0) {
          thunk_FUN_004ad460(param_1->field_02AF,0);
          param_1->field_0286 = 1;
        }
      }
      else if (param_1->field_0286 != 0) {
        thunk_FUN_004ad430(param_1->field_02AF);
        param_1->field_0286 = 0;
      }
    }
    if (param_1->field_0286 == 1) {
      uVar2 = param_1->field_0296;
      puVar1 = &param_1->field_0282;
      if ((int)uVar2 < (int)(&DAT_007cee44)[param_1->field_0282]) {
        /* ST_CALLSITE[0060595F]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        STT3DSprC::SetCurFase(param_1->field_02AF,'\r',uVar2);
        /* ST_CALLSITE[0060596C]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
        STT3DSprC::ShowCurFase(param_1->field_02AF,'\r');
        /* ST_CALLSITE[006059BF]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
        STT3DSprC::sub_004AD3C0
                  (param_1->field_02AF,(float)param_1->field_028A * _DAT_007904f8 * _DAT_007904f0,
                   (float)param_1->field_028E * _DAT_007904f8 * _DAT_007904f0,
                   (float)param_1->field_0292 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      }
      else if (uVar2 == (&DAT_007cee44)[param_1->field_0282]) {
        /* ST_CALLSITE[006059D0]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
        STT3DSprC::StopShow(param_1->field_02AF,0xd);
      }
      iVar6 = param_1->field_0296 + 1;
      param_1->field_0296 = iVar6;
      if (*(int *)(&DAT_007cedf4 + *puVar1 * 4) <= iVar6) {
        if ((iVar6 == *(int *)(&DAT_007cedf4 + *puVar1 * 4)) &&
           /* ST_CALLSITE[006059FE]: CALL 0x00405bdc; direct=00405BDC STExplosionC::LoadImagSpr */
           (iVar6 = STExplosionC::LoadImagSpr(param_1,puVar1,0,'\x01'), iVar6 == 0)) {
          param_1->field_029E = 1;
        }
        if (param_1->field_029E != '\0') {
          /* ST_CALLSITE[00605A27]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          STT3DSprC::SetCurFase(param_1->field_02AF,'\x0f',param_1->field_029F);
          /* ST_CALLSITE[00605A34]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
          STT3DSprC::ShowCurFase(param_1->field_02AF,'\x0f');
          if ((g_playSystem_00802A38->field_00E4 & 1) != 0) {
            param_1->field_029F = param_1->field_029F + 1;
          }
          if (param_1->field_02A3 <= (int)param_1->field_029F) {
            param_1->field_029F = 0;
            param_1->field_029E = 0;
            /* ST_CALLSITE[00605A76]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
            STT3DSprC::StopShow(param_1->field_02AF,0xf);
          }
        }
      }
      if (*(int *)(&DAT_007cee1c + *puVar1 * 4) <= param_1->field_0296) {
        /* ST_CALLSITE[00605A8E]: CALL 0x0040514b; direct=0040514B STExplosion::sub_00605780 */
        STExplosion::sub_00605780((STExplosion *)param_1);
      }
    }
    return;
  }
  return;
}

