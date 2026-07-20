
undefined4 __cdecl FUN_0057b670(int *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int *this;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int local_60 [5];
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  int *local_38;
  undefined1 local_34;
  undefined4 local_33;
  undefined2 local_2f;
  LPVOID local_8;
  
  this = param_1;
  uVar4 = 0;
  local_8 = (LPVOID)0x0;
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if ((param_2 & 0xff) != 0) {
    if ((param_2 & 0xff) != 1) {
      return 1;
    }
    thunk_FUN_0057b350(param_1,param_3,(int *)&local_8);
    goto LAB_0057b6ff;
  }
  if (*(int *)((int)param_1 + 0x259) == 0x99) {
    iVar3 = 0x15e;
LAB_0057b6da:
    param_1 = (int *)0x3fc00000;
  }
  else {
    if (*(int *)((int)param_1 + 0x259) != 0xb7) {
      iVar3 = 400;
      goto LAB_0057b6da;
    }
    iVar3 = 0xfa;
    param_1 = (int *)0x3f000000;
  }
  thunk_FUN_0057a2c0((AnonShape_0057A2C0_A829D396 *)this,param_3,(int *)&local_8,param_4,iVar3,
                     param_1,param_5);
LAB_0057b6ff:
  if (local_8 != (LPVOID)0x0) {
    thunk_FUN_00416270(this,(undefined2 *)&param_2,&param_5,&param_4);
    if (*(int *)((int)this + 0x259) == 0x99) {
      param_1 = (int *)0xb4;
    }
    else if (*(int *)((int)this + 0x259) == 0xb7) {
      param_1 = (int *)0xb9;
    }
    else {
      param_1 = (int *)0x96;
    }
    if (0 < (int)(param_3 + 1)) {
      do {
        uVar2 = param_3;
        uVar1 = *(undefined2 *)((int)this + 0x247);
        piVar5 = local_60;
        for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        local_4c = *(undefined2 *)((int)this + 0x245);
        local_60[3] = 1;
        local_60[2] = 1;
        local_60[1] = this[9];
        local_48 = *(undefined2 *)((int)this + 0x249);
        local_2f = *(undefined2 *)((int)this + 0x262);
        local_33 = *(undefined4 *)((int)this + 0x25e);
        local_34 = *(undefined1 *)((int)this + 0x25d);
        local_60[0] = 0x28;
        local_46 = (undefined2)param_2;
        local_44 = (undefined2)param_5;
        local_42 = (undefined2)param_4;
        local_4a = uVar1;
        if (uVar4 == param_3) {
          iVar3 = FUN_006acf0d((int)*(short *)((int)this + 0x3a),(int)(short)this[0xf],
                               (int)*(short *)((int)this + 0x3e),(int)(short)this[0xd],
                               (int)*(short *)((int)this + 0x36),(int)(short)this[0xe]);
          if (iVar3 == 0) {
            local_40 = *(short *)((int)local_8 + uVar4 * 8 + -8);
            local_3e = *(short *)((int)local_8 + uVar4 * 8 + -6);
            local_3c = *(short *)((int)local_8 + uVar4 * 8 + -4);
          }
          else {
            local_40 = (short)((((int)*(short *)((int)this + 0x3a) - (int)(short)this[0xd]) * 100) /
                              iVar3) + (short)param_2;
            local_3e = (short)((((int)(short)this[0xf] - (int)*(short *)((int)this + 0x36)) * 100) /
                              iVar3) + (short)param_5;
            local_3c = (short)((((int)*(short *)((int)this + 0x3e) - (int)(short)this[0xe]) * 100) /
                              iVar3) + (short)param_4;
          }
        }
        else {
          local_40 = *(short *)((int)local_8 + uVar4 * 8);
          local_3e = *(short *)((int)local_8 + uVar4 * 8 + 2);
          local_3c = *(short *)((int)local_8 + uVar4 * 8 + 4);
        }
        local_38 = param_1;
        local_3a = *(undefined2 *)((int)local_8 + uVar4 * 8 + 6);
        (*PTR_00802a38->vtable->vfunc_08)(0x106,0,0,local_60,0);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)(uVar2 + 1));
    }
    if (local_8 != (LPVOID)0x0) {
      FUN_006ab060(&local_8);
    }
  }
  return 1;
}

