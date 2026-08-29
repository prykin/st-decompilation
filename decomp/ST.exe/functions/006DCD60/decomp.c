#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=42, scalar_uses=0; sites=006DCD6A dereference: MOV EBX,dword ptr [ESI +
   0x358] | 006DCD78 dereference: TEST byte ptr [ESI + 0xa8],0x8 | 006DCD85 dereference: FLD double
   ptr [ESI + 0x68] | 006DCD88 dereference: FSUB double ptr [ESI + 0x60] | 006DCD8B dereference: FLD
   double ptr [ESI + 0x78] | 006DCD8E dereference: FSUB double ptr [ESI + 0x70] | 006DCD97
   dereference: FLD double ptr [ESI + 0xd0] | 006DCDC5 dereference: FDIV double ptr [ESI + 0x368] |
   006DCDE3 dereference: FMUL double ptr [ESI + 0x368] | 006DCDFB dereference: MOV EAX,dword ptr
   [ESI + 0x358] | 006DCE0A dereference: MOV EDX,dword ptr [ESI + 0x358] | 006DCE17 dereference: MOV
   EAX,dword ptr [ESI + 0x358] | 006DCE23 dereference: MOV EDX,dword ptr [ESI + 0x358] | 006DCE32
   dereference: MOV ECX,dword ptr [ESI + 0x358] | 006DCE3B dereference: MOV EAX,dword ptr [ESI +
   0x358] | 006DCE4A dereference: MOV EAX,dword ptr [ESI + 0x358] | 006DCE53 dereference: MOV dword
   ptr [ESI + 0x38c],ECX | 006DCE5C dereference: MOV dword ptr [ESI + 0x390],EDX | 006DCE65
   dereference: MOV EAX,dword ptr [ESI + 0x358] | 006DCE6E dereference: MOV dword ptr [ESI +
   0x37c],EDI */

void __fastcall FUN_006dcd60(void *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  void *pvVar8;
  float10 fVar9;
  longlong lVar10;
  double local_c;

  iVar3 = STField<int>(param_1,0x358);
  if ((iVar3 != 0) && ((STField<byte>(param_1,0xa8) & 8) == 0)) {
    lVar10 = Library::MSVCRT::__ftol();
    iVar7 = (int)lVar10;
    dVar4 = (double)iVar7 * STField<double>(param_1,0x368);
    if (STField<int>(iVar3,0x28) < iVar7) {

      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pvVar8 = Library::DKW::LIB::MemRealloc
                         (*(void **)(STField<int>(param_1,0x358) + 8),iVar7 * iVar7 + 0x18);
      *(void **)(STField<int>(param_1,0x358) + 8) = pvVar8;
      *(undefined4 *)(STField<int>(param_1,0x358) + 0xc) =
           *(undefined4 *)(STField<int>(param_1,0x358) + 8);

      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pvVar8 = Library::DKW::LIB::MemRealloc
                         (*(void **)(STField<int>(param_1,0x358) + 0x10),iVar7 * iVar7 + 0x10);
      *(void **)(STField<int>(param_1,0x358) + 0x10) = pvVar8;
      *(int *)(STField<int>(param_1,0x358) + 0x14) =
           *(int *)(STField<int>(param_1,0x358) + 0x10) + 8;
      iVar3 = STField<int>(param_1,0x358);
      STField<undefined4>(param_1,0x38c) = STField<undefined4>(iVar3,0xC);
      STField<undefined4>(param_1,0x390) = STField<undefined4>(iVar3,0x14);
      STField<int>(iVar3,0x28) = iVar7;
      *(int *)(STField<int>(param_1,0x358) + 0x2c) = iVar7;
      STField<int>(param_1,0x37c) = iVar7;
    }
    local_c = dVar4 * _DAT_007901c0;
    dVar2 = STField<double>(param_1,0x78) * _DAT_00790770;
    dVar5 = STField<double>(param_1,0xd0) * _DAT_0079df68 -
            STField<double>(param_1,0x70) * _DAT_00790770;
    dVar1 = local_c;
    switch(STField<undefined4>(param_1,0xa8)) {
    case 0:
      local_c = STField<double>(param_1,0x78) + STField<double>(param_1,0x78);
      dVar1 = (-STField<double>(param_1,0x60) - dVar2) * _DAT_0079df60 + local_c;
      local_c = (STField<double>(param_1,0x68) - dVar2) * _DAT_0079df60 + local_c;
      break;
    case 1:
      dVar6 = -STField<double>(param_1,0x60);
      dVar1 = (dVar5 - dVar6) * _DAT_0079df60 + dVar6 * _DAT_00790770;
      local_c = (dVar2 - dVar6) * _DAT_0079df60 + dVar6 * _DAT_00790770;
      break;
    case 2:
      dVar1 = (STField<double>(param_1,0x68) - dVar5) * _DAT_0079df60 + dVar5 * _DAT_00790770;
      local_c = (-STField<double>(param_1,0x60) - dVar5) * _DAT_0079df60 + dVar5 * _DAT_00790770;
      break;
    case 3:
      local_c = STField<double>(param_1,0x68) * _DAT_00790770;
      dVar1 = (dVar2 - STField<double>(param_1,0x68)) * _DAT_0079df60 + local_c;
      local_c = (dVar5 - STField<double>(param_1,0x68)) * _DAT_0079df60 + local_c;
    }
    dVar1 = dVar1 / STField<double>(param_1,0x368);
    fVar9 = Library::MSVCRT::FUN_00730450(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
    dVar1 = (double)(fVar9 * (float10)STField<double>(param_1,0x368));
    local_c = local_c / STField<double>(param_1,0x368);
    fVar9 = Library::MSVCRT::FUN_00730450(SUB84(local_c,0),(uint)((ulonglong)local_c >> 0x20));
    dVar2 = (double)(fVar9 * (float10)STField<double>(param_1,0x368));
    STPiece<0,4>(local_c) = SUB84(dVar2,0);
    dVar5 = dVar4 - dVar1;
    dVar1 = -dVar1;
    Library::Ourlib::STREND::FUN_006dd6e0
              (STField<void *>(param_1,0x358),SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
               SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),SUB84(-(dVar4 - dVar2),0),
               (int)((ulonglong)-(dVar4 - dVar2) >> 0x20),STPiece<0,4>(local_c),
               (int)((ulonglong)dVar2 >> 0x20));
    Library::Ourlib::STREND::FUN_006dd660(STField<void *>(param_1,0x358),0,0,iVar7,iVar7);
    *(int *)(STField<int>(param_1,0x358) + 0x370) = iVar7;
    STField<int>(param_1,0x370) = iVar7;
    *(undefined4 *)(STField<int>(param_1,0x358) + 0x134) = 1;
  }
  return;
}

