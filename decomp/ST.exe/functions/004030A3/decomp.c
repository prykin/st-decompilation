
undefined4 __cdecl
thunk_FUN_0057b670(int *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int *this;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int aiStack_60 [5];
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  undefined2 uStack_3a;
  int *piStack_38;
  undefined1 uStack_34;
  undefined4 uStack_33;
  undefined2 uStack_2f;
  int iStack_8;
  
  this = param_1;
  uVar4 = 0;
  iStack_8 = 0;
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if ((param_2 & 0xff) != 0) {
    if ((param_2 & 0xff) != 1) {
      return 1;
    }
    thunk_FUN_0057b350(param_1,param_3,&iStack_8);
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
  thunk_FUN_0057a2c0(this,param_3,&iStack_8,param_4,iVar3,param_1,param_5);
LAB_0057b6ff:
  if (iStack_8 != 0) {
    thunk_FUN_00416270(this,(undefined2 *)&param_2,(undefined2 *)&param_5,(undefined2 *)&param_4);
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
        piVar5 = aiStack_60;
        for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        uStack_4c = *(undefined2 *)((int)this + 0x245);
        aiStack_60[3] = 1;
        aiStack_60[2] = 1;
        aiStack_60[1] = this[9];
        uStack_48 = *(undefined2 *)((int)this + 0x249);
        uStack_2f = *(undefined2 *)((int)this + 0x262);
        uStack_33 = *(undefined4 *)((int)this + 0x25e);
        uStack_34 = *(undefined1 *)((int)this + 0x25d);
        aiStack_60[0] = 0x28;
        uStack_46 = (undefined2)param_2;
        uStack_44 = (undefined2)param_5;
        uStack_42 = (undefined2)param_4;
        uStack_4a = uVar1;
        if (uVar4 == param_3) {
          iVar3 = FUN_006acf0d((int)*(short *)((int)this + 0x3a),(int)(short)this[0xf],
                               (int)*(short *)((int)this + 0x3e),(int)(short)this[0xd],
                               (int)*(short *)((int)this + 0x36),(int)(short)this[0xe]);
          if (iVar3 == 0) {
            sStack_40 = *(short *)(iStack_8 + -8 + uVar4 * 8);
            sStack_3e = *(short *)(iStack_8 + -6 + uVar4 * 8);
            sStack_3c = *(short *)(iStack_8 + -4 + uVar4 * 8);
          }
          else {
            sStack_40 = (short)((((int)*(short *)((int)this + 0x3a) - (int)(short)this[0xd]) * 100)
                               / iVar3) + (short)param_2;
            sStack_3e = (short)((((int)(short)this[0xf] - (int)*(short *)((int)this + 0x36)) * 100)
                               / iVar3) + (short)param_5;
            sStack_3c = (short)((((int)*(short *)((int)this + 0x3e) - (int)(short)this[0xe]) * 100)
                               / iVar3) + (short)param_4;
          }
        }
        else {
          sStack_40 = *(short *)(iStack_8 + uVar4 * 8);
          sStack_3e = *(short *)(iStack_8 + 2 + uVar4 * 8);
          sStack_3c = *(short *)(iStack_8 + 4 + uVar4 * 8);
        }
        piStack_38 = param_1;
        uStack_3a = *(undefined2 *)(iStack_8 + 6 + uVar4 * 8);
        (**(code **)(*DAT_00802a38 + 8))(0x106,0,0,aiStack_60,0);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)(uVar2 + 1));
    }
    if (iStack_8 != 0) {
      FUN_006ab060(&iStack_8);
    }
  }
  return 1;
}

