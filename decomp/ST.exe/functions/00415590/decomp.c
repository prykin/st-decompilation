#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Grpway3d.cpp
   STGroupBoatC::Way3DGrpGetDistrPoint */

uint * STGroupBoatC::Way3DGrpGetDistrPoint
                 (void *param_1,AnonShape_00413AF0_B6B4EE9A *param_2,int param_3,int param_4,
                 undefined4 param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  ushort uVar2;
  DArrayTy *array;
  uint *puVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_58;
  short local_14;
  short local_12;
  short local_10;
  int local_c;
  DArrayTy *local_8;

  uVar2 = (ushort)param_2->field_000C;
  iVar4 = 0;
  local_c = 0;
  *(ushort *)((int)param_1 + 0x27) = uVar2;
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
  array = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,(uint)uVar2,6,1);
  local_8 = array;
  uVar2 = thunk_FUN_004233c0((int)param_1);
  DAT_007f4d4c = (uint)uVar2;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((DAT_007f4d4c < 2) && (*(short *)((int)param_1 + 0x27) == 1)) {
    local_14 = (short)param_6;
    local_12 = (short)param_7;
    local_10 = (short)param_8;
    Library::DKW::TBL::FUN_006ae1c0((uint *)array,(undefined4 *)&local_14);
    goto LAB_004157f0;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  if (iVar4 == 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)((int)param_1 + 0x4d) != 0) {
      iVar4 = FUN_006db910(param_3,param_4,param_6,param_7);
      iVar4 = ((iVar4 * 4 + 0x2d) / 0x5a) * 0x5a;
      iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
      *(int *)((int)param_1 + 0x55) = iVar4;
      if (iVar4 == 0x168) {
        *(undefined4 *)((int)param_1 + 0x55) = 0;
      }
      *(uint *)((int)param_1 + 0x49) = *(uint *)((int)param_1 + 0x49) | 1;
    }
    iVar4 = thunk_FUN_00413af0(param_1,param_2,param_6,param_7,param_8);
    if (iVar4 == 0) {
      iVar4 = 0;
      if (0 < DAT_007f4d40) {
        iVar5 = 0;
        do {
          local_14 = *(short *)(iVar5 + 0xc + (int)DAT_007f4d04);
          local_12 = *(short *)(iVar5 + 0x10 + (int)DAT_007f4d04);
          local_10 = *(short *)(iVar5 + 0x14 + (int)DAT_007f4d04);
          Library::DKW::TBL::FUN_006ae140
                    (&local_8->flags,*(uint *)(iVar5 + 0x18 + (int)DAT_007f4d04),
                     (undefined4 *)&local_14);
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x1c;
        } while (iVar4 < DAT_007f4d40);
      }
      iVar4 = 0;
      if (0 < DAT_007f4cf8) {
        do {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar5 = (uint)*(ushort *)((int)param_1 + 0x27) - iVar4;
          local_14 = DAT_007f4d04[iVar5 * 0xe + -8];
          local_12 = DAT_007f4d04[iVar5 * 0xe + -6];
          local_10 = DAT_007f4d04[iVar5 * 0xe + -4];
          Library::DKW::TBL::FUN_006ae140
                    (&local_8->flags,*(uint *)(DAT_007f4d04 + iVar5 * 0xe + -2),
                     (undefined4 *)&local_14);
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_007f4cf8);
        g_currentExceptionFrame = local_58.previous;
        iVar4 = local_c;
        goto LAB_004157e1;
      }
    }
    else {
      iVar4 = 0;
      local_10 = (short)param_8;
      local_14 = (short)param_6;
      local_12 = (short)param_7;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(short *)((int)param_1 + 0x27) != 0) {
        do {
          Library::DKW::TBL::FUN_006ae1c0(&local_8->flags,(undefined4 *)&local_14);
          iVar4 = iVar4 + 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while (iVar4 < (int)(uint)*(ushort *)((int)param_1 + 0x27));
      }
    }
    g_currentExceptionFrame = local_58.previous;
    iVar4 = local_c;
  }
  else {
    g_currentExceptionFrame = local_58.previous;
    local_c = iVar4;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0xeae,0,iVar4,&DAT_007a4ccc,
                               s_STGroupBoatC__Way3DGrpGetDistrPo_007a4cf8);
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
LAB_004157e1:
  FUN_006a5e90(DAT_007f4d04);
  array = local_8;
LAB_004157f0:
  if (iVar4 != 0) {
    DArrayDestroy(array);
    local_8 = (DArrayTy *)0x0;
    RaiseInternalException
              (iVar4,g_overwriteContext_007ED77C,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0xeb8);
    return (uint *)0x0;
  }
  return &array->flags;
}

