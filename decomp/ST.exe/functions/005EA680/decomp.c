
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::GetMessage */

undefined4 __thiscall WaitTy::GetMessage(WaitTy *this,int param_1)

{
  char cVar1;
  StartSystemTy *this_00;
  code *pcVar2;
  WaitTy *this_01;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  char *pcVar9;
  char *pcVar10;
  char local_4a4 [64];
  char local_464 [1044];
  undefined4 *local_50;
  undefined4 local_4c [16];
  WaitTy *local_c;
  char *local_8;
  
  local_c = this;
  uVar4 = FUN_006e51b0(*(int *)(this + 0x10));
  *(undefined4 *)(this + 0x61) = uVar4;
  local_50 = DAT_00858df8;
  DAT_00858df8 = &local_50;
  iVar5 = __setjmp3(local_4c,0,unaff_EDI,unaff_ESI);
  this_01 = local_c;
  if (iVar5 != 0) {
    DAT_00858df8 = local_50;
    iVar6 = FUN_006ad4d0(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x3bb,0,iVar5,&DAT_007a4ccc);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    FUN_006a5e40(iVar5,0,0x7cdd5c,0x3bb);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_c,param_1);
  StartSystemTy::ChatMessage(DAT_0081176c,param_1);
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 < 0x6336) {
    if (uVar7 == 0x6335) {
      *(uint *)(DAT_0081176c + 0x4cf) =
           *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
      if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
        FUN_006b3730(*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),
                     *(uint *)(DAT_0081176c + 0x4b7),*(uint *)(DAT_0081176c + 0x4cb),
                     *(uint *)(DAT_0081176c + 0x4cf));
      }
    }
    else if (uVar7 < 0x610b) {
      if (uVar7 == 0x610a) {
        *(undefined4 *)(this_01 + 0x45) = 0x200;
        *(undefined4 *)(this_01 + 0x49) = 0;
        *(undefined4 *)(this_01 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(this_01 + 0x51) = 8;
        thunk_FUN_005b66e0(this_01);
      }
      else if (uVar7 < 4) {
        if (uVar7 == 3) {
          DoneWait(this_01);
        }
        else if (uVar7 == 0) {
          NoneWait(this_01,unaff_EDI);
        }
        else if (uVar7 == 2) {
          InitWait(this_01,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),
                   *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18));
        }
      }
      else if (uVar7 == 5) {
        PaintWait(this_01,'\0');
      }
      else if (uVar7 == 0x6105) {
        *(undefined4 *)(this_01 + 0x45) = 0x200;
        *(undefined4 *)(this_01 + 0x49) = 0;
        *(undefined4 *)(this_01 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(this_01 + 0x51) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(this_01 + 0x55) = 0;
        thunk_FUN_005b66e0(this_01);
      }
    }
    else if (uVar7 < 0x6334) {
      if (uVar7 == 0x6333) {
        MMMObjTy::PaintSlBut((MMMObjTy *)this_01,(int)(DAT_0081176c + 0x38d),param_1,0);
      }
      else if (uVar7 == 0x6121) {
        *(undefined4 *)(this_01 + 0x45) = 0x200;
        *(undefined4 *)(this_01 + 0x49) = 0;
        *(undefined4 *)(this_01 + 0x4d) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(this_01 + 0x51) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(this_01 + 0x55) = *(undefined4 *)(param_1 + 0x18);
        thunk_FUN_005b66e0(this_01);
      }
      else if (uVar7 == 0x6332) {
        StartSystemTy::PaintBinDesc(DAT_0081176c,param_1);
      }
    }
    else if (uVar7 == 0x6334) {
      MMMObjTy::PaintSlBut((MMMObjTy *)this_01,(int)(DAT_0081176c + 0x41e),param_1,0);
    }
    goto LAB_005eab6a;
  }
  if (uVar7 < 0x6943) {
    if (uVar7 == 0x6942) {
      *(undefined4 *)(this_01 + 0x45) = 0x200;
      *(undefined4 *)(this_01 + 0x49) = 0;
      *(undefined4 *)(this_01 + 0x4d) = 0x6102;
      *(undefined4 *)(this_01 + 0x51) = *(undefined4 *)(param_1 + 0x14);
      thunk_FUN_005b66e0(this_01);
    }
    else if (uVar7 < 0x6940) {
      if (uVar7 == 0x693f) {
        thunk_FUN_005e9970((int)this_01);
      }
      else if (uVar7 == 0x6340) {
        MMMObjTy::PaintSlBut((MMMObjTy *)this_01,*(int *)(this_01 + 0x1a5b) + 0x55c,param_1,0);
      }
      else if (uVar7 == 0x6341) {
        MMMObjTy::PaintSlBut((MMMObjTy *)this_01,*(int *)(this_01 + 0x1a5b) + 0x5ed,param_1,0);
      }
    }
    else if (uVar7 == 0x6940) {
      thunk_FUN_005e9a40(this_01);
    }
    goto LAB_005eab6a;
  }
  if (uVar7 < 0x6952) {
    if (uVar7 == 0x6951) {
      thunk_FUN_005b6350(this_01,0x610a,0,0);
      *(undefined4 *)(this_01 + 0x1a64) = 0;
    }
    else if (uVar7 == 0x6943) {
      thunk_FUN_005b6350(this_01,0x6942,*(undefined4 *)(param_1 + 0x14),0);
      *(undefined4 *)(this_01 + 0x1a64) = 0;
      if (DAT_00811768 == '\x01') {
        DAT_00811768 = '\x02';
      }
    }
    else {
      if (uVar7 != 0x694d) goto LAB_005eab6a;
      thunk_FUN_005b6350(this_01,0x6105,1,0);
      *(undefined4 *)(this_01 + 0x1a64) = 0;
      if (DAT_00811768 == '\x01') {
        DAT_00811768 = '\x02';
      }
    }
    (**(code **)(*(int *)this_01 + 8))();
    if (*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(*(MMsgTy **)(*(int *)(this_01 + 0x1a5b) + 0x2e6),1,0,1);
    }
    goto LAB_005eab6a;
  }
  if (uVar7 != 0xc0a2) goto LAB_005eab6a;
  iVar5 = thunk_FUN_005ddb40(*(int *)(this_01 + 0x1a5b));
  if (iVar5 == 0) {
    if (DAT_008067a0 != '\0') {
      if (*(int *)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x686) + 8) < 1) {
        pcVar9 = (char *)0x0;
      }
      else {
        pcVar9 = (char *)**(undefined4 **)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x686) + 0x14);
      }
      bVar3 = thunk_FUN_005717e0(pcVar9);
      if (CONCAT31(extraout_var,bVar3) != 0) {
        if (*(int *)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x686) + 8) < 1) {
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
        }
        else {
          CFsgsConnection::SendChatMessage
                    ((CFsgsConnection *)&DAT_00802a90,
                     (char *)**(undefined4 **)(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x686) + 0x14))
          ;
        }
        goto LAB_005eab28;
      }
    }
    pcVar9 = local_4a4;
    for (iVar5 = 0x114; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    *pcVar9 = '\0';
    pcVar9 = &DAT_00807e1d;
    if (DAT_008067a0 == '\0') {
      pcVar9 = (char *)&DAT_00807ddd;
    }
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    this_00 = *(StartSystemTy **)(this_01 + 0x1a5b);
    pcVar9 = pcVar10 + -uVar7;
    pcVar10 = local_4a4;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar5 = *(int *)(this_00 + 0x686);
    if (*(int *)(iVar5 + 8) < 1) {
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar9 = (char *)**(undefined4 **)(iVar5 + 0x14);
    }
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar10 + -uVar7;
    pcVar10 = local_464;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    local_8 = local_464;
    StartSystemTy::AddToChat(this_00,(int)local_4a4);
    FUN_00715360(DAT_00811764,0,'\x1b',local_4a4,0x451,1,0xffffffff);
  }
LAB_005eab28:
  FUN_006b6020(*(int *)(*(int *)(this_01 + 0x1a5b) + 0x686),0,&DAT_008016a0);
  *(undefined4 *)(this_01 + 0x2d) = 0x33;
  *(undefined4 *)(this_01 + 0x31) = *(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x686);
  FUN_006e6080(this_01,2,*(undefined4 *)(*(int *)(this_01 + 0x1a5b) + 0x54c),
               (undefined4 *)(this_01 + 0x1d));
LAB_005eab6a:
  DAT_00858df8 = local_50;
  uVar4 = thunk_FUN_005b6430();
  return uVar4;
}

