
void __fastcall thunk_FUN_00631010(void *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  short sStack_1a;
  undefined4 uStack_18;
  undefined4 uStack_c;
  uint uStack_8;
  
  iVar5 = *(int *)((int)param_1 + 0x38);
  if (iVar5 != 0) {
    uStack_8 = *(uint *)(iVar5 + 0xc) - 1;
    if (-1 < (int)uStack_8) {
      if (uStack_8 < *(uint *)(iVar5 + 0xc)) {
        puVar2 = (undefined4 *)(*(int *)(iVar5 + 8) * uStack_8 + *(int *)(iVar5 + 0x1c));
      }
      else {
        puVar2 = (undefined4 *)0x0;
      }
      if (puVar2[3] + 0x2ee < *(uint *)(DAT_00802a38 + 0xe4)) {
        piVar1 = (int *)puVar2[4];
        psVar6 = &sStack_20;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)psVar6 = *puVar2;
          puVar2 = puVar2 + 1;
          psVar6 = psVar6 + 2;
        }
        FUN_006e91d0(DAT_00807598,piVar1);
        iVar5 = thunk_FUN_00630ac0(param_1,uStack_8);
        if (iVar5 != 0) {
          thunk_FUN_00630bb0(param_1,sStack_20,sStack_1e,sStack_1c,uStack_18,(int)sStack_1a,uStack_c
                            );
          *(undefined4 *)((int)param_1 + 0x44) = 1;
          iVar5 = thunk_FUN_00630ff0();
          *(int *)((int)param_1 + 0x48) = iVar5;
          if (iVar5 < 1) {
            *(undefined4 *)((int)param_1 + 0x44) = 1;
          }
          else {
            puVar3 = thunk_FUN_00630c50(*(undefined4 *)((int)param_1 + 0x40),
                                        *(int *)((int)param_1 + 0x4c),1,1,
                                        *(int *)((int)param_1 + 0x50));
            if (puVar3 != (ushort *)0x0) {
              *(undefined4 *)((int)param_1 + 0x44) = 2;
            }
          }
          uVar4 = thunk_FUN_00631880(param_1,(undefined4 *)((int)param_1 + 0x40),
                                     *(undefined4 *)((int)param_1 + 0x61));
          if (((uVar4 == 0) && (*(int *)((int)param_1 + 0x48) != 0)) &&
             (*(uint *)((int)param_1 + 0x61) != 0)) {
            FUN_006e8ba0(DAT_00807598,*(uint *)((int)param_1 + 0x61));
          }
          *(undefined4 *)((int)param_1 + 0x61) = 0xffffffff;
        }
      }
    }
  }
  return;
}

