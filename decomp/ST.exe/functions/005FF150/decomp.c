
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=2,
   pointer_dereferences=4, scalar_uses=0; sites=005FF170 dereference: MOV ESI,dword ptr [EDX +
   EAX*0x8 + 0x10] | 005FF177 dereference: ADD ESI,dword ptr [EAX + 0xc] | 005FF18F dereference: MOV
   EBX,dword ptr [ECX + 0x10] | 005FF192 dereference: ADD EBX,dword ptr [ECX + 0xc] */

void FUN_005ff150(RecoveredRecordView_005FF150_0B034029 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_c;
  int local_8;

  local_c = 0;
  piVar5 = param_2;
  if (0 < param_3) {
    do {
      iVar1 = param_1[*piVar5].field_0010;
      iVar2 = param_1[*piVar5].field_000C;
      piVar4 = param_2;
      local_8 = local_c;
      if (0 < local_c) {
        do {
          iVar3 = *piVar4;
          if (param_1[iVar3].field_0010 + param_1[iVar3].field_000C <= iVar1 + iVar2) {
            *piVar4 = *piVar5;
            *piVar5 = iVar3;
          }
          local_8 = local_8 + -1;
          piVar4 = piVar4 + 1;
        } while (local_8 != 0);
      }
      local_c = local_c + 1;
      piVar5 = piVar5 + 1;
    } while (local_c < param_3);
  }
  return;
}

