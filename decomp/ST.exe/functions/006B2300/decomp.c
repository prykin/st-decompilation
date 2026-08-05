
/* [STPrototypeApplier] Propagated return.
   Evidence: 006B2300 returns return of Library::DKW::DDX::FUN_006b1d50 @ 006B2329 */

int FUN_006b2300(uint param_1,uint *param_2,uint param_3,int *param_4,uint param_5,uint param_6)

{
  int iVar1;

  iVar1 = Library::DKW::DDX::FUN_006b1d50
                    (param_1,param_2,param_3,1,param_4,param_5,0xffffffff,0xffffffff,param_6,0);
  return iVar1;
}

