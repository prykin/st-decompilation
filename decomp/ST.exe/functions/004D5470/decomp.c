#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=11, scalar_uses=0; sites=004D548B dereference: MOV ECX,dword ptr [ESI +
   0x211] | 004D5497 dereference: MOV ECX,dword ptr [ESI + 0x35c] | 004D54A8 dereference: MOV
   ECX,dword ptr [ESI + 0x211] | 004D54BF dereference: MOV ECX,dword ptr [EDI] | 004D54CC
   dereference: MOV ECX,dword ptr [ESI + 0x211] | 004D54E9 dereference: MOV ECX,dword ptr [ESI +
   0x211] | 004D54F5 dereference: MOV ECX,dword ptr [ESI + 0x35c] | 004D5506 dereference: MOV
   ECX,dword ptr [ESI + 0x211] | 004D551D dereference: MOV ECX,dword ptr [EDI] | 004D552A
   dereference: MOV ECX,dword ptr [ESI + 0x211] | 004D5558 dereference: MOV ECX,dword ptr [ESI +
   0x211] */

undefined4 __fastcall FUN_004d5470(void *param_1)

{
  int iVar2;
  uint uVar3;
  int iVar1;
  uint *puVar4;
  int iVar5;


  iVar2 = thunk_FUN_0041c710(param_1);
  if (iVar2 == 0) {
    iVar2 = 0;

    uVar3 = thunk_FUN_004ad650((STT3DSprC *)((int)param_1 + 0x1d5));

    Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar3,iVar2);
    if (STField<STT3DSprC *>(param_1,0x35c) != nullptr) {
      iVar2 = 0;

      uVar3 = thunk_FUN_004ad650(STField<STT3DSprC *>(param_1,0x35c));

      Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar3,iVar2);
    }
    puVar4 = (undefined4 *)((int)param_1 + 0x350);
    iVar2 = 3;
    do {
      if ((STT3DSprC *)*puVar4 != nullptr) {
        iVar5 = 0;

        uVar3 = thunk_FUN_004ad650((STT3DSprC *)*puVar4);

        Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar3,iVar5);
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);

    iVar1 = thunk_FUN_0041caf0(param_1);
    if (iVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 1;

    uVar3 = thunk_FUN_004ad650((STT3DSprC *)((int)param_1 + 0x1d5));

    Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar3,iVar2);
    if (STField<STT3DSprC *>(param_1,0x35c) != nullptr) {
      iVar2 = 1;

      uVar3 = thunk_FUN_004ad650(STField<STT3DSprC *>(param_1,0x35c));

      Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar3,iVar2);
    }
    puVar4 = (undefined4 *)((int)param_1 + 0x350);
    iVar2 = 3;
    do {
      if ((STT3DSprC *)*puVar4 != nullptr) {
        iVar5 = 1;

        uVar3 = thunk_FUN_004ad650((STT3DSprC *)*puVar4);

        Library::Ourlib::ST3DSMAP::SprSetVisible(STField<void *>(param_1,0x211),uVar3,iVar5);
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 1;
  }

  iVar5 = thunk_FUN_004ad650((STT3DSprC *)((int)param_1 + 0x1d5));
  FUN_006e6870(STField<void *>(param_1,0x211),iVar5,iVar2);
  return 0;
}

