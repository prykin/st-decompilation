
/* [STPrototypeApplier] Propagated return.
   Evidence: 006D0CC0 returns return of Library::DKW::DDX::FUN_006d0a20 @ 006D0CE9 */

int FUN_006d0cc0(uint param_1,int *param_2,BITMAPINFO *param_3,uint *param_4)

{
  int iVar1;

  iVar1 = Library::DKW::DDX::FUN_006d0a20
                    (param_1,param_2,0,0,param_3,param_4,0,0,(param_3->bmiHeader).biWidth,
                     (param_3->bmiHeader).biHeight);
  return iVar1;
}

