
undefined4 thunk_FUN_00442b40(undefined4 *param_1,uint param_2)

{
  ushort uVar1;
  uint *puVar2;
  code *pcVar3;
  int *this;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  short sStack_50;
  short sStack_4e;
  short sStack_4c;
  short sStack_4a;
  short sStack_48;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  int aiStack_2c [4];
  short sStack_1c;
  uint uStack_18;
  int *piStack_14;
  int iStack_10;
  undefined4 uStack_c;
  short sStack_8;
  short sStack_6;
  
  aiStack_2c[0] = 0x38;
  aiStack_2c[1] = 0x39;
  aiStack_2c[2] = 0x4f;
  aiStack_2c[3] = 0x5e;
  this = (int *)thunk_FUN_0042b620((uint)param_1,param_2,1);
  piStack_14 = this;
  uVar4 = (**(code **)(*this + 0x2c))();
  uStack_c = 0;
  uStack_18 = uVar4;
  if (this == (int *)0x0) {
    iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x246d,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC___SubMDObject_inva_007a80dc);
    if (iVar5 != 0) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    RaiseInternalException(-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x246e)
    ;
  }
  if ((uVar4 != 0x3b) && (uVar4 != 0x60)) {
    iStack_10 = 0;
    do {
      if (uVar4 == *(int *)((int)aiStack_2c + iStack_10)) {
        puVar2 = *(uint **)((int)&DAT_007f4e2f + (char)param_1 * 0xa62 + iStack_10);
        uVar1 = (ushort)puVar2[3];
        if (uVar1 != 0) {
          thunk_FUN_004162b0(this,(undefined2 *)((int)&param_2 + 2),&sStack_6,&sStack_8);
          uVar4 = 0;
          sStack_1c = *(short *)((int)this + 0x32);
          this = piStack_14;
          if (uVar1 != 0) {
            do {
              FUN_006acc70((int)puVar2,uVar4,(undefined4 *)&sStack_50);
              if ((((sStack_4a != -1) && (sStack_42 != -1)) && (sStack_50 == param_2._2_2_)) &&
                 (((sStack_4e == sStack_6 && (sStack_4c == sStack_8)) && (sStack_4a == sStack_1c))))
              {
                sStack_42 = -1;
                sStack_4a = -1;
                FUN_006ae140(puVar2,uVar4,(undefined4 *)&sStack_50);
                uStack_c = 1;
              }
              uVar4 = uVar4 + 1;
              this = piStack_14;
            } while ((int)uVar4 < (int)(uint)uVar1);
          }
        }
      }
      iStack_10 = iStack_10 + 4;
      uVar4 = uStack_18;
    } while (iStack_10 < 0x10);
    return uStack_c;
  }
  thunk_FUN_004162b0(this,(undefined2 *)((int)&param_2 + 2),&sStack_6,&sStack_8);
  sStack_1c = *(short *)((int)this + 0x32);
  piStack_14 = (int *)0x4;
  param_1 = (undefined4 *)((int)&DAT_007f4e2f + (char)param_1 * 0xa62);
  do {
    puVar2 = (uint *)*param_1;
    if ((puVar2 != (uint *)0x0) && (uVar1 = (ushort)puVar2[3], uVar1 != 0)) {
      uVar4 = 0;
      uStack_18 = (uint)uVar1;
      if (uVar1 != 0) {
        do {
          FUN_006acc70((int)puVar2,uVar4,(undefined4 *)&sStack_50);
          if (((((sStack_4a != -1) && (sStack_42 != -1)) && (sStack_48 == param_2._2_2_)) &&
              ((sStack_46 == sStack_6 && (sStack_44 == sStack_8)))) && (sStack_42 == sStack_1c)) {
            sStack_42 = -1;
            sStack_4a = -1;
            FUN_006ae140(puVar2,uVar4,(undefined4 *)&sStack_50);
            uStack_c = 1;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)uStack_18);
      }
    }
    param_1 = param_1 + 1;
    piStack_14 = (int *)((int)piStack_14 + -1);
  } while (piStack_14 != (int *)0x0);
  return uStack_c;
}

