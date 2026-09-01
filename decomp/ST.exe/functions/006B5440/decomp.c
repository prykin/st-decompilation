
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 00515650 -> 006B5440 @ 00515737

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=24, used=0, unknown=0),
   and decompilation contains no value return

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 004FE6C0 -> 006B5440 @ 004FE759; address of CPanelTy::PaintEnergy stack local local_8
   at 004FE746 | 004FE6C0 -> 006B5440 @ 004FE7F4; address of CPanelTy::PaintEnergy stack local
   local_8 at 004FE7DC | 005C87C0 -> 006B5440 @ 005C885D; /StartSystemTy+0x2f0 | 006B5440 ->
   006B5110 @ 006B546B */

void FUN_006b5440(ushort *local_8,int param_2,int param_3,int param_4,tagBITMAPINFO *tOBJImage,
                 int param_6,byte param_7)

{
  Library::DKW::WGR::FUN_006b5110
            ((int *)local_8,param_2,param_3,param_4,tOBJImage,param_6,0,0,
             (tOBJImage->bmiHeader).biWidth,(tOBJImage->bmiHeader).biHeight,param_7);
  return;
}

