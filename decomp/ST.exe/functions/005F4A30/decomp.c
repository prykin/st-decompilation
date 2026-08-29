#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005F4A80 MOV EBX,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 FUN_005f4a30(int param_1,byte param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_58;
  AnonShape_005F4A30_D28DC55A *local_14;
  char **local_10;
  int local_c;
  uint local_8;
  local_c = param_1;
  local_8 = 0;
  local_10 = &PTR_s_pics_g_007ce5f8;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  iVar3 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    return local_8;
  }
  if (local_c != 0) {
    uVar2 = (uint)param_2;
    local_14 = (AnonShape_005F4A30_D28DC55A *)
               Library::Ourlib::MFRLOAD::mfRLoad
                         (PTR_00806764,CASE_1D,local_10[uVar2],0xffffffff,0,1,0,nullptr);
    puVar1 = (uint *)(iVar3 + 0x1f);
    ST3DSMAPContext::sub_006E8660
              (g_sT3DSMAPContext_00807598,(int *)puVar1,1,0,local_14->field_0009,
               local_14->field_000D,*(int *)(&DAT_007ce5b0 + uVar2 * 8) / 2,
               *(int *)(&DAT_007ce5b4 + uVar2 * 8) / 2 - 0xe,0);
    ST3DSMAPContext::sub_006E98E0
              (g_sT3DSMAPContext_00807598,*puVar1,0,*(int *)local_14,local_14->field_0021,1);
    ST3DSMAPContext::sub_006EA270(g_sT3DSMAPContext_00807598,*puVar1,0,STField<uint>(iVar3,0xE));
    Library::Ourlib::ST3DSMAP::SprMove
              (g_sT3DSMAPContext_00807598,*puVar1,
               (float)STField<int>(iVar3,0x2) * _DAT_007904f8 * _DAT_007904f0,
               (float)STField<int>(iVar3,0x6) * _DAT_007904f8 * _DAT_007904f0,
               (float)STField<int>(iVar3,0xA) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    Library::Ourlib::ST3DSMAP::SprShow(g_sT3DSMAPContext_00807598,*puVar1,0);
    ((undefined1 *)iVar3)[0x1e] = 1;
    if (param_3 != 0) {
      Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,*puVar1);
      ((undefined1 *)iVar3)[0x1e] = 0;
    }
    g_currentExceptionFrame = local_58.previous;
    return 1;
  }
  g_currentExceptionFrame = local_58.previous;
  return local_8;
}

