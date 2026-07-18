
void FUN_00552bc0(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int *piVar6;
  undefined4 *puVar7;
  void *unaff_EDI;
  int *piVar8;
  int local_298 [144];
  undefined4 local_58;
  undefined4 local_54 [16];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  iVar2 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    piVar6 = (int *)(local_14 + 0x1ab);
    piVar8 = local_298;
    for (iVar2 = 0x90; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    thunk_FUN_0043beb0(DAT_007fa174,0x10,(int *)(local_14 + 0x1ab));
    iVar2 = 0x19;
    puVar7 = (undefined4 *)(local_14 + 0x1ab);
    local_8 = 3;
    do {
      uVar3 = thunk_FUN_005276e0(*(undefined1 *)puVar7,(byte)((uint)*puVar7 >> 0x10));
      if (*(char *)(puVar7 + 2) == '\0') {
        iVar5 = *(int *)(local_14 + 0x3ef);
      }
      else {
        iVar5 = *(int *)(local_14 + 0x3eb);
      }
      pbVar4 = (byte *)FUN_0070b3a0(iVar5,uVar3);
      thunk_FUN_00540760(*(undefined4 **)(local_14 + 0x68),0x24,iVar2,'\x01',pbVar4);
      puVar7 = puVar7 + 0xc;
      iVar2 = iVar2 + 0x1b;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_8 = 0x5e;
    puVar7 = (undefined4 *)(local_14 + 0x23b);
    local_c = 2;
    do {
      iVar2 = 0x19;
      local_10 = 3;
      do {
        uVar3 = thunk_FUN_005276e0(*(undefined1 *)puVar7,(byte)((uint)*puVar7 >> 0x10));
        if (*(char *)(puVar7 + 2) == '\0') {
          iVar5 = *(int *)(local_14 + 0x3ef);
        }
        else {
          iVar5 = *(int *)(local_14 + 0x3eb);
        }
        pbVar4 = (byte *)FUN_0070b3a0(iVar5,uVar3);
        thunk_FUN_00540760(*(undefined4 **)(local_14 + 0x68),local_8,iVar2,'\x01',pbVar4);
        puVar7 = puVar7 + 0xc;
        iVar2 = iVar2 + 0x1b;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_8 = local_8 + 0x33;
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar2 = 0x19;
    puVar7 = (undefined4 *)(local_14 + 0x35b);
    local_c = 3;
    local_10 = 0;
    do {
      uVar3 = thunk_FUN_005276e0(*(undefined1 *)puVar7,(byte)((uint)*puVar7 >> 0x10));
      if (*(char *)(puVar7 + 2) == '\0') {
        iVar5 = *(int *)(local_14 + 0x3ef);
      }
      else {
        iVar5 = *(int *)(local_14 + 0x3eb);
      }
      pbVar4 = (byte *)FUN_0070b3a0(iVar5,uVar3);
      thunk_FUN_00540760(*(undefined4 **)(local_14 + 0x68),0xd3,iVar2,'\x01',pbVar4);
      puVar7 = puVar7 + 0xc;
      iVar2 = iVar2 + 0x1b;
      local_c = local_c + -1;
    } while (local_c != 0);
    DAT_00858df8 = (undefined4 *)local_58;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar5 = FUN_006ad4d0(s_E____titans_Andrey_upginfo_cpp_007c87b8,0x54,0,iVar2,&DAT_007a4ccc);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7c87b8,0x54);
  return;
}

