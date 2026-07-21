
undefined4 __fastcall FUN_004d7270(AnonShape_004D7270_8F0A3C37 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  if (param_1->field_0245 == 0) {
    iVar1 = thunk_FUN_004e4140(*(int *)&param_1->field_0x24);
    if (iVar1 != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*(int *)param_1 + 0xc4))();
      thunk_FUN_004d6f70((int *)param_1);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar2 = (**(code **)(*(int *)param_1 + 0xc4))();
      if (iVar1 < iVar2) {
        iVar1 = 0;
        uVar4 = (uint)(*(int *)&param_1->field_0x2c == 1);
        uVar3 = thunk_FUN_004ad650((int)&param_1->field_0x1d5);
        thunk_FUN_00637c50(uVar3,uVar4,iVar1);
      }
      uVar3 = GetPlayerRaceId(param_1->field_023D);
      if (*(int *)(&DAT_00796230 + ((uVar3 & 0xff) + param_1->field_0235 * 3) * 4) != 0) {
        iVar1 = *(int *)param_1;
        uVar3 = GetPlayerRaceId(param_1->field_023D);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))
                  (3,*(undefined4 *)(&DAT_00796230 + ((uVar3 & 0xff) + param_1->field_0235 * 3) * 4)
                  );
      }
    }
  }
  return 0;
}

