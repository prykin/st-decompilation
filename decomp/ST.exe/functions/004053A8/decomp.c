
uint thunk_FUN_0042d770(uint param_1,int *param_2)

{
  int iVar1;
  ushort uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined2 extraout_var;
  uint uVar7;
  undefined4 uStack_28;
  STAllPlayersC *pSStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint *puStack_10;
  uint uStack_c;
  short sStack_8;
  short sStack_6;
  
  uStack_18 = 0xffff;
  iVar6 = *(int *)((int)&DAT_007f4f8d + (char)param_1 * 0xa62);
  iStack_1c = 1;
  iStack_20 = 1;
  puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  *param_2 = (int)puVar3;
  iVar1 = *(int *)(iVar6 + 0xc);
  if (iVar1 == 0) {
    return CONCAT22((short)((uint)puVar3 >> 0x10),0xffff);
  }
  puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  uStack_14 = 0;
  puStack_10 = puVar3;
  if (0 < iVar1) {
    do {
      FUN_006acc70(iVar6,uStack_14,&uStack_c);
      if ((short)uStack_c != -1) {
        uVar4 = STAllPlayersC::GetObjPtr(pSStack_24,param_1,uStack_c,1);
        iVar5 = thunk_FUN_00493cd0(uVar4);
        puVar3 = puStack_10;
        if ((iVar5 == 0) &&
           (uStack_28 = CONCAT22((short)(uVar4 >> 0x10),*(short *)(uVar4 + 0x30)),
           *(short *)(uVar4 + 0x30) != -1)) {
          iStack_1c = iVar5;
          Library::DKW::TBL::FUN_006ae1c0(puStack_10,&uStack_28);
          Library::DKW::TBL::FUN_006ae1c0((uint *)*param_2,&uStack_c);
          puVar3 = puStack_10;
        }
      }
      uStack_14 = uStack_14 + 1;
    } while ((int)uStack_14 < iVar1);
    if (iStack_1c == 0) {
      uVar4 = puVar3[3];
      if (1 < uVar4) {
        FUN_006acc70((int)puVar3,0,(undefined4 *)&sStack_8);
        uVar7 = 1;
        if (1 < (int)uVar4) {
          do {
            FUN_006acc70((int)puVar3,uVar7,(undefined4 *)&sStack_6);
            if (sStack_6 != sStack_8) {
              iStack_20 = 0;
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar4);
        }
      }
      uStack_18 = 0x7fff;
      if (iStack_20 == 1) {
        FUN_006acc70((int)puVar3,0,&uStack_c);
        iVar6 = thunk_FUN_0042b760(param_1,uStack_c);
        uVar2 = thunk_FUN_004233c0(iVar6);
        if ((uint)uVar2 == *(uint *)(*param_2 + 0xc)) {
          uStack_18 = uStack_c;
        }
      }
    }
  }
  FUN_006ae110((byte *)puVar3);
  return CONCAT22(extraout_var,(undefined2)uStack_18);
}

