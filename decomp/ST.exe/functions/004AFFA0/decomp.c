
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004AFFA0_param_2Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94;CASE_61=97 */

undefined4 __cdecl
FUN_004affa0(undefined4 param_1,Global_sub_004AFFA0_param_2Enum param_2,int *param_3,int *param_4,
            int *param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  int local_14;
  int *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  uVar3 = 0;
  local_14 = -1;
  local_18 = 0;
  if (DAT_007fa150 != 0) {
    *(undefined4 *)(DAT_007fa150 + 4) = 0;
    iVar1 = FUN_006b1190(DAT_007fa150,&local_10);
    if (-1 < iVar1) {
      do {
        if (local_10 == (int *)0x0) goto switchD_004afffd_caseD_3a;
        switch(param_2) {
        case CASE_38:
          iVar1 = (**(code **)(*local_10 + 0x2c))();
          if (iVar1 != 0xdc) break;
          goto LAB_004b004a;
        case CASE_39:
        case CASE_5E:
          iVar1 = (**(code **)(*local_10 + 0x2c))();
          if (iVar1 == 0xdd) goto LAB_004b004a;
          break;
        case CASE_4F:
          iVar1 = (**(code **)(*local_10 + 0x2c))();
          goto joined_r0x004b0044;
        case CASE_61:
          iVar1 = (**(code **)(*local_10 + 0x2c))();
joined_r0x004b0044:
          if (iVar1 == 0xde) {
LAB_004b004a:
            thunk_FUN_004162b0(local_10,&local_6,&local_8,&local_a);
            iVar1 = (int)local_8;
            iVar2 = (int)local_6;
            uVar3 = local_18;
            if ((((((*(int *)(DAT_007fb248 +
                             (DAT_007fb240 * iVar1 + iVar2 + (int)DAT_007fb246 * (int)local_a) * 8)
                     == 0) && (-1 < local_6)) && (local_6 < DAT_007fb240)) &&
                 ((-1 < local_8 && (local_8 < DAT_007fb242)))) &&
                ((-1 < local_a &&
                 ((local_a < DAT_007fb244 &&
                  (*(short *)(DAT_007fb280 +
                             (DAT_007fb278 * iVar1 + iVar2 + (int)DAT_007fb27e * (int)local_a) * 2)
                   == 0)))))) &&
               ((local_a < 4 &&
                ((iVar1 = FUN_006aced8(iVar2,iVar1,param_6,param_7), local_14 < 0 ||
                 (iVar1 < local_14)))))) {
              *param_3 = (int)local_6;
              *param_4 = (int)local_8;
              *param_5 = (int)local_a;
              local_18 = 1;
              uVar3 = 1;
              local_14 = iVar1;
            }
          }
        }
switchD_004afffd_caseD_3a:
        iVar1 = FUN_006b1190(DAT_007fa150,&local_10);
        if (iVar1 < 0) {
          return uVar3;
        }
      } while( true );
    }
  }
  return 0;
}

