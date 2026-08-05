
/* [STPrototypeApplier] Propagated return.
   Evidence: 006B48A0 returns return of Library::DKW::DDX::FUN_006b4680 @ 006B48D2 */

int FUN_006b48a0(int *param_1,int param_2,int param_3,BITMAPINFO *param_4,uint *param_5,uint param_6
                )

{
  uint uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = (param_4->bmiHeader).biHeight;
  uVar3 = (int)uVar1 >> 0x1f;
  iVar2 = Library::DKW::DDX::FUN_006b4680
                    (param_1,param_2,param_3,param_4,param_5,0,0,(param_4->bmiHeader).biWidth,
                     (uVar1 ^ uVar3) - uVar3,param_6);
  return iVar2;
}

