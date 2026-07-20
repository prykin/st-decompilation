
uint __cdecl FUN_006d8120(AnonShape_006D8120_534053F7 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int extraout_ECX;
  uint extraout_ECX_00;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  bool bVar18;
  uint local_30;
  int local_20;
  int local_1c;
  
  pcVar3 = (code *)param_1->field_003A;
  uVar5 = (uint)param_1->field_0011;
  uVar6 = uVar5;
  if (param_1->field_0011 < 2) {
    uVar6 = (uint)param_1->field_0010 * param_1->field_0008 + 7 >> 3;
    uVar4 = param_1->field_0012;
    uVar11 = uVar4 - uVar6;
    local_20 = param_1->field_000C;
    pbVar7 = (byte *)thunk_FUN_006a3be0(uVar6 * uVar5 + 0x203);
    uVar6 = 0;
    if (pbVar7 != (byte *)0x0) {
      pbVar8 = pbVar7 + 0x200;
      uVar13 = 0;
      pbVar12 = (byte *)0x0;
      local_1c = 0;
      pbVar9 = pbVar8;
      pbVar15 = pbVar7;
      pbVar17 = pbVar8;
      local_30 = uVar5;
      do {
        do {
          uVar14 = -uVar13;
          uVar13 = uVar4;
          while (0 < (int)uVar13) {
            pbVar16 = pbVar15;
            if (uVar14 == 0) {
              bVar18 = pbVar15 < pbVar12;
              iVar10 = 0;
              if ((!bVar18) &&
                 (uVar6 = FUN_006d822b(), iVar10 = extraout_ECX, pbVar12 = extraout_EDX, bVar18))
              goto cf_common_exit_006D8217;
              uVar14 = iVar10 + 1;
              pbVar1 = pbVar15 + 1;
              bVar2 = *pbVar15;
              pbVar9 = (byte *)(uint)bVar2;
              pbVar16 = pbVar1;
              if (0xbf < bVar2) {
                uVar14 = CONCAT31((int3)(uVar14 >> 8),bVar2) & 0xffffff3f;
                bVar18 = pbVar1 < pbVar12;
                if ((!bVar18) &&
                   (uVar6 = FUN_006d822b(), uVar14 = extraout_ECX_00, pbVar12 = extraout_EDX_00,
                   bVar18)) goto cf_common_exit_006D8217;
                pbVar16 = pbVar15 + 2;
                pbVar9 = (byte *)(uint)*pbVar1;
              }
            }
            uVar6 = uVar13 - uVar14;
            pbVar15 = pbVar16;
            if ((((int)uVar14 <= (int)uVar13) && (uVar11 <= uVar6)) ||
               (iVar10 = uVar14 + uVar6, uVar14 = iVar10 - uVar11, uVar13 = uVar6,
               uVar14 != 0 && (int)uVar11 <= iVar10)) {
              for (; uVar13 = uVar6, uVar14 != 0; uVar14 = uVar14 - 1) {
                *pbVar17 = (byte)pbVar9;
                pbVar17 = pbVar17 + 1;
              }
            }
          }
          local_30 = local_30 - 1;
        } while (local_30 != 0);
        uVar6 = (*pcVar3)(param_1,pbVar8,local_1c);
        if (uVar6 != 0) {
          if (uVar6 != 0xffffffff) goto cf_common_exit_006D8217;
          break;
        }
        local_1c = local_1c + 1;
        local_20 = local_20 + -1;
        pbVar17 = pbVar8;
        local_30 = uVar5;
      } while (local_20 != 0);
      uVar6 = 0;
cf_common_exit_006D8217:
      Library::MSVCRT::thunk_FUN_006a4950((undefined4 *)pbVar7);
    }
  }
  return uVar6;
}

