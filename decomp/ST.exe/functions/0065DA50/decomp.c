
uint __thiscall FUN_0065da50(void *this,int param_1,char param_2)

{
  ushort uVar1;
  undefined4 in_EAX;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  int *piVar7;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 uVar8;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_8;
  
  local_8 = 0;
  uVar3 = CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)((int)this + 0x7d));
  if ((((*(short *)((int)this + 0x7d) != -2) && (DAT_007fa174 != 0)) &&
      (iVar2 = thunk_FUN_0042b760(CONCAT31((int3)(uVar3 >> 8),*(undefined1 *)((int)this + 0x24)),
                                  uVar3), iVar2 != 0)) && (DAT_007fa174 != 0)) {
    cVar9 = *(char *)((int)this + 0x81);
    if ((cVar9 < '\0') || ('\a' < cVar9)) {
      cVar9 = (char)*(undefined4 *)((int)this + 0x24);
    }
    if (((param_2 != '\b') && ((param_2 < '\0' || (cVar9 = param_2, '\b' < param_2)))) ||
       (param_2 = cVar9, uVar8 = CONCAT31((int3)((uint)extraout_EDX >> 8),param_2), param_2 < '\0'))
    {
      if (param_1 != 0) {
        uVar3 = thunk_FUN_00423520(param_1);
        return uVar3 & 0xffff;
      }
      uVar1 = thunk_FUN_004233c0(iVar2);
      return (uint)uVar1;
    }
    if (param_1 == 0) {
      puVar4 = thunk_FUN_0065da10((int)this,uVar8);
      uVar3 = extraout_ECX;
      uVar8 = extraout_EDX_00;
    }
    else {
      puVar4 = thunk_FUN_0065e360((int)this,uVar8,param_1);
      uVar3 = extraout_ECX_00;
      uVar8 = extraout_EDX_01;
    }
    if (puVar4 != (uint *)0x0) {
      uVar5 = puVar4[3];
      uVar10 = 0;
      if (0 < (int)uVar5) {
        do {
          if (uVar10 < uVar5) {
            uVar3 = puVar4[7];
            puVar6 = (undefined2 *)(puVar4[2] * uVar10 + uVar3);
          }
          else {
            puVar6 = (undefined2 *)0x0;
          }
          piVar7 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)uVar8 >> 8),
                                                      *(undefined1 *)((int)this + 0x24)),
                                             CONCAT22((short)(uVar3 >> 0x10),*puVar6),1);
          uVar3 = extraout_ECX_01;
          uVar8 = extraout_EDX_02;
          if (piVar7 != (int *)0x0) {
            uVar11 = (**(code **)(*piVar7 + 0xf8))();
            uVar8 = (undefined4)((ulonglong)uVar11 >> 0x20);
            uVar3 = extraout_ECX_02;
            if ((int)uVar11 != 0) {
              uVar11 = (**(code **)(*piVar7 + 0x6c))();
              uVar8 = (undefined4)((ulonglong)uVar11 >> 0x20);
              uVar3 = (uint)param_2;
              if (uVar3 == (uint)uVar11) {
                local_8 = local_8 + 1;
              }
            }
          }
          uVar5 = puVar4[3];
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar5);
      }
      FUN_006ae110((byte *)puVar4);
    }
  }
  return local_8;
}

