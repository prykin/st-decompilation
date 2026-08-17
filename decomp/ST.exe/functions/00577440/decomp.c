#include "../../pseudocode_runtime.h"


void __fastcall FUN_00577440(int param_1)

{
  bool bVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  int *piVar6;
  short sVar7;
  uint uVar8;
  uint *puVar9;
  uint local_8;

  uVar2 = FUN_006e4d40(&DAT_00807620,param_1);
  if ((uVar2 == 1) && (DAT_00808784 == 0)) {
    if (((char *)param_1)[0x430] == '\x01') {
      puVar9 = (uint *)(param_1 + 0x20);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      DVar4 = STAppC::sub_006E51B0(*(STAppC **)(param_1 + 0x18));
      iVar5 = Library::Ourlib::PALETTE::FUN_00718f40
                        (g_dDXContext_0080759C,(undefined4 *)(param_1 + 0x28),0,0x100,10,
                         (int *)(param_1 + 0x24),2,DVar4,puVar9);
      if (iVar5 == -4) {
        FUN_006b0a20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,param_1 + 0x28,0,
                     0x100,0);
        ((undefined1 *)param_1)[0x430] = 2;
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    else if ((((char *)param_1)[0x430] == '\x02') && (*(int *)(param_1 + 0x431) != 0)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      DVar3 = STAppC::sub_006E51B0(*(STAppC **)(param_1 + 0x18));
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      piVar6 = *(int **)(param_1 + 0x431);
      bVar1 = false;
      uVar3 = 0xffffffff;
      local_8 = 0x101;
      if (piVar6 != nullptr) {
        do {
          if (STField<uint>(piVar6,7) <= DVar3 - STField<int>(piVar6,0xb)) {
            sVar7 = 0;
            STField<DWORD>(piVar6,0xb) = DVar3;
            if (STField<char>(piVar6,6) == '\0') {
              STField<short>(piVar6,0xf) = STField<short>(piVar6,0xf) + 1;
            }
            else {
              STField<short>(piVar6,0xf) = STField<short>(piVar6,0xf) + -1;
            }
            if (STField<short>(piVar6,0xf) < 0) {
              if (STField<char>(piVar6,5) == '\0') {
                STField<undefined1>(piVar6,6) = 0;
                STField<undefined2>(piVar6,0xf) = 0;
              }
              else {
                STField<short>(piVar6,0xf) = STField<short>(piVar6,0x11) + -1;
              }
            }
            if (STField<short>(piVar6,0x11) <= STField<short>(piVar6,0xf)) {
              if (STField<char>(piVar6,5) == '\0') {
                STField<undefined1>(piVar6,6) = 1;
                sVar7 = STField<short>(piVar6,0x11) + -1;
              }
              STField<short>(piVar6,0xf) = sVar7;
            }
            uVar8 = (uint)((byte *)piVar6)[1];
            if (uVar8 < local_8) {
              local_8 = uVar8;
            }
            if ((int)uVar3 < (int)uVar8) {
              uVar3 = uVar8;
            }
            *(undefined1 *)(param_1 + 0x28 + uVar8 * 4) =
                 *(undefined1 *)(STField<short>(piVar6,0xf) * 3 + 0x13 + (int)piVar6);
            *(undefined1 *)(param_1 + 0x29 + (uint)((byte *)piVar6)[1] * 4) =
                 *(undefined1 *)(STField<short>(piVar6,0xf) * 3 + 0x14 + (int)piVar6);
            *(undefined1 *)(param_1 + 0x2a + (uint)((byte *)piVar6)[1] * 4) =
                 *(undefined1 *)((int)piVar6 + (STField<short>(piVar6,0xf) + 7) * 3);
            bVar1 = true;
          }
          piVar6 = (int *)*piVar6;
        } while (piVar6 != nullptr);
        if (bVar1) {
          FUN_006b0a20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,
                       param_1 + 0x28 + local_8 * 4,local_8,(uVar3 - local_8) + 1,0);
          SystemClassTy::Life((SystemClassTy *)param_1);
          return;
        }
      }
    }
  }
  SystemClassTy::Life((SystemClassTy *)param_1);
  return;
}

