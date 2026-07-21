
void __cdecl
FUN_006da660(undefined4 param_1,undefined4 param_2,char *param_3,byte *param_4,int param_5,
            uint param_6,int param_7,int param_8)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int local_8;

  uVar9 = 0;
  do {
    local_8 = param_7;
    cVar2 = *param_3;
    param_3 = param_3 + 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    uVar9 = CONCAT31((int3)(uVar9 >> 8),cVar2);
    if (cVar2 != '\0') {
      pbVar10 = param_4 + 1;
      bVar4 = (byte)param_6 & 7;
      bVar4 = *param_4 << bVar4 | *param_4 >> 8 - bVar4;
      uVar6 = param_6 ^ 7;
      while( true ) {
        iVar7 = uVar6 + 1;
        if ((uVar9 & 0x80) != 0) {
          if ((uVar9 & 0x40) == 0) {
            uVar9 = uVar9 & 0xffffff3f;
            if ((int)uVar9 <= iVar7) {
              if (bVar4 == 0xaa) {
                    /* WARNING: Could not recover jumptable at 0x006da9bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (**(code **)(&DAT_006dabfb + uVar9 * 4))();
                return;
              }
              if (bVar4 == 0x55) {
                    /* WARNING: Could not recover jumptable at 0x006da9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (**(code **)(&DAT_006dac1f + uVar9 * 4))();
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x006da9b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(&DAT_006dac43 + uVar9 * 4))();
              return;
            }
            if (bVar4 == 0xaa) {
                    /* WARNING: Could not recover jumptable at 0x006da85a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(&DAT_006dab8f + iVar7 * 4))();
              return;
            }
            if (bVar4 == 0x55) {
                    /* WARNING: Could not recover jumptable at 0x006da879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(&DAT_006dabb3 + iVar7 * 4))();
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x006da853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(&DAT_006dabd7 + iVar7 * 4))();
            return;
          }
          uVar9 = uVar9 & 0xffffff3f;
          if ((int)uVar9 <= iVar7) {
            if (bVar4 == 0xaa) {
                    /* WARNING: Could not recover jumptable at 0x006da7bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(&DAT_006dab23 + uVar9 * 4))();
              return;
            }
            if (bVar4 == 0x55) {
                    /* WARNING: Could not recover jumptable at 0x006da7d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(&DAT_006dab47 + uVar9 * 4))();
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x006da7b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(&DAT_006dab6b + uVar9 * 4))();
            return;
          }
          if (bVar4 == 0xaa) {
                    /* WARNING: Could not recover jumptable at 0x006da6c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(&DAT_006daab7 + iVar7 * 4))();
            return;
          }
          if (bVar4 == 0x55) {
                    /* WARNING: Could not recover jumptable at 0x006da6d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(&DAT_006daadb + iVar7 * 4))();
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x006da6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(&DAT_006daaff + iVar7 * 4))();
          return;
        }
        local_8 = local_8 - uVar9;
        uVar8 = (uVar6 ^ 7) + uVar9;
        uVar9 = uVar8 >> 3;
        bVar5 = (byte)uVar8 & 7;
        pbVar1 = pbVar10 + uVar9;
        pbVar10 = pbVar10 + uVar9;
        bVar4 = *pbVar1 << bVar5 | *pbVar1 >> 8 - bVar5;
        uVar6 = (uint)(bVar5 ^ 7);
        if (local_8 < 1) break;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        uVar9 = CONCAT31((uint3)(uVar8 >> 0xb),*param_3);
        param_3 = param_3 + 1;
      }
      param_4 = param_4 + param_5;
    }
    iVar7 = param_8 + -1;
    bVar3 = param_8 < 1;
    param_8 = iVar7;
    if (iVar7 == 0 || bVar3) {
      return;
    }
  } while( true );
}

