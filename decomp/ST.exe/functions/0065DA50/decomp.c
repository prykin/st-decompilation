
uint __thiscall FUN_0065da50(void *this,int param_1,char param_2)

{
  ushort uVar1;
  undefined4 in_EAX;
  STGroupBoatC *this_00;
  uint uVar2;
  uint *groupContent;
  uint uVar3;
  undefined2 *puVar4;
  int *piVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 uVar6;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  uint local_8;
  
  local_8 = 0;
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)((int)this + 0x7d));
  if ((((*(short *)((int)this + 0x7d) != -2) && (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0))
      && (this_00 = thunk_FUN_0042b760(CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)((int)this + 0x24)
                                               ),uVar2), this_00 != (STGroupBoatC *)0x0)) &&
     (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0)) {
    cVar7 = *(char *)((int)this + 0x81);
    if ((cVar7 < '\0') || ('\a' < cVar7)) {
      cVar7 = (char)*(undefined4 *)((int)this + 0x24);
    }
    if (((param_2 != '\b') && ((param_2 < '\0' || (cVar7 = param_2, '\b' < param_2)))) ||
       (param_2 = cVar7, uVar6 = CONCAT31((int3)((uint)extraout_EDX >> 8),param_2), param_2 < '\0'))
    {
      if (param_1 != 0) {
        uVar2 = STGroupC::GetTOBJQty((STGroupC *)this_00,param_1);
        return uVar2 & 0xffff;
      }
      uVar1 = thunk_FUN_004233c0((int)this_00);
      return (uint)uVar1;
    }
    if (param_1 == 0) {
      groupContent = thunk_FUN_0065da10(this,uVar6);
      uVar2 = extraout_ECX;
      uVar6 = extraout_EDX_00;
    }
    else {
      groupContent = thunk_FUN_0065e360(this,uVar6,param_1);
      uVar2 = extraout_ECX_00;
      uVar6 = extraout_EDX_01;
    }
    if (groupContent != (uint *)0x0) {
      uVar3 = groupContent[3];
      uVar8 = 0;
      if (0 < (int)uVar3) {
        do {
          if (uVar8 < uVar3) {
            uVar2 = groupContent[7];
            puVar4 = (undefined2 *)(groupContent[2] * uVar8 + uVar2);
          }
          else {
            puVar4 = (undefined2 *)0x0;
          }
          piVar5 = (int *)STAllPlayersC::GetObjPtr
                                    (g_sTAllPlayers_007FA174,
                                     CONCAT31((int3)((uint)uVar6 >> 8),
                                              *(undefined1 *)((int)this + 0x24)),
                                     CONCAT22((short)(uVar2 >> 0x10),*puVar4),CASE_1);
          uVar2 = extraout_ECX_01;
          uVar6 = extraout_EDX_02;
          if (piVar5 != (int *)0x0) {
            uVar9 = (**(code **)(*piVar5 + 0xf8))();
            uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
            uVar2 = extraout_ECX_02;
            if ((int)uVar9 != 0) {
              uVar9 = (**(code **)(*piVar5 + 0x6c))();
              uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
              uVar2 = (uint)param_2;
              if (uVar2 == (uint)uVar9) {
                local_8 = local_8 + 1;
              }
            }
          }
          uVar3 = groupContent[3];
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar3);
      }
      FUN_006ae110((byte *)groupContent);
    }
  }
  return local_8;
}

