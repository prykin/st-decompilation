#include "../../pseudocode_runtime.h"


uint __cdecl FUN_006d8120(AnonShape_006D8120_534053F7 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int uVar6;
  byte *pbVar10;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  int extraout_ECX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_ECX_00;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  byte *extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  byte *extraout_EDX_00;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  bool bVar19;
  uint local_30;
  int local_20;
  int local_1c;

  pcVar3 = (code *)param_1->field_003A;
  uVar5 = (uint)param_1->field_0011;
  uVar6 = uVar5;
  if (param_1->field_0011 < 2) {
    uVar7 = (uint)param_1->field_0010 * param_1->field_0008 + 7 >> 3;
    uVar4 = param_1->field_0012;
    uVar12 = uVar4 - uVar7;
    local_20 = param_1->field_000C;
    pbVar8 = (byte *)thunk_FUN_006a3be0(uVar7 * uVar5 + 0x203);
    uVar6 = 0;
    if (pbVar8 != nullptr) {
      pbVar9 = pbVar8 + 0x200;
      uVar7 = 0;
      pbVar13 = nullptr;
      local_1c = 0;
      pbVar10 = pbVar9;
      pbVar16 = pbVar8;
      pbVar18 = pbVar9;
      local_30 = uVar5;
      do {
        do {
          uVar14 = -uVar7;
          uVar7 = uVar4;
          while (0 < (int)uVar7) {
            pbVar17 = pbVar16;
            if (uVar14 == 0) {
              bVar19 = pbVar16 < pbVar13;
              iVar11 = 0;
              /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
              if ((!bVar19) &&
                 (uVar6 = FUN_006d822b(), iVar11 = extraout_ECX, pbVar13 = extraout_EDX, bVar19))
              goto cf_common_exit_006D8217;
              uVar14 = iVar11 + 1;
              pbVar1 = pbVar16 + 1;
              bVar2 = *pbVar16;
              pbVar10 = (byte *)(uint)bVar2;
              pbVar17 = pbVar1;
              if (0xbf < bVar2) {
                uVar14 = STReplaceLowByte((uint32_t)(uVar14), (uint8_t)(bVar2)) & 0xffffff3f;
                bVar19 = pbVar1 < pbVar13;
                /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
                if ((!bVar19) &&
                   (uVar6 = FUN_006d822b(), uVar14 = extraout_ECX_00, pbVar13 = extraout_EDX_00,
                   bVar19)) goto cf_common_exit_006D8217;
                pbVar17 = pbVar16 + 2;
                pbVar10 = (byte *)(uint)*pbVar1;
              }
            }
            uVar15 = uVar7 - uVar14;
            pbVar16 = pbVar17;
            if ((((int)uVar14 <= (int)uVar7) && (uVar12 <= uVar15)) ||
               (iVar11 = uVar14 + uVar15, uVar14 = iVar11 - uVar12, uVar7 = uVar15,
               uVar14 != 0 && (int)uVar12 <= iVar11)) {
              for (; uVar7 = uVar15, uVar14 != 0; uVar14 = uVar14 - 1) {
                *pbVar18 = (byte)pbVar10;
                pbVar18 = pbVar18 + 1;
              }
            }
          }
          local_30 = local_30 - 1;
        } while (local_30 != 0);
        uVar6 = (*pcVar3)(param_1,pbVar9,local_1c);
        if (uVar6 != 0) {
          if (uVar6 != 0xffffffff) goto cf_common_exit_006D8217;
          break;
        }
        local_1c = local_1c + 1;
        local_20 = local_20 + -1;
        pbVar18 = pbVar9;
        local_30 = uVar5;
      } while (local_20 != 0);
      uVar6 = 0;
cf_common_exit_006D8217:
      Library::MSVCRT::thunk_FUN_006a4950((int *)pbVar8);
    }
  }
  return uVar6;
}

