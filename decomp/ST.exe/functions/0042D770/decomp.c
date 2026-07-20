
uint FUN_0042d770(uint param_1,int *param_2)

{
  AnonShape_006ACC70_C8641025 *pAVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  AnonShape_006ACC70_C8641025 *groupContent;
  AnonShape_00493CD0_11D91B87 *pAVar5;
  int iVar6;
  STGroupBoatC *pSVar7;
  undefined2 extraout_var;
  uint uVar8;
  undefined4 local_28;
  STAllPlayersC *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  AnonShape_006ACC70_C8641025 *local_10;
  uint local_c;
  short local_8;
  short local_6;
  
  local_18 = 0xffff;
  pAVar1 = (AnonShape_006ACC70_C8641025 *)g_playerRuntime[(char)param_1].field329_0x16d;
  local_1c = 1;
  local_20 = 1;
  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  *param_2 = (int)puVar4;
  uVar2 = pAVar1->field_000C;
  if (uVar2 == 0) {
    return CONCAT22((short)((uint)puVar4 >> 0x10),0xffff);
  }
  groupContent = (AnonShape_006ACC70_C8641025 *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  local_14 = 0;
  local_10 = groupContent;
  if (0 < (int)uVar2) {
    do {
      FUN_006acc70(pAVar1,local_14,&local_c);
      if ((short)local_c != -1) {
        pAVar5 = (AnonShape_00493CD0_11D91B87 *)
                 STAllPlayersC::GetObjPtr(local_24,param_1,local_c,CASE_1);
        iVar6 = thunk_FUN_00493cd0(pAVar5);
        groupContent = local_10;
        if ((iVar6 == 0) &&
           (local_28 = CONCAT22((short)((uint)pAVar5 >> 0x10),*(short *)&pAVar5->field_0x30),
           *(short *)&pAVar5->field_0x30 != -1)) {
          local_1c = iVar6;
          Library::DKW::TBL::FUN_006ae1c0((uint *)local_10,&local_28);
          Library::DKW::TBL::FUN_006ae1c0((uint *)*param_2,&local_c);
          groupContent = local_10;
        }
      }
      local_14 = local_14 + 1;
    } while ((int)local_14 < (int)uVar2);
    if (local_1c == 0) {
      uVar2 = groupContent->field_000C;
      if (1 < uVar2) {
        FUN_006acc70(groupContent,0,(undefined4 *)&local_8);
        uVar8 = 1;
        if (1 < (int)uVar2) {
          do {
            FUN_006acc70(groupContent,uVar8,(undefined4 *)&local_6);
            if (local_6 != local_8) {
              local_20 = 0;
              break;
            }
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar2);
        }
      }
      local_18 = 0x7fff;
      if (local_20 == 1) {
        FUN_006acc70(groupContent,0,&local_c);
        pSVar7 = thunk_FUN_0042b760(param_1,local_c);
        uVar3 = thunk_FUN_004233c0((int)pSVar7);
        if ((uint)uVar3 == *(uint *)(*param_2 + 0xc)) {
          local_18 = local_c;
        }
      }
    }
  }
  FUN_006ae110((byte *)groupContent);
  return CONCAT22(extraout_var,(undefined2)local_18);
}

