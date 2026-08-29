
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=3, scalar_uses=0; sites=006B5016 dereference: MOV EAX,dword ptr [EDX + 0x20]
   | 006B501F dereference: MOV CX,word ptr [EDX + 0xe] | 006B503A dereference: CMP dword ptr [EDX +
   0x10],0x3 */

int FUN_006b5010(AnonShape_006B5010_308EC787 *param_1)

{
  ushort uVar1;
  int iVar2;

  iVar2 = param_1->field_0020;
  if (iVar2 == 0) {
    uVar1 = param_1->field_000E;
    if (uVar1 != 0) {
      if (uVar1 < 9) {
        return (1 << ((byte)uVar1 & 0x1f)) << 2;
      }
      if (param_1->field_0010 == 3) {
        iVar2 = 3;
      }
    }
  }
  return iVar2 << 2;
}

