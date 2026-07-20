
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_ruinm.cpp
   STManRuinC::GetMessage */

undefined4 __thiscall STManRuinC::GetMessage(STManRuinC *this,AnonShape_00630430_1F5C6718 *param_1)

{
  uint uVar1;
  code *pcVar2;
  STJellyGunC *this_00;
  int iVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  AnonNested_00630430_0014_3EDE47A6 *pAVar9;
  int *piVar10;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  byte *local_14;
  uint local_10;
  STJellyGunC *local_c;
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = (STJellyGunC *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar6 = ReportDebugMessage(s_E____titans_nick_to_ruinm_cpp_007d19f8,0x94,0,iVar3,&DAT_007a4ccc,
                               s_STManRuinC__GetMessage_007d1a1c);
    if (iVar6 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_nick_to_ruinm_cpp_007d19f8,0x96);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return uVar7;
  }
  uVar1 = param_1->field_0010;
  if (3 < uVar1) {
    if (uVar1 != 0x10f) {
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    local_14 = (byte *)thunk_FUN_00631220(local_c,(int *)&local_10);
    STPlaySystemC::SaveObjData(PTR_00802a38,PTR_DAT_0079d198,local_14,local_10,0xc);
    FUN_006ab060(&local_14);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar1 == 3) {
    thunk_FUN_00631560((int)local_c);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar1 == 0) {
    if ((*(int *)&local_c->field_003C != 0) &&
       (uVar1 = *(uint *)(*(int *)&local_c->field_003C + 0xc), uVar1 != 0)) {
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        iVar3 = *(int *)&this_00->field_003C;
        if (uVar1 < *(uint *)(iVar3 + 0xc)) {
          piVar10 = (int *)(*(int *)(iVar3 + 8) * uVar1 + *(int *)(iVar3 + 0x1c));
        }
        else {
          piVar10 = (int *)0x0;
        }
        if (piVar10 != (int *)0x0) {
          if ((piVar10[1] == 1) && (piVar10[2] == 0)) {
            iVar3 = thunk_FUN_00630ff0();
            piVar10[2] = iVar3;
            if (iVar3 != 0) {
              puVar5 = thunk_FUN_00630c50(this_00,*piVar10,piVar10[3],1,1);
              if (puVar5 == (ushort *)0x0) {
                piVar10[2] = 0;
              }
              else {
                piVar10[1] = 2;
              }
            }
          }
          iVar3 = piVar10[1];
          if ((iVar3 == 2) || (iVar3 == 1)) {
            if ((piVar10[2] != 0) || (iVar3 == 2)) {
              FUN_006e9350(PTR_00807598,*(uint *)((int)piVar10 + 0x21),
                           *(uint *)(DAT_00806724 + 0x30 + (uint)*(byte *)(piVar10 + 8) * 4),
                           (int)*(short *)(DAT_00806724 + 0x2c));
            }
            if ((uint)PTR_00802a38->field_00E4 % 6 == 0) {
              *(char *)(piVar10 + 8) = (char)piVar10[8] + '\x01';
            }
            if (*(short *)(DAT_00806724 + 0x23) <= (short)(ushort)*(byte *)(piVar10 + 8)) {
              FUN_006e8ba0(PTR_00807598,*(uint *)((int)piVar10 + 0x21));
              FUN_006b0c70(*(AnonShape_006B0C70_7C4FE646 **)&this_00->field_003C,uVar1);
            }
          }
        }
      }
    }
    thunk_FUN_00631010((AnonShape_00631010_DBA5BE90 *)this_00);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  if (uVar1 != 2) {
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  *(int *)&local_c->field_0x71 = local_c->field_0018 * DAT_00808754;
  if (g_cMf32_00806754 != (cMf32 *)0x0) {
    local_8 = Library::Ourlib::MFAOBJ::mfAObjLoad(g_cMf32_00806754,PTR_DAT_0079d198,0,0);
  }
  if (local_8 == (ushort *)0x0) {
LAB_006304e7:
    *(undefined4 *)&this_00->field_0x1c = 0;
    *(undefined4 *)&this_00->field_0x20 = 0xff;
    *(undefined4 *)&this_00->field_0x24 = 1;
    *(undefined4 *)&this_00->field_0x28 = 1;
  }
  else {
    if (*(int *)(local_8 + 6) == 2) {
      thunk_FUN_00631390(this_00,(undefined4 *)local_8);
      *(undefined4 *)&this_00->field_0x71 = *(undefined4 *)((int)&this_00->field_0064 + 1);
      thunk_FUN_00631450((AnonShape_00631450_C4E92303 *)this_00);
      goto LAB_00630558;
    }
    if (local_8 == (ushort *)0x0) goto LAB_006304e7;
    pAVar9 = param_1->field_0014;
    puVar4 = (undefined4 *)&this_00->field_0x1c;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = pAVar9->field_0000;
      pAVar9 = (AnonNested_00630430_0014_3EDE47A6 *)&pAVar9->field_0004;
      puVar4 = puVar4 + 1;
    }
  }
  iVar3._0_2_ = this_00->field_0034;
  iVar3._2_2_ = this_00->field_0036;
  if (iVar3 == 0) {
    uVar1 = (int)SHORT_007fb240 * (int)SHORT_007fb242 * 5;
    puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar1);
    *(undefined4 **)&this_00->field_0034 = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      thunk_FUN_006308b0(this_00);
    }
    else {
      for (uVar8 = uVar1 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (uVar8 = uVar1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      *(uint *)&this_00->field_0x30 = uVar1;
    }
  }
LAB_00630558:
  if ((local_8 != (ushort *)0x0) && (g_cMf32_00806754 != (cMf32 *)0x0)) {
    cMf32::RecMemFree(g_cMf32_00806754,(uint *)&local_8);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

