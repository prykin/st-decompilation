#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=7, scalar_uses=0; sites=0057746D dereference: MOV AL,byte ptr [ESI + 0x430]
   | 00577481 dereference: MOV EAX,dword ptr [ESI + 0x431] | 0057748F dereference: MOV ECX,dword ptr
   [ESI + 0x18] | 00577497 dereference: MOV ECX,dword ptr [ESI + 0x431] | 0057753A dereference: MOV
   byte ptr [ESI + EDI*0x4 + 0x28],DL | 0057754C dereference: MOV byte ptr [ESI + EBX*0x4 + 0x29],DL
   | 00577565 dereference: MOV byte ptr [ESI + EBX*0x4 + 0x2a],DL */

void __fastcall FUN_00577440(void *param_1)

{
  bool bVar1;
  int uVar2;
  DWORD DVar3;
  uint uVar3;
  int iVar4;
  int *piVar5;
  short sVar6;
  uint uVar7;
  uint *puVar8;
  uint local_8;


  uVar2 = FUN_006e4d40(&DAT_00807620,param_1);
  if ((uVar2 == 1) && (DAT_00808784 == 0)) {
    if (STField<char>(param_1,0x430) == '\x01') {
      puVar8 = (uint *)((int)param_1 + 0x20);

      uVar3 = STAppC::sub_006E51B0(STField<STAppC *>(param_1,0x18));

      iVar4 = Library::Ourlib::PALETTE::FUN_00718f40
                        (g_dDXContext_0080759C,(undefined4 *)((int)param_1 + 0x28),0,0x100,10,
                         (int *)((int)param_1 + 0x24),2,uVar3,puVar8);
      if (iVar4 == -4) {

        FUN_006b0a20((RecoveredGlobalRecordView_00854EB8 *)g_dDXContext_0080759C,(int)param_1 + 0x28
                     ,0,0x100,0);
        STField<undefined1>(param_1,0x430) = 2;
      }
    }
    else if ((STField<char>(param_1,0x430) == '\x02') && (STField<int>(param_1,0x431) != 0)) {

      DVar3 = STAppC::sub_006E51B0(STField<STAppC *>(param_1,0x18));
      piVar5 = STField<int *>(param_1,0x431);
      bVar1 = false;
      uVar3 = 0xffffffff;
      local_8 = 0x101;
      if (piVar5 != nullptr) {
        do {
          if (STField<uint>(piVar5,7) <= DVar3 - STField<int>(piVar5,0xb)) {
            sVar6 = 0;
            STField<DWORD>(piVar5,0xb) = DVar3;
            if (STField<char>(piVar5,6) == '\0') {
              STField<short>(piVar5,0xf) = STField<short>(piVar5,0xf) + 1;
            }
            else {
              STField<short>(piVar5,0xf) = STField<short>(piVar5,0xf) + -1;
            }
            if (STField<short>(piVar5,0xf) < 0) {
              if (STField<char>(piVar5,5) == '\0') {
                STField<undefined1>(piVar5,6) = 0;
                STField<undefined2>(piVar5,0xf) = 0;
              }
              else {
                STField<short>(piVar5,0xf) = STField<short>(piVar5,0x11) + -1;
              }
            }
            if (STField<short>(piVar5,0x11) <= STField<short>(piVar5,0xf)) {
              if (STField<char>(piVar5,5) == '\0') {
                STField<undefined1>(piVar5,6) = 1;
                sVar6 = STField<short>(piVar5,0x11) + -1;
              }
              STField<short>(piVar5,0xf) = sVar6;
            }
            uVar7 = (uint)((byte *)piVar5)[1];
            if (uVar7 < local_8) {
              local_8 = uVar7;
            }
            if ((int)uVar3 < (int)uVar7) {
              uVar3 = uVar7;
            }
            *(undefined1 *)((int)param_1 + uVar7 * 4 + 0x28) =
                 *(undefined1 *)(STField<short>(piVar5,0xf) * 3 + 0x13 + (int)piVar5);
            *(undefined1 *)((int)param_1 + (uint)((byte *)piVar5)[1] * 4 + 0x29) =
                 *(undefined1 *)(STField<short>(piVar5,0xf) * 3 + 0x14 + (int)piVar5);
            *(undefined1 *)((int)param_1 + (uint)((byte *)piVar5)[1] * 4 + 0x2a) =
                 *(undefined1 *)((int)piVar5 + (STField<short>(piVar5,0xf) + 7) * 3);
            bVar1 = true;
          }
          piVar5 = (int *)*piVar5;
        } while (piVar5 != nullptr);
        if (bVar1) {

          FUN_006b0a20((RecoveredGlobalRecordView_00854EB8 *)g_dDXContext_0080759C,
                       (int)param_1 + local_8 * 4 + 0x28,local_8,(uVar3 - local_8) + 1,0);

          SystemClassTy::Life(param_1);
          return;
        }
      }
    }
  }

  SystemClassTy::Life(param_1);
  return;
}

