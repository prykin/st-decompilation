
/* [STPrototypeRepairApplier] Propagated parameter 4.
   Evidence: 00515650 -> 006B5440 @ 00515737 */

void FUN_006b5440(int param_1,int param_2,int param_3,int param_4,uint tOBJImage,int param_6,
                 byte param_7)

{
  Library::DKW::WGR::FUN_006b5110
            (param_1,param_2,param_3,param_4,tOBJImage,param_6,0,0,*(int *)(tOBJImage + 4),
             *(int *)(tOBJImage + 8),param_7);
  return;
}

