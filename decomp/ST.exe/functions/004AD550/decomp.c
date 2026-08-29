#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=12, scalar_uses=0; sites=004AD553 dereference: MOV AL,byte ptr [ESI + 0x10]
   | 004AD556 dereference: MOV byte ptr [ESI + 0x11],0x0 | 004AD55E dereference: MOVSX EAX,byte ptr
   [ESI + 0x13] | 004AD562 dereference: MOV ECX,dword ptr [ESI + 0x20] | 004AD576 dereference: MOV
   EDX,dword ptr [ESI + 0x34] | 004AD579 dereference: MOV EAX,dword ptr [ESI + 0x18] | 004AD57C
   dereference: MOV ECX,dword ptr [ESI + 0x3c] | 004AD58C dereference: CMP byte ptr [ESI + 0x10],0x1
   | 004AD592 dereference: MOV EAX,dword ptr [ESI + 0x38] | 004AD599 dereference: MOV ECX,dword ptr
   [ESI + 0x34] | 004AD59C dereference: MOV EDX,dword ptr [ESI + 0x18] | 004AD5A6 dereference: MOV
   ECX,dword ptr [ESI + 0x3c] */

void __fastcall FUN_004ad550(RecoveredRecordView_004AD550_F37E00D1 *param_1)

{
  int iVar1;

  param_1->field_0011 = 0;
  if (((param_1->field_0010 == '\0') &&
      (iVar1 = *(int *)(param_1->field_0020 + param_1->field_0013 * 0x24), iVar1 != 0)) &&
     (STField<int>(iVar1,0x29) != 0)) {
    Library::Ourlib::ST3DSMAP::SprSetShadow
              (param_1->field_003C,param_1->field_0018,param_1->field_0034,0x404999,(uint)param_1);
  }
  if ((param_1->field_0010 == '\x01') && (param_1->field_0038 != 0)) {
    Library::Ourlib::ST3DSMAP::SprSetShadow
              (param_1->field_003C,param_1->field_0018,param_1->field_0034,0x405b64,(uint)param_1);
  }
  return;
}

