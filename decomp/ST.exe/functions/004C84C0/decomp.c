#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_bproc.cpp
   Diagnostic line evidence: 415 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_36=54;CASE_39=57;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_70=112;CASE_72=114
    */

undefined4 __fastcall FUN_004c84c0(TLOBaseTy *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  dword dVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  AnonPointee_TLOBaseTy_0607 *pAVar12;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  if (*(int *)&param_1->field_0x361 == 0) {
    if (param_1->field_03D4 == 0) {
      return 0;
    }
    pAVar12 = param_1->field_0607;
    if (pAVar12 == (AnonPointee_TLOBaseTy_0607 *)0x0) {
      return 0;
    }
    iVar5 = thunk_FUN_004c7860(param_1,pAVar12->field_0000,pAVar12->field_0004,pAVar12->field_0008,1
                               ,0);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = thunk_FUN_004c7c20((int)param_1);
    if (iVar5 == 0) {
      return 0;
    }
    pAVar12 = param_1->field_0607;
    thunk_FUN_004c7cc0(param_1,pAVar12->field_0000,pAVar12->field_0004,pAVar12->field_0008,0,
                       pAVar12->field_000C,pAVar12->field_0010,pAVar12->field_0014,
                       (char *)(pAVar12 + 1));
    if (1 < param_1->field_03D4) {
      uVar9 = param_1->field_03D4 * 0x27 - 0x27;
      puVar11 = (undefined4 *)((int)&param_1->field_0607[1].field_000C + 3);
      pAVar12 = param_1->field_0607;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        pAVar12->field_0000 = *puVar11;
        puVar11 = puVar11 + 1;
        pAVar12 = (AnonPointee_TLOBaseTy_0607 *)&pAVar12->field_0004;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)&pAVar12->field_0000 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        pAVar12 = (AnonPointee_TLOBaseTy_0607 *)((int)&pAVar12->field_0000 + 1);
      }
    }
    param_1->field_03D4 = param_1->field_03D4 + -1;
    return 0;
  }
  if (((*(int *)&param_1->field_0x361 == 5) &&
      (iVar5 = (*param_1->vtable->vfunc_7C)(), iVar5 == 100)) || (99 < param_1->field_0394)) {
    iVar5 = TLOBaseTy::procResult(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    iVar5 = *(int *)&param_1->field_0x36d + -1;
    *(int *)&param_1->field_0x36d = iVar5;
    if (iVar5 < 1) {
      *(undefined4 *)&param_1->field_0x365 = *(undefined4 *)&param_1->field_0x361;
      iVar5 = thunk_FUN_004c90c0(param_1);
      if ((iVar5 == 0) &&
         (iVar5 = ReportDebugMessage("E:\\__titans\\Artem\\TLO_bproc.cpp",0x19f,0,0,
                                     "%s","What's that ?"), iVar5 != 0)) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      *(undefined4 *)&param_1->field_0x36d = 0;
      thunk_FUN_004c7460((AnonShape_004C7460_AC9F4C4C *)param_1);
      return 0;
    }
    param_1->field_038C = g_playSystem_00802A38->field_00E4;
    param_1->field_0394 = 0;
    thunk_FUN_004c7260(param_1,*(Global_sub_004C7260_param_1Enum *)&param_1->field_0x361,
                       *(int *)&param_1->field_0x369,&param_1->field_0398,&param_1->field_039C,
                       &param_1->field_03A0,&param_1->field_03A4);
    param_1->field_03A8 = 0;
    param_1->field_03AC = 0;
    param_1->field_03B0 = 0;
    param_1->field_03B4 = 0;
    switch(param_1->field_05AC) {
    case CASE_32:
    case CASE_40:
    case CASE_49:
    case CASE_5C:
      thunk_FUN_004ce7a0(param_1);
      thunk_FUN_004ce860((AnonShape_004CE860_DECB0AA9 *)param_1);
    }
    thunk_FUN_004c7460((AnonShape_004C7460_AC9F4C4C *)param_1);
    return 0;
  }
  if (*(int *)&param_1->field_0x361 == 5) {
    uVar10 = (uint)param_1->field_0390 / 100;
    if (uVar10 == 0) {
      uVar10 = 1;
    }
    if (g_playSystem_00802A38->field_00E4 < param_1->field_038C + uVar10) {
      return 0;
    }
    param_1->field_038C = g_playSystem_00802A38->field_00E4;
    param_1->field_03C0 = 0;
    param_1->field_03C8 = 0;
    param_1->field_03C4 = 0;
    param_1->field_03BC = 0;
    param_1->field_03B8 = 0;
    iVar5 = *(int *)(&DAT_007e29f0 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) / 100;
    if (*(int *)(&DAT_007e29f0 + (param_1->field_0235 * 3 + param_1->field_0239) * 4) != 0) {
      if (iVar5 == 0) {
        iVar5 = 1;
      }
      iVar7 = thunk_FUN_004d7b90(*(char *)&param_1->field_0024,DAT_00794d84);
      if (iVar7 < iVar5) {
        param_1->field_03BC = 1;
        goto LAB_004c8806;
      }
      thunk_FUN_004d7e50(*(char *)&param_1->field_0024,
                         *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4),
                         param_1->field_0018,iVar5);
    }
    if (param_1->field_0024 == (uint)(byte)param_1->field_0010->field_112D) {
      thunk_FUN_004d8b70((char)param_1->field_0024);
    }
    uVar10 = GetPlayerRaceId(*(char *)&param_1->field_023D);
    param_1->field_0241 =
         param_1->field_0241 +
         *(int *)(&DAT_007e4178 + ((uVar10 & 0xff) + param_1->field_0235 * 3) * 4) / 100;
    uVar10 = GetPlayerRaceId(*(char *)&param_1->field_023D);
    param_1->field_05D7 =
         (param_1->field_0241 * 100) /
         *(int *)(&DAT_007e4178 + ((uVar10 & 0xff) + param_1->field_0235 * 3) * 4);
    uVar10 = GetPlayerRaceId(*(char *)&param_1->field_023D);
    if (*(int *)(&DAT_007e4178 + ((uVar10 & 0xff) + param_1->field_0235 * 3) * 4) <=
        param_1->field_0241) {
      uVar10 = GetPlayerRaceId(*(char *)&param_1->field_023D);
      param_1->field_0241 =
           *(int *)(&DAT_007e4178 + ((uVar10 & 0xff) + param_1->field_0235 * 3) * 4);
    }
LAB_004c8806:
    thunk_FUN_004c7260(param_1,*(Global_sub_004C7260_param_1Enum *)&param_1->field_0x361,
                       *(int *)&param_1->field_0x369,&param_1->field_0398,&param_1->field_039C,
                       &param_1->field_03A0,&param_1->field_03A4);
    thunk_FUN_004c7460((AnonShape_004C7460_AC9F4C4C *)param_1);
    return 0;
  }
  uVar10 = (uint)param_1->field_0390 / 100;
  if (uVar10 == 0) {
    uVar10 = 1;
  }
  dVar8 = (*param_1->vtable->slot_2C)(param_1);
  iVar5 = thunk_FUN_004b72e0(*(char *)&param_1->field_0024,dVar8);
  if ((iVar5 == 0) ||
     (iVar5 = thunk_FUN_004b79c0(*(char *)&param_1->field_0024,param_1->field_0018), iVar5 != 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
  }
  param_1->field_03B8 = iVar5;
  if ((iVar5 != 0) && (uVar10 = uVar10 << 2, DAT_00811798 != (void *)0x0)) {
    thunk_FUN_00621580(DAT_00811798,param_1->field_0024,5);
  }
  if (g_playSystem_00802A38->field_00E4 < param_1->field_038C + uVar10) {
    return 0;
  }
  param_1->field_038C = g_playSystem_00802A38->field_00E4;
  bVar4 = true;
  param_1->field_03C0 = 0;
  param_1->field_03C8 = 0;
  param_1->field_03C4 = 0;
  param_1->field_03BC = 0;
  local_c = 0;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  iVar5 = 0;
  if (*(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4) == -1) {
LAB_004c8bf2:
    param_1->field_0394 = param_1->field_0394 + 1;
    if (*(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4) != -1) {
      param_1->field_03A8 = param_1->field_03A8 + iVar5;
      param_1->field_03B0 = param_1->field_03B0 + local_8;
      param_1->field_03AC = param_1->field_03AC + local_10;
      param_1->field_03B4 = param_1->field_03B4 + local_c;
      iVar7 = GetPlayerRaceId(*(char *)&param_1->field_0024);
      if ((char)iVar7 == '\x03') {
        if (iVar5 != 0) {
          thunk_FUN_004e4330(param_1->field_0024,iVar5);
        }
      }
      else if (iVar5 != 0) {
        thunk_FUN_004d7c10(*(char *)&param_1->field_0024,
                           *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4),
                           param_1->field_0018,iVar5);
      }
      if (local_10 != 0) {
        thunk_FUN_004d7d30(*(char *)&param_1->field_0024,
                           *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4),
                           param_1->field_0018,local_10);
      }
      if (local_8 != 0) {
        thunk_FUN_004d7e50(*(char *)&param_1->field_0024,
                           *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4),
                           param_1->field_0018,local_8);
      }
      if (local_c != 0) {
        thunk_FUN_004d7f70(*(char *)&param_1->field_0024,
                           *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4),
                           param_1->field_0018,local_c);
      }
    }
    if (100 < param_1->field_0394) {
      param_1->field_0394 = 100;
    }
    if (param_1->field_0024 == (uint)(byte)param_1->field_0010->field_112D) {
      thunk_FUN_004d8b70((char)param_1->field_0024);
      return 0;
    }
  }
  else {
    iVar5 = param_1->field_0398;
    if (99 < iVar5) {
      local_14 = iVar5 / 100;
    }
    iVar7 = param_1->field_039C;
    if (99 < iVar7) {
      local_10 = iVar7 / 100;
    }
    iVar1 = param_1->field_03A0;
    if (99 < iVar1) {
      local_8 = iVar1 / 100;
    }
    iVar2 = param_1->field_03A4;
    if (99 < iVar2) {
      local_c = iVar2 / 100;
    }
    if (iVar5 % 100 != 0) {
      local_14 = local_14 + 1;
    }
    if (iVar7 % 100 != 0) {
      local_10 = local_10 + 1;
    }
    if (iVar1 % 100 != 0) {
      local_8 = local_8 + 1;
    }
    if (iVar2 % 100 != 0) {
      local_c = local_c + 1;
    }
    if (iVar5 < param_1->field_03A8 + local_14) {
      local_14 = iVar5 - param_1->field_03A8;
    }
    if (iVar7 < param_1->field_03AC + local_10) {
      local_10 = iVar7 - param_1->field_03AC;
    }
    if (iVar1 < local_8 + param_1->field_03B0) {
      local_8 = iVar1 - param_1->field_03B0;
    }
    if (iVar2 < local_c + param_1->field_03B4) {
      local_c = iVar2 - param_1->field_03B4;
    }
    iVar5 = GetPlayerRaceId(*(char *)&param_1->field_0024);
    if ((char)iVar5 == '\x03') {
      if ((local_14 != 0) && (iVar5 = thunk_FUN_004e41c0(param_1->field_0024), iVar5 < local_14)) {
        bVar4 = false;
        param_1->field_03C8 = 1;
      }
    }
    else if ((local_14 != 0) &&
            (iVar5 = thunk_FUN_004d7b10(*(char *)&param_1->field_0024,
                                        *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4))
            , iVar5 < local_14)) {
      bVar4 = false;
      param_1->field_03C8 = 1;
    }
    if ((local_10 != 0) &&
       (iVar5 = thunk_FUN_004d7b50(*(char *)&param_1->field_0024,
                                   *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4)),
       iVar5 < local_10)) {
      bVar4 = false;
      param_1->field_03C4 = 1;
    }
    if ((local_8 != 0) &&
       (iVar5 = thunk_FUN_004d7b90(*(char *)&param_1->field_0024,
                                   *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4)),
       iVar5 < local_8)) {
      bVar4 = false;
      param_1->field_03BC = 1;
    }
    if ((local_c == 0) ||
       (iVar5 = thunk_FUN_004d7bd0(*(char *)&param_1->field_0024,
                                   *(int *)(&DAT_00794d70 + *(int *)&param_1->field_0x361 * 4)),
       local_c <= iVar5)) {
      iVar5 = local_14;
      if (bVar4) goto LAB_004c8bf2;
    }
    else {
      param_1->field_03C0 = 1;
    }
    if (DAT_00811798 != (void *)0x0) {
      if (param_1->field_03BC != 0) {
        thunk_FUN_00621580(DAT_00811798,param_1->field_0024,4);
      }
      if (param_1->field_03C4 != 0) {
        thunk_FUN_00621580(DAT_00811798,param_1->field_0024,2);
      }
      if (param_1->field_03C8 != 0) {
        iVar5 = GetPlayerRaceId(*(char *)&param_1->field_0024);
        thunk_FUN_00621580(DAT_00811798,param_1->field_0024,
                           (-(uint)((char)iVar5 != '\x03') & 0xfffffffd) + 6);
      }
      if (param_1->field_03C0 != 0) {
        thunk_FUN_00621580(DAT_00811798,param_1->field_0024,7);
        return 0;
      }
    }
  }
  return 0;
}

