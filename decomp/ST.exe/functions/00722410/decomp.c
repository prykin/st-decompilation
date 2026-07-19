
/* Recovered from embedded debug metadata:
   E:\Ourlib\_sedit.cpp
   EditorClassTy::GetMessage */

int __thiscall EditorClassTy::GetMessage(EditorClassTy *this,int *param_1)

{
  char cVar1;
  ControlClassTy CVar2;
  ushort uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  ControlClassTy *this_00;
  int iVar7;
  BOOL BVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  undefined4 *puVar13;
  void *unaff_EDI;
  ControlClassTy *pCVar14;
  char *pcVar15;
  InternalExceptionFrame local_74;
  undefined4 local_30 [2];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  ControlClassTy *local_10;
  undefined4 *local_c;
  int local_8;
  
  local_8 = 0;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_10 = (ControlClassTy *)this;
  iVar7 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar7 = ReportDebugMessage(s_E__Ourlib__sedit_cpp_007f0b08,0x356,0,iVar7,&DAT_007a4ccc,
                               s_EditorClassTy__GetMessage_Error___007f0b68);
    if (iVar7 == 0) {
      RaiseInternalException(0xffff,0,s_E__Ourlib__sedit_cpp_007f0b08,0x357);
      return 0xffff;
    }
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  switch(param_1[4]) {
  case 2:
    local_c = (undefined4 *)param_1[5];
    if (local_c == (undefined4 *)0x0) {
LAB_00722da6:
      local_8 = 0xffff;
    }
    else {
      *(undefined4 *)(local_10 + 0x1c) = *local_c;
      *(undefined4 *)(local_10 + 0x20) = local_c[1];
      *(undefined4 *)(local_10 + 0x214) = local_c[2];
      *(undefined4 *)(local_10 + 0x24) = local_c[3];
      *(undefined4 *)(local_10 + 0x28) = local_c[4];
      *(undefined4 *)(local_10 + 0x2c) = local_c[5];
      *(undefined4 *)(local_10 + 0x30) = local_c[6];
      *(undefined4 *)(local_10 + 0x134) = local_c[7];
      *(undefined4 *)(local_10 + 0x138) = local_c[8];
      *(undefined4 *)(local_10 + 0x1d0) = local_c[0x222];
      uVar11 = local_c[0x219];
      *(uint *)(local_10 + 0x1cc) = uVar11;
      if (uVar11 < 0xff) {
        *(undefined4 *)(local_10 + 0x1cc) = 0xff;
      }
      puVar13 = local_c + 0x11;
      pCVar14 = local_10 + 0x14c;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pCVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        pCVar14 = pCVar14 + 4;
      }
      *(ControlClassTy **)(local_10 + 0x188) = local_10;
      puVar13 = local_c + 9;
      pCVar14 = local_10 + 0x16c;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pCVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        pCVar14 = pCVar14 + 4;
      }
      *(ControlClassTy **)(local_10 + 0x168) = local_10;
      puVar13 = local_c + 0x19;
      pCVar14 = local_10 + 0x3c;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pCVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        pCVar14 = pCVar14 + 4;
      }
      *(ControlClassTy **)(local_10 + 0x58) = local_10;
      puVar13 = local_c + 0x21;
      pCVar14 = local_10 + 0x18c;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pCVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        pCVar14 = pCVar14 + 4;
      }
      *(ControlClassTy **)(local_10 + 0x1a8) = local_10;
      puVar13 = local_c + 0x21a;
      pCVar14 = local_10 + 0x1ac;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined4 *)pCVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        pCVar14 = pCVar14 + 4;
      }
      *(ControlClassTy **)(local_10 + 0x1c8) = local_10;
      *(undefined4 *)(local_10 + 0x210) = 0;
      *(undefined4 *)(local_10 + 0x20c) = 0;
      *(undefined4 *)(local_10 + 0x208) = 0;
      *(undefined4 *)(local_10 + 0x204) = 0;
      *(undefined4 *)(local_10 + 0x148) = 0;
      *(undefined4 *)(local_10 + 0x144) = 0;
      *(undefined4 *)(local_10 + 0x140) = 0;
      *(undefined4 *)(local_10 + 0x13c) = 0;
      local_10[0x1d7] = (ControlClassTy)0x0;
      *(undefined4 *)(local_10 + 0x1d8) = 0;
      *(uint *)(local_10 + 0x34) = (uint)(local_c[0x217] == 0);
      *(uint *)(local_10 + 0x38) = (uint)(local_c[0x218] == 0);
      if (local_c[0x29] != 0) {
        uVar4 = *(undefined4 *)(local_10 + 8);
        local_c[0x115] = 2;
        local_c[0x114] = uVar4;
        local_c[0x116] = 0x2c;
        local_c[0x11a] = 1;
        local_c[0x11b] = *(undefined4 *)(local_10 + 0x20c);
        (**(code **)(**(int **)(local_10 + 0xc) + 8))
                  (local_c[0x29],local_10 + 0x1fc,0,local_c + 0x2a,0);
      }
      puVar13 = local_c;
      if (local_c[0x120] != 0) {
        local_c[0x20b] = *(undefined4 *)(this_00 + 8);
        local_c[0x20c] = 2;
        local_c[0x20d] = 0x2d;
        iVar7 = FUN_007219a0((int)this_00);
        puVar13[0x211] = iVar7;
        puVar13[0x212] = *(undefined4 *)(this_00 + 0x210);
        (**(code **)(**(int **)(this_00 + 0xc) + 8))
                  (puVar13[0x120],this_00 + 0x200,0,puVar13 + 0x121,0);
      }
LAB_00722674:
      iVar7 = 1;
LAB_00722e81:
      FUN_00721a20(this_00,iVar7);
    }
    break;
  case 3:
    if (*(uint *)(local_10 + 0x1fc) != 0) {
      FUN_006e56b0(*(void **)(local_10 + 0xc),*(uint *)(local_10 + 0x1fc));
      *(undefined4 *)(this_00 + 0x1fc) = 0;
    }
    if (*(uint *)(this_00 + 0x200) != 0) {
      FUN_006e56b0(*(void **)(this_00 + 0xc),*(uint *)(this_00 + 0x200));
      *(undefined4 *)(this_00 + 0x200) = 0;
    }
    break;
  case 8:
    if ((*(uint *)(local_10 + 0x1c) & 0x70000000) != 0) {
      iVar7 = FUN_006e4290(0x102,0x34,2,*(undefined4 *)(local_10 + 8));
      if (iVar7 != 0) goto LAB_00722da6;
      if ((*(uint *)(this_00 + 0x1c) & 0xffffff) == 1) {
        FUN_00722070(this_00,0);
      }
      local_1c = *(undefined4 *)(this_00 + 8);
      local_20 = 0x13;
      local_18 = 0;
      iVar7 = FUN_006e6000(this_00,3,1,local_30);
      goto LAB_00722d9e;
    }
    break;
  case 9:
    if ((*(uint *)(local_10 + 0x1c) & 0x70000000) == 0) {
      FUN_006e4340(*(void **)(local_10 + 0x10),0x102,0x34,2,*(undefined4 *)(local_10 + 8));
      if ((*(uint *)(this_00 + 0x1c) & 0xffffff) == 1) {
        FUN_00721cd0(this_00,0);
      }
      local_1c = *(undefined4 *)(this_00 + 8);
      local_20 = 0x14;
      FUN_006e6000(this_00,3,1,local_30);
    }
    break;
  case 0x20:
    uVar11 = *(uint *)(local_10 + 0x1c) & 0xff000000 | param_1[5];
    if (*(uint *)(local_10 + 0x1c) != uVar11) {
      *(uint *)(local_10 + 0x1c) = uVar11;
      *(uint *)(local_10 + 0x180) = uVar11;
      if ((*(int *)(local_10 + 0x17c) != 0) &&
         (iVar7 = FUN_006e6020(local_10,(undefined4 *)(local_10 + 0x16c)), iVar7 != 0))
      goto LAB_00722da6;
      if ((*(uint *)(this_00 + 0x1c) & 0xff000000) == 0) {
        uVar11 = *(uint *)(this_00 + 0x1c) & 0xffffff;
        if (uVar11 == 1) {
          FUN_00722070(this_00,0);
          iVar7 = (**(code **)(*(int *)this_00 + 4))();
        }
        else {
          if (uVar11 == 0) {
            FUN_00721cd0(this_00,0);
          }
          iVar7 = (**(code **)(*(int *)this_00 + 4))();
        }
        goto LAB_00722d9e;
      }
    }
    break;
  case 0x22:
    if ((*(int *)(local_10 + 0x138) != 0) && (*(int *)(*(int *)(local_10 + 0x138) + 8) != 0)) {
      if (((byte)local_10[0x20] & 4) == 0) {
        uVar11 = (uint)*(ushort *)((int)param_1 + 0x16);
        uVar12 = (uint)*(ushort *)(param_1 + 5);
        goto LAB_00722e29;
      }
      uVar3 = *(ushort *)((int)param_1 + 0x16);
      *(uint *)(local_10 + 0x144) = (uint)uVar3;
      *(uint *)(local_10 + 0x20c) = (uint)uVar3;
      uVar3 = *(ushort *)(param_1 + 5);
      *(uint *)(local_10 + 0x148) = (uint)uVar3;
      *(uint *)(local_10 + 0x210) = (uint)uVar3;
      goto LAB_00722e31;
    }
    break;
  case 0x26:
    *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)(local_10 + 0x20c);
    *(undefined2 *)(param_1 + 5) = *(undefined2 *)(local_10 + 0x210);
    break;
  case 0x29:
    uVar11 = *(uint *)(local_10 + 0x20);
    uVar12 = param_1[5];
    *(uint *)(local_10 + 0x20) = uVar12;
    if (((uVar12 ^ uVar11) & 1) != 0) {
      *(undefined4 *)(local_10 + 0x210) = 0;
      *(undefined4 *)(local_10 + 0x20c) = 0;
      *(undefined4 *)(local_10 + 0x208) = 0;
      *(undefined4 *)(local_10 + 0x204) = 0;
      *(undefined4 *)(local_10 + 0x148) = 0;
      *(undefined4 *)(local_10 + 0x144) = 0;
      *(undefined4 *)(local_10 + 0x140) = 0;
      *(undefined4 *)(local_10 + 0x13c) = 0;
      FUN_00721a20(local_10,0);
    }
    this_00[0x1d7] = (ControlClassTy)0x0;
    *(undefined4 *)(this_00 + 0x1d8) = 0;
    if (((byte)this_00[0x20] & 1) != 0) {
      FUN_00721080(this_00,0xfff,*(uint *)(this_00 + 0x20c));
    }
    iVar7 = (**(code **)(*(int *)this_00 + 4))();
LAB_00722d9e:
    if (iVar7 != 0) goto LAB_00722da6;
    break;
  case 0x2c:
    if ((*(int *)(local_10 + 0x138) != 0) && (*(int *)(*(int *)(local_10 + 0x138) + 8) != 0)) {
      if (*(int *)(local_10 + 0x1c) == 0) {
        if (((byte)local_10[0x20] & 0x10) != 0) break;
        local_20 = 0x20;
        local_1c = 1;
        (*(code *)**(undefined4 **)local_10)(local_30);
      }
      if (((byte)this_00[0x20] & 4) == 0) {
        uVar11 = param_1[5] - *(int *)(this_00 + 0x144);
      }
      else {
        *(int *)(this_00 + 0x144) = param_1[5];
        uVar11 = 0;
      }
      FUN_00721080(this_00,*(int *)(this_00 + 0x210),uVar11);
      iVar7 = (**(code **)(*(int *)this_00 + 4))();
      goto LAB_00722e38;
    }
    break;
  case 0x2d:
    if ((*(int *)(local_10 + 0x138) != 0) && (*(int *)(*(int *)(local_10 + 0x138) + 8) != 0)) {
      if (*(int *)(local_10 + 0x1c) == 0) {
        if (((byte)local_10[0x20] & 0x10) != 0) break;
        local_20 = 0x20;
        local_1c = 1;
        (*(code *)**(undefined4 **)local_10)(local_30);
      }
      if (((byte)this_00[0x20] & 4) == 0) {
        uVar11 = *(uint *)(this_00 + 0x20c);
        uVar12 = param_1[5] - *(int *)(this_00 + 0x148);
        goto LAB_00722e29;
      }
      *(int *)(this_00 + 0x148) = param_1[5];
      iVar7 = (**(code **)(*(int *)this_00 + 4))();
      if (iVar7 == 0) goto LAB_00722e7f;
      local_8 = 0xffff;
    }
    break;
  case 0x32:
    param_1[5] = *(int *)(local_10 + 0x138);
    break;
  case 0x33:
    *(int *)(local_10 + 0x138) = param_1[5];
    *(undefined4 *)(local_10 + 0x210) = 0;
    *(undefined4 *)(local_10 + 0x20c) = 0;
    *(undefined4 *)(local_10 + 0x208) = 0;
    *(undefined4 *)(local_10 + 0x204) = 0;
    *(undefined4 *)(local_10 + 0x148) = 0;
    *(undefined4 *)(local_10 + 0x144) = 0;
    *(undefined4 *)(local_10 + 0x140) = 0;
    *(undefined4 *)(local_10 + 0x13c) = 0;
    local_10[0x1d7] = (ControlClassTy)0x0;
    *(undefined4 *)(local_10 + 0x1d8) = 0;
    if (((byte)local_10[0x20] & 1) != 0) {
      FUN_00721080(local_10,0xfff,0);
    }
    iVar7 = (**(code **)(*(int *)this_00 + 4))();
    if (iVar7 == 0) goto LAB_00722674;
    local_8 = 0xffff;
    break;
  case 0x38:
    uVar11 = *(uint *)(local_10 + 0x20);
    if ((uVar11 & 2) == 0) {
      *(uint *)(local_10 + 0x20) = uVar11 | 2;
    }
    else {
      *(uint *)(local_10 + 0x20) = uVar11 & 0xfffffffd;
    }
    break;
  case 0x42:
    *(undefined4 *)(local_10 + 0x1e0) = *(undefined4 *)(local_10 + 0x210);
    *(undefined4 *)(local_10 + 0x1dc) = *(undefined4 *)(local_10 + 0x20c);
    *(undefined4 *)(local_10 + 0x1e4) = *(undefined4 *)(local_10 + 0x144);
    *(undefined4 *)(local_10 + 0x1e8) = *(undefined4 *)(local_10 + 0x148);
    *(undefined4 *)(local_10 + 0x1ec) = *(undefined4 *)(*(int *)(local_10 + 0x138) + 8);
    iVar7 = FUN_00720d30((int)local_10);
    *(int *)(this_00 + 0x1f8) = iVar7;
    if (((byte)this_00[0x20] & 4) == 0) {
      *(uint *)(this_00 + 0x1f0) =
           (uint)(*(int *)(this_00 + 0x1ec) + -1 <= *(int *)(this_00 + 0x1dc));
    }
    else {
      *(uint *)(this_00 + 0x1f0) =
           (uint)(*(int *)(this_00 + 0x1ec) - 1U <= (uint)(*(int *)(this_00 + 0x1e4) + iVar7));
    }
    if (*(int *)(this_00 + 0x1e4) + *(int *)(this_00 + 0x1dc) <
        *(int *)(*(int *)(this_00 + 0x138) + 8)) {
      pcVar15 = *(char **)(*(int *)(*(int *)(this_00 + 0x138) + 0x14) +
                          (*(int *)(this_00 + 0x1e4) + *(int *)(this_00 + 0x1dc)) * 4);
    }
    else {
      pcVar15 = (char *)0x0;
    }
    if (pcVar15 == (char *)0x0) {
      *(undefined4 *)(this_00 + 500) = 0;
    }
    else {
      uVar11 = 0xffffffff;
      do {
        if (uVar11 == 0) break;
        uVar11 = uVar11 - 1;
        cVar1 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar1 != '\0');
      *(uint *)(this_00 + 500) =
           (uint)(~uVar11 - 1 <= (uint)(*(int *)(this_00 + 0x1e0) + *(int *)(this_00 + 0x1e8)));
    }
    break;
  case 0x43:
    iVar7 = param_1[5];
    *(int *)(local_10 + 0x138) = iVar7;
    if ((*(uint *)(local_10 + 0x20) & 1) == 0) {
      if ((*(uint *)(local_10 + 0x20) & 4) == 0) {
        if (*(int *)(local_10 + 0x1f0) == 0) {
          uVar11 = *(uint *)(local_10 + 0x20c);
        }
        else {
          uVar11 = *(int *)(iVar7 + 8) - 1;
        }
        iVar7 = 0xfff;
        if (*(int *)(local_10 + 500) == 0) {
          iVar7 = *(int *)(local_10 + 0x210);
        }
      }
      else {
        if (*(int *)(local_10 + 0x1f0) != 0) {
          *(int *)(local_10 + 0x144) = *(int *)(iVar7 + 8) - *(int *)(local_10 + 0x1f8);
        }
        iVar7 = 0xfff;
        if (*(int *)(local_10 + 500) == 0) {
          iVar7 = *(int *)(local_10 + 0x210);
        }
        uVar11 = 0;
      }
    }
    else {
      iVar7 = 0xfff;
      if (*(int *)(local_10 + 500) == 0) {
        iVar7 = *(int *)(local_10 + 0x210);
      }
      uVar11 = *(uint *)(local_10 + 0x20c);
    }
    FUN_00721080(local_10,iVar7,uVar11);
    this_00[0x1d7] = (ControlClassTy)0x0;
    *(undefined4 *)(this_00 + 0x1d8) = 0;
    iVar7 = (**(code **)(*(int *)this_00 + 4))();
    if (iVar7 == 0) goto LAB_00722674;
    local_8 = 0xffff;
    break;
  case 0x52:
    *(uint *)(local_10 + 0x2c) = (uint)*(ushort *)(param_1 + 5);
    *(uint *)(local_10 + 0x30) = (uint)*(ushort *)((int)param_1 + 0x16);
    *(undefined4 *)(local_10 + 0x210) = 0;
    *(undefined4 *)(local_10 + 0x20c) = 0;
    *(undefined4 *)(local_10 + 0x208) = 0;
    *(undefined4 *)(local_10 + 0x204) = 0;
    *(undefined4 *)(local_10 + 0x148) = 0;
    *(undefined4 *)(local_10 + 0x144) = 0;
    *(undefined4 *)(local_10 + 0x140) = 0;
    *(undefined4 *)(local_10 + 0x13c) = 0;
    local_10[0x1d7] = (ControlClassTy)0x0;
    *(undefined4 *)(local_10 + 0x1d8) = 0;
    if (((byte)local_10[0x20] & 1) != 0) {
      FUN_00721080(local_10,0xfff,0);
    }
    break;
  case 0x57:
    iVar7 = param_1[5];
    if (iVar7 < 0) {
      iVar7 = FUN_00720d30((int)local_10);
    }
    FUN_00721080(this_00,*(int *)(this_00 + 0x210),*(int *)(this_00 + 0x20c) + iVar7);
    iVar7 = (**(code **)(*(int *)this_00 + 4))();
    if (iVar7 == 0) goto LAB_00722e7f;
    local_8 = 0xffff;
    break;
  case 0x58:
    iVar7 = param_1[5];
    if (iVar7 < 0) {
      iVar7 = FUN_00720d30((int)local_10);
    }
    uVar12 = *(uint *)(this_00 + 0x210);
    uVar11 = *(int *)(this_00 + 0x20c) - iVar7;
LAB_00722e29:
    FUN_00721080(this_00,uVar12,uVar11);
LAB_00722e31:
    iVar7 = (**(code **)(*(int *)this_00 + 4))();
LAB_00722e38:
    if (iVar7 == 0) {
LAB_00722e7f:
      iVar7 = 0;
      goto LAB_00722e81;
    }
    local_8 = 0xffff;
    break;
  case 0x59:
    iVar7 = FUN_00720d30((int)local_10);
    if ((uint)(iVar7 + *(int *)(this_00 + 0x144)) < *(uint *)(*(int *)(this_00 + 0x138) + 8)) {
      *(uint *)(this_00 + 0x144) = *(uint *)(*(int *)(this_00 + 0x138) + 8) - iVar7;
      iVar7 = (**(code **)(*(int *)this_00 + 4))();
      if (iVar7 == 0) goto LAB_00722e7f;
      local_8 = 0xffff;
    }
    break;
  case 0x61:
    uVar12 = (uint)*(ushort *)(param_1 + 6);
    uVar11 = (uint)*(ushort *)((int)param_1 + 0x1a);
    if ((*(int *)(local_10 + 0x1c) != 0) || (((byte)local_10[0x20] & 0x10) == 0)) {
      if ((*(int *)(local_10 + 0x24) < (int)uVar12) &&
         (((((int)uVar12 < *(int *)(local_10 + 0x2c) + *(int *)(local_10 + 0x24) &&
            (*(int *)(local_10 + 0x28) < (int)uVar11)) &&
           ((int)uVar11 < *(int *)(local_10 + 0x30) + *(int *)(local_10 + 0x28))) &&
          (*(int *)(local_10 + 0x138) != 0)))) {
        if (*(int *)(local_10 + 0x1c) == 0) {
          FUN_00722070(local_10,1);
        }
        FUN_00720e70(this_00,uVar12 - *(int *)(this_00 + 0x24),uVar11 - *(int *)(this_00 + 0x28));
      }
      else {
        bVar6 = false;
        local_24 = 2;
        local_20 = 0x2b;
        if (*(int *)(local_10 + 0x1fc) != 0) {
          local_28 = *(int *)(local_10 + 0x1fc);
          FUN_006e6060(local_10,local_30);
          if ((short)local_1c != 0) {
            bVar6 = true;
          }
        }
        if (*(int *)(this_00 + 0x200) != 0) {
          local_28 = *(int *)(this_00 + 0x200);
          FUN_006e6060(this_00,local_30);
          if ((short)local_1c != 0) {
            bVar6 = true;
          }
        }
        if (*(int *)(this_00 + 0x1c) != 1) goto cf_switch_join_007231FD;
        if (bVar6) break;
        FUN_00721cd0(this_00,1);
      }
      iVar7 = (**(code **)(*(int *)this_00 + 4))();
      goto LAB_00722d9e;
    }
  }
  if ((*(int *)(this_00 + 0x1c) != 1) || (*(int *)(this_00 + 0x138) == 0))
  goto cf_switch_join_007231FD;
  switch(param_1[4]) {
  case 0x34:
    if ((((byte)this_00[0x20] & 4) != 0) ||
       (uVar11 = Library::MSVCRT::FUN_007348d0(param_1[5]), uVar11 != 0))
    goto cf_switch_join_007231FD;
    this_00[(char)this_00[0x1d7] + 0x1d4] = *(ControlClassTy *)(param_1 + 5);
    CVar2 = this_00[0x1d7];
    this_00[0x1d7] = (ControlClassTy)((char)CVar2 + '\x01');
    this_00[(char)((char)CVar2 + '\x01') + 0x1d4] = (ControlClassTy)0x0;
    if (*(int *)(this_00 + 0x1d8) == 0) {
      BVar8 = IsDBCSLeadByte((BYTE)param_1[5]);
      if (BVar8 != 0) {
        *(undefined4 *)(this_00 + 0x1d8) = 1;
        goto cf_switch_join_007231FD;
      }
    }
    else {
      *(undefined4 *)(this_00 + 0x1d8) = 0;
    }
    iVar7 = FUN_00721830(this_00,(char *)(this_00 + 0x1d4));
    if (iVar7 == 0) {
      this_00[0x1d7] = (ControlClassTy)0x0;
      this_00[0x1d4] = (ControlClassTy)0x0;
      iVar7 = (**(code **)(*(int *)this_00 + 4))();
      goto LAB_0072301d;
    }
    goto LAB_007231f1;
  case 0x35:
    FUN_00721cd0(this_00,1);
    iVar7 = (**(code **)(*(int *)this_00 + 4))();
    goto LAB_007231ed;
  case 0x36:
    if (((byte)this_00[0x20] & 4) == 0) {
      uVar11 = *(uint *)(this_00 + 0x20c);
      iVar7 = *(int *)(this_00 + 0x210) + -1;
LAB_0072300e:
      FUN_00721520(this_00,iVar7,uVar11);
      iVar7 = (**(code **)(*(int *)this_00 + 4))();
LAB_0072301d:
      if (iVar7 != 0) {
        local_8 = 0xffff;
        goto cf_switch_join_007231FD;
      }
    }
    goto LAB_00722fb6;
  case 0x37:
    if (((byte)this_00[0x20] & 4) == 0) {
      uVar11 = *(uint *)(this_00 + 0x20c);
      iVar7 = *(int *)(this_00 + 0x210);
      goto LAB_0072300e;
    }
LAB_00722fb6:
    FUN_00721a20(this_00,1);
  default:
    goto cf_switch_join_007231FD;
  case 0x39:
    uVar11 = *(uint *)(this_00 + 0x20);
    if ((uVar11 & 4) != 0) goto cf_switch_join_007231FD;
    if ((uVar11 & 1) == 0) {
      if (((uVar11 & 2) != 0) || (uVar11 = FUN_00721340((int)this_00), uVar11 == 0)) {
        FUN_00721080(this_00,0xffe,*(int *)(this_00 + 0x20c) + 1);
        iVar7 = (**(code **)(*(int *)this_00 + 4))();
        if (iVar7 == 0) goto LAB_00722fb6;
      }
      goto LAB_007231f1;
    }
    if (*(int *)(this_00 + 0x19c) == 0) goto cf_switch_join_007231FD;
    iVar7 = FUN_006e5fe0(this_00,(undefined4 *)(this_00 + 0x18c));
    goto LAB_007231ed;
  case 0x3a:
    if (((byte)this_00[0x20] & 4) == 0) {
      FUN_00721080(this_00,*(int *)(this_00 + 0x210),*(int *)(this_00 + 0x20c) - 1);
    }
    else if (*(int *)(this_00 + 0x144) != 0) {
      *(int *)(this_00 + 0x144) = *(int *)(this_00 + 0x144) + -1;
    }
    iVar7 = (**(code **)(*(int *)this_00 + 4))();
    break;
  case 0x3b:
    if (((byte)this_00[0x20] & 4) == 0) {
      FUN_00721080(this_00,*(int *)(this_00 + 0x210),*(int *)(this_00 + 0x20c) + 1);
    }
    else {
      iVar7 = *(int *)(this_00 + 0x144);
      iVar9 = FUN_00720d30((int)this_00);
      if (iVar7 < *(int *)(*(int *)(this_00 + 0x138) + 8) - iVar9) {
        *(int *)(this_00 + 0x144) = iVar7 + 1;
      }
    }
    iVar7 = (**(code **)(*(int *)this_00 + 4))();
    if (iVar7 != 0) {
      local_8 = 0xffff;
      goto cf_switch_join_007231FD;
    }
    goto LAB_0072306b;
  case 0x3c:
    if (((byte)this_00[0x20] & 4) == 0) {
      FUN_00721080(this_00,*(int *)(this_00 + 0x210) + 1,*(uint *)(this_00 + 0x20c));
      iVar7 = (**(code **)(*(int *)this_00 + 4))();
    }
    else {
      iVar7 = *(int *)(this_00 + 0x148);
      iVar9 = FUN_00720de0((int)this_00);
      iVar10 = FUN_007219a0((int)this_00);
      if (iVar7 < iVar10 - iVar9) {
        *(int *)(this_00 + 0x148) = iVar7 + 1;
      }
      iVar7 = (**(code **)(*(int *)this_00 + 4))();
    }
    break;
  case 0x3d:
    if (((byte)this_00[0x20] & 4) == 0) {
      FUN_00721080(this_00,*(int *)(this_00 + 0x210) + -1,*(uint *)(this_00 + 0x20c));
    }
    else if (*(int *)(this_00 + 0x148) != 0) {
      *(int *)(this_00 + 0x148) = *(int *)(this_00 + 0x148) + -1;
      iVar7 = (**(code **)(*(int *)this_00 + 4))();
      break;
    }
    iVar7 = (**(code **)(*(int *)this_00 + 4))();
    break;
  case 0x3e:
    FUN_00721080(this_00,0xffe,*(uint *)(this_00 + 0x20c));
    iVar7 = (**(code **)(*(int *)this_00 + 4))();
    break;
  case 0x3f:
    FUN_00721080(this_00,0xfff,*(uint *)(this_00 + 0x20c));
    iVar7 = (**(code **)(*(int *)this_00 + 4))();
    break;
  case 0x40:
    iVar7 = *(int *)(this_00 + 0x1bc);
    *(undefined4 *)(this_00 + 0x1c0) = 0;
    goto joined_r0x007231dd;
  case 0x41:
    iVar7 = *(int *)(this_00 + 0x1bc);
    *(undefined4 *)(this_00 + 0x1c0) = 1;
joined_r0x007231dd:
    if (iVar7 == 0) goto cf_switch_join_007231FD;
    iVar7 = FUN_006e6020(this_00,(undefined4 *)(this_00 + 0x1ac));
LAB_007231ed:
    if (iVar7 == 0) goto cf_switch_join_007231FD;
    goto LAB_007231f1;
  }
  if (iVar7 == 0) {
LAB_0072306b:
    FUN_00721a20(this_00,0);
  }
  else {
LAB_007231f1:
    local_8 = 0xffff;
  }
cf_switch_join_007231FD:
  if (local_8 != 0) {
    RaiseInternalException(local_8,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x34e);
  }
  iVar7 = ControlClassTy::GetMessage(this_00,param_1);
  local_8 = iVar7;
  if (iVar7 != 0) {
    RaiseInternalException(iVar7,DAT_007ed77c,s_E__Ourlib__sedit_cpp_007f0b08,0x350);
  }
  if (param_1[4] == 0x24) {
    SendToSliders((EditorClassTy *)this_00,param_1);
  }
  g_currentExceptionFrame = local_74.previous;
  return iVar7;
}

