
uint __thiscall FUN_0065da50(void *this,int param_1,char param_2)

{
  ushort uVar1;
  undefined4 in_EAX;
  STGroupC *this_00;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined2 *puVar5;
  int *piVar6;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 uVar7;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  uint local_8;
  
  local_8 = 0;
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)((int)this + 0x7d));
  if ((((*(short *)((int)this + 0x7d) != -2) && (DAT_007fa174 != 0)) &&
      (this_00 = (STGroupC *)
                 thunk_FUN_0042b760(CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)((int)this + 0x24)),
                                    uVar2), this_00 != (STGroupC *)0x0)) && (DAT_007fa174 != 0)) {
    cVar8 = *(char *)((int)this + 0x81);
    if ((cVar8 < '\0') || ('\a' < cVar8)) {
      cVar8 = (char)*(undefined4 *)((int)this + 0x24);
    }
    if (((param_2 != '\b') && ((param_2 < '\0' || (cVar8 = param_2, '\b' < param_2)))) ||
       (param_2 = cVar8, uVar7 = CONCAT31((int3)((uint)extraout_EDX >> 8),param_2), param_2 < '\0'))
    {
      if (param_1 != 0) {
        uVar2 = STGroupC::GetTOBJQty(this_00,param_1);
        return uVar2 & 0xffff;
      }
      uVar1 = thunk_FUN_004233c0((int)this_00);
      return (uint)uVar1;
    }
    if (param_1 == 0) {
      puVar3 = thunk_FUN_0065da10((int)this,uVar7);
      uVar2 = extraout_ECX;
      uVar7 = extraout_EDX_00;
    }
    else {
      puVar3 = thunk_FUN_0065e360((int)this,uVar7,param_1);
      uVar2 = extraout_ECX_00;
      uVar7 = extraout_EDX_01;
    }
    if (puVar3 != (uint *)0x0) {
      uVar4 = puVar3[3];
      uVar9 = 0;
      if (0 < (int)uVar4) {
        do {
          if (uVar9 < uVar4) {
            uVar2 = puVar3[7];
            puVar5 = (undefined2 *)(puVar3[2] * uVar9 + uVar2);
          }
          else {
            puVar5 = (undefined2 *)0x0;
          }
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)uVar7 >> 8),
                                                      *(undefined1 *)((int)this + 0x24)),
                                             CONCAT22((short)(uVar2 >> 0x10),*puVar5),1);
          uVar2 = extraout_ECX_01;
          uVar7 = extraout_EDX_02;
          if (piVar6 != (int *)0x0) {
            uVar10 = (**(code **)(*piVar6 + 0xf8))();
            uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
            uVar2 = extraout_ECX_02;
            if ((int)uVar10 != 0) {
              uVar10 = (**(code **)(*piVar6 + 0x6c))();
              uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
              uVar2 = (uint)param_2;
              if (uVar2 == (uint)uVar10) {
                local_8 = local_8 + 1;
              }
            }
          }
          uVar4 = puVar3[3];
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar4);
      }
      FUN_006ae110((byte *)puVar3);
    }
  }
  return local_8;
}

