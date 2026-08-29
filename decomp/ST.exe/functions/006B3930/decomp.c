
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=6, scalar_uses=0; sites=006B394F dereference: MOV ECX,dword ptr [ESI +
   0x1a0] | 006B395D dereference: MOV ECX,dword ptr [ESI + 0x1b0] | 006B39A2 dereference: MOV
   EDI,dword ptr [ESI + EAX*0x8 + 0x11c] | 006B39BB dereference: SUB EDX,dword ptr [ESI + EAX*0x8 +
   0x120] | 006B39C8 dereference: MOV EDX,dword ptr [ESI + EAX*0x8 + 0x11c] | 006B39DD dereference:
   MOV EDX,dword ptr [ESI + EAX*0x8 + 0x120] */

bool FUN_006b3930(RecoveredRecord_006B3930_A2828000 *param_1,uint param_2,int *param_3)

{
  RecoveredRecord_006CEE10_585981DD *pRVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  param_3[3] = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  if (param_2 < param_1->field_01A0) {
    pRVar1 = *(RecoveredRecord_006CEE10_585981DD **)(param_1->field_01B0 + param_2 * 4);
    if ((*(uint *)pRVar1 & 3) != 0) {
      if ((*(uint *)pRVar1 & 2) == 0) {
        piVar3 = (int *)&pRVar1->field_0x4;
      }
      else {
        FUN_006cf950((uint *)pRVar1);
        piVar3 = (int *)&pRVar1->field_0x18;
      }
      local_14 = *piVar3;
      local_10 = piVar3[1];
      local_c = piVar3[2];
      local_8 = piVar3[3];

      iVar2 = FUN_006cee10((int)param_1,pRVar1);
      iVar4 = iVar2 * 0x10;
      local_24 = *(int *)(&param_1->field_0x14 + iVar4) -
                 *(int *)(&param_1->field_0x11c + iVar2 * 8);
      local_20 = *(int *)(&param_1->field_0x18 + iVar4) -
                 *(int *)(&param_1->field_0x120 + iVar2 * 8);
      local_1c = *(int *)(&param_1->field_0x1c + iVar4) -
                 *(int *)(&param_1->field_0x11c + iVar2 * 8);
      local_18 = *(int *)(&param_1->field_0x20 + iVar2 * 0x10) -
                 *(int *)(&param_1->field_0x120 + iVar2 * 8);
      if (local_c < 0) {
        local_14 = local_14 + local_c;
        local_c = -local_c;
      }
      if (local_8 < 0) {
        local_10 = local_10 + local_8;
        local_8 = -local_8;
      }

      iVar2 = FUN_006cfeb0(param_3,&local_14,&local_24);
      return iVar2 != 0;
    }
  }
  return false;
}

