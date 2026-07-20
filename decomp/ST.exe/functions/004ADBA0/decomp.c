
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tspr3d.cpp
   STT3DSprC::RestoreSpr */

void __thiscall STT3DSprC::RestoreSpr(STT3DSprC *this,int *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  code *pcVar3;
  uint uVar4;
  STT3DSprC *this_00;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  uint *puVar7;
  void *unaff_EDI;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  InternalExceptionFrame local_68;
  STT3DSprC *local_24;
  int local_20;
  uint *local_1c;
  int local_18;
  uint *local_14;
  uint *local_10;
  char local_c;
  undefined3 uStack_b;
  int local_8;
  
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_24 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_24;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_68.previous;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_Tspr3d_cpp_007ac638,0x43d,0,iVar5,&DAT_007a4ccc,
                               s_STT3DSprC__RestoreSpr_007ac73c);
    if (iVar5 == 0) {
      return;
    }
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_24->field_0004 = *param_2;
  local_24->field_0008 = param_2[1];
  local_24->field_0010 = *(undefined1 *)(param_2 + 2);
  local_24->field_0011 = *(undefined1 *)((int)param_2 + 9);
  local_24->field_0012 = *(undefined1 *)((int)param_2 + 10);
  local_24->field_000C = *(undefined4 *)((int)param_2 + 0xb);
  local_24->field_0014 = *(undefined4 *)((int)param_2 + 0xf);
  local_24->field_0024 = *(undefined4 *)((int)param_2 + 0x13);
  local_24->field_0028 = *(undefined4 *)((int)param_2 + 0x17);
  local_24->field_002C = *(undefined4 *)((int)param_2 + 0x1b);
  local_24->field_0013 = *(undefined1 *)((int)param_2 + 0x1f);
  local_24->field_0030 = param_2[8];
  local_24->field_0038 = param_1[6];
  thunk_FUN_004ad3c0(local_24,(float)local_24->field_0024,(float)local_24->field_0028,
                     (float)local_24->field_002C);
  FUN_006e9830((void *)this_00->field_003C,this_00->field_0018,this_00->field_0004,
               this_00->field_0008);
  if (param_1[1] != 0) {
    thunk_FUN_004ace30(this_00,param_1[1],param_1[2]);
  }
  if (param_1[3] != 0) {
    thunk_FUN_004acef0(this_00,param_1[3]);
  }
  if (param_1[4] != 0) {
    thunk_FUN_004acf20(this_00,param_1[4],param_1[5]);
  }
  local_10 = param_2 + 9;
  iVar5 = this_00->field_0014;
  local_1c = local_10 + iVar5 * 9;
  iVar10 = iVar5;
  local_14 = local_1c;
  if (0 < iVar5) {
    do {
      local_18 = iVar10;
      uVar6 = 0xffffffff;
      puVar9 = local_14;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        uVar4 = *puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
      } while ((char)uVar4 != '\0');
      local_14 = (uint *)((int)local_14 + ~uVar6);
      local_18 = local_18 + -1;
      iVar10 = local_18;
    } while (local_18 != 0);
  }
  local_8 = 0;
  if (0 < iVar5) {
    local_18 = 0;
    do {
      iVar5 = -1;
      local_20 = 0;
      puVar9 = local_1c;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        uVar6 = *puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
      } while ((char)uVar6 != '\0');
      if (iVar5 != -2) {
        *(char *)(local_18 + 0xc + this_00->field_0020) = (char)local_10[1];
        LoadSequence(this_00,(byte)local_8,*(int **)(*param_1 + local_8 * 4),(char *)local_1c,
                     *(byte *)(local_18 + 0xc + this_00->field_0020));
        puVar9 = local_10;
        local_20 = *local_10 << 2;
        puVar7 = local_14;
        puVar8 = *(uint **)(local_18 + 4 + this_00->field_0020);
        for (uVar6 = *local_10 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(char *)puVar8 = (char)*puVar7;
          puVar7 = (uint *)((int)puVar7 + 1);
          puVar8 = (uint *)((int)puVar8 + 1);
        }
        *(undefined4 *)(local_18 + 0x10 + this_00->field_0020) =
             *(undefined4 *)((int)local_10 + 0xb);
        *(undefined4 *)(local_18 + 0x14 + this_00->field_0020) =
             *(undefined4 *)((int)local_10 + 0xf);
        *(undefined4 *)(local_18 + 0x18 + this_00->field_0020) =
             *(undefined4 *)((int)local_10 + 0x13);
        *(undefined4 *)(local_18 + 0x20 + this_00->field_0020) =
             *(undefined4 *)((int)local_10 + 0x1b);
        StartShow(this_00,(byte)local_8,*(undefined4 *)((int)local_10 + 0x17));
        if (*(char *)((int)puVar9 + 5) == '\0') {
          StopShow(this_00,(byte)local_8);
        }
      }
      iVar5 = local_18;
      if (*(char *)((int)local_10 + 6) == '\0') {
        puVar2 = (ushort *)(local_18 + 0xe + this_00->field_0020);
        *puVar2 = *puVar2 & 0xfffe;
      }
      else {
        pbVar1 = (byte *)(local_18 + 0xe + this_00->field_0020);
        *pbVar1 = *pbVar1 | 1;
      }
      *(undefined1 *)(local_18 + 0xd + this_00->field_0020) = *(undefined1 *)((int)local_10 + 7);
      if ((char)local_10[2] == '\0') {
        puVar2 = (ushort *)(local_18 + 0xe + this_00->field_0020);
        *puVar2 = *puVar2 & 0xfffd;
      }
      else {
        pbVar1 = (byte *)(local_18 + 0xe + this_00->field_0020);
        *pbVar1 = *pbVar1 | 2;
      }
      if (*(char *)((int)local_10 + 9) == '\0') {
        puVar2 = (ushort *)(local_18 + 0xe + this_00->field_0020);
        *puVar2 = *puVar2 & 0xfdff;
      }
      else {
        pbVar1 = (byte *)(local_18 + 0xf + this_00->field_0020);
        *pbVar1 = *pbVar1 | 2;
      }
      if (*(char *)((int)local_10 + 10) == '\0') {
        puVar2 = (ushort *)(local_18 + 0xe + this_00->field_0020);
        *puVar2 = *puVar2 & 0xfffb;
      }
      else {
        pbVar1 = (byte *)(local_18 + 0xe + this_00->field_0020);
        *pbVar1 = *pbVar1 | 4;
      }
      _local_c = CONCAT31(uStack_b,(char)local_8);
      if (*(char *)((int)local_10 + 0x1f) == '\0') {
        thunk_FUN_004ace60(this_00,(char)local_8);
      }
      else {
        thunk_FUN_004aceb0(this_00,(char)local_8);
      }
      puVar9 = local_10;
      if ((char)local_10[8] == '\x01') {
        thunk_FUN_004acf50(this_00,(char)_local_c);
      }
      else {
        thunk_FUN_004acf90(this_00,(char)_local_c);
      }
      if (*(char *)((int)puVar9 + 0x21) == '\x01') {
        thunk_FUN_004acfe0(this_00,(char)_local_c);
      }
      else {
        thunk_FUN_004ad020(this_00,(char)_local_c);
      }
      if (*(char *)((int)puVar9 + 0x22) == '\x01') {
        thunk_FUN_004ad070(this_00,(byte)_local_c);
      }
      if (*(char *)((int)puVar9 + 0x23) == '\0') {
        puVar2 = (ushort *)(iVar5 + 0xe + this_00->field_0020);
        *puVar2 = *puVar2 & 0xfeff;
      }
      else {
        pbVar1 = (byte *)(iVar5 + 0xf + this_00->field_0020);
        *pbVar1 = *pbVar1 | 1;
      }
      local_10 = puVar9 + 9;
      uVar6 = 0xffffffff;
      puVar9 = local_1c;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        uVar4 = *puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
      } while ((char)uVar4 != '\0');
      local_18 = iVar5 + 0x24;
      local_1c = (uint *)((int)local_1c + ~uVar6);
      local_14 = (uint *)((int)local_14 + local_20);
      local_8 = local_8 + 1;
    } while (local_8 < (int)this_00->field_0014);
  }
  if ((-1 < (int)this_00->field_000C) && (iVar5 = 0, 0 < (int)this_00->field_0014)) {
    iVar10 = 0;
    do {
      if ((*(byte *)(this_00->field_0020 + 0xf + iVar10) & 1) != 0) {
        FUN_006e93c0((void *)this_00->field_003C,this_00->field_0018,iVar5,this_00->field_000C);
      }
      iVar5 = iVar5 + 1;
      iVar10 = iVar10 + 0x24;
    } while (iVar5 < (int)this_00->field_0014);
  }
  g_currentExceptionFrame = local_68.previous;
  return;
}

