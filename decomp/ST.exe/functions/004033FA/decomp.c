
undefined4 __cdecl
thunk_FUN_004affa0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5,
                  int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  int iStack_14;
  int *piStack_10;
  short sStack_a;
  short sStack_8;
  short sStack_6;
  
  uVar3 = 0;
  iStack_14 = -1;
  uStack_18 = 0;
  if (DAT_007fa150 != 0) {
    *(undefined4 *)(DAT_007fa150 + 4) = 0;
    iVar1 = FUN_006b1190(DAT_007fa150,&piStack_10);
    if (-1 < iVar1) {
      do {
        if (piStack_10 == (int *)0x0) goto switchD_004afffd_caseD_3a;
        switch(param_2) {
        case 0x38:
          iVar1 = (**(code **)(*piStack_10 + 0x2c))();
          if (iVar1 != 0xdc) break;
          goto LAB_004b004a;
        case 0x39:
        case 0x5e:
          iVar1 = (**(code **)(*piStack_10 + 0x2c))();
          if (iVar1 == 0xdd) goto LAB_004b004a;
          break;
        case 0x4f:
          iVar1 = (**(code **)(*piStack_10 + 0x2c))();
          goto joined_r0x004b0044;
        case 0x61:
          iVar1 = (**(code **)(*piStack_10 + 0x2c))();
joined_r0x004b0044:
          if (iVar1 == 0xde) {
LAB_004b004a:
            thunk_FUN_004162b0(piStack_10,&sStack_6,&sStack_8,&sStack_a);
            iVar1 = (int)sStack_8;
            iVar2 = (int)sStack_6;
            uVar3 = uStack_18;
            if ((((((*(int *)(DAT_007fb248 +
                             (DAT_007fb240 * iVar1 + iVar2 + (int)DAT_007fb246 * (int)sStack_a) * 8)
                     == 0) && (-1 < sStack_6)) && (sStack_6 < DAT_007fb240)) &&
                 ((-1 < sStack_8 && (sStack_8 < DAT_007fb242)))) &&
                ((-1 < sStack_a &&
                 ((sStack_a < DAT_007fb244 &&
                  (*(short *)(DAT_007fb280 +
                             (DAT_007fb278 * iVar1 + iVar2 + (int)DAT_007fb27e * (int)sStack_a) * 2)
                   == 0)))))) &&
               ((sStack_a < 4 &&
                ((iVar1 = FUN_006aced8(iVar2,iVar1,param_6,param_7), iStack_14 < 0 ||
                 (iVar1 < iStack_14)))))) {
              *param_3 = (int)sStack_6;
              *param_4 = (int)sStack_8;
              *param_5 = (int)sStack_a;
              uStack_18 = 1;
              uVar3 = 1;
              iStack_14 = iVar1;
            }
          }
        }
switchD_004afffd_caseD_3a:
        iVar1 = FUN_006b1190(DAT_007fa150,&piStack_10);
        if (iVar1 < 0) {
          return uVar3;
        }
      } while( true );
    }
  }
  return 0;
}

