
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall
FUN_00660620(AnonShape_00660620_6BCED4D7 *param_1,undefined4 param_2,uint param_3)

{
  STGroupBoatC *pSVar1;
  uint *groupContent;
  uint uVar2;
  int unaff_EDI;
  undefined4 local_18;
  uint *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint *puVar3;
  
  local_18 = 0;
  local_14 = (uint *)0x0;
  local_10 = 0;
  local_c = 0;
  param_1->field_00A7 = 0;
  local_8 = 0;
  pSVar1 = thunk_FUN_0042b760(CONCAT31((int3)((uint)param_2 >> 8),param_1->field_0024),param_3);
  if (pSVar1 != (STGroupBoatC *)0x0) {
    groupContent = STGroupC::GetGroupContent((STGroupC *)pSVar1,unaff_EDI);
    puVar3 = groupContent;
    if ((groupContent != (uint *)0x0) || (puVar3 = _DAT_0000000c, _DAT_0000000c != (uint *)0x0)) {
      uVar2 = CONCAT22((short)((uint)puVar3 >> 0x10),param_1->field_007D);
      local_18 = 0;
      local_14 = groupContent;
      if ((param_1->field_007D != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
        pSVar1 = thunk_FUN_0042b760(CONCAT31((int3)(uVar2 >> 8),param_1->field_0024),uVar2);
        if (pSVar1 != (STGroupBoatC *)0x0) {
          (*pSVar1->vtable->vfunc_08)(pSVar1,CASE_5,&local_18);
          if (groupContent != (uint *)0x0) {
            FUN_006ae110((byte *)groupContent);
          }
          return 0;
        }
      }
      if (groupContent != (uint *)0x0) {
        FUN_006ae110((byte *)groupContent);
      }
    }
  }
  return 0xffffffff;
}

