
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 00515650 -> 006B5440 @ 00515737

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005C87C0 -> 006B5440 @ 005C885D; /StartSystemTy+0x2f0 */

void FUN_006b5440(ushort *param_1,int param_2,int param_3,int param_4,tagBITMAPINFO *tOBJImage,
                 int param_6,byte param_7)

{
  Library::DKW::WGR::FUN_006b5110
            ((int)param_1,param_2,param_3,param_4,tOBJImage,param_6,0,0,
             (tOBJImage->bmiHeader).biWidth,(tOBJImage->bmiHeader).biHeight,param_7);
  return;
}

