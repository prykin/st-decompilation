
uint FUN_0042d770(uint param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 extraout_var;
  uint uVar7;
  undefined4 local_28;
  STAllPlayersC *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint local_c;
  short local_8;
  short local_6;
  
  local_18 = 0xffff;
  iVar6 = *(int *)((int)&DAT_007f4f8d + (char)param_1 * 0xa62);
  local_1c = 1;
  local_20 = 1;
  puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  *param_2 = (int)puVar3;
  iVar1 = *(int *)(iVar6 + 0xc);
  if (iVar1 == 0) {
    return CONCAT22((short)((uint)puVar3 >> 0x10),0xffff);
  }
  puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  local_14 = 0;
  local_10 = puVar3;
  if (0 < iVar1) {
    do {
      FUN_006acc70(iVar6,local_14,&local_c);
      if ((short)local_c != -1) {
        uVar4 = STAllPlayersC::GetObjPtr(local_24,param_1,local_c,CASE_1);
        iVar5 = thunk_FUN_00493cd0(uVar4);
        puVar3 = local_10;
        if ((iVar5 == 0) &&
           (local_28 = CONCAT22((short)(uVar4 >> 0x10),*(short *)(uVar4 + 0x30)),
           *(short *)(uVar4 + 0x30) != -1)) {
          local_1c = iVar5;
          Library::DKW::TBL::FUN_006ae1c0(local_10,&local_28);
          Library::DKW::TBL::FUN_006ae1c0((uint *)*param_2,&local_c);
          puVar3 = local_10;
        }
      }
      local_14 = local_14 + 1;
    } while ((int)local_14 < iVar1);
    if (local_1c == 0) {
      uVar4 = puVar3[3];
      if (1 < uVar4) {
        FUN_006acc70((int)puVar3,0,(undefined4 *)&local_8);
        uVar7 = 1;
        if (1 < (int)uVar4) {
          do {
            FUN_006acc70((int)puVar3,uVar7,(undefined4 *)&local_6);
            if (local_6 != local_8) {
              local_20 = 0;
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar4);
        }
      }
      local_18 = 0x7fff;
      if (local_20 == 1) {
        FUN_006acc70((int)puVar3,0,&local_c);
        iVar6 = thunk_FUN_0042b760(param_1,local_c);
        uVar2 = thunk_FUN_004233c0(iVar6);
        if ((uint)uVar2 == *(uint *)(*param_2 + 0xc)) {
          local_18 = local_c;
        }
      }
    }
  }
  FUN_006ae110((byte *)puVar3);
  return CONCAT22(extraout_var,(undefined2)local_18);
}

