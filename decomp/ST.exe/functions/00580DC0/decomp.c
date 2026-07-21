
undefined4 __fastcall FUN_00580dc0(STJellyGunC *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  AnonShape_004E0250_5A3B9236 *pAVar4;
  int iVar5;
  undefined4 uVar6;

  uVar6 = 0;
  iVar5 = thunk_FUN_005809e0((short)*(undefined4 *)&param_1->field_0245,
                             (short)*(undefined4 *)((int)&param_1->field_0247 + 2),
                             *(int *)((int)&param_1->field_024B + 2),
                             *(int *)((int)&param_1->field_0252 + 3));
  if (iVar5 != 0) {
    iVar5 = STAllPlayersC::RegisterDeposit(g_sTAllPlayers_007FA174,0xffff,param_1);
    if (iVar5 != 0) {
      thunk_FUN_00580380(param_1);
      return 0;
    }
    *(undefined4 *)((int)&param_1->field_025A + 3) = 0;
    thunk_FUN_004d84e0((int)param_1);
    sVar1 = *(short *)((int)&param_1->field_024B + 2);
    sVar2 = *(short *)((int)&param_1->field_0247 + 2);
    sVar3 = param_1->field_0245;
    uVar6 = 1;
    if (((((-1 < sVar3) && (sVar3 < g_worldGrid.sizeX)) && (-1 < sVar2)) &&
        ((sVar2 < g_worldGrid.sizeY && (-1 < sVar1)))) &&
       ((sVar1 < g_worldGrid.sizeZ &&
        (pAVar4 = (AnonShape_004E0250_5A3B9236 *)
                  g_worldGrid.cells
                  [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar2 +
                   (int)sVar3].objects[0], pAVar4 != (AnonShape_004E0250_5A3B9236 *)0x0)))) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (**(code **)(*(int *)pAVar4 + 0x2c))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if (((iVar5 != 0x39) && (iVar5 = (**(code **)(*(int *)pAVar4 + 0x2c))(), iVar5 != 0x4f)) &&
         (iVar5 = (**(code **)(*(int *)pAVar4 + 0x2c))(), iVar5 != 0x5e)) {
        return 1;
      }
      thunk_FUN_004e0250(pAVar4);
    }
  }
  return uVar6;
}

