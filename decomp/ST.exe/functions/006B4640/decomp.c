
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004F1390 -> 006B4640 @ 004F13CD; CPanelTy::OutProc parameter param_1 | 005403C0 ->
   006B4640 @ 00540458; data at 0080759C | 0054BE70 -> 006B4640 @ 0054BEAD; CPanelTy::OutProc
   parameter param_1 | 00554660 -> 006B4640 @ 005546EC; data at 0080759C | 00554800 -> 006B4640 @
   0055495C; data at 0080759C | 005939E0 -> 006B4640 @ 00593A9E; ComboTy::OutBmpProc parameter
   param_1 | 005C7800 -> 006B4640 @ 005C7911; data at 0080759C | 006B4640 -> 006B42D0 @ 006B4668

   [STPrototypeApplier] Propagated return.
   Evidence: 006B4640 returns return of Library::DKW::DDX::FUN_006b42d0 @ 006B466E */

int FUN_006b4640(DDXContext *param_1,int param_2,int param_3,BITMAPINFO *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;

  uVar1 = (param_4->bmiHeader).biHeight;
  uVar3 = (int)uVar1 >> 0x1f;

  iVar2 = Library::DKW::DDX::FUN_006b42d0
                    (param_1,param_2,param_3,param_4,param_5,0,0,(param_4->bmiHeader).biWidth,
                     (uVar1 ^ uVar3) - uVar3);
  return iVar2;
}

