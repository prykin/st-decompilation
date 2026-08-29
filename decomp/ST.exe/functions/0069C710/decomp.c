
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:2: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=5, scalar_uses=0; sites=0069C71E dereference: MOV ECX,dword ptr [ESI + 0xc]
   | 0069C749 dereference: MOV EDX,dword ptr [ESI + 0x4] | 0069C74D dereference: MOV dword ptr [ESI
   + 0x4],EDX | 0069C757 dereference: MOV ECX,dword ptr [ESI + 0x8] | 0069C75B dereference: MOV
   dword ptr [ESI + 0x8],ECX */

uint FUN_0069c710(int param_1,int param_2,RecoveredRecord_0069C710_92A26D6D *param_3)

{
  byte *pbVar1;
  byte bVar2;
  RecoveredRecord_0069C710_92A26D6D *pRVar3;
  uint uVar4;

  pRVar3 = param_3;
  uVar4 = 0xffffffff;
  if (param_3 != nullptr) {

    uVar4 = Library::DKW::TBL::DArrayAppend(param_3->field_000C,&param_2);
    if (-1 < (int)uVar4) {
      pbVar1 = (byte *)(param_1 + 1 + param_2 * 0xe);
      bVar2 = *pbVar1;
      if ((bVar2 & 4) == 0) {
        if ((bVar2 & 8) != 0) {
          *(int *)&pRVar3->field_0x8 = *(int *)&pRVar3->field_0x8 + 1;
        }
      }
      else {
        *(int *)&pRVar3->field_0x4 = *(int *)&pRVar3->field_0x4 + 1;
        if ((*pbVar1 & 8) != 0) {
          *(int *)&pRVar3->field_0x8 = *(int *)&pRVar3->field_0x8 + 1;
          return uVar4;
        }
      }
    }
  }
  return uVar4;
}

